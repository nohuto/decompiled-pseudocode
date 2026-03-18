/*
 * XREFs of KeTestSpinLock @ 0x140092A30
 * Callers:
 *     KiDecodeMcaFault @ 0x140156830 (KiDecodeMcaFault.c)
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
