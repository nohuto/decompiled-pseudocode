/*
 * XREFs of UsbhBusIf_SetContainerIdForPort @ 0x1C004FC90
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhBusIf_SetContainerIdForPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  void (__fastcall *v10)(_QWORD, _QWORD, __int64); // rax

  v5 = (unsigned __int16)a2;
  v7 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1968390985, (__int64)(v7 + 1056), v5);
  if ( (*(_DWORD *)(v9 + 2560) & 1) != 0 )
  {
    v10 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(v8 + 280);
    if ( v10 )
      v10(*(_QWORD *)(v8 + 8), (unsigned __int16)v5, a3);
  }
}
