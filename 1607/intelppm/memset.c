/*
 * XREFs of memset @ 0x1C0002DC0
 * Callers:
 *     InitDevExts @ 0x1C00016D0 (InitDevExts.c)
 *     RegisterKernelIdleStates @ 0x1C0001A20 (RegisterKernelIdleStates.c)
 *     AcpiEval_OSC @ 0x1C00020BC (AcpiEval_OSC.c)
 *     GetProcessorStatusInfo @ 0x1C0005570 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C00056A0 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0005A60 (GetWmiBiosThrottleStateInfo.c)
 *     InitLegacyPccInternal @ 0x1C0005DC8 (InitLegacyPccInternal.c)
 *     UpdateKernelPlatformStates @ 0x1C00061FC (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C0006B10 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C00078B0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C00079D0 (PepParkPreference.c)
 *     GetRegistryQwordValue @ 0x1C0013130 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0013204 (GetRegistryDwordValueNoDefault.c)
 *     InitPerfStatesInternal @ 0x1C001347C (InitPerfStatesInternal.c)
 *     RegisterWmi @ 0x1C0013DD4 (RegisterWmi.c)
 *     RegisterKernelIdleDomains @ 0x1C0014ACC (RegisterKernelIdleDomains.c)
 *     RegisterXsdDomain @ 0x1C0015380 (RegisterXsdDomain.c)
 *     InitAcpi1ThrottleStates @ 0x1C0015AE4 (InitAcpi1ThrottleStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C0015D8C (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C0015FB4 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C001628C (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C001665C (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C00167A0 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0016900 (AcpiEval_CPC.c)
 *     AcquirePccInterface @ 0x1C0017190 (AcquirePccInterface.c)
 *     RegisterPepDevice @ 0x1C001741C (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C0017500 (EnumerateControlMethods.c)
 *     PepQueryVetoList @ 0x1C00177E8 (PepQueryVetoList.c)
 *     EvtDriverDeviceAdd @ 0x1C00178F0 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C0017B7C (ProcLibDeviceCreate.c)
 *     InitEnergyCounters @ 0x1C0019D60 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C001A17C (RetrieveModelParameters.c)
 *     CpcHighestNotifyWorker @ 0x1C001C398 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C001C590 (InitAcpi1CStates.c)
 *     GetHvPackage @ 0x1C001D0A0 (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C001D364 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001D640 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C001D9A0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001DE00 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C001E27C (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C001E50C (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C001EBD8 (AcpiEval_XPSS.c)
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0020474 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C0020874 (RegisterIdleDomain.c)
 *     RegisterKernelPackage @ 0x1C0020BA0 (RegisterKernelPackage.c)
 *     RegisterKernelPepIdleStates @ 0x1C0020D50 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C0021340 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C00217CC (RegisterKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00220B8 (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C002242C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0022570 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C0022798 (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C00228D8 (PepQueryName.c)
 *     EnableEnergyEstimation @ 0x1C0022D48 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0022E2C (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002312C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C0023504 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0023750 (PepNotifyQueryFeedbackCounters.c)
 *     DriverEntry @ 0x1C0024000 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C00241A4 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C002513C (PopulateEnergyEstimationModel.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  size_t v4; // r9
  size_t i; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rcx
  size_t v8; // r10
  size_t j; // r8

  result = a1;
  if ( Size < 8 )
  {
mset20:
    for ( i = Size & 7; i; --i )
      *((char *)a1 + i - 1) = Val;
    return result;
  }
  *(_QWORD *)&Val = 0x101010101010101LL * (unsigned __int8)Val;
  if ( Size < 0x47 )
  {
    v4 = Size & 0x78;
    a1 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
    do
    {
      *(_QWORD *)((char *)result + v4 - 8) = *(_QWORD *)&Val;
      v4 -= 8LL;
    }
    while ( v4 );
    goto mset20;
  }
  v6 = -(int)a1 & 7;
  if ( v6 )
  {
    Size -= v6;
    *(_QWORD *)result = *(_QWORD *)&Val;
  }
  v7 = (char *)result + v6;
  v8 = Size >> 6;
  if ( ((Size >> 3) & 7) != 0 )
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0002E7D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
                     &v7[((Size >> 3) & 7) - 8],
                     *(_QWORD *)&Val);
  do
  {
    *v7 = *(_QWORD *)&Val;
    v7[1] = *(_QWORD *)&Val;
    v7[2] = *(_QWORD *)&Val;
    v7[3] = *(_QWORD *)&Val;
    v7[4] = *(_QWORD *)&Val;
    v7[5] = *(_QWORD *)&Val;
    v7[6] = *(_QWORD *)&Val;
    v7[7] = *(_QWORD *)&Val;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  for ( j = Size & 7; j; --j )
    *((_BYTE *)v7 + j - 1) = Val;
  return result;
}
