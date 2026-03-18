/*
 * XREFs of MiScrubPage @ 0x1401E5FC4
 * Callers:
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MiScrubAweMappedPage @ 0x1401E5AB4 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x1401E5DEC (MiScrubNode.c)
 *     MiScrubNonPagedPool @ 0x1406250D4 (MiScrubNonPagedPool.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     RtlScrubMemory @ 0x1401FC4F0 (RtlScrubMemory.c)
 */

__int64 __fastcall MiScrubPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *PteFromCopyList; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r14d

  PteFromCopyList = MiGetPteFromCopyList((unsigned int *)a1, (a3 + 0x58000000000LL) / 48, -1LL);
  v6 = PteFromCopyList;
  v7 = (__int64)((_QWORD)PteFromCopyList << 25) >> 16;
  if ( a2 )
    KeCopyPage(a2, (__int64)((_QWORD)PteFromCopyList << 25) >> 16);
  v8 = RtlScrubMemory((PVOID)v7);
  if ( a2 )
    KeCopyPage(v7, a2);
  *v6 = 0LL;
  if ( MiPteInShadowRange((__int64)v6) )
    MiWritePteShadow((__int64)v6, 0LL);
  ++*(_QWORD *)(a1 + 40);
  return v8;
}
