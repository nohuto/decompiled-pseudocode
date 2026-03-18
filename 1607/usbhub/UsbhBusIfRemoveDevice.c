/*
 * XREFs of UsbhBusIfRemoveDevice @ 0x1C0050280
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 *     Usbh_UsbdInterfaceDereference @ 0x1C003D394 (Usbh_UsbdInterfaceDereference.c)
 */

__int64 __fastcall UsbhBusIfRemoveDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 result; // rax

  v5 = FdoExt(a1, a2, a3, a4);
  v8 = (unsigned int)v5[640];
  if ( (v8 & 4) != 0 )
  {
    v9 = FdoExt(a1, v8, v6, v7);
    v8 = *((_QWORD *)v9 + 531);
    if ( v8 )
      (*((void (__fastcall **)(_QWORD))v9 + 531))(*((_QWORD *)v9 + 529));
  }
  if ( (v5[640] & 8) != 0 )
    Usbh_UsbdInterfaceDereference(a1, *((_QWORD *)v5 + 570), v6, v7);
  if ( (v5[640] & 0x20000000) != 0 )
  {
    v10 = FdoExt(a1, v8, v6, v7);
    v8 = *((_QWORD *)v10 + 584);
    if ( v8 )
      (*((void (__fastcall **)(_QWORD))v10 + 584))(*((_QWORD *)v10 + 582));
  }
  if ( (v5[640] & 0x800000) != 0 )
  {
    v11 = FdoExt(a1, v8, v6, v7);
    v8 = *((_QWORD *)v11 + 589);
    if ( v8 )
      (*((void (__fastcall **)(_QWORD))v11 + 589))(*((_QWORD *)v11 + 587));
  }
  result = (unsigned int)v5[640];
  if ( (int)result < 0 )
  {
    result = (__int64)FdoExt(a1, v8, v6, v7);
    if ( *(_QWORD *)(result + 4760) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4760))(*(_QWORD *)(result + 4744));
  }
  v5[640] &= 0x5F7FFFF3u;
  return result;
}
