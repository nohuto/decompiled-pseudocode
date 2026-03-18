/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1C0020F50
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C00202C0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax

  PdoExt(a2, a2, a3, a4);
  v7 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v8 = v7;
  if ( v7 )
  {
    Log(a1, 32, 1936028740, 0LL, v7);
    v12 = FdoExt(a1, v9, v10, v11);
    if ( *((_QWORD *)v12 + 547) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v12 + 547))(*((_QWORD *)v12 + 529), v8, a2);
    UsbhDerefPdoDeviceHandle(a1, v8, a3, 1148478835LL);
  }
}
