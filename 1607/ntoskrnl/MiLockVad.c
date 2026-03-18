/*
 * XREFs of MiLockVad @ 0x14002BFB0
 * Callers:
 *     MiCleanCfg @ 0x140075528 (MiCleanCfg.c)
 *     MiInsertPrivateVad @ 0x1400965F0 (MiInsertPrivateVad.c)
 *     MiWaitForRotateToComplete @ 0x14010ED3C (MiWaitForRotateToComplete.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140133E5C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiWaitForVadDeletion @ 0x1401F7718 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046CF1C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1405293B4 (NtAreMappedFilesTheSame.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MmIsFileMapped @ 0x14065B6E4 (MmIsFileMapped.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x14066305C (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  --*(_WORD *)(a1 + 486);
  v3 = (volatile signed __int32 *)(a2 + 40);
  result = KeAbPreAcquire(a2 + 40);
  v5 = result;
  if ( _interlockedbittestandset64(v3, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v3, result, v3);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1736) |= 0x80u;
  return result;
}
