/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14002BED0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140133E5C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046CF1C (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1404D1238 (MmGetImageBase.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x14065B60C (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406624FC (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140662878 (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v3 = (volatile signed __int64 *)(a2 + 872);
  v4 = KeAbPreAcquire(a2 + 872);
  result = _InterlockedCompareExchange64(v3, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v3, v4, v3);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1736) |= 2u;
  return result;
}
