/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x140169000
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x140168DC0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x140169020 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x140169180 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
