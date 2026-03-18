/*
 * XREFs of MiLockVad @ 0x140089660
 * Callers:
 *     MiInsertPrivateVad @ 0x14007CE90 (MiInsertPrivateVad.c)
 *     MiCleanCfg @ 0x14012851C (MiCleanCfg.c)
 *     MiWaitForRotateToComplete @ 0x140139DBC (MiWaitForRotateToComplete.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiCfgInitializeProcess @ 0x14046549C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     NtAreMappedFilesTheSame @ 0x140551204 (NtAreMappedFilesTheSame.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     MmIsFileMapped @ 0x1406A5898 (MmIsFileMapped.c)
 *     MiDeleteAllPartialCloneVads @ 0x1406AA5D0 (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rbx

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int32 *)(a2 + 40);
  result = KeAbPreAcquire(a2 + 40, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64(v5, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v5, result, v5);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1732) |= 0x80u;
  return result;
}
