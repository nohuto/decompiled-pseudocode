/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x1400B27B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
