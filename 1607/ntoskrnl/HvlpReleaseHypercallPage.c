/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1401BBD4C
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140114714 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetCoverageData @ 0x1401BA89C (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401BA9D8 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401BAC40 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401BAF48 (HvlQueryNumaDistance.c)
 *     HvlpCommitLpIndices @ 0x1401BB410 (HvlpCommitLpIndices.c)
 *     HvlpDepositPages @ 0x1401BB624 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401BB800 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401BB9B8 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401BBBB4 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401BC4BC (HvlpSetLogicalProcessorProperty.c)
 *     HvlpStartLogicalProcessor @ 0x1401BC6C0 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1401BC7E8 (HvlpStartVirtualProcessor.c)
 *     HvlEnterSleepState @ 0x1401BC9C0 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCE14 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1401BCF14 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1401BD008 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1401BD134 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401BD218 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD2A4 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401BD530 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401BD5E4 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401BD668 (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401BD7B0 (HvlQueryAssociatedProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401BD8AC (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401BDB64 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401BDCE0 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401BDD60 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401BDDEC (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401BE340 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401BE474 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401BE6FC (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401BEA6C (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401BEB1C (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401BEBC4 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401BF190 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401BF250 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401BF360 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401BF544 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401BF5AC (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401BF884 (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401BF9E0 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401C0300 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1401C0AC8 (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0C30 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1401C1004 (HvlpLogIommuInitStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401C128C (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401C1AA4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushListTb @ 0x1401C1B2C (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1C78 (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1401C2098 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14023CE6C (HvlpAddPhysicalMemory.c)
 *     HvlMapGpaPages @ 0x14023CF70 (HvlMapGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140620478 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1407CE184 (HvlpLpCpuid.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 HypercallCachedPages; // rdx
  struct _SLIST_ENTRY *v2; // rdx
  _SLIST_ENTRY *v3; // rax
  union _SLIST_HEADER *v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  bool v8; // zf

  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v2 = *(struct _SLIST_ENTRY **)(a1 + 16);
    v3 = *(_SLIST_ENTRY **)(a1 + 24);
    v4 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 8) + 24560LL);
    v2[1].Next = v3;
    LOBYTE(v5) = (unsigned __int8)RtlpInterlockedPushEntrySList(v4, v2);
  }
  else if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    LOBYTE(v5) = *(_BYTE *)(a1 + 8);
    if ( (unsigned __int8)v5 < 2u )
      __writecr8((unsigned __int8)v5);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 12);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (v6 & 1) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages;
    }
    else if ( (v6 & 2) != 0 )
    {
      HypercallCachedPages = (__int64)CurrentPrcb->HypercallCachedPages + 4096;
    }
    v8 = *(_BYTE *)(a1 + 8) == 0;
    v5 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(HypercallCachedPages + 16) = v5;
    if ( !v8 )
      _enable();
  }
  return v5;
}
