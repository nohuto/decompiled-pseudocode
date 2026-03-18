/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0019FA4
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00010E4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001DEA0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhSshPropagateResume @ 0x1C0022850 (UsbhSshPropagateResume.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028704 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C00197A0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

LONG __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  LONG result; // eax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8

  *(POWER_STATE *)(PdoExt(DeviceObject) + 788) = State;
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  if ( State.SystemState == PowerSystemWorking )
  {
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 2LL;
  }
  else
  {
    result = State.SystemState - 2;
    if ( (unsigned int)(State.SystemState - 2) > 2 )
      return result;
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 1LL;
  }
  return UsbhSshSetPortsBusyState(*(struct _DEVICE_OBJECT **)(v6 + 1176), *(_WORD *)(v5 + 1420), v7, 0LL);
}
