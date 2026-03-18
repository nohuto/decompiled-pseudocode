/*
 * XREFs of KiCustomAccessRoutine2 @ 0x14015D580
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1400E8A9C (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14015D560 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomAccessRoutine2(unsigned int *a1)
{
  return KiCustomRecurseRoutine2(((unsigned __int8)a1 & 3u) + 1, a1);
}
