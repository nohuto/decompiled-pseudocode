/*
 * XREFs of ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0066278
 * Callers:
 *     ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C006AFF0 (-VidMmRangeCurationThread@@YAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::CurationThread(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  PRKPROCESS *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  _BYTE v11[16]; // [rsp+28h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11, v5);
  v6 = (PRKPROCESS *)*((_QWORD *)this + 1);
  ++*((_QWORD *)this + 82);
  KeStackAttachProcess(*v6, &ApcState);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 1, 0);
  KeUnstackDetachProcess(&ApcState);
  if ( *((VIDMM_RECYCLE_HEAP_MGR **)this + 80) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 640)
    && *((VIDMM_RECYCLE_HEAP_MGR **)this + 78) == (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 624) )
  {
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)this + 166, 2, 1) == 1;
    _InterlockedExchange((volatile __int32 *)this + 154, 0);
    if ( !v10 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 166, 2, 1) == 1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 154, 0);
LABEL_7:
    KeSetEvent(*((PRKEVENT *)this + 84), 0, 0);
    goto LABEL_9;
  }
  KeSetTimer((PKTIMER)((char *)this + 456), (LARGE_INTEGER)-2000000LL, (PKDPC)((char *)this + 520));
LABEL_9:
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v7, v8, v9);
}
