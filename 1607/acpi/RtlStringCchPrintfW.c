/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0024110
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0023F30 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetConvertToSerialIDWide @ 0x1C004EDD4 (ACPIGetConvertToSerialIDWide.c)
 *     LogInErrorLog @ 0x1C005D878 (LogInErrorLog.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0001190 (RtlStringVPrintfWorkerW.c)
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
