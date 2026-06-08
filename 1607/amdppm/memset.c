/*
 * XREFs of memset @ 0x1C0006B40
 * Callers:
 *     GetProcessorStatusInfo @ 0x1C0001640 (GetProcessorStatusInfo.c)
 *     GetWmiBiosThrottleStateInfo @ 0x1C0001770 (GetWmiBiosThrottleStateInfo.c)
 *     GetWmiBiosIdleStateInfo @ 0x1C0001970 (GetWmiBiosIdleStateInfo.c)
 *     AcpiEval_OSC @ 0x1C0001B54 (AcpiEval_OSC.c)
 *     PepIdlePrepare @ 0x1C0002160 (PepIdlePrepare.c)
 *     RegisterKernelIdleStates @ 0x1C0003830 (RegisterKernelIdleStates.c)
 *     UpdateKernelPlatformStates @ 0x1C0003C3C (UpdateKernelPlatformStates.c)
 *     InitLegacyPccInternal @ 0x1C000400C (InitLegacyPccInternal.c)
 *     PepParkPreference @ 0x1C0005110 (PepParkPreference.c)
 *     PepParkMask @ 0x1C00052F0 (PepParkMask.c)
 *     EvtDriverDeviceAdd @ 0x1C000F000 (EvtDriverDeviceAdd.c)
 *     RegisterWmi @ 0x1C000F4D8 (RegisterWmi.c)
 *     AcpiEval_CST @ 0x1C000F9C8 (AcpiEval_CST.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FE24 (AcpiEval_PSD_TSD.c)
 *     AcpiEval_PSS @ 0x1C0010094 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001030C (AcpiEval_XPSS.c)
 *     AcpiEval_TSS @ 0x1C0010690 (AcpiEval_TSS.c)
 *     AcpiEval_CSD @ 0x1C0010988 (AcpiEval_CSD.c)
 *     AcpiEval_CPC @ 0x1C0010D48 (AcpiEval_CPC.c)
 *     EnumerateControlMethods @ 0x1C0011B70 (EnumerateControlMethods.c)
 *     ProcLibDeviceCreate @ 0x1C0011E48 (ProcLibDeviceCreate.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C00151DC (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C00155E4 (PepQueryVetoList.c)
 *     PepQueryName @ 0x1C001570C (PepQueryName.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0015834 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C0015A5C (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyReportCStates @ 0x1C0015BA0 (PepNotifyReportCStates.c)
 *     RegisterXsdDomain @ 0x1C00162C4 (RegisterXsdDomain.c)
 *     CpcHighestNotifyWorker @ 0x1C0016938 (CpcHighestNotifyWorker.c)
 *     InitAcpi1CStates @ 0x1C0016BE8 (InitAcpi1CStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00173E4 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C0017A78 (RegisterKernelPlatformStates.c)
 *     RegisterKernelIdleDomains @ 0x1C0017DF4 (RegisterKernelIdleDomains.c)
 *     InitPerfStatesInternal @ 0x1C00184B8 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0018C6C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001A060 (RegisterKernelPepPerf.c)
 *     RegisterKernelPackage @ 0x1C001A5E0 (RegisterKernelPackage.c)
 *     InitAcpi1ThrottleStates @ 0x1C001AC0C (InitAcpi1ThrottleStates.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001B26C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitPepPerfStates @ 0x1C001C3EC (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x1C001C6B8 (PepNotifyQueryFeedbackCounters.c)
 *     InitPep @ 0x1C001C8C8 (InitPep.c)
 *     RegisterHvCStates @ 0x1C001CED0 (RegisterHvCStates.c)
 *     RegisterHvPerfStates @ 0x1C001D120 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001D600 (RegisterHvLegacyPcc.c)
 *     RegisterHvPackage @ 0x1C001D9D0 (RegisterHvPackage.c)
 *     RegisterVmIdleStates @ 0x1C001DBF4 (RegisterVmIdleStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x1C001DD90 (RegisterHvFeedbackCountersCallback.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001E168 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C001E1DC (GetRegistryQwordValue.c)
 *     AcquirePccInterface @ 0x1C001E2A4 (AcquirePccInterface.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001E484 (RegisterSubspaceForGenAddr.c)
 *     DriverEntry @ 0x1C001F170 (DriverEntry.c)
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C001FBB4 (PopulateEnergyEstimationModel.c)
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
    return (void *)((__int64 (__fastcall *)(_QWORD *, _QWORD))((char *)&loc_1C0006BFD + 4 * (8 - ((Size >> 3) & 7)) + 2))(
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
