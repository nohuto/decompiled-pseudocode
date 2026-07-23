/*
 * XREFs of MiFreePartitionPhysicalPages @ 0x140660698
 * Callers:
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 * Callees:
 *     MiReturnPartitionPagesToParent @ 0x1401F1DA0 (MiReturnPartitionPagesToParent.c)
 */

void __fastcall MiFreePartitionPhysicalPages(__int64 a1)
{
  do
    MiReturnPartitionPagesToParent(a1);
  while ( *(_QWORD *)(a1 + 6288) );
}
