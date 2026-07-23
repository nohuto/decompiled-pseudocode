/*
 * XREFs of KiBugCheckDispatch @ 0x140170100
 * Callers:
 *     KxIsrLinkage @ 0x1401612B0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x140169D80 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14016B400 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14016B6C0 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14016B980 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14016BC40 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14016BF00 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14016CFC0 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x14016D640 (KiMcheckAbort.c)
 *     KiXmmException @ 0x14016E180 (KiXmmException.c)
 *     KiSystemServiceHandler @ 0x14016F380 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
