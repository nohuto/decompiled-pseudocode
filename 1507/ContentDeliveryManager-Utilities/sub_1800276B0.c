/*
 * XREFs of sub_1800276B0 @ 0x1800276B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800149BC @ 0x1800149BC (sub_1800149BC.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1800276B0(__int64 a1, __int64 a2)
{
  sub_1800149BC(*(void ***)(a2 + 96), 1, 0LL);
  throw;
}
