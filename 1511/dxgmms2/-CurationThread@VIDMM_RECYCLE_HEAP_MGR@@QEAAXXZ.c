/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0059E7C
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C0059820 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
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
  v11 = (char *)this + 416;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-416LL )
  {
    v10 = WdLogNewEntry5_WdAssertion(-416LL, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v11, a2, a3, a4);
  v5 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 85);
  KeStackAttachProcess(*v5, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 83) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 81) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 648) )
  {
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 172, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 160, 0);
    if ( !v9 )
      goto LABEL_6;
  }
  else
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 172, 2, 1) != 1 )
    {
      KeSetTimer((PKTIMER)((char *)this + 480), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 544));
      goto LABEL_6;
    }
    _InterlockedExchange((volatile __int32 *)this + 160, 0);
  }
  KeSetEvent(*((PRKEVENT *)this + 87), 0, 0);
LABEL_6:
  if ( v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v11, v6, v7, v8);
}
