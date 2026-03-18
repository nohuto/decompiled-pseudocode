/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1401BB294
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
 *     MmGetPhysicalAddress @ 0x14002500C (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
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
  if ( (HvlpFlags & 8) != 0 )
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
