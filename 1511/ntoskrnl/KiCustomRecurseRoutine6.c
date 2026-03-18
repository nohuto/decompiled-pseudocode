/*
 * XREFs of KiCustomRecurseRoutine6 @ 0x14015DE30
 * Callers:
 *     KiCustomRecurseRoutine5 @ 0x14015D3E0 (KiCustomRecurseRoutine5.c)
 *     KiCustomAccessRoutine6 @ 0x14015DE50 (KiCustomAccessRoutine6.c)
 * Callees:
 *     KiCustomRecurseRoutine7 @ 0x14015DFB0 (KiCustomRecurseRoutine7.c)
 */

__int64 __fastcall KiCustomRecurseRoutine6(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine7();
  return *a2;
}
