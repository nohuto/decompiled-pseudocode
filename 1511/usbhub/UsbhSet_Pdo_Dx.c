/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C000D644
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C0004BF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C000B930 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhSshPropagateResume @ 0x1C0025CD0 (UsbhSshPropagateResume.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0028044 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046430 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 */

__int64 __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  __int64 result; // rax
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
    result = (unsigned int)(State.SystemState - 2);
    if ( (unsigned int)result > 2 )
      return result;
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 1LL;
  }
  return UsbhSshSetPortsBusyState(*(_QWORD *)(v6 + 1176), *(unsigned __int16 *)(v5 + 1420), v7);
}
