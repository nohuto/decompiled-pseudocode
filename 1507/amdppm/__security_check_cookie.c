/*
 * XREFs of __security_check_cookie @ 0x1C0005E20
 * Callers:
 *     ValidatePStateCapability @ 0x1C0001050 (ValidatePStateCapability.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0001980 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0001A50 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0001AF0 (ProcLibTracePStateDomainRundown.c)
 *     PepIdlePrepare @ 0x1C0003B50 (PepIdlePrepare.c)
 *     PepIdleTest @ 0x1C00040A0 (PepIdleTest.c)
 *     PepPerfControlHandler @ 0x1C0004CB0 (PepPerfControlHandler.c)
 *     PepInstantaneousFrequencyRead @ 0x1C0004D50 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C0004DD0 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C0004E50 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C0004ED0 (PepDifferentialPerfRead.c)
 *     PepDevicePowerControlCallback @ 0x1C00052D0 (PepDevicePowerControlCallback.c)
 *     ComputeProcessorEnergy @ 0x1C0005590 (ComputeProcessorEnergy.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0005D78 (HviIsAnyHypervisorPresent.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C0005DB0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __GSHandlerCheckCommon @ 0x1C0005E80 (__GSHandlerCheckCommon.c)
 *     AcpiEval_CST @ 0x1C000F75C (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FBB8 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C000FE28 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00100A0 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0010424 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001071C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0010ADC (AcpiEval_CPC.c)
 *     GetAcpiTable @ 0x1C0011748 (GetAcpiTable.c)
 *     EnumerateControlMethods @ 0x1C00118F0 (EnumerateControlMethods.c)
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 *     ProcLibTraceSummary @ 0x1C0012870 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0012B54 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C0012FC8 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00134EC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C0013700 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00137D8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0013A74 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0013CA4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0013F18 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001405C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00140E8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00142E4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00144D8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00146E0 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014928 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0014A04 (ProcLibTraceCoordinatedIdleStates.c)
 *     RegisterWmi @ 0x1C0014D58 (RegisterWmi.c)
 *     CpcConnectNativeInterrupt @ 0x1C0015774 (CpcConnectNativeInterrupt.c)
 *     RegisterKernelCStates @ 0x1C0015998 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0015C28 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0015F3C (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x1C0016618 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0016948 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelCap @ 0x1C0017760 (RegisterKernelCap.c)
 *     GetProcessorPackage @ 0x1C0018A68 (GetProcessorPackage.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00192DC (PepNotifyQueryCoordinatedStates.c)
 *     GetHvPpmCapabilities @ 0x1C001A0D0 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001A260 (RegisterHvCStates.c)
 *     RegisterHvCap @ 0x1C001A910 (RegisterHvCap.c)
 *     RegisterHvLegacyPcc @ 0x1C001A980 (RegisterHvLegacyPcc.c)
 *     RegisterVmIdleStates @ 0x1C001AF74 (RegisterVmIdleStates.c)
 *     InitPepPerfStates @ 0x1C001BF6C (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C3EC (InitPep.c)
 *     PepNotifyQueryCapabilities @ 0x1C001C604 (PepNotifyQueryCapabilities.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CA54 (ValidatePerfDomainSymmetry.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C001CFF8 (ValidateCoordinatedDependencyOptions.c)
 *     InitializeEnergyEstimation @ 0x1C001D270 (InitializeEnergyEstimation.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationParameters @ 0x1C001FAAC (PopulateEnergyEstimationParameters.c)
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
