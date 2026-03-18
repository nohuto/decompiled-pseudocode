/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x1400374B0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14001E990 (MiReservePageFileSpaceForPage.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiUpdatePageTableUseCount @ 0x140037450 (MiUpdatePageTableUseCount.c)
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 *     MiUpdateForkMaps @ 0x140109E0C (MiUpdateForkMaps.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E15E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFE1C (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x1401F566C (MiInsertLargeUserMapping.c)
 *     MiWriteLargePde @ 0x1401F5FA8 (MiWriteLargePde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     MiIsAddressValid @ 0x140037540 (MiIsAddressValid.c)
 */

__int64 __fastcall MiIncreaseUsedPtesCount(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v3 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= ((unsigned int)*(_QWORD *)(a1 + 16) ^ ((unsigned int)*(_QWORD *)(a1 + 16)
                                                               + ((unsigned __int16)v3 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v3 <= 1 )
    return MiIsAddressValid(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, a2);
  return result;
}
