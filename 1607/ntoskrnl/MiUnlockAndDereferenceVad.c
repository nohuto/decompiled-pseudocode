/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14002B920
 * Callers:
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x14002C070 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiCleanCfg @ 0x1400755A8 (MiCleanCfg.c)
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14010EE28 (MiUnmapLockedPagesInUserSpace.c)
 *     MiWaitForRotateToComplete @ 0x14010F2A0 (MiWaitForRotateToComplete.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmUnsecureVirtualMemory @ 0x1404294AC (MmUnsecureVirtualMemory.c)
 *     MmSecureVirtualMemory @ 0x14042985C (MmSecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14042D2D0 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404C9B34 (MiSetPriorityVaRanges.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiCfgMarkValidEntries @ 0x1404D7248 (MiCfgMarkValidEntries.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405298F4 (NtAreMappedFilesTheSame.c)
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065F014 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x14065F64C (MiInitializeEnclave.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  BOOL v2; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v4; // ax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
    && (*((_DWORD *)P + 12) & 0x80000) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v4 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v4;
  if ( !v4 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
