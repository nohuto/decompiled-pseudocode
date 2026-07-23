/*
 * XREFs of MiIncreaseUsedPtesCount @ 0x140037030
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiUpdatePageTableUseCount @ 0x140036FD0 (MiUpdatePageTableUseCount.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1401E1414 (MiUpdatePrivateDemandZeroView.c)
 *     MiCreatePageTablesForPhysicalRange @ 0x1401EFC48 (MiCreatePageTablesForPhysicalRange.c)
 *     MiInsertLargeUserMapping @ 0x1401F5498 (MiInsertLargeUserMapping.c)
 *     MiWriteLargePde @ 0x1401F5DD4 (MiWriteLargePde.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
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
