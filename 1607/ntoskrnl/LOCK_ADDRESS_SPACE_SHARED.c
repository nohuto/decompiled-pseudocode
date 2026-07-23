/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401343CC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F76C4 (MmOutSwapVirtualAddresses.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x1404B4CD8 (MmGetImageBase.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MmCheckForSafeExecution @ 0x14065B6F0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x14065B7C8 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
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
