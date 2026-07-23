/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1401BBC30
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x140114C84 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetCoverageData @ 0x1401BA780 (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401BA8BC (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401BAB24 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401BAE2C (HvlQueryNumaDistance.c)
 *     HvlpCommitLpIndices @ 0x1401BB2F4 (HvlpCommitLpIndices.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401BB6E4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401BB89C (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401BBA98 (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401BC3A0 (HvlpSetLogicalProcessorProperty.c)
 *     HvlpStartLogicalProcessor @ 0x1401BC5A4 (HvlpStartLogicalProcessor.c)
 *     HvlpStartVirtualProcessor @ 0x1401BC6CC (HvlpStartVirtualProcessor.c)
 *     HvlEnterSleepState @ 0x1401BC8A4 (HvlEnterSleepState.c)
 *     HvlHvDebuggerPowerHandler @ 0x1401BCCF8 (HvlHvDebuggerPowerHandler.c)
 *     HvlLpReadCpuid @ 0x1401BCDF8 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1401BCEEC (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1401BD018 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401BD0FC (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401BD188 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401BD414 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401BD4C8 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401BD54C (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401BD694 (HvlQueryAssociatedProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401BD790 (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401BDA48 (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401BDBC4 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401BDC44 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401BDCD0 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401BE224 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401BE358 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401BE5E0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401BE950 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401BEA00 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401BEAA8 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401BF074 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401BF134 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401BF244 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401BF428 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401BF490 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401BF768 (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401BF8C4 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401C01E4 (HvlCollectLivedump.c)
 *     HvlpCheckTscSync @ 0x1401C09AC (HvlpCheckTscSync.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0B14 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogIommuInitStatus @ 0x1401C0EE8 (HvlpLogIommuInitStatus.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401C1170 (HvlpDetectHypervisorSchedulerType.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1401C1988 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushListTb @ 0x1401C1A10 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1401C1B5C (HvlpSlowFlushListTbEx.c)
 *     HvlpInvokeGetPageListHypercall @ 0x1401C1F7C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpAddPhysicalMemory @ 0x14023CD50 (HvlpAddPhysicalMemory.c)
 *     HvlMapGpaPages @ 0x14023CE54 (HvlMapGpaPages.c)
 *     HvlpCreateRootVirtualProcessor @ 0x14062052C (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x1407CE184 (HvlpLpCpuid.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpReleaseHypercallPage(__int64 a1)
{
  __int64 HypercallCachedPages; // rdx
  _SLIST_ENTRY *v2; // rdx
  _SLIST_ENTRY *v3; // rax
  _SLIST_HEADER *v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  struct _KPRCB *CurrentPrcb; // rax
  bool v8; // zf

  HypercallCachedPages = 0LL;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v2 = *(_SLIST_ENTRY **)(a1 + 16);
    v3 = *(_SLIST_ENTRY **)(a1 + 24);
    v4 = (_SLIST_HEADER *)(*(_QWORD *)(a1 + 8) + 24560LL);
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
