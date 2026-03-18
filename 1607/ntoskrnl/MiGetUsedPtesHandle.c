/*
 * XREFs of MiGetUsedPtesHandle @ 0x1401EF7E0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiUpdatePageTableUseCount @ 0x140037450 (MiUpdatePageTableUseCount.c)
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x140042000 (MiResolveSharedZeroFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeletePhysmemVad @ 0x1401115BC (MiDeletePhysmemVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E15E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFE1C (MiCreatePageTablesForPhysicalRange.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401EFF9C (MiDeletePageTablesForPhysicalRange.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetUsedPtesHandle(unsigned __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  return 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v2) - 0x58000000000LL;
}
