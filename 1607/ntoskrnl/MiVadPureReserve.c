/*
 * XREFs of MiVadPureReserve @ 0x14002BA90
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressState @ 0x140043000 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiReturnVadQuota @ 0x14042FA80 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MiCommitPageTablesForVad @ 0x140430A30 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140434210 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1404BA2E0 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadPureReserve(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x8000) != 0 )
  {
    if ( *(int *)(a1 + 52) < 0 || (v1 & 7) != 0 )
      return 0LL;
  }
  else
  {
    if ( (v1 & 0xF8) != 0xC0 )
      return 0LL;
    v3 = *(_QWORD *)(a1 + 72);
    if ( !v3 || (v1 & 7) == 1 || *(_QWORD *)(*(_QWORD *)v3 + 64LL) || (*(_DWORD *)(*(_QWORD *)v3 + 56LL) & 0x1000) == 0 )
      return 0LL;
  }
  return 1LL;
}
