/*
 * XREFs of MiFreePartitionTree @ 0x1401F1A80
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1248 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MiHotAddPartitionMemory @ 0x1406605D8 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028500 (RtlAvlRemoveNode.c)
 *     MiFreePartitionNodePages @ 0x1401F19C8 (MiFreePartitionNodePages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePartitionTree(__int16 *a1, unsigned __int64 *a2, char a3)
{
  PVOID *i; // rbx

  for ( i = (PVOID *)*a2; i; i = (PVOID *)*a2 )
  {
    RtlAvlRemoveNode(a2, (__int64)i);
    MiFreePartitionNodePages(a1, (__int64)i, a3);
    ExFreePoolWithTag(i[5], 0);
    ExFreePoolWithTag(i, 0);
  }
}
