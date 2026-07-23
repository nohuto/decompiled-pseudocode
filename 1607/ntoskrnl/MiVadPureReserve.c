/*
 * XREFs of MiVadPureReserve @ 0x14002B610
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiReturnVadQuota @ 0x14042E950 (MiReturnVadQuota.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1404330E0 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPagefileBackedSection @ 0x1404A6010 (MiCommitPagefileBackedSection.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
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
