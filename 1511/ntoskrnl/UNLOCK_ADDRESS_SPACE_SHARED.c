/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1404CF44C (MmGetImageBase.c)
 *     MmCheckForSafeExecution @ 0x140625D80 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140625E58 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14062B874 (MiFreeLargePageView.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  *(_BYTE *)(a1 + 1732) &= ~2u;
  v2 = a2 + 872;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 872), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 872));
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery(v4);
  return result;
}
