/*
 * XREFs of sub_1800275B0 @ 0x1800275B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800160D4 @ 0x1800160D4 (sub_1800160D4.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800275B0(__int64 a1, __int64 a2)
{
  sub_1800160D4(a1, *(void **)(a2 + 120));
  throw;
}
