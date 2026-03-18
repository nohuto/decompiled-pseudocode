/*
 * XREFs of ViErrorDisplayDescription @ 0x140744384
 * Callers:
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
 * Callees:
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 */

ULONG __fastcall ViErrorDisplayDescription(int a1)
{
  ULONG result; // eax
  _DWORD *i; // rdx

  VfUtilDbgPrint("************************************************************\nDriver Verifier detected violation:\n\n");
  result = 0;
  for ( i = &ViErrorDescriptions; *i != a1; i += 4 )
  {
    if ( ++result >= 0x3F )
      return result;
  }
  return VfUtilDbgPrint("%s\n\n", *((const char **)&ViErrorDescriptions + 2 * result + 1));
}
