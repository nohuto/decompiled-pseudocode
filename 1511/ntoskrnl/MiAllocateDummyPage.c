/*
 * XREFs of MiAllocateDummyPage @ 0x140748580
 * Callers:
 *     MiInitializeDummyPages @ 0x1407460E4 (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 MiAllocateDummyPage()
{
  __int64 Page; // rax
  __int64 v1; // rbx
  unsigned __int8 v2; // al
  unsigned __int64 v3; // rcx

  MiChargeResident(MiSystemPartition, 1uLL, 0LL);
  _InterlockedExchangeAdd64(&qword_1402FF448, 1uLL);
  MiChargeCommit((unsigned __int64)MiSystemPartition, 1uLL, 1uLL);
  Page = MiGetPage((__int64)MiSystemPartition, 0, 8u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_140301390, qword_140301380, BugCheckParameter3, 0x102uLL);
  v1 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)v1 = 0LL;
  MiFinalizePageAttribute(v1, 1LL, 0);
  *(_QWORD *)(v1 + 8) = 0xFFFFF68000000000uLL;
  v2 = MiLockPageInline(v1);
  *(_BYTE *)(v1 + 34) |= 0x2Fu;
  *(_WORD *)(v1 + 32) = 2;
  v3 = *(_QWORD *)(v1 + 40) & 0xFDFFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v1 + 16) = 128LL;
  *(_QWORD *)(v1 + 40) = v3 | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return v1;
}
