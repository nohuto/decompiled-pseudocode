/*
 * XREFs of KiCustomAccessRoutine1 @ 0x140168EA0
 * Callers:
 *     IopTimerDispatch @ 0x1400017F4 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x140168E80 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
