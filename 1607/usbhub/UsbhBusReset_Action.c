/*
 * XREFs of UsbhBusReset_Action @ 0x1C0003F64
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C0003EAC (Usbh_BS_BusSuspend.c)
 * Callees:
 *     UsbhPCE_BusReset @ 0x1C0003FE4 (UsbhPCE_BusReset.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhBusReset_Action(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int16 v5; // bp
  unsigned __int16 i; // bx
  __int64 result; // rax

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0, 0LL);
  v5 = v4 + 1;
  for ( i = v4 + 1; ; i += v5 )
  {
    result = FdoExt(a1);
    if ( i > *(unsigned __int8 *)(result + 2938) )
      break;
    UsbhPCE_BusReset(a1, a2, i);
  }
  return result;
}
