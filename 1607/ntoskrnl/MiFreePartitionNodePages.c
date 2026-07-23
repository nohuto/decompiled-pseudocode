/*
 * XREFs of MiFreePartitionNodePages @ 0x1401F17F4
 * Callers:
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 */

void __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, char a3)
{
  __int16 *v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6[1], 0, 0x30uLL);
  v6[0] = a1;
  MiActOnPartitionNodePages(a2, (a3 & 1) == 0, v6);
}
