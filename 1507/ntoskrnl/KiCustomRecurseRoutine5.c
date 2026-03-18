/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x14018CD30
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x14018CC70 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x14018CD50 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x14018D780 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
