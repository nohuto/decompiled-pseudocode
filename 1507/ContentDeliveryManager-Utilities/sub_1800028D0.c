/*
 * XREFs of sub_1800028D0 @ 0x1800028D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_1800028D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)v4 + 48LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4);
  else
    return 2147942414LL;
}
