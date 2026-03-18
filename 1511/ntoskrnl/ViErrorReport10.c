/*
 * XREFs of ViErrorReport10 @ 0x14020BC20
 * Callers:
 *     IovpCallDriver2 @ 0x1406BED48 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1406CA068 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1406CA334 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x1406CA8C8 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
