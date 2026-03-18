/*
 * XREFs of ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C00147A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z @ 0x1C0023414 (-SetPendingDevicePowerIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgFdo::RaiseDevicePowerCompletion(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgPnp *Context)
{
  FxPkgPnp *v3; // rcx
  FxIrp irp; // [rsp+38h] [rbp+10h] BYREF

  irp.m_Irp = OriginalIrp;
  FxPkgPnp::SetPendingDevicePowerIrp(Context, &irp);
  FxPkgPnp::PowerProcessEvent(v3, PowerD0, 0);
  return 3221225494LL;
}
