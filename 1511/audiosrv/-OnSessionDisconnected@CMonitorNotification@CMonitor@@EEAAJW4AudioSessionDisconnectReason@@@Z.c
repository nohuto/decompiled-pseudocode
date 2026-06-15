/*
 * XREFs of ?OnSessionDisconnected@CMonitorNotification@CMonitor@@EEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180095080
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::OnSessionDisconnected(
        CMonitor::CMonitorNotification *this,
        unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*((_QWORD *)this + 1), a2);
  return 0LL;
}
