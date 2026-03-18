/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14002BDA0
 * Callers:
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MiCleanCfg @ 0x140075528 (MiCleanCfg.c)
 *     MiDeprioritizeVad @ 0x1400ACF60 (MiDeprioritizeVad.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14010E8C4 (MiUnmapLockedPagesInUserSpace.c)
 *     MiWaitForRotateToComplete @ 0x14010ED3C (MiWaitForRotateToComplete.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040C688 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmUnsecureVirtualMemory @ 0x14042A5DC (MmUnsecureVirtualMemory.c)
 *     MmSecureVirtualMemory @ 0x14042A98C (MmSecureVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14042E400 (MiUnmapViewOfSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140433DC0 (NtFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046CF1C (MiCfgInitializeProcess.c)
 *     MiDeleteTebRange @ 0x1404CD4BC (MiDeleteTebRange.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     MiSetPriorityVaRanges @ 0x1404E75C0 (MiSetPriorityVaRanges.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MiCfgMarkValidEntries @ 0x1404F42BC (MiCfgMarkValidEntries.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 *     MmStoreAllocateVirtualMemory @ 0x1405320CC (MmStoreAllocateVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140656B10 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x14065EF30 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x14065F568 (MiInitializeEnclave.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
