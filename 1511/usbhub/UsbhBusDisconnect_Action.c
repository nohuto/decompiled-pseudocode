/*
 * XREFs of UsbhBusDisconnect_Action @ 0x1C003F160
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C0003CAC (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusPause @ 0x1C0021994 (Usbh_BS_BusPause.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040C00 (UsbhPCE_BusDisconnect.c)
 */

_DWORD *__fastcall UsbhBusDisconnect_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 v9; // bp
  unsigned __int16 i; // bx
  _DWORD *result; // rax

  FdoExt(a1, a2, a3, a4);
  Log(a1, 2048, 1919251262, 0LL, 0LL);
  v9 = v8 + 1;
  for ( i = v8 + 1; ; i += v9 )
  {
    result = FdoExt(a1, v6, v7, v8);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    UsbhPCE_BusDisconnect(a1, a2, i);
  }
  return result;
}
