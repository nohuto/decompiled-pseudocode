/*
 * XREFs of EngReadStateEvent @ 0x1C026A6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __stdcall EngReadStateEvent(PEVENT pEvent)
{
  return KeReadStateEvent((PRKEVENT)pEvent->pKEvent);
}
