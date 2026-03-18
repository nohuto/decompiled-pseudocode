/*
 * XREFs of UsbhGetStatus @ 0x1C0020C08
 * Callers:
 *     UsbhGetMaxPowerPerPort @ 0x1C0020744 (UsbhGetMaxPowerPerPort.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0015A50 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-40h]
  int v9; // [rsp+48h] [rbp-18h]
  _DWORD v10[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v11; // [rsp+90h] [rbp+30h] BYREF
  int v12; // [rsp+98h] [rbp+38h] BYREF

  v12 = 0;
  FdoExt(a1, a2, a3, a4);
  v10[0] = 128;
  v11 = 2;
  v10[1] = 0x20000;
  v6 = UsbhSyncSendCommand(a1, (__int64)v10, a2, &v11, v8, &v12);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
  {
    LOBYTE(v9) = 0;
    UsbhException(a1, 0, 17, a2, v11, v6, v12, usbfile_hub_c, 3864, v9);
  }
  return v6;
}
