/*
 * XREFs of KiCustomAccessRoutine0 @ 0x140168E70
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140001410 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x14023243C (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x140168E50 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
