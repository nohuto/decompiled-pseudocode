/*
 * XREFs of ViErrorReport1 @ 0x140223660
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140703950 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140703B4C (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14070A890 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14070ADA0 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14070B0B0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14070B1D8 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14070B5CC (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14070B720 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14070B8E0 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14070BE00 (VfIoInitializeIrp.c)
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
 *     RtlStringCbPrintfA @ 0x140139A14 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x14070EB74 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBC4 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
