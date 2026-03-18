/*
 * XREFs of VfIoDetachDevice @ 0x14070D97C
 * Callers:
 *     IovDetachDevice @ 0x140700F90 (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139A14 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x14070DF8C (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x14070EB74 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
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
