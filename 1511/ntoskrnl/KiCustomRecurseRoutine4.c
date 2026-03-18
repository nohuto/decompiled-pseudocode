/*
 * XREFs of KiCustomRecurseRoutine4 @ 0x14015D320
 * Callers:
 *     KiCustomAccessRoutine4 @ 0x14015D340 (KiCustomAccessRoutine4.c)
 *     KiCustomRecurseRoutine3 @ 0x14015DEF0 (KiCustomRecurseRoutine3.c)
 * Callees:
 *     KiCustomRecurseRoutine5 @ 0x14015D3E0 (KiCustomRecurseRoutine5.c)
 */

__int64 __fastcall KiCustomRecurseRoutine4(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine5();
  return *a2;
}
