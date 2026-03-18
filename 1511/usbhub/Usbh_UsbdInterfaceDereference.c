/*
 * XREFs of Usbh_UsbdInterfaceDereference @ 0x1C003CFB4
 * Callers:
 *     UsbhGetDeviceBusInfo @ 0x1C003BF94 (UsbhGetDeviceBusInfo.c)
 *     UsbhBusIfRemoveDevice @ 0x1C004FB10 (UsbhBusIfRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall Usbh_UsbdInterfaceDereference(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1, a2, a3, a4) + 572);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a2);
  return result;
}
