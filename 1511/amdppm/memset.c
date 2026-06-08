/*
 * XREFs of memset @ 0x1C0006140
 * Callers:
 *     AcpiEval_OSC @ 0x1C000133C (AcpiEval_OSC.c)
 *     GetProcessorStatusInfo @ 0x1C0001B90 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0001CC0 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0001EC0 (GetWmiBiosIdleStateInfo.c)
 *     RegisterKernelIdleStates @ 0x1C0002AA0 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0002E90 (UpdateKernelPlatformStates.c)
 *     RegisterKernelLegacyPcc @ 0x1C0003250 (RegisterKernelLegacyPcc.c)
 *     PepIdlePrepare @ 0x1C00037A0 (PepIdlePrepare.c)
 *     PepParkPreference @ 0x1C0004BD0 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0004DB0 (PepParkMask.c)
 *     EvtDriverDeviceAdd @ 0x1C000F000 (EvtDriverDeviceAdd.c)
 *     AcpiEval_CST @ 0x1C000F75C (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FBB8 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C000FE28 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C00100A0 (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0010424 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C001071C (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0010ADC (AcpiEval_CPC.c)
 *     EnumerateControlMethods @ 0x1C00118F0 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C0011BC8 (ProcLibDeviceCreate.c)
 *     RegisterWmi @ 0x1C0014D68 (RegisterWmi.c)
 *     InitAcpi1CStates @ 0x1C0015080 (InitAcpi1CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0015C40 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00162D4 (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0016630 (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C0016CC0 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001741C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178CC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0018400 (RegisterKernelPepPerf.c)
 *     GetProcessorPackage @ 0x1C0018A88 (GetProcessorPackage.c)
 *     RegisterXsdDomain @ 0x1C0018F7C (RegisterXsdDomain.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00192FC (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C0019704 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C001982C (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0019954 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0019B7C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0019CC0 (PepNotifyReportCStates.c)
 *     RegisterHvCStates @ 0x1C001A240 (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A490 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001A960 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C001AD30 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C001AF54 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B0F0 (RegisterHvFeedbackCountersCallback.c)
 *     InitAcpi1ThrottleStates @ 0x1C001B8DC (InitAcpi1ThrottleStates.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001BE2C (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C001BEA0 (GetRegistryQwordValue.c)
 *     InitPepPerfStates @ 0x1C001BF68 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C248 (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C001C458 (InitPep.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D580 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     AcquirePccInterface @ 0x1C001DAD8 (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001DCB8 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C001F130 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C001F2FC (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FABC (PopulateEnergyEstimationModel.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C00061FD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
