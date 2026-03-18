/*
 * XREFs of Usbh_HubRemoveUsbDevice @ 0x1C00453FC
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C0009548 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubRemoveUsbDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *result; // rax

  result = FdoExt(a1, a2, a3, a4);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
