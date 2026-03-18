/*
 * XREFs of KeWakeProcessor @ 0x1401C71C8
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 *     KiNmiInterruptStart @ 0x14015EB40 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140162F00 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_1402E26A8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
  return KeFlushCurrentTbImmediately();
}
