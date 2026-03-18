/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x140062910
 * Callers:
 *     MiCleanCfg @ 0x14001F518 (MiCleanCfg.c)
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiWaitForRotateToComplete @ 0x1401036B0 (MiWaitForRotateToComplete.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1401072A0 (MiUnmapLockedPagesInUserSpace.c)
 *     MiCfgMarkValidEntries @ 0x1403CAC70 (MiCfgMarkValidEntries.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1403E8334 (NtAreMappedFilesTheSame.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MmUnsecureVirtualMemory @ 0x1403F636C (MmUnsecureVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14041BC60 (MiUnmapViewOfSection.c)
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MmSecureVirtualMemory @ 0x1404A6550 (MmSecureVirtualMemory.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 *     MiSetPriorityVaRanges @ 0x1404BFD14 (MiSetPriorityVaRanges.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     MiCreateEnclave @ 0x1406297C0 (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140629DFC (MiInitializeEnclave.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(PVOID P)
{
  BOOL v2; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int16 v5; // ax

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1
    && (*((_DWORD *)P + 12) & 0x80000) != 0;
  CurrentThread = KeGetCurrentThread();
  BYTE4(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 5);
  KeAbPostRelease((ULONG_PTR)P + 40);
  v5 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v5;
  if ( !v5 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v4);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
