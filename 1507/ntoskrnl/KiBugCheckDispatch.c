/*
 * XREFs of KiBugCheckDispatch @ 0x140194100
 * Callers:
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14018E380 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14018F980 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14018FC40 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14018FF00 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401901C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x140190480 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x140191540 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x140191BC0 (KiMcheckAbort.c)
 *     KiXmmException @ 0x1401926C0 (KiXmmException.c)
 *     KiSystemServiceHandler @ 0x140193680 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401949C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
