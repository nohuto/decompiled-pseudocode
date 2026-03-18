/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0
 * Callers:
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140161FC0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140162D50 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140164FF0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401655D0 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x140166450 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x140169100 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401694C0 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x140169CC0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x140169FC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016A900 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14016AF00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14016B1C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B480 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14016B740 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14016BA00 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14016BD40 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14016C040 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14016CAC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14016CE40 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14016D680 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14016DC80 (KiXmmException.c)
 *     KiRaiseSecurityCheckFailure @ 0x14016E000 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14016E300 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14016E600 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x14016E900 (KiSystemService.c)
 *     KiSystemCall32 @ 0x14016EB40 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140240B80 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140240EC0 (KiSystemCall64Shadow.c)
 * Callees:
 *     <none>
 */

char KiFlushBhbDuringTrapEntryOrExit()
{
  char result; // al

  result = KeGetPcr()->Prcb.BpbFeatures & 0x18;
  switch ( result )
  {
    case 8:
      return KiFlushBhbDuringTrapEntryOrExitPreAlderLake();
    case 16:
      return KiFlushBhbDuringTrapEntryOrExitAlderLake();
    case 24:
      return KiFlushBhbDuringTrapEntryOrExitTsx();
  }
  __debugbreak();
  return result;
}
