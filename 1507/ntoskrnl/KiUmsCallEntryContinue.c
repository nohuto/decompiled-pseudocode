/*
 * XREFs of KiUmsCallEntryContinue @ 0x140195080
 * Callers:
 *     <none>
 * Callees:
 *     KiSwapToUmsThreadContinue @ 0x14020BC24 (KiSwapToUmsThreadContinue.c)
 */

__int64 KiUmsCallEntryContinue()
{
  _enable();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiSwapToUmsThreadContinue();
}
