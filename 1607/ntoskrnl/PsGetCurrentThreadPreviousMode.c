/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1400B06F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
