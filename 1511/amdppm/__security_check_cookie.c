/*
 * XREFs of __security_check_cookie @ 0x1C0005940
 * Callers:
 *     ValidatePStateCapability @ 0x1C0001050 (ValidatePStateCapability.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00016A0 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceCStateDomainRundown @ 0x1C0001770 (ProcLibTraceCStateDomainRundown.c)
 *     ProcLibTracePStateDomainRundown @ 0x1C0001810 (ProcLibTracePStateDomainRundown.c)
 *     PepIdlePrepare @ 0x1C00037A0 (PepIdlePrepare.c)
 *     PepIdleTest @ 0x1C0003CE0 (PepIdleTest.c)
 *     PepPerfControlHandler @ 0x1C00048F0 (PepPerfControlHandler.c)
 *     PepInstantaneousFrequencyRead @ 0x1C0004990 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C0004A10 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C0004A90 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C0004B10 (PepDifferentialPerfRead.c)
 *     PepDevicePowerControlCallback @ 0x1C0004F10 (PepDevicePowerControlCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1C0005858 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorInterface @ 0x1C0005890 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00058F0 (HviIsHypervisorMicrosoftCompatible.c)
 *     __GSHandlerCheckCommon @ 0x1C0005D20 (__GSHandlerCheckCommon.c)
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
 *     ProcLibTraceCap @ 0x1C0012FDC (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C00130E0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C00134FC (ProcLibTraceProcessorRundown.c)
 *     ProcLibTracePccSummary @ 0x1C0013710 (ProcLibTracePccSummary.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00137E8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0013A84 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0013CB4 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0013F28 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetPlatformIdleStates @ 0x1C001406C (ProcLibTraceGetPlatformIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C00140F8 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00142F4 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00144E8 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePlatformIdleStates @ 0x1C00146F0 (ProcLibTracePlatformIdleStates.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C0014938 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0014A14 (ProcLibTraceCoordinatedIdleStates.c)
 *     RegisterWmi @ 0x1C0014D68 (RegisterWmi.c)
 *     CpcConnectNativeInterrupt @ 0x1C0015784 (CpcConnectNativeInterrupt.c)
 *     RegisterKernelCStates @ 0x1C00159B0 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0015C40 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0015F54 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelIdleDomains @ 0x1C0016630 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0016960 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelCap @ 0x1C0017780 (RegisterKernelCap.c)
 *     GetProcessorPackage @ 0x1C0018A88 (GetProcessorPackage.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00192FC (PepNotifyQueryCoordinatedStates.c)
 *     GetHvPpmCapabilities @ 0x1C001A0F0 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001A240 (RegisterHvCStates.c)
 *     RegisterHvCap @ 0x1C001A8F0 (RegisterHvCap.c)
 *     RegisterHvLegacyPcc @ 0x1C001A960 (RegisterHvLegacyPcc.c)
 *     RegisterVmIdleStates @ 0x1C001AF54 (RegisterVmIdleStates.c)
 *     InitPepPerfStates @ 0x1C001BF68 (InitPepPerfStates.c)
 *     InitPep @ 0x1C001C458 (InitPep.c)
 *     PepNotifyQueryCapabilities @ 0x1C001C670 (PepNotifyQueryCapabilities.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001CAC0 (ValidatePerfDomainSymmetry.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C001D064 (ValidateCoordinatedDependencyOptions.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitDriver @ 0x1C001F000 (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FABC (PopulateEnergyEstimationModel.c)
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
