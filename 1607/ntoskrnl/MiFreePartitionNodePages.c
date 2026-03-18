/*
 * XREFs of MiFreePartitionNodePages @ 0x1401F19C8
 * Callers:
 *     MiFreePartitionTree @ 0x1401F1A80 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1401F07A4 (MiActOnPartitionNodePages.c)
 */

void __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, char a3)
{
  __int16 *v6[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6[1], 0, 0x30uLL);
  v6[0] = a1;
  MiActOnPartitionNodePages(a2, (a3 & 1) == 0, v6);
}
