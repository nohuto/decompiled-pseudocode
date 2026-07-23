/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924
 * Callers:
 *     MiInsertNonPagedPoolOnSlist @ 0x140011050 (MiInsertNonPagedPoolOnSlist.c)
 *     MiInitializeSystemPageTable @ 0x140020B3C (MiInitializeSystemPageTable.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiPfnRangeIsZero @ 0x14013EC44 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013F184 (MiDemoteLargePage.c)
 *     MmStealTopLevelPage @ 0x1401E3504 (MmStealTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

__int64 __fastcall MI_INTERLOCKED_EXCHANGE_PTE(volatile __int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9

  _InterlockedExchange64(a1, a2);
  if ( (unsigned int)MiPteInShadowRange(a1, a2) )
    MiWritePteShadow(v2, a2);
  return v3;
}
