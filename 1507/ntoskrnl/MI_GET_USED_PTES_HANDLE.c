/*
 * XREFs of MI_GET_USED_PTES_HANDLE @ 0x140223A68
 * Callers:
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiUpdatePageTableUseCount @ 0x14005DCE0 (MiUpdatePageTableUseCount.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiReservePageFileSpaceForPage @ 0x1400DD2E0 (MiReservePageFileSpaceForPage.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1401356DC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x14016A030 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14020DEFC (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1402242B0 (MiCreatePageTablesForPhysicalRange.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1402244DC (MiDeletePageTablesForPhysicalRange.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_GET_USED_PTES_HANDLE(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = 2040LL;
  PteShadow = *v2;
  if ( (unsigned __int64)(v2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v2, *v2);
  v6 = PteShadow;
  if ( (unsigned __int64)&v6 + v1 <= v3 )
    PteShadow = MiReadPteShadow(&v6, PteShadow);
  return 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
