/*
 * XREFs of MiVadPureReserve @ 0x140061050
 * Callers:
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400BB050 (MiSetReadOnlyOnSectionView.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiCommitPageTablesForVad @ 0x140415350 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x14041B250 (MiReturnVadQuota.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiCommitPagefileBackedSection @ 0x14049C528 (MiCommitPagefileBackedSection.c)
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
