/*
 * XREFs of KiCustomRecurseRoutine5 @ 0x14015D3E0
 * Callers:
 *     KiCustomRecurseRoutine4 @ 0x14015D320 (KiCustomRecurseRoutine4.c)
 *     KiCustomAccessRoutine5 @ 0x14015D400 (KiCustomAccessRoutine5.c)
 * Callees:
 *     KiCustomRecurseRoutine6 @ 0x14015DE30 (KiCustomRecurseRoutine6.c)
 */

__int64 __fastcall KiCustomRecurseRoutine5(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine6();
  return *a2;
}
