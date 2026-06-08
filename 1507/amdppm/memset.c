/*
 * XREFs of memset @ 0x1C00062C0
 * Callers:
 *     AcpiEval_OSC @ 0x1C000161C (AcpiEval_OSC.c)
 *     GetProcessorStatusInfo @ 0x1C0001E70 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0001FA0 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C00021A0 (GetWmiBiosIdleStateInfo.c)
 *     RegisterKernelIdleStates @ 0x1C0002E50 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0003240 (UpdateKernelPlatformStates.c)
 *     RegisterKernelLegacyPcc @ 0x1C0003600 (RegisterKernelLegacyPcc.c)
 *     PepIdlePrepare @ 0x1C0003B50 (PepIdlePrepare.c)
 *     PepParkPreference @ 0x1C0004F90 (PepParkPreference.c)
 *     PepParkMask @ 0x1C0005170 (PepParkMask.c)
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
 *     RegisterWmi @ 0x1C0014D58 (RegisterWmi.c)
 *     InitAcpi1CStates @ 0x1C0015070 (InitAcpi1CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0015C28 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00162BC (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0016618 (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C0016CA8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00173FC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C00178AC (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00183E0 (RegisterKernelPepPerf.c)
 *     GetProcessorPackage @ 0x1C0018A68 (GetProcessorPackage.c)
 *     RegisterXsdDomain @ 0x1C0018F5C (RegisterXsdDomain.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00192DC (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C00196E4 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C001980C (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0019934 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0019B5C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0019CA0 (PepNotifyReportCStates.c)
 *     GetHvPpmCapabilities @ 0x1C001A0D0 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C001A260 (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001A4B0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001A980 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C001AD50 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C001AF74 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001B110 (RegisterHvFeedbackCountersCallback.c)
 *     InitAcpi1ThrottleStates @ 0x1C001B8FC (InitAcpi1ThrottleStates.c)
 *     GetRegistryDwordValue @ 0x1C001BE30 (GetRegistryDwordValue.c)
 *     GetRegistryQwordValue @ 0x1C001BEBC (GetRegistryQwordValue.c)
 *     InitPepPerfStates @ 0x1C001BF6C (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C238 (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C001C3EC (InitPep.c)
 *     InitializeEnergyEstimation @ 0x1C001D270 (InitializeEnergyEstimation.c)
 *     AcquirePccInterface @ 0x1C001D720 (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001D900 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C001F124 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C000637D + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
