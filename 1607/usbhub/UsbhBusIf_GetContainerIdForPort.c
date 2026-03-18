/*
 * XREFs of UsbhBusIf_GetContainerIdForPort @ 0x1C0027A4C
 * Callers:
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhBusIf_GetContainerIdForPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  _DWORD *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 (__fastcall *v10)(_QWORD, _QWORD, __int64); // rax

  v5 = (unsigned __int16)a2;
  v7 = FdoExt(a1, a2, a3, a4);
  Log(a1, 4, 1967604553, (__int64)(v7 + 1056), v5);
  if ( (*(_DWORD *)(v9 + 2560) & 1) == 0 )
    return 3221225485LL;
  v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v8 + 272);
  if ( v10 )
    return v10(*(_QWORD *)(v8 + 8), (unsigned __int16)v5, a3);
  else
    return 3221225474LL;
}
