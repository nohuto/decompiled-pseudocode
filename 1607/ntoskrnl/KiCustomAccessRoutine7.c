/*
 * XREFs of KiCustomAccessRoutine7 @ 0x140168C30
 * Callers:
 *     ExpTimeRefreshDpcRoutine @ 0x1400B3F20 (ExpTimeRefreshDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140168C10 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomAccessRoutine7(unsigned int *a1)
{
  return KiCustomRecurseRoutine7(((unsigned __int8)a1 & 3u) + 1, a1);
}
