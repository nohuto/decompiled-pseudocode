/*
 * XREFs of KiCustomRecurseRoutine1 @ 0x14015D4A0
 * Callers:
 *     KiCustomAccessRoutine1 @ 0x14015D4C0 (KiCustomAccessRoutine1.c)
 *     KiCustomRecurseRoutine0 @ 0x14015E1F0 (KiCustomRecurseRoutine0.c)
 * Callees:
 *     KiCustomRecurseRoutine2 @ 0x14015D560 (KiCustomRecurseRoutine2.c)
 */

__int64 __fastcall KiCustomRecurseRoutine1(int a1, unsigned int *a2)
{
  if ( a1 != 1 )
    KiCustomRecurseRoutine2();
  return *a2;
}
