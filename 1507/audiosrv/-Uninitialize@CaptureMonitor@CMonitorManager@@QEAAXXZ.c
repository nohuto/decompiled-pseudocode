/*
 * XREFs of ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180098614
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094F88 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x180097E2C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::Uninitialize(CMonitorManager::CaptureMonitor *this)
{
  *(_QWORD *)(*((_QWORD *)this + 8) + 264LL) = 0LL;
  CMonitor::Terminate(*((CMonitor **)this + 8), 1, 0LL);
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
