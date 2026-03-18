/*
 * XREFs of MiReuseStandbyPage @ 0x14022E2A0
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

char __fastcall MiReuseStandbyPage(ULONG_PTR a1)
{
  char result; // al

  MiUnlinkPageFromList(a1, 0LL);
  MiRestoreTransitionPte(a1, 0);
  *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4);
  result = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = result;
  return result;
}
