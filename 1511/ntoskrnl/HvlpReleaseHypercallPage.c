/*
 * XREFs of HvlpReleaseHypercallPage @ 0x1401AF5BC
 * Callers:
 *     HvlQueryHypervisorTscAdjustment @ 0x14011A564 (HvlQueryHypervisorTscAdjustment.c)
 *     HvlGetCoverageData @ 0x1401AE12C (HvlGetCoverageData.c)
 *     HvlGetCoverageInfo @ 0x1401AE268 (HvlGetCoverageInfo.c)
 *     HvlResetCoverageVector @ 0x1401AE4A4 (HvlResetCoverageVector.c)
 *     HvlQueryNumaDistance @ 0x1401AEA30 (HvlQueryNumaDistance.c)
 *     HvlpDepositPages @ 0x1401AEED8 (HvlpDepositPages.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401AF0D8 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpGetVpIndexFromApicId @ 0x1401AF290 (HvlpGetVpIndexFromApicId.c)
 *     HvlpMapStatisticsPage @ 0x1401AF48C (HvlpMapStatisticsPage.c)
 *     HvlpSetLogicalProcessorProperty @ 0x1401AFC8C (HvlpSetLogicalProcessorProperty.c)
 *     sub_1401AFE90 @ 0x1401AFE90 (sub_1401AFE90.c)
 *     HvlpStartVirtualProcessor @ 0x1401AFFB8 (HvlpStartVirtualProcessor.c)
 *     HvlEnterSleepState @ 0x1401B00A8 (HvlEnterSleepState.c)
 *     HvlLpReadCpuid @ 0x1401B0550 (HvlLpReadCpuid.c)
 *     HvlLpReadMultipleMsr @ 0x1401B0644 (HvlLpReadMultipleMsr.c)
 *     HvlLpWriteMultipleMsr @ 0x1401B0770 (HvlLpWriteMultipleMsr.c)
 *     HvlLpWritebackInvalidate @ 0x1401B0854 (HvlLpWritebackInvalidate.c)
 *     HvlMapDeviceInterrupt @ 0x1401B08E0 (HvlMapDeviceInterrupt.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1401B0B6C (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyHpetEnabled @ 0x1401B0C28 (HvlNotifyHpetEnabled.c)
 *     HvlNotifyRootCrashdump @ 0x1401B0CAC (HvlNotifyRootCrashdump.c)
 *     HvlQueryAssociatedProcessors @ 0x1401B0DE8 (HvlQueryAssociatedProcessors.c)
 *     HvlRetargetDeviceInterrupt @ 0x1401B0F5C (HvlRetargetDeviceInterrupt.c)
 *     HvlSetHpetConfig @ 0x1401B121C (HvlSetHpetConfig.c)
 *     HvlSetPartitionProperty @ 0x1401B1398 (HvlSetPartitionProperty.c)
 *     HvlSetSystemMachineCheckProperty @ 0x1401B1418 (HvlSetSystemMachineCheckProperty.c)
 *     HvlSetSystemSleepProperty @ 0x1401B14A4 (HvlSetSystemSleepProperty.c)
 *     HvlSvmGetDeviceCapabilities @ 0x1401B19F8 (HvlSvmGetDeviceCapabilities.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401B1B28 (HvlSvmGetSystemCapabilities.c)
 *     HvlUnmapDeviceInterrupt @ 0x1401B1DB0 (HvlUnmapDeviceInterrupt.c)
 *     HvlpSlowAcknowledgePageRequest @ 0x1401B2120 (HvlpSlowAcknowledgePageRequest.c)
 *     HvlpSlowFlushPasidAddressList @ 0x1401B21D0 (HvlpSlowFlushPasidAddressList.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401B2278 (HvlpSlowSendSyntheticClusterIpiEx.c)
 *     HvlNotifyAcpiReenabled @ 0x1401B2840 (HvlNotifyAcpiReenabled.c)
 *     HvlPrepareForHibernate @ 0x1401B2900 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x1401B2A10 (HvlPrepareForSecureHibernate.c)
 *     HvlpConfigureLegacyPowerPolicySetting @ 0x1401B2BB8 (HvlpConfigureLegacyPowerPolicySetting.c)
 *     HvlpInitializePowerStatistics @ 0x1401B2C20 (HvlpInitializePowerStatistics.c)
 *     HvlpSetPowerProperty @ 0x1401B2EF8 (HvlpSetPowerProperty.c)
 *     HvlpDetermineEnlightenments @ 0x1401B3EC0 (HvlpDetermineEnlightenments.c)
 *     HvlCollectLivedump @ 0x1401B458C (HvlCollectLivedump.c)
 *     HvlpLogIommuInitStatus @ 0x1401B4F1C (HvlpLogIommuInitStatus.c)
 *     sub_1401B55C0 @ 0x1401B55C0 (sub_1401B55C0.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1402219C8 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x140221A5C (HvlpSlowFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushListTb @ 0x140221B58 (HvlpSlowFlushListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x140221CA8 (HvlpSlowFlushListTbEx.c)
 *     HvlMapGpaPages @ 0x140221E74 (HvlMapGpaPages.c)
 *     sub_1405F68C8 @ 0x1405F68C8 (sub_1405F68C8.c)
 *     HvlpLpCpuid @ 0x1407828D4 (HvlpLpCpuid.c)
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
