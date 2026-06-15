/*
 * XREFs of ?ListenTo_Terminate@@YAXXZ @ 0x1800940D8
 * Callers:
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800691B0 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800983D8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
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
