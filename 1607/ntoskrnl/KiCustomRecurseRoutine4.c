/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x140168D00
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x140168D20 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x1401690C0 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x140168DC0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
