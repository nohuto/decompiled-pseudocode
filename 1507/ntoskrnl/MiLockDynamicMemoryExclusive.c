/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x14015A0E4
 * Callers:
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiClearChildPartitionMdl @ 0x14021CE50 (MiClearChildPartitionMdl.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  --*(_WORD *)(a2 + 486);
  v4 = (unsigned __int64 *)(a1 + 232);
  result = KeAbPreAcquire(a1 + 232, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, (ULONG_PTR)v4, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
