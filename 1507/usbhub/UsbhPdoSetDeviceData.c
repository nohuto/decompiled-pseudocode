/*
 * XREFs of UsbhPdoSetDeviceData @ 0x1C001F290
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoSetDeviceData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rax

  PdoExt(a2, a2, a3, a4);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1148478835LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1936028740, 0LL, result);
    v12 = FdoExt(a1, v9, v10, v11);
    if ( *((_QWORD *)v12 + 547) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v12 + 547))(*((_QWORD *)v12 + 529), v8, a2);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1148478835LL);
  }
  return result;
}
