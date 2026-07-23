/*
 * XREFs of MiReuseStandbyPage @ 0x1401F38B0
 * Callers:
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
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
