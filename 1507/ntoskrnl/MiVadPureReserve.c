/*
 * XREFs of MiVadPureReserve @ 0x14008F840
 * Callers:
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1404B7F80 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 *     MiReturnVadQuota @ 0x1404B93D0 (MiReturnVadQuota.c)
 *     MiCommitPageTablesForVad @ 0x1404BBCD0 (MiCommitPageTablesForVad.c)
 *     MiCommitPagefileBackedSection @ 0x14051ABFC (MiCommitPagefileBackedSection.c)
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
