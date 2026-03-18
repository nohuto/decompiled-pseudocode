/*
 * XREFs of KiCustomRecurseRoutine2 @ 0x14018CEB0
 * Callers:
 *     KiCustomRecurseRoutine1 @ 0x14018CDF0 (KiCustomRecurseRoutine1.c)
 *     KiCustomAccessRoutine2 @ 0x14018CED0 (KiCustomAccessRoutine2.c)
 * Callees:
 *     KiCustomRecurseRoutine3 @ 0x14018D840 (KiCustomRecurseRoutine3.c)
 */

__int64 __fastcall KiCustomRecurseRoutine2(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine3();
  return *a2;
}
