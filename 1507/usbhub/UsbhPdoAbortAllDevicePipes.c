/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x1C0022014
 * Callers:
 *     UsbhPdoSetDx @ 0x1C002208C (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax

  v5 = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  if ( v5 )
  {
    v8 = FdoExt(a1, v4, v6, v7);
    if ( *((_QWORD *)v8 + 564) )
      (*((void (__fastcall **)(_QWORD, __int64))v8 + 564))(*((_QWORD *)v8 + 529), v5);
    UsbhDerefPdoDeviceHandle(a1, v5, a2, 1148346977LL);
  }
}
