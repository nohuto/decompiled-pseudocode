/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14008A330
 * Callers:
 *     MiBeginProcessClean @ 0x1400DDC48 (MiBeginProcessClean.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiLockAddressSpaceToo @ 0x1400F13C4 (MiLockAddressSpaceToo.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiWaitForForkToComplete @ 0x1402314F8 (MiWaitForForkToComplete.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiInitializeVadBitMap @ 0x140467E18 (MiInitializeVadBitMap.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MmCreateShadowMapping @ 0x1406A833C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x1406A84B8 (MmDeleteShadowMapping.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rbx

  --*(_WORD *)(a1 + 486);
  v5 = (volatile signed __int32 *)(a2 + 872);
  result = KeAbPreAcquire(a2 + 872, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64(v5, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v5, result, v5);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  *(_BYTE *)(a1 + 1732) |= 1u;
  return result;
}
