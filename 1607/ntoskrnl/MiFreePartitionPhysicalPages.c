/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x1406605B4
 * Callers:
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x1401F1F74 (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  do
    MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 6288) );
}
