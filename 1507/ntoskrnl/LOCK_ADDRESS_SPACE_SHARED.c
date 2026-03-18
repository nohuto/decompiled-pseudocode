/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     MmGetImageBase @ 0x140466584 (MmGetImageBase.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MmCheckForSafeExecution @ 0x1406A57C0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int64 *)(a2 + 872);
  v6 = KeAbPreAcquire(a2 + 872, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(v5, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v5, v6, v5);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1732) |= 2u;
  return result;
}
