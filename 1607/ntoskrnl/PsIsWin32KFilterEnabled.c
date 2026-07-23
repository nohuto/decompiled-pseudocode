/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x14009D560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x800000000000LL) != 0;
}
