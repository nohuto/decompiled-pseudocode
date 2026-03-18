/*
 * XREFs of KiCustomAccessRoutine0 @ 0x14015E210
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1400ED4E0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140218260 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x14015E1F0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
