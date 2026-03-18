/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x14018CDF0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x14018CE10 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x14018DB40 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14018CEB0 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
