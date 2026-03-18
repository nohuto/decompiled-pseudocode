/*
 * XREFs of ViErrorReport6 @ 0x140223804
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140703950 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140703B4C (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x14070ADA0 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x14070B1D8 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139A14 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EB74 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport6(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char pszDest[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v7, a2, a3, v4);
}
