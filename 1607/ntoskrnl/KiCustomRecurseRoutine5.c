/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x140168DC0
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x140168D00 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x140168DE0 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x140169000 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
