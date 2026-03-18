/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x1C0045E78
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x1C00182A4 (UsbhSetHubRemoteWake.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0018E40 (UsbhArmHubForWakeDetect.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9

  result = (__int64)FdoExt((__int64)DeviceObject, a2, a3, a4);
  v9 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject, v6, v7, v8);
    result = UsbhSetHubRemoteWake((__int64)DeviceObject, 1, v10, v11);
    if ( (int)result >= 0 )
      *(_DWORD *)(v9 + 2560) |= 0x80000u;
  }
  return result;
}
