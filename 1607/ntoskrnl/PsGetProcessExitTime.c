/*
 * XREFs of PsGetProcessExitTime @ 0x1404C2860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER PsGetProcessExitTime(void)
{
  return (LARGE_INTEGER)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[17];
}
