/*
 * XREFs of KiCustomAccessRoutine8 @ 0x14015E090
 * Callers:
 *     ExpTimeZoneDpcRoutine @ 0x1400F2540 (ExpTimeZoneDpcRoutine.c)
 * Callees:
 *     KiCustomRecurseRoutine8 @ 0x14015E070 (KiCustomRecurseRoutine8.c)
 */

__int64 __fastcall KiCustomAccessRoutine8(unsigned int *a1)
{
  return KiCustomRecurseRoutine8(((unsigned __int8)a1 & 3u) + 1, a1);
}
