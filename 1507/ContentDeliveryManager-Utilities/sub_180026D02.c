/*
 * XREFs of sub_180026D02 @ 0x180026D02
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800049AC @ 0x1800049AC (sub_1800049AC.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180026D02(__int64 a1, __int64 a2)
{
  sub_1800049AC(*(void ***)(a2 + 96), 1, 0LL);
  throw;
}
