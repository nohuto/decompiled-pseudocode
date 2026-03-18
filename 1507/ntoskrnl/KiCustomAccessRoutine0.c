/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14018DB60
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14012B7B8 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140268988 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14018DB40 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
