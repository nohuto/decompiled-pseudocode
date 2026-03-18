/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14018D780
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x14018CD30 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x14018D7A0 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14018D900 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
