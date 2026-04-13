/*
 * XREFs of sub_180002D10 @ 0x180002D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_BOOL8 __fastcall sub_180002D10(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v6, a2);
  return *(_QWORD *)(v4 + 8) == *(_QWORD *)(a3 + 8) && *(_DWORD *)v4 == *(_DWORD *)a3;
}
