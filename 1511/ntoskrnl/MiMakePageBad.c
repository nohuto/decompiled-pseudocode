/*
 * XREFs of MiMakePageBad @ 0x1401E5A10
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

void __fastcall MiMakePageBad(__int64 a1, int a2)
{
  int *v4; // rax
  int *v5; // rdi

  v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v5 = v4;
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit((unsigned __int64)v4, 1uLL, 4uLL);
    MiChargeResident(v5, 1uLL, 0xFFFFFFFFLL);
    if ( v5 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF558, 1uLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    MiInsertPageInList(a1, 0x20u);
  _InterlockedAdd(&dword_1402FED60, 1u);
}
