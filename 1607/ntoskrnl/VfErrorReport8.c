/*
 * XREFs of VfErrorReport8 @ 0x14070EAAC
 * Callers:
 *     PpvUtilFailDriver @ 0x1401D10B8 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139A14 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EB74 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport8(__int64 a1, const void *a2, const void *a3)
{
  unsigned int v5; // ebx
  char pszDest[80]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v5, a2, a3, 0LL);
}
