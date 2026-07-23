/*
 * XREFs of MiFreePartitionTree @ 0x1401F18AC
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiClearPartitionPageBitMap @ 0x1401F1074 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     MiFreePartitionNodePages @ 0x1401F17F4 (MiFreePartitionNodePages.c)
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
