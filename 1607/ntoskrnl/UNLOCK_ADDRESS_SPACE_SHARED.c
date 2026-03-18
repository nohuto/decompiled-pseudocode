/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002BE60
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140133E5C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLeapPrefetch @ 0x1401E8460 (MiLeapPrefetch.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046CF1C (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1404D1238 (MmGetImageBase.c)
 *     MiUnlockVadRange @ 0x1404F37E8 (MiUnlockVadRange.c)
 *     MmCheckForSafeExecution @ 0x14065B60C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406624FC (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140662878 (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1736) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 872);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
