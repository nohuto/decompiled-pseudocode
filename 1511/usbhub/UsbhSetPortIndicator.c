/*
 * XREFs of UsbhSetPortIndicator @ 0x1C00286B0
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C00285AC (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DA9C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DB60 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DC24 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DD04 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommand @ 0x1C001A080 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  unsigned __int16 v5; // si
  _DWORD *v7; // rax
  __int64 v8; // rdi
  int v10; // r10d
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+48h] [rbp-30h]
  __int16 v13; // [rsp+88h] [rbp+10h] BYREF
  int v14; // [rsp+90h] [rbp+18h] BYREF
  int v15; // [rsp+98h] [rbp+20h] BYREF
  __int16 v16; // [rsp+9Ch] [rbp+24h]
  __int16 v17; // [rsp+9Eh] [rbp+26h]

  v4 = a3;
  v14 = 0;
  v5 = a2;
  v13 = 0;
  v7 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      10,
      (__int64)&WPP_2b88037d15597a26bc3d8f7fc80400b3_Traceguids,
      v7[344],
      v5);
  Log(a1, 0x8000, 1885957680, v5, 0LL);
  v15 = 1442595;
  v17 = 0;
  v16 = v4 | v5;
  v8 = (int)UsbhSyncSendCommand(a1, (__int64)&v15, 0LL, &v13, v11, &v14);
  Log(a1, 8, 1937076273, v8, v14);
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
  {
    LOBYTE(v12) = 0;
    UsbhException(a1, v5, 119, 0, 0, v8, v10, usbfile_pind_c, 96, v12);
  }
  Log(a1, 8, 1937077072, v8, v5);
  return (unsigned int)v8;
}
