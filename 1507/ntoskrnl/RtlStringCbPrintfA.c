/*
 * XREFs of RtlStringCbPrintfA @ 0x14016326C
 * Callers:
 *     RtlpVerCompare @ 0x140158064 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140202E84 (KiDumpParameterImages.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140737E18 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140738120 (ViGenericVerifyIrpStackUpward.c)
 *     ViGenericVerifyNewIrp @ 0x1407382DC (ViGenericVerifyNewIrp.c)
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14073FD1C (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14074031C (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1407408D4 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x140740A9C (IovpExamineIrpStackForwarding.c)
 *     IovpValidateStatusInformation @ 0x140740C68 (IovpValidateStatusInformation.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1407414D0 (VfIoInitializeIrp.c)
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140743140 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14074422C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1407442BC (VfErrorReport8.c)
 *     VfPnpVerifyIrpStackDownward @ 0x14074CB70 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14074CE18 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x14074D1B8 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x14074D8E0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x14074DAE8 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x14074DB84 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x14074DCEC (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyIrpStackUpward @ 0x14074DE18 (VfWmiVerifyIrpStackUpward.c)
 *     VfWmiVerifyNewRequest @ 0x14074DEFC (VfWmiVerifyNewRequest.c)
 *     VerifierNtCreateFile @ 0x14075428C (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1407543A8 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1407544C0 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1407FD3A8 (RamdiskStart.c)
 * Callees:
 *     sub_1401632BC @ 0x1401632BC (sub_1401632BC.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return sub_1401632BC(pszDest, cbDest, 0LL, pszFormat, (__int64 *)va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
