/*
 * XREFs of sub_180002950 @ 0x180002950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180002950(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 56LL))(*(_QWORD *)(a1 + 16), a2);
  else
    return 2147942414LL;
}
