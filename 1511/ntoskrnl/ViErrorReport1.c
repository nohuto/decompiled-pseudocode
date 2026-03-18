/*
 * XREFs of ViErrorReport1 @ 0x14020BBA4
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1406B7AFC (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1406B7CF8 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1406BED48 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1406BF058 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1406BF574 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1406BF6C8 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1406BF888 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1406BFDA8 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x1406C9EDC (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1406CA068 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1406CA25C (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1406CA334 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1406CA644 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1406CA73C (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1406CA76C (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1406CA850 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1406CA948 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
