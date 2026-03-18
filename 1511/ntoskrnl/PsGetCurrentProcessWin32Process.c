/*
 * XREFs of PsGetCurrentProcessWin32Process @ 0x1400C8CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentProcessWin32Process()
{
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[15];
}
