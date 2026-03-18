/*
 * XREFs of sub_140170F40 @ 0x140170F40
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExitPreAlderLake @ 0x140170F00 (KiFlushBhbDuringTrapEntryOrExitPreAlderLake.c)
 *     sub_140170F80 @ 0x140170F80 (sub_140170F80.c)
 * Callees:
 *     sub_140170F80 @ 0x140170F80 (sub_140170F80.c)
 */

// attributes: thunk
__int64 __fastcall sub_140170F40(__int64 a1)
{
  return sub_140170F80(a1);
}
