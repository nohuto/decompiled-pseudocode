/*
 * XREFs of ?OnSimpleVolumeChanged@CMonitorNotification@CMonitor@@EEAAJMHPEBU_GUID@@@Z @ 0x1800950D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::OnSimpleVolumeChanged(
        CMonitor::CMonitorNotification *this,
        float a2,
        unsigned int a3,
        const struct _GUID *a4)
{
  __int64 v4; // rdx
  __int64 v5; // rdi

  if ( !*((_DWORD *)this + 4) )
  {
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, const struct _GUID *))(*(_QWORD *)v5 + 72LL))(
        *((_QWORD *)this + 1),
        v4,
        a3,
        a4);
  }
  return 0LL;
}
