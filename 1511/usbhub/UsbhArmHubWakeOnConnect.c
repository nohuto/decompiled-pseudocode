/*
 * XREFs of UsbhArmHubWakeOnConnect @ 0x1C0045BF8
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     UsbhArmHubForWakeDetect @ 0x1C0010858 (UsbhArmHubForWakeDetect.c)
 *     UsbhSetHubRemoteWake @ 0x1C00110D0 (UsbhSetHubRemoteWake.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhArmHubWakeOnConnect(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  result = (__int64)FdoExt((__int64)DeviceObject, a2, a3, a4);
  v6 = result;
  if ( (*(_DWORD *)(result + 2560) & 0x80000) == 0 )
  {
    UsbhArmHubForWakeDetect(DeviceObject);
    result = UsbhSetHubRemoteWake((__int64)DeviceObject, 1, v7, v8);
    if ( (int)result >= 0 )
      *(_DWORD *)(v6 + 2560) |= 0x80000u;
  }
  return result;
}
