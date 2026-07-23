/*
 * XREFs of ViErrorReport4 @ 0x140223594
 * Callers:
 *     IovpCallDriver2 @ 0x14070ADD0 (IovpCallDriver2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport4(__int64 a1, const void *a2, const void **a3, int a4, int a5)
{
  __int64 v5; // rsi
  char pszDest[128]; // [rsp+40h] [rbp-A8h] BYREF

  v5 = a4;
  ViErrorDisplayDescription(548LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x7CuLL,
         "CulpritAddress = %p, Irp = %p, ExpectedStatus = 0x%x, ActualStatus = 0x%x.\n",
         a2,
         *a3,
         v5,
         a5) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(548LL, a2, *a3, v5);
}
