/*
 * XREFs of MiReuseStandbyPage @ 0x1401E442C
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  char v4; // dl

  v2 = MiUnlinkPageFromList(a1, 0);
  MiRestoreTransitionPte(a1, 0);
  result = v2;
  v4 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = 128LL;
  *(_BYTE *)(a1 + 34) = v4;
  return result;
}
