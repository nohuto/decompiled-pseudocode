/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14008E5C0
 * Callers:
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiObtainReferencedSecureVad @ 0x140089350 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     MiCleanCfg @ 0x14012851C (MiCleanCfg.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140133700 (MiUnmapLockedPagesInUserSpace.c)
 *     MiWaitForRotateToComplete @ 0x140139DBC (MiWaitForRotateToComplete.c)
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1404B5984 (MmUnsecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUnmapViewOfSection @ 0x1404B72D0 (MiUnmapViewOfSection.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiCfgMarkValidEntries @ 0x1404FBBC8 (MiCfgMarkValidEntries.c)
 *     MiSetPriorityVaRanges @ 0x1404FBD58 (MiSetPriorityVaRanges.c)
 *     MmSecureVirtualMemory @ 0x14052FA34 (MmSecureVirtualMemory.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  BOOL v2; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int16 v5; // ax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && *((int *)P + 12) < 0;
  CurrentThread = KeGetCurrentThread();
  BYTE4(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v5;
  if ( !v5 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
