/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x1C0054ED8
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0054AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0054D80 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C00202C0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0021680 (UsbhCompletePdoWakeIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x1C0023040 (UsbhCompletePdoIdleIrp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x1C0054760 (UsbhPdoDeleteSymbolicLink.c)
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
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax

  v5 = PdoExt((__int64)DeviceObject, a2, a3, a4);
  v9 = PdoExt((__int64)DeviceObject, v6, v7, v8);
  if ( v9[280] != 100 )
  {
    v9 = PdoExt((__int64)DeviceObject, v10, v11, v12);
    if ( v9[280] != 102 )
    {
      UsbhCompletePdoWakeIrp(*((_QWORD *)v5 + 147), (__int64)DeviceObject, 3221225760LL, v13);
      UsbhCompletePdoIdleIrp(*((_QWORD *)v5 + 147), *((_QWORD *)v5 + 105), 3221225760LL, v14);
      v16 = UsbhRefPdoDeviceHandle(*((_QWORD *)v5 + 147), (__int64)DeviceObject, (__int64)DeviceObject, 1212443750LL);
      if ( v16 )
      {
        v19 = FdoExt(*((_QWORD *)v5 + 147), v15, v17, v18);
        if ( *((_QWORD *)v19 + 546) )
          (*((void (__fastcall **)(_QWORD, __int64))v19 + 546))(*((_QWORD *)v19 + 529), v16);
        UsbhDerefPdoDeviceHandle(*((_QWORD *)v5 + 147), v16, (__int64)DeviceObject, 1212443750LL);
      }
      UsbhPdoDeleteSymbolicLink((__int64)DeviceObject, v15, v17, v18);
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
