/*
 * XREFs of UsbhRegisterBootDeviceNotification @ 0x1C0057E3C
 * Callers:
 *     UsbhPdoPnp_DeviceUsageNotification @ 0x1C00547F0 (UsbhPdoPnp_DeviceUsageNotification.c)
 * Callees:
 *     memset @ 0x1C0029900 (memset.c)
 */

__int64 __fastcall UsbhRegisterBootDeviceNotification(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, 0x28uLL);
  v7[1] = *(_QWORD *)(a1 + 8);
  LODWORD(v7[0]) = 1;
  v7[3] = ExIsBootDeviceReady;
  v7[4] = UsbhPdoCheckBootDeviceReady;
  v7[2] = a1;
  v5 = ExRegisterBootDevice(v7, a3);
  if ( v5 < 0 && !KdRefreshDebuggerNotPresent() )
  {
    DbgPrint("ExRegisterBootDevice failed with 0x%x\n", v5);
    __debugbreak();
  }
  return (unsigned int)v5;
}
