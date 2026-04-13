/*
 * XREFs of sub_180002840 @ 0x180002840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180002840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v7; // rdi

  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64, int))(*(_QWORD *)v7 + 40LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
