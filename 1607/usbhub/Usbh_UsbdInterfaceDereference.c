/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x1C003D394
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x1C003C3B4 (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x1C0050280 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1, a2, a3, a4) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
