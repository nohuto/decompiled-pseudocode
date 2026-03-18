/*
 * XREFs of UsbhGetQualifierDescriptorFromDevice @ 0x1C0053FC8
 * Callers:
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetQualifierDescriptorFromDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int16 *a5)
{
  __int16 v9; // ax
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  FdoExt(a1, a2, a3, a4);
  if ( !a5 )
    return 3221225485LL;
  v9 = *a5;
  LOWORD(v10) = 1664;
  *(_DWORD *)((char *)&v10 + 2) = 1536;
  HIWORD(v10) = v9;
  return UsbhSyncSendCommandToDevice(a1, a2, &v10, a4, a5);
}
