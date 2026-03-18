/*
 * XREFs of GreResumeDirectDraw @ 0x1C00825B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreResumeDirectDraw()
{
  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  return DisplayScenarioJournalDisplayUniquenessIncremented();
}
