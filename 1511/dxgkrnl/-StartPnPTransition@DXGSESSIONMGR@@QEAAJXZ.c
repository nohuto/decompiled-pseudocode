/*
 * XREFs of ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00CE904
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

__int64 __fastcall DXGSESSIONMGR::StartPnPTransition(DXGSESSIONMGR *this)
{
  struct _KEVENT *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rcx
  unsigned int v5; // edi
  bool v6; // zf
  _BYTE v8[16]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 104));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v2 = (struct _KEVENT *)*((_QWORD *)this + 22);
  if ( v2 )
    KeResetEvent(v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    if ( v4 && *(_QWORD *)(v4 + 18528) )
    {
      KeStackAttachProcess(*(PRKPROCESS *)(v4 + 18592), &ApcState);
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * i) + 18528LL));
      KeUnstackDetachProcess(&ApcState);
    }
  }
  v5 = *((_DWORD *)this + 46) + 1;
  v6 = v8[8] == 0;
  *((_DWORD *)this + 46) = v5;
  if ( !v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v5;
}
