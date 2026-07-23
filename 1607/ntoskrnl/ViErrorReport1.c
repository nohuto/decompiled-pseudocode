/*
 * XREFs of ViErrorReport1 @ 0x14022348C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140703980 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140703B7C (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14070ADD0 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14070B0E0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14070B5FC (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14070B750 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14070BC98 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14070BE30 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x1407188EC (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140718A78 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x140718C6C (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140718D44 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140719054 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x14071914C (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x14071917C (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140719260 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x140719358 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
