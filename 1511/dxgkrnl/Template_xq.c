/*
 * XREFs of Template_xq @ 0x1C0027B38
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z @ 0x1C0002C94 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXI@Z.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C000D038 (DpiSetDevicePowerTransitionState.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C00189B8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0019700 (-CompleteFStateTransitionCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001B11C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z @ 0x1C001B724 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIE@Z.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00230B8 (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C0023130 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C0023368 (DpiRequestDevicePowerIrp.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0023EA0 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C0023ECC (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DxgkGetDeviceState @ 0x1C00B1890 (DxgkGetDeviceState.c)
 *     DpiDispatchCleanupAndClose @ 0x1C00BC040 (DpiDispatchCleanupAndClose.c)
 *     DpiDispatchCreate @ 0x1C00BC0F0 (DpiDispatchCreate.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x1C00BE7B0 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 *     DpiDispatchInternalIoctl @ 0x1C00C2280 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C00C2CE0 (DpiDispatchPnp.c)
 *     DpiDispatchIoctl @ 0x1C00C4960 (DpiDispatchIoctl.c)
 *     DpiDispatchPower @ 0x1C00CC7D0 (DpiDispatchPower.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C016FA50 (DpiFdoThermalPassiveCooling.c)
 *     DpiDispatchSystemControl @ 0x1C0171730 (DpiDispatchSystemControl.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C0175068 (DpiDxgkDdiRemoveDevice.c)
 *     DpiDxgkDdiStopDevice @ 0x1C017510C (DpiDxgkDdiStopDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_xq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Reserved = 0;
  v4.Size = 8;
  va_copy(v5, va1);
  v7 = 0;
  v6 = 4;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 2u, &v4);
}
