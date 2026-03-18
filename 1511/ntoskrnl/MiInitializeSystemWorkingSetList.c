/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x14074A208
 * Callers:
 *     MiInitializeSystemCache @ 0x140749490 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140749564 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPopulateWorkingSetFreeList @ 0x14009B2F0 (MiPopulateWorkingSetFreeList.c)
 *     MiAllowWorkingSetExpansion @ 0x14009B3B4 (MiAllowWorkingSetExpansion.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r13
  _WORD *v9; // rax
  __int64 Page; // rax
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned __int64 ValidKernelPte; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  BOOL v16; // r12d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  _WORD *v20; // [rsp+20h] [rbp-38h] BYREF
  __int16 v21; // [rsp+28h] [rbp-30h]
  unsigned __int16 v22; // [rsp+2Ah] [rbp-2Eh]

  v2 = MiSystemWorkingSetsBase;
  v4 = (16 * a2 + MiSystemWorkingSetsBase + 1073742671) & 0xFFFFFFFFC0000000uLL;
  v5 = (MiSystemWorkingSetsBase + 519) & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = (((unsigned __int64)MiSystemWorkingSetsBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v4 + 8 * a2;
  MiSystemWorkingSetsBase = (v7 + 0x3FFFFFFF) & 0xFFFFFFFFC0000000uLL;
  if ( !(unsigned int)MiMakeZeroedPageTables(v6, v6, 64, 3u) )
    return 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v20);
  v9 = v20;
  ++*v20;
  Page = MiGetPage((__int64)MiSystemPartition, v22 | (unsigned int)(unsigned __int16)(v21 & *v9), 2u);
  v12 = Page;
  if ( Page == -1 )
    return 0LL;
  ValidKernelPte = MiMakeValidKernelPte(Page, 4, v6, v11);
  v14 = 48 * v12 - 0x58000000000LL;
  v15 = ValidKernelPte | 0x42;
  v16 = *(_QWORD *)(v14 + 16) != 0LL;
  MiInitializePfn(v14, v6, 4u, 4);
  *(_QWORD *)v6 = v15;
  if ( MiPteInShadowRange(v6) )
    MiWritePteShadow(v6, v15);
  if ( v16 )
    KeZeroPages((int *)((__int64)(v6 << 25) >> 16), 0x1000uLL);
  MiChargeResident(MiSystemPartition, 1uLL, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 184) = v2;
  *(_QWORD *)(v2 + 8) = 1LL;
  *(_QWORD *)(v2 + 88) = (v4 - 4096) | 1;
  *(_QWORD *)(v2 + 24) = 1LL;
  *(_QWORD *)(v2 + 496) = v5;
  *(_DWORD *)(v2 + 64) = 8;
  *(_QWORD *)(v2 + 96) = v4;
  *(_QWORD *)(v2 + 104) = v7;
  if ( (LONG *)a1 == &dword_1402FFA80 )
  {
    v17 = 0xFFFFF80000000000uLL;
  }
  else if ( (LONG *)a1 == &dword_1402FF880 )
  {
    v17 = qword_1402FE940;
  }
  else
  {
    if ( (LONG *)a1 != &dword_1402FF980 )
      goto LABEL_15;
    v17 = 0xFFFFC00000000000uLL;
  }
  *(_QWORD *)(v2 + 80) = v17;
LABEL_15:
  if ( qword_140301390 >= 0x4000 )
    *(_QWORD *)(a1 + 96) = 256LL;
  else
    *(_QWORD *)(a1 + 96) = 32LL;
  if ( !(unsigned int)MiChargeResident(MiSystemPartition, *(_QWORD *)(a1 + 96), 0LL) )
    return 0LL;
  _InterlockedExchangeAdd64(&qword_1402FF4F0, *(_QWORD *)(a1 + 96));
  if ( (*(_BYTE *)(a1 + 216) & 7u) >= 2 )
    MiState[(*(_BYTE *)(a1 + 216) & 7) + 270] += 2LL;
  v18 = ((unsigned int)(v5 >> 12) & 0x1FF) + 4;
  *(_QWORD *)(a1 + 152) = v18;
  *(_QWORD *)(a1 + 144) = v18;
  v19 = ((unsigned __int64)(4096 - (*(_DWORD *)(v2 + 496) & 0xFFFu)) >> 3) - 1;
  *(_QWORD *)(v2 + 16) = v19;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(v2 + 32) = v19;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)a1 = 0;
  MiPopulateWorkingSetFreeList(a1, 1uLL, v19);
  MiAllowWorkingSetExpansion(a1);
  return 1LL;
}
