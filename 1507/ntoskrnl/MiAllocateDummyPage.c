/*
 * XREFs of MiAllocateDummyPage @ 0x1407C79D0
 * Callers:
 *     MiInitializeDummyPages @ 0x1407C6220 (MiInitializeDummyPages.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiAllocateDummyPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Page; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 DemandZeroPte; // rax
  __int64 v9; // rcx

  MiChargeResident(MiSystemPartition, 1uLL, 0LL, a4);
  _InterlockedExchangeAdd64(&qword_14034F8C8, 1uLL);
  MiChargeCommit((__int64)MiSystemPartition, 1uLL, 1);
  Page = MiGetPage((__int64)MiSystemPartition, 0, 8u);
  if ( Page == -1 )
    KeBugCheckEx(0x7Du, qword_1403551D0, qword_1403551C0, BugCheckParameter3, 0x102uLL);
  v5 = 0;
  v6 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)v6 = 0LL;
  MiFinalizePageAttribute(v6, 1LL, 0);
  *(_QWORD *)(v6 + 8) = 0xFFFFF68000000000uLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v9 = *(_QWORD *)(v6 + 40);
  *(_BYTE *)(v6 + 34) |= 0x2Fu;
  *(_QWORD *)(v6 + 16) = DemandZeroPte;
  *(_WORD *)(v6 + 32) = 2;
  *(_QWORD *)(v6 + 40) = v9 & 0xFDFFFFF000000000uLL | 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v6;
}
