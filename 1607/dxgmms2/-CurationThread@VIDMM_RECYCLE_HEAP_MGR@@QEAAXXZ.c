/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C005F6D0
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C005D910 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  PRKPROCESS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rax
  char *v11; // [rsp+28h] [rbp-50h] BYREF
  char v12; // [rsp+30h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v12 = 0;
  v11 = (char *)this + 896;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-896LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(-896LL, a2);
    *(_QWORD *)(v10 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11, a2, a3, a4);
  v5 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 142);
  KeStackAttachProcess(*v5, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 140) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1120)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 138) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1104) )
  {
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 286, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 274, 0);
    if ( !v9 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 286, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 936), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 1000));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 274, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 144), 0, 0);
LABEL_6:
  if ( v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v11, v6, v7, v8);
}
