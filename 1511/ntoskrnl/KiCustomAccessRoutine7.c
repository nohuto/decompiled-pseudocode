/*
 * XREFs of KiCustomAccessRoutine7 @ 0x14015DFD0
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x14012E69C (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14015DFB0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}
