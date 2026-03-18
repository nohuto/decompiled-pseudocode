/*
 * XREFs of KiBugCheckDispatch @ 0x140165B40
 * Callers:
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14015EB40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14015FA00 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x140160540 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x140160900 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x140160CC0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x140161080 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140161440 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140162700 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x140162F00 (KiMcheckAbort.c)
 *     KiXmmException @ 0x140163C40 (KiXmmException.c)
 *     KiSystemServiceHandler @ 0x140165280 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140165400 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140165E80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140166140 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
