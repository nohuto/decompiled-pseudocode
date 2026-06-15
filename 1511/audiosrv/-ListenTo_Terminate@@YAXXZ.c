/*
 * XREFs of ?ListenTo_Terminate@@YAXXZ @ 0x180091908
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x180067B80 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180095E98 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 */

void __fastcall ListenTo_Terminate(CMonitorManager *a1)
{
  if ( _MonitorManager )
  {
    CMonitorManager::Shutdown(a1);
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)_MonitorManager + 16LL))(_MonitorManager);
    _MonitorManager = 0LL;
  }
}
