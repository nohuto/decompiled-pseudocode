/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x140168850
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x140168790 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x140168870 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x140168A90 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
