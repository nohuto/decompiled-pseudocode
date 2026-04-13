/*
 * XREFs of sub_1800029A0 @ 0x1800029A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_1800029A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    return 2147942414LL;
}
