/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1400F1B4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
