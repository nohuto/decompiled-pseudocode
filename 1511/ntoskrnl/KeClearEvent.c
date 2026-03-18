/*
 * XREFs of KeClearEvent @ 0x1401C4ED0
 * Callers:
 *     VerifierKeClearEvent @ 0x1406C5EA8 (VerifierKeClearEvent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeClearEvent(PRKEVENT Event)
{
  KeResetEvent(Event);
}
