/*
 * XREFs of MiFreeZeroPageSizeIndex @ 0x14001BB40
 * Callers:
 *     MiSetPfnOwnedAndActive @ 0x14001B640 (MiSetPfnOwnedAndActive.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     MiPfnsWorthTrying @ 0x140104C30 (MiPfnsWorthTrying.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiPurgeZeroList @ 0x140120600 (MiPurgeZeroList.c)
 *     MiFindLargeNodePage @ 0x1401E3320 (MiFindLargeNodePage.c)
 *     MiTransferPartitionPageRun @ 0x1401F2058 (MiTransferPartitionPageRun.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiFreeLargeZeroPages @ 0x140662930 (MiFreeLargeZeroPages.c)
 *     MiGetFastLargePage @ 0x1406629F0 (MiGetFastLargePage.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSizeIndex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v2 = &MiLargePageContainingFrames;
  v3 = 0;
  while ( v1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 3 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
