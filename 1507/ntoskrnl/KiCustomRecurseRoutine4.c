/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x14018CC70
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x14018CC90 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x14018D840 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14018CD30 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
