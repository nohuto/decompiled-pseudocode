/*
 * XREFs of sub_18001F190 @ 0x18001F190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18001F190(__int64 a1, char a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0LL);
  if ( a2 )
    __fastfail(7u);
  return result;
}
