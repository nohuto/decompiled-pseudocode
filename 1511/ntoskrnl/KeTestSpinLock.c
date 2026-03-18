/*
 * XREFs of KeTestSpinLock @ 0x1400CFE90
 * Callers:
 *     KiDecodeMcaFault @ 0x14014D4C0 (KiDecodeMcaFault.c)
 *     VerifierKeTestSpinLock @ 0x1406C0A98 (VerifierKeTestSpinLock.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
