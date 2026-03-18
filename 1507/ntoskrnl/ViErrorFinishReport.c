/*
 * XREFs of ViErrorFinishReport @ 0x1407443D4
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
 *     DbgPrompt @ 0x140246600 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140744340 (VfErrorStoreTriageInformation.c)
 */

__int64 __fastcall ViErrorFinishReport(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  VfUtilDbgPrint("************************************************************\n\n");
  result = 0LL;
  for ( i = &ViErrorDescriptions; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&ViErrorDescriptions + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        VfErrorStoreTriageInformation(201LL, v4, a2, a3, a4);
        __debugbreak();
      }
    }
    return VerifierBugCheckIfAppropriate(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
