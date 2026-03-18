/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExit @ 0x140195380
 * Callers:
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140186D60 (KiApcInterrupt.c)
 *     KiDpcInterrupt @ 0x1401873D0 (KiDpcInterrupt.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KyStartUserThread @ 0x14018AA90 (KyStartUserThread.c)
 *     KiDivideErrorFault @ 0x14018DC00 (KiDivideErrorFault.c)
 *     KxDebugTrapOrFault @ 0x14018DFC0 (KxDebugTrapOrFault.c)
 *     KiBreakpointTrap @ 0x14018E7C0 (KiBreakpointTrap.c)
 *     KiOverflowTrap @ 0x14018EAC0 (KiOverflowTrap.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiNpxNotAvailableFault @ 0x14018F980 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14018FC40 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14018FF00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401901C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140190480 (KiSegmentNotPresentFault.c)
 *     KiStackFault @ 0x1401907C0 (KiStackFault.c)
 *     KiGeneralProtectionFault @ 0x140190B00 (KiGeneralProtectionFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140191540 (KiFloatingErrorFault.c)
 *     KiAlignmentFault @ 0x1401918C0 (KiAlignmentFault.c)
 *     KxMcheckAlternateReturn @ 0x140192100 (KxMcheckAlternateReturn.c)
 *     KiXmmException @ 0x1401926C0 (KiXmmException.c)
 *     KiRaiseSecurityCheckFailure @ 0x140192A40 (KiRaiseSecurityCheckFailure.c)
 *     KiRaiseAssertion @ 0x140192D40 (KiRaiseAssertion.c)
 *     KiDebugServiceTrap @ 0x140193040 (KiDebugServiceTrap.c)
 *     KiSystemCall32 @ 0x140193340 (KiSystemCall32.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiSystemCall32Shadow @ 0x140275B00 (KiSystemCall32Shadow.c)
 *     KiSystemCall64Shadow @ 0x140275E40 (KiSystemCall64Shadow.c)
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
