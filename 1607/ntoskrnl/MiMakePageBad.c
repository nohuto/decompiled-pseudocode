/*
 * XREFs of MiMakePageBad @ 0x1401FDFCC
 * Callers:
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 */

void __fastcall MiMakePageBad(__int64 a1, int a2)
{
  int *v4; // rax
  int *v5; // rsi

  v4 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v5 = v4;
  if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
  {
    MiChargeCommit((__int64)v4, 1uLL, 4);
    MiChargeResident(v5, 1uLL, 0xFFFFFFFFLL);
    *(_BYTE *)(a1 + 35) |= 0x40u;
  }
  if ( a2 == 1 )
    MiInsertPageInList(a1, 0x20u);
  _InterlockedIncrement(&dword_140327170);
}
