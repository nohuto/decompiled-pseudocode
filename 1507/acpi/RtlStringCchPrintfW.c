/*
 * XREFs of RtlStringCchPrintfW @ 0x1C001DB9C
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C00090D0 (PciConfigSpaceHandlerWorker.c)
 *     LinkNodeCrackPrt @ 0x1C00163F8 (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C003BAD4 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C0046838 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078B7C (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00016D0 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, 0LL, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
