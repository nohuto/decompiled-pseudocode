/*
 * XREFs of UsbhSetPortPower @ 0x1C003CA04
 * Callers:
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortPower(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  int v7; // r10d
  int v9; // [rsp+20h] [rbp-60h]
  int v10; // [rsp+48h] [rbp-38h]
  int v11; // [rsp+50h] [rbp-30h] BYREF
  __int16 v12; // [rsp+54h] [rbp-2Ch]
  __int16 v13; // [rsp+56h] [rbp-2Ah]
  int v14; // [rsp+58h] [rbp-28h] BYREF
  _WORD v15[4]; // [rsp+60h] [rbp-20h] BYREF
  char v16; // [rsp+68h] [rbp-18h]

  v4 = (unsigned __int16)a2;
  v14 = 0;
  FdoExt(a1, a2, a3, a4);
  *(_DWORD *)&v15[1] = 0;
  v15[3] = v4;
  v15[0] = 0;
  Log(a1, 8, 1886416944, v4, 0LL);
  v13 = 0;
  v11 = 525091;
  v16 = 3;
  v12 = v4;
  v6 = (int)UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v15[2], v9, &v14);
  Log(a1, 8, 1886416945, v6, v14);
  if ( (v6 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v6) )
  {
    LOBYTE(v10) = 0;
    UsbhException(a1, (unsigned __int16)v4, 12, (int)v15, 10, v6, v7, usbfile_hub_c, 3524, v10);
  }
  Log(a1, 8, 1886549072, v6, v4);
  return (unsigned int)v6;
}
