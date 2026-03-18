/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14012D814 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x1401E1508 (MmOutSwapVirtualAddresses.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
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
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rsi
  __int64 v4; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v3 = (volatile signed __int64 *)(a2 + 872);
  v4 = KeAbPreAcquire(a2 + 872, 0LL, 0LL);
  result = _InterlockedCompareExchange64(v3, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)v3, v4, (ULONG_PTR)v3);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1732) |= 2u;
  return result;
}
