/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140132E08
 * Callers:
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014AC3C (MiInitializeWorkingSetManagerParameters.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1248 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     MmGetChannelInformation @ 0x14054C23C (MmGetChannelInformation.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140661134 (MiUpdatePartitionLargePfnBitMap.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  _BYTE *result; // rax
  _BYTE *v4; // rbx

  --*(_WORD *)(a2 + 486);
  v2 = (unsigned __int64 *)(a1 + 224);
  result = (_BYTE *)KeAbPreAcquire(a1 + 224, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(v2, result, (ULONG_PTR)v2);
  if ( v4 )
  {
    result = (_BYTE *)*((_QWORD *)v4 + 4);
    v4[26] |= 1u;
  }
  return result;
}
