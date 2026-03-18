/*
 * XREFs of UsbhGetStringFromDevice @ 0x1C0027ED0
 * Callers:
 *     UsbhGetMSOS_Descriptor @ 0x1C00051B4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetSerialNumber @ 0x1C00052B8 (UsbhGetSerialNumber.c)
 *     UsbhGetLanguageIdString @ 0x1C0005910 (UsbhGetLanguageIdString.c)
 *     UsbhGetProductIdString @ 0x1C0027D34 (UsbhGetProductIdString.c)
 *     UsbhGetBillboardInfo @ 0x1C00436C0 (UsbhGetBillboardInfo.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001C5D4 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetStringFromDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 a6,
        unsigned __int8 a7)
{
  unsigned __int16 *v10; // rdi
  char v11; // r11
  __int16 v12; // r10
  int v13; // eax
  unsigned int v14; // r10d

  FdoExt(a1, a2, a3, a4);
  v10 = a5;
  if ( !a5 )
    return 3221225485LL;
  Log(a1, 256, 1733514289, *a5, a7);
  Log(a1, 256, 1733514290, a2, a6);
  HIWORD(a5) = *v10;
  LOWORD(a5) = 1664;
  BYTE3(a5) = 3;
  BYTE2(a5) = v11;
  WORD2(a5) = v12;
  v13 = UsbhSyncSendCommandToDevice(a1, a2, &a5, a4, v10);
  Log(a1, 256, 1733514291, *v10, v13);
  return v14;
}
