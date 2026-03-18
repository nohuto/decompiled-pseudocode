/*
 * XREFs of Usbh_HubInitialize20Hub @ 0x1C002563C
 * Callers:
 *     UsbhInitializeTtHub @ 0x1C002555C (UsbhInitializeTtHub.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_HubInitialize20Hub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 (__fastcall *v13)(_QWORD, __int64, _QWORD); // rax
  void (__fastcall *v15)(_QWORD, __int64); // rax
  void (__fastcall *v16)(_QWORD, __int64); // rax

  v4 = a3;
  v7 = FdoExt(a1, a2, a3, a4);
  v11 = FdoExt(a1, v8, v9, v10);
  v12 = v11 + 1056;
  if ( (v7[642] & 1) != 0 )
  {
    v15 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v11 + 565);
    if ( v15 )
      v15(v12[1], a2);
  }
  if ( (v7[642] & 2) != 0 )
  {
    v16 = (void (__fastcall *)(_QWORD, __int64))v12[37];
    if ( v16 )
      v16(v12[1], a2);
  }
  v13 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v12[16];
  if ( v13 )
    return v13(v12[1], a2, v4);
  else
    return 3221225474LL;
}
