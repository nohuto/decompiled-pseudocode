/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14002C390
 * Callers:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiBeginProcessClean @ 0x1400755E8 (MiBeginProcessClean.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MiLockAddressSpaceToo @ 0x1400C65CC (MiLockAddressSpaceToo.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiInitializeVadBitMap @ 0x14046D8CC (MiInitializeVadBitMap.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MmCreateShadowMapping @ 0x14065BC98 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx

  --*(_WORD *)(a1 + 486);
  v3 = (volatile signed __int32 *)(a2 + 872);
  result = KeAbPreAcquire(a2 + 872, 0LL, 0);
  v5 = result;
  if ( _interlockedbittestandset64(v3, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v3, result, v3);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1736) |= 1u;
  return result;
}
