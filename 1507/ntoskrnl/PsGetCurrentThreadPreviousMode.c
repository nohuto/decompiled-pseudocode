/*
 * XREFs of PsGetCurrentThreadPreviousMode @ 0x14012F2AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsGetCurrentThreadPreviousMode()
{
  return KeGetCurrentThread()->PreviousMode;
}
