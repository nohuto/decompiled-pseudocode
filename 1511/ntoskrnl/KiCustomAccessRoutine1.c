/*
 * XREFs of KiCustomAccessRoutine1 @ 0x14015D4C0
 * Callers:
 *     IopTimerDispatch @ 0x140001768 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x14015D4A0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
