/*
 * XREFs of KeClearEvent @ 0x1402018CC
 * Callers:
 *     VerifierKeClearEvent @ 0x1407480DC (VerifierKeClearEvent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeClearEvent(PRKEVENT Event)
{
  KeResetEvent(Event);
}
