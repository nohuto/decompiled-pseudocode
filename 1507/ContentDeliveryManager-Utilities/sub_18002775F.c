/*
 * XREFs of sub_18002775F @ 0x18002775F
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016F00 @ 0x180016F00 (sub_180016F00.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18002775F(__int64 a1, __int64 a2)
{
  sub_180016F00(*(void ***)(a2 + 64));
  throw;
}
