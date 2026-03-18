/*
 * XREFs of KeWakeProcessor @ 0x1400B1D48
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140162D50 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x1401655D0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140169880 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14016D140 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_140307BA8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
  return KeFlushCurrentTbImmediately();
}
