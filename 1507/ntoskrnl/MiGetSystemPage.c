/*
 * XREFs of MiGetSystemPage @ 0x1400E1348
 * Callers:
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiGetSystemPage(__int64 a1)
{
  _WORD *v1; // rax
  __int16 v2; // bx
  unsigned int v3; // ebx
  __int64 i; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v7; // edi

  v1 = *(_WORD **)a1;
  v2 = *(_WORD *)(a1 + 8);
  v3 = *(unsigned __int16 *)(a1 + 10) | (unsigned __int16)(++*v1 & v2);
  for ( i = MiGetPage((__int64)MiSystemPartition, v3, 0xC2u); i == -1; i = MiGetPage(
                                                                             (__int64)MiSystemPartition,
                                                                             v3,
                                                                             0xC2u) )
  {
    if ( KeGetCurrentIrql() == 2 )
      return 0LL;
    MiWaitForFreePage(MiSystemPartition);
  }
  v5 = 48 * i - 0x58000000000LL;
  MiFinalizePageAttribute(v5, 1LL, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return v5;
}
