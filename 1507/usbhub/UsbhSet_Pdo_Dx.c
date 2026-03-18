/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C00179CC
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C0004C44 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001F100 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSshPropagateResume @ 0x1C0020824 (UsbhSshPropagateResume.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0029084 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463B0 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 */

__int64 __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, __int64 State, __int64 a3, __int64 a4)
{
  POWER_STATE v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v4.SystemState = State;
  PdoExt((__int64)DeviceObject, State, a3, a4)[197] = State;
  PoSetPowerState(DeviceObject, DevicePowerState, v4);
  if ( v4.SystemState == PowerSystemWorking )
  {
    v10 = PdoExt((__int64)DeviceObject, v6, v7, v8);
    v14 = PdoExt((__int64)DeviceObject, v16, v17, v18);
    v15 = 2LL;
  }
  else
  {
    result = (unsigned int)(v4.SystemState - 2);
    if ( (unsigned int)result > 2 )
      return result;
    v10 = PdoExt((__int64)DeviceObject, v6, v7, v8);
    v14 = PdoExt((__int64)DeviceObject, v11, v12, v13);
    v15 = 1LL;
  }
  return UsbhSshSetPortsBusyState(*((_QWORD *)v14 + 147), *((unsigned __int16 *)v10 + 710), v15);
}
