/*
 * XREFs of ?ListenTo_Initialize@@YAJXZ @ 0x18003DDB8
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003BE60 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18003C7FC (--0CMonitorManager@@QEAA@XZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003C9A8 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ListenTo_Initialize(void)
{
  CMonitorManager *v0; // rax
  BOOL v1; // edx
  __int64 v2; // r8
  CMonitorManager::CaptureMonitor *v3; // r9
  CMonitorManager *v4; // rdi
  int v5; // esi

  if ( _MonitorManager )
    return 2147500037LL;
  v0 = (CMonitorManager *)operator new(0x150uLL);
  if ( v0 )
    v4 = CMonitorManager::CMonitorManager(v0);
  else
    v4 = 0LL;
  if ( !v4 )
    return 2147942414LL;
  v5 = CMonitorManager::Initialize(v4, v1, v2, v3);
  if ( v5 < 0 )
  {
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v4 + 16LL))(v4);
    v4 = 0LL;
  }
  _MonitorManager = v4;
  return (unsigned int)v5;
}
