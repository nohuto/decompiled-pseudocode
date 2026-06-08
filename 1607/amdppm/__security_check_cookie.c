/*
 * XREFs of __security_check_cookie @ 0x1C0006330
 * Callers:
 *     ValidatePStateCapability @ 0x1C0001050 (ValidatePStateCapability.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001ED0 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0001FA0 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0002040 (ProcLibTracePStateDomainRundown.c)
 *     PepIdlePrepare @ 0x1C0002160 (PepIdlePrepare.c)
 *     PepIdleTest @ 0x1C00026D0 (PepIdleTest.c)
 *     PepPerfControlHandler @ 0x1C0004E30 (PepPerfControlHandler.c)
 *     PepInstantaneousFrequencyRead @ 0x1C0004ED0 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C0004F50 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C0004FD0 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C0005050 (PepDifferentialPerfRead.c)
 *     PepDevicePowerControlCallback @ 0x1C0005450 (PepDevicePowerControlCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0006278 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00062D0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __GSHandlerCheckCommon @ 0x1C0006710 (__GSHandlerCheckCommon.c)
 *     RegisterWmi @ 0x1C000F4D8 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C000F9C8 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FE24 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0010094 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001030C (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0010690 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0010988 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0010D48 (AcpiEval_CPC.c)
 *     GetAcpiTable @ 0x1C00119C8 (GetAcpiTable.c)
 *     EnumerateControlMethods @ 0x1C0011B70 (EnumerateControlMethods.c)
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 *     ProcLibTraceSummary @ 0x1C0012B50 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0012E34 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C00132BC (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C00133C0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00137DC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C00139F0 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0013AC8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0013D64 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0013F94 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0014208 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001434C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00143D8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00145D4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00147C8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00149D4 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014C1C (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0014CF8 (ProcLibTraceCoordinatedIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00151DC (PepNotifyQueryCoordinatedStates.c)
 *     CpcConnectNativeInterrupt @ 0x1C0016708 (CpcConnectNativeInterrupt.c)
 *     CpcHighestNotifyWorker @ 0x1C0016938 (CpcHighestNotifyWorker.c)
 *     RegisterKernelCStates @ 0x1C0017154 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00173E4 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00176F8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x1C0017DF4 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0018124 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelCap @ 0x1C0019000 (RegisterKernelCap.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001B26C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001BBD4 (ValidatePerfDomainSymmetry.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C001C174 (ValidateCoordinatedDependencyOptions.c)
 *     InitPepPerfStates @ 0x1C001C3EC (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C8C8 (InitPep.c)
 *     PepNotifyQueryCapabilities @ 0x1C001CB04 (PepNotifyQueryCapabilities.c)
 *     GetHvPpmCapabilities @ 0x1C001CD80 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001CED0 (RegisterHvCStates.c)
 *     RegisterHvCap @ 0x1C001D580 (RegisterHvCap.c)
 *     RegisterHvLegacyPcc @ 0x1C001D600 (RegisterHvLegacyPcc.c)
 *     RegisterVmIdleStates @ 0x1C001DBF4 (RegisterVmIdleStates.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FBB4 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
