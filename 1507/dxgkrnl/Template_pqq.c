/*
 * XREFs of Template_pqq @ 0x1C001B818
 * Callers:
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C00191A0 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0019200 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z @ 0x1C00192F0 (-DxgkPowerRuntimeDevicePowerNotRequiredCallback@@YAXPEAX@Z.c)
 *     ?DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z @ 0x1C0019350 (-DxgkPowerRuntimeDevicePowerRequiredCallback@@YAXPEAX@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0019F64 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x1C001A158 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z @ 0x1C001A838 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z.c)
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C001ABEC (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 *     DpiRequestDevicePowerState @ 0x1C0023518 (DpiRequestDevicePowerState.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0093F2C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF1B0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C00DCB0C (DpiDxgkDdiGetChildContainerId.c)
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01267B0 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DpiDxgkDdiNotifySurpriseRemoval @ 0x1C017069C (DpiDxgkDdiNotifySurpriseRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 */

NTSTATUS Template_pqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  va_list va2; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  v8 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 3u, &UserData);
}
