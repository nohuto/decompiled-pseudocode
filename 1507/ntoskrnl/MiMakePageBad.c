/*
 * XREFs of MiMakePageBad @ 0x140232438
 * Callers:
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140232B18 (MiScrubNode.c)
 *     MiScrubProcesses @ 0x1406AA9CC (MiScrubProcesses.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 */

int __fastcall MiMakePageBad(__int64 a1, int a2)
{
  __int16 *v4; // rax
  __int16 *v5; // rdi
  __int64 v6; // r9

  v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v5 = v4;
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit((__int64)v4, 1uLL, 4);
    MiChargeResident(v5, 1uLL, 0xFFFFFFFFLL, v6);
    v4 = MiSystemPartition;
    if ( v5 == MiSystemPartition )
      LODWORD(v4) = _InterlockedExchangeAdd64(&qword_14034F9E0, 1uLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    LODWORD(v4) = MiInsertPageInList(a1, 0x20u);
  _InterlockedAdd(&dword_14034F214, 1u);
  return (int)v4;
}
