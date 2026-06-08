/*
 * XREFs of memset @ 0x1C0002D00
 * Callers:
 *     AcpiEval_OSC @ 0x1C0001944 (AcpiEval_OSC.c)
 *     RegisterKernelIdleStates @ 0x1C0001B00 (RegisterKernelIdleStates.c)
 *     InitDevExts @ 0x1C0001F80 (InitDevExts.c)
 *     GetProcessorStatusInfo @ 0x1C00049E0 (GetProcessorStatusInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0004B10 (GetWmiBiosIdleStateInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0004ED0 (GetWmiBiosThrottleStateInfo.c)
 *     RegisterKernelLegacyPcc @ 0x1C00051C0 (RegisterKernelLegacyPcc.c)
 *     UpdateKernelPlatformStates @ 0x1C00055E8 (UpdateKernelPlatformStates.c)
 *     PepIdlePrepare @ 0x1C0005EF0 (PepIdlePrepare.c)
 *     PepParkMask @ 0x1C0006AF0 (PepParkMask.c)
 *     PepParkPreference @ 0x1C0006C10 (PepParkPreference.c)
 *     RegisterWmi @ 0x1C00120B4 (RegisterWmi.c)
 *     RegisterXsdDomain @ 0x1C0012C38 (RegisterXsdDomain.c)
 *     InitAcpi1ThrottleStates @ 0x1C001339C (InitAcpi1ThrottleStates.c)
 *     AcpiEval_PSD_TSD @ 0x1C0013644 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_CST @ 0x1C001386C (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C0013B44 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0013EA4 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0013FE8 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0014148 (AcpiEval_CPC.c)
 *     AcquirePccInterface @ 0x1C00149D8 (AcquirePccInterface.c)
 *     RegisterPepDevice @ 0x1C0014C58 (RegisterPepDevice.c)
 *     EnumerateControlMethods @ 0x1C0014D24 (EnumerateControlMethods.c)
 *     PepQueryVetoList @ 0x1C0014FE8 (PepQueryVetoList.c)
 *     InitPerfStatesInternal @ 0x1C00152DC (InitPerfStatesInternal.c)
 *     RegisterKernelIdleDomains @ 0x1C00159B0 (RegisterKernelIdleDomains.c)
 *     EvtDriverDeviceAdd @ 0x1C0015EC0 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C001614C (ProcLibDeviceCreate.c)
 *     GetRegistryQwordValue @ 0x1C0016238 (GetRegistryQwordValue.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001630C (GetRegistryDwordValueNoDefault.c)
 *     InitEnergyCounters @ 0x1C0018E20 (InitEnergyCounters.c)
 *     RetrieveModelParameters @ 0x1C001923C (RetrieveModelParameters.c)
 *     GetHvPackage @ 0x1C001BCDC (GetHvPackage.c)
 *     RegisterHvCStates @ 0x1C001BFA4 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001C270 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvLegacyPcc @ 0x1C001C5C0 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C001CA20 (RegisterHvPerfStates.c)
 *     RegisterVmIdleStates @ 0x1C001CE9C (RegisterVmIdleStates.c)
 *     RegisterSubspace @ 0x1C001D12C (RegisterSubspace.c)
 *     AcpiEval_XPSS @ 0x1C001D7D0 (AcpiEval_XPSS.c)
 *     GetProcessorPackage @ 0x1C001E4AC (GetProcessorPackage.c)
 *     InitCpcStatesInternal @ 0x1C001E6AC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001F1D4 (InitPerfFeedbackInternal.c)
 *     RegisterIdleDomain @ 0x1C001F51C (RegisterIdleDomain.c)
 *     RegisterKernelPepIdleStates @ 0x1C001F988 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepPerf @ 0x1C001FF80 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x1C002043C (RegisterKernelPlatformStates.c)
 *     InitAcpi1CStates @ 0x1C00207EC (InitAcpi1CStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0020C0C (PepNotifyQueryCoordinatedStates.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0020F80 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00210C4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1C00212EC (PepNotifyReportCStates.c)
 *     PepQueryName @ 0x1C002142C (PepQueryName.c)
 *     InitPepPerfStates @ 0x1C0021800 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C0021A3C (PepNotifyQueryFeedbackCounters.c)
 *     EnableEnergyEstimation @ 0x1C0021E10 (EnableEnergyEstimation.c)
 *     EnablePerformanceMonitoringCounters @ 0x1C0021EF4 (EnablePerformanceMonitoringCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00221F4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     DriverEntry @ 0x1C0023000 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C00230C0 (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C0024088 (PopulateEnergyEstimationModel.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0002DBD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
