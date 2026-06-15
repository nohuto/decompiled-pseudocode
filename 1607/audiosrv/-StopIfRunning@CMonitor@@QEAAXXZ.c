/*
 * XREFs of ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18007ED08
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x18007EB48 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180081F4C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::StopIfRunning(CMonitor *this)
{
  LPCRITICAL_SECTION v2; // [rsp+28h] [rbp-20h] BYREF
  char v3; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v2, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 3 )
    CMonitor::Stop(this);
  if ( v3 )
    ATL::CCritSecLock::Unlock(&v2);
}
