/*
 * XREFs of HvlpAcquireHypercallPage @ 0x1401BB178
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
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
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
