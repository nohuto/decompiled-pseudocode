/*
 * XREFs of KeTestSpinLock @ 0x1401031E0
 * Callers:
 *     KiDecodeMcaFault @ 0x14017B51C (KiDecodeMcaFault.c)
 *     VerifierKeTestSpinLock @ 0x1407422D8 (VerifierKeTestSpinLock.c)
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
