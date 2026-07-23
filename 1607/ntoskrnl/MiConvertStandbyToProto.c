/*
 * XREFs of MiConvertStandbyToProto @ 0x1401F8EE8
 * Callers:
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiTryLockLeafPage @ 0x140022A6C (MiTryLockLeafPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400B17E8 (MiUnlockNestedProtoPoolPage.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x1401F2584 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiComparePages @ 0x1401F85AC (MiComparePages.c)
 *     MiFillCombinePage @ 0x1401F9994 (MiFillCombinePage.c)
 *     MiRecheckCombineVm @ 0x1401FA06C (MiRecheckCombineVm.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r14
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r15
  __int64 *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  char v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-50h]

  v7 = a4 + 48;
  v8 = *(_DWORD *)(a4 + 40);
  v10 = MiMakePrototypePteDirect(a4 + 48) | 0x800;
  v12 = (__int64)(*(_QWORD *)(v11 + 56) << 25) >> 16;
  if ( a7 != -1 )
  {
    if ( (unsigned int)MiFillCombinePage(
                         v9,
                         48 * a7 - 0x58000000000LL,
                         BugCheckParameter2,
                         (__int64)(*(_QWORD *)(v11 + 56) << 25) >> 16) )
    {
      MiMakeTransitionPte(a7, v8);
      MiGetContainingPageTable(v7);
      MiLockPageAtDpcInline(BugCheckParameter2);
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v13 = MiLockProtoPoolPage(v7, 0LL);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v13, 0x11u);
    return 0LL;
  }
  if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, BugCheckParameter2, a1)
    || (v15 = MiTryLockLeafPage(v7), (v16 = v15) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v14);
LABEL_25:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  if ( (*(_BYTE *)(v15 + 35) & 0x40) != 0
    || (*(_BYTE *)(v15 + 34) & 7) != 6 && (*(_BYTE *)(v15 + 34) & 0x20) != 0
    || (v28 = MiMapPageInHyperSpaceWorker((v15 + 0x58000000000LL) / 48, 0LL, 0x80000000),
        v27 = MiComparePages(v28, v12),
        LOBYTE(v17) = 17,
        MiUnmapPageInHyperSpaceWorker(v28, v17),
        !v27)
    || (**(_BYTE **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v8 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v14);
    goto LABEL_25;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v14);
    MiDiscardTransitionPte(BugCheckParameter2, v18, v19, v20);
    goto LABEL_25;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiGetPfnPriority(BugCheckParameter2);
  MiUpdatePfnPriority(v16);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v14);
  v21 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v22 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(v21, 0LL, 0x80000000));
  *v22 = v10;
  if ( MiPteInShadowRange((unsigned __int64)v22) )
    MiWritePteShadow(v24, v10);
  LOBYTE(v23) = 17;
  MiUnmapPageInHyperSpaceWorker(v25, v23);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  MiLockNestedPageAtDpcInline(48 * v21 - 0x58000000000LL);
  MiDecrementShareCount(48 * v21 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(48 * v21 - 0x58000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
