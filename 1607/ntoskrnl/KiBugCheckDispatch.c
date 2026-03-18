/*
 * XREFs of KiBugCheckDispatch @ 0x14016FC00
 * Callers:
 *     KxIsrLinkage @ 0x140160D40 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140169880 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14016AF00 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14016B1C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B480 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14016B740 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14016BA00 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14016CAC0 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x14016D140 (KiMcheckAbort.c)
 *     KiXmmException @ 0x14016DC80 (KiXmmException.c)
 *     KiSystemServiceHandler @ 0x14016EE80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401704C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
