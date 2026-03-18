/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1401AEBD8
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
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlpAcquireHypercallPage(PHYSICAL_ADDRESS *a1, LONG a2, __int64 a3, __int64 a4)
{
  __int64 HypercallCachedPages; // rsi
  __int16 v9; // ax
  struct _KPRCB *v10; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r14
  PSLIST_ENTRY v13; // rax
  unsigned __int64 v14; // rbx
  PHYSICAL_ADDRESS Next; // rax
  unsigned __int8 CurrentIrql; // al
  __int16 v17; // ax
  struct _KPRCB *v18; // rax
  __int16 v19; // [rsp+40h] [rbp-8h]

  HypercallCachedPages = 0LL;
  if ( (HvlpFlags & 0x10) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    v14 = (unsigned __int64)v13;
    if ( v13 )
    {
      a1[2].QuadPart = (LONGLONG)v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
      a1->LowPart = 1;
      a1[1].QuadPart = (LONGLONG)CurrentPrcb;
    }
    else
    {
      if ( (a2 & 4) != 0 )
        return 0LL;
      if ( !a3 )
      {
        a1->LowPart = 4;
        v17 = v19;
        _disable();
        a1[1].HighPart = a2;
        LOBYTE(a1[1].LowPart) = (v17 & 0x200) != 0;
        v18 = KeGetCurrentPrcb();
        if ( (a2 & 1) != 0 )
          return (__int64)v18->HypercallCachedPages;
        if ( (a2 & 2) != 0 )
          return (__int64)v18->HypercallCachedPages + 4096;
        return v14;
      }
      v14 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( ((v14 ^ (v14 + a4 - 1)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        v14 = (v14 + a4 - 1) & 0xFFFFFFFFFFFFF000uLL;
      a1->LowPart = 2;
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(a1[1].LowPart) = CurrentIrql;
      if ( CurrentIrql < 2u )
        __writecr8(2uLL);
      Next = MmGetPhysicalAddress((PVOID)v14);
    }
    a1[3] = Next;
    return v14;
  }
  a1->LowPart = 4;
  v9 = v19;
  _disable();
  a1[1].HighPart = a2;
  LOBYTE(a1[1].LowPart) = (v9 & 0x200) != 0;
  v10 = KeGetCurrentPrcb();
  if ( (a2 & 1) != 0 )
  {
    HypercallCachedPages = (__int64)v10->HypercallCachedPages;
  }
  else if ( (a2 & 2) != 0 )
  {
    HypercallCachedPages = (__int64)v10->HypercallCachedPages + 4096;
  }
  result = HypercallCachedPages;
  a1[3] = *(PHYSICAL_ADDRESS *)(HypercallCachedPages + 16);
  return result;
}
