/*
 * XREFs of ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18007EDAC
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18007EB48 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800820F0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitorManager::CaptureMonitor::UninitializeSynchronously(CMonitorManager::CaptureMonitor *this)
{
  __int64 v2; // rbx
  LPCRITICAL_SECTION v3; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(*((_QWORD *)this + 8) + 264LL) = 0LL;
  v2 = *((_QWORD *)this + 8);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v3, (struct _RTL_CRITICAL_SECTION *)(v2 + 16));
  if ( *(_DWORD *)(v2 + 56) != 6 )
  {
    *(_QWORD *)(v2 + 264) = 0LL;
    CMonitor::Terminate((CMonitor *)v2, 0, 0LL);
  }
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
