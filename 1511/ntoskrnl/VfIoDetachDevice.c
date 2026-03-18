/*
 * XREFs of VfIoDetachDevice @ 0x1406C1914
 * Callers:
 *     IovDetachDevice @ 0x1406B5128 (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x1406C1EFC (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
