/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x1C00548A8
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054480 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054750 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C001FE08 (UsbhCompletePdoIdleIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x1C0054130 (UsbhPdoDeleteSymbolicLink.c)
 */

int __fastcall UsbhPdoRemoveCleanup(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v9 = PdoExt((__int64)DeviceObject, v6, v7, v8);
  if ( v9[280] != 100 )
  {
    v9 = PdoExt((__int64)DeviceObject, v10, v11, v12);
    if ( v9[280] != 102 )
    {
      UsbhCompletePdoWakeIrp(*((_QWORD *)v5 + 147), (__int64)DeviceObject, -1073741536);
      UsbhCompletePdoIdleIrp(*((_QWORD *)v5 + 147), *((_QWORD *)v5 + 105), 3221225760LL, v13);
      v15 = UsbhRefPdoDeviceHandle(*((_QWORD *)v5 + 147), (__int64)DeviceObject, (__int64)DeviceObject, 1212443750LL);
      if ( v15 )
      {
        v18 = FdoExt(*((_QWORD *)v5 + 147), v14, v16, v17);
        if ( *((_QWORD *)v18 + 546) )
          (*((void (__fastcall **)(_QWORD, __int64))v18 + 546))(*((_QWORD *)v18 + 529), v15);
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v5 + 147), v15, (__int64)DeviceObject, 1212443750LL);
      }
      UsbhPdoDeleteSymbolicLink((__int64)DeviceObject, v14, v16, v17);
      LODWORD(v9) = v5[353];
      if ( (char)v9 < 0 )
      {
        LODWORD(v9) = IoWMIRegistrationControl(DeviceObject, 2u);
        v5[353] &= ~0x80u;
      }
    }
  }
  return (int)v9;
}
