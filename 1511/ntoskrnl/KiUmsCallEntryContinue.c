/*
 * XREFs of KiUmsCallEntryContinue @ 0x1401666C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x1401CCA04 (KiSwapToUmsThreadContinue.c)
 */

__int64 KiUmsCallEntryContinue()
{
  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiSwapToUmsThreadContinue();
}
