/*
 * XREFs of MiMapNewPfns @ 0x1406A1F4C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, int a3)
{
  MiMakeZeroedPageTables(
    (((48 * a1 - 0x58000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    (((unsigned __int64)(48 * a2 - 0x58000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    41,
    4);
  return MiInitializeDynamicPfns(a1, a2 - a1, a3);
}
