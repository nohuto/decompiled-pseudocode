/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x140168A90
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x140168850 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x140168AB0 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140168C10 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
