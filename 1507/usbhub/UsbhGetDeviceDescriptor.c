/*
 * XREFs of UsbhGetDeviceDescriptor @ 0x1C0053EF0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0043334 (UsbhGetAlternateUsbDescriptors.c)
 * Callees:
 *     UsbhValidateDeviceDescriptor @ 0x1C0006F6C (UsbhValidateDeviceDescriptor.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetDeviceDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rbx
  __int16 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+42h] [rbp-26h]
  __int16 v13; // [rsp+46h] [rbp-22h]
  __int16 v14; // [rsp+80h] [rbp+18h] BYREF

  v11 = 1664;
  v12 = 256;
  v6 = PdoExt(a2, a2, a3, a4) + 348;
  v13 = 18;
  v14 = 18;
  v7 = UsbhSyncSendCommandToDevice(a1, a2, &v11, (__int64)v6, &v14);
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( v14 != 18 || !UsbhValidateDeviceDescriptor(a1, (__int64)v6, v8, 0LL, 0LL) )
      return 3221225628LL;
    Log(a1, 256, 1197818948, v9, 0LL);
  }
  return (unsigned int)v9;
}
