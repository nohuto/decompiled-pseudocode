/*
 * XREFs of MiAllocateDummyPage @ 0x140798314
 * Callers:
 *     MiInitializeDummyPages @ 0x140796198 (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rbx
  unsigned __int64 v2; // rdx

  MiChargeResident(MiSystemPartition, 1uLL, 0LL);
  MiChargeCommit((__int64)MiSystemPartition, 1uLL, 1);
  Page = MiGetPage((__int64)MiSystemPartition, 0, 8u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_140324E10, qword_140324E00, BugCheckParameter3, 0x102uLL);
  v1 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)v1 = 0LL;
  MiFinalizePageAttribute(v1, 1u, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  MiLockPageInline(v1);
  *(_QWORD *)(v1 + 16) = MiMakeDemandZeroPte(4);
  *(_WORD *)(v1 + 32) = 2;
  *(_BYTE *)(v1 + 34) |= 0x2Fu;
  *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 40) & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return v1;
}
