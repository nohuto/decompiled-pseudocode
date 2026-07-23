/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0
 * Callers:
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140162530 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401632C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140165560 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140165B40 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x1401669C0 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x140169600 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x1401699C0 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14016A1C0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14016A4C0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14016AE00 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14016B400 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14016B6C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B980 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14016BC40 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14016BF00 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x14016C240 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x14016C540 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14016CFC0 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x14016D340 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x14016DB80 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x14016E180 (KiXmmException.c)
 *     KiRaiseSecurityCheckFailure @ 0x14016E500 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x14016E800 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x14016EB00 (KiDebugServiceTrap.c)
 *     KiSystemService @ 0x14016EE00 (KiSystemService.c)
 *     KiSystemCall32 @ 0x14016F040 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
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
