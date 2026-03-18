/*
 * XREFs of MiReuseStandbyPage @ 0x1401F3A84
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2FAC (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // dl

  v2 = MiUnlinkPageFromList(a1, 0);
  MiRestoreTransitionPte(a1, 0LL, v3, v4);
  v5 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_BYTE *)(a1 + 34) = v5 & 0xF8 | 5;
  MiSetFreshPfnFromFreeList(a1);
  return v2;
}
