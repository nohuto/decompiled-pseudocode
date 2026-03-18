/*
 * XREFs of MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1AF8
 * Callers:
 *     MiInsertNonPagedPoolOnSlist @ 0x1400114D0 (MiInsertNonPagedPoolOnSlist.c)
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiPfnRangeIsZero @ 0x14013E6D4 (MiPfnRangeIsZero.c)
 *     MiDemoteLargePage @ 0x14013EC14 (MiDemoteLargePage.c)
 *     MmStealTopLevelPage @ 0x1401E36D8 (MmStealTopLevelPage.c)
 *     MiInitializeDynamicBitmap @ 0x140535E80 (MiInitializeDynamicBitmap.c)
 *     NtMapUserPhysicalPages @ 0x14065D72C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DBA8 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
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
