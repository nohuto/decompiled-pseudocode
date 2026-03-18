/*
 * XREFs of MiConvertStandbyToProto @ 0x140127A94
 * Callers:
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiTryLockLeafPage @ 0x14000FB0C (MiTryLockLeafPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1400F3D38 (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiRecheckCombineVm @ 0x1401282E0 (MiRecheckCombineVm.c)
 *     MiComparePages @ 0x14012AD40 (MiComparePages.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6,
        ULONG_PTR a7)
{
  unsigned __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 *v14; // rsi
  char v15; // dl
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbx
  int *v31; // rsi
  __int64 v32; // r11
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 *v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // r8
  char v48; // [rsp+20h] [rbp-68h]
  int v49; // [rsp+24h] [rbp-64h]
  unsigned __int64 v50; // [rsp+28h] [rbp-60h]
  __int64 v51; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-50h]
  __int64 *v53; // [rsp+40h] [rbp-48h]
  __int64 v54; // [rsp+48h] [rbp-40h]
  __int64 *v58; // [rsp+A0h] [rbp+18h]
  __int64 v59; // [rsp+A0h] [rbp+18h]

  v7 = a4 + 48;
  v53 = (__int64 *)(a4 + 48);
  v8 = *(_DWORD *)(a4 + 40);
  v49 = v8;
  v9 = ((a4 + 48) << 16) | 0x600;
  v54 = v9;
  v10 = (__int64)(*(_QWORD *)(a3 + 56) << 25) >> 16;
  if ( a7 != -1LL )
  {
    v52 = 48 * a7 - 0x58000000000LL;
    if ( (unsigned int)MiFillCombinePage(a1, v52, BugCheckParameter2, v10) )
    {
      v11 = 32 * (((a7 & 0xFFFFFFFFFLL) << 7) | v8 & 0x1F | 0x40);
      v54 = v7 & 0x7FFFFFFFFFFFFFFFLL;
      v50 = 0LL;
      v51 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiLockPageAtDpcInline(BugCheckParameter2, v12, v13);
      if ( (**(_BYTE **)(a3 + 56) & 1) == 0 )
        goto LABEL_67;
      if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
        goto LABEL_67;
      if ( !(unsigned int)MiRecheckCombineVm(a2, BugCheckParameter2, a1) )
        goto LABEL_67;
      v14 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v49 )
        goto LABEL_67;
      if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
      {
        MiDiscardTransitionPte(BugCheckParameter2);
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(*v14) )
        *(_BYTE *)(BugCheckParameter2 + 34) = v15 | 0x10;
      if ( (*v14 & 0x1000) == 0 )
      {
        if ( a2 == (__int64 *)&unk_1402FEA58 && (*v14 & 0x2000) != 0 )
        {
          v50 = MiCapturePageFileInfoInline((unsigned __int64 *)(BugCheckParameter2 + 16), 1, 1);
          *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
        }
        goto LABEL_23;
      }
      v16 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      if ( a2 != (__int64 *)&unk_1402FEA58 )
      {
        if ( !MI_IS_PTE_IN_WS_SWAP_SET(v16) )
        {
          v50 = v17;
          goto LABEL_19;
        }
        v16 = (unsigned __int64 *)(BugCheckParameter2 + 16);
      }
      v50 = MiCapturePageFileInfoInline(v16, 1, 1);
      *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
LABEL_19:
      *v14 &= ~0x1000uLL;
LABEL_23:
      v18 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v51) - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v18, v19, v20);
      *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v21 = v52;
      MiLockNestedPageAtDpcInline(v52, 0x3FFFFFFFFFFFFFFFLL, v22);
      MiFinalizePageAttribute(v21, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1);
      MiCopyPfnEntry(v21, BugCheckParameter2);
      if ( (unsigned int)MI_GET_PFN_PRIORITY(v23) < 5 )
        *(_BYTE *)(v21 + 35) = *(_BYTE *)(v21 + 35) & 0xF8 | 5;
      *(_QWORD *)(v21 + 8) = v54;
      *(_QWORD *)(v21 + 40) |= 0x200000000000000uLL;
      v24 = *(_QWORD *)(v21 + 40);
      v25 = v24 ^ (v24 ^ MI_GET_PAGE_FRAME_FROM_PTE(&v51)) & 0xFFFFFFFFFLL;
      v26 = v52;
      *(_QWORD *)(v52 + 40) = v25;
      *(_QWORD *)(v26 + 24) &= 0xC000000000000000uLL;
      v27 = *(_QWORD *)(v26 + 16);
      if ( (v27 & 0x80u) != 0LL )
        *(_QWORD *)(v26 + 16) = v27 | 0x20;
      if ( a2 != (__int64 *)&unk_1402FEA58 )
        *(_QWORD *)(v26 + 16) |= 0x1000000uLL;
      v28 = v53;
      *v53 = 0LL;
      *v28 = v11;
      if ( (unsigned int)MiPteInShadowRange(v28) )
        MiWritePteShadow(v53, v11);
      v54 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
      v58 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(
                                                                          v54,
                                                                          0LL,
                                                                          0x80000000));
      *v58 = v9;
      if ( (unsigned int)MiPteInShadowRange(v58) )
      {
        v29 = v9;
        v30 = (__int64)v58;
        MiWritePteShadow(v58, v29);
      }
      else
      {
        v30 = (__int64)v58;
      }
      MiUnmapPageInHyperSpaceWorker(v30, 0x11u);
      *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
      MiPfnReferenceCountIsZero(v26, a7);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a2 != (__int64 *)&unk_1402FEA58 && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x2000LL) != 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) &= ~0x2000uLL;
        if ( v50 )
          v50 &= ~0x2000uLL;
      }
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
      MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
      v31 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter2 + 40)) >> 8) & 0x3FF);
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a2 != (__int64 *)&unk_1402FEA58 )
      {
        v32 = *a2;
        if ( (int *)*a2 == MiSystemPartition )
        {
          MiReturnResidentAvailable(1uLL);
          _InterlockedExchangeAdd64(&qword_1402FF4D0, 1uLL);
        }
        else
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 5952), 1uLL);
        }
        MiReturnCommit(v32, 1uLL);
        _InterlockedExchangeAdd64(&qword_1402FF820, 0xFFFFFFFFFFFFFFFFuLL);
      }
      MiLockAndDecrementShareCount(48 * v54 - 0x58000000000LL, 0);
      if ( v50 )
        MiReleasePageFileInfo((__int64)v31, v50, 1);
      goto LABEL_63;
    }
    return 0LL;
  }
  v51 = ((a4 + 48) << 16) | 0x600;
  v33 = MiLockProtoPoolPage(a4 + 48, 0LL);
  v36 = v33;
  v53 = (__int64 *)v33;
  if ( !v33 )
    return 0LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v33, 0x11u);
    return 0LL;
  }
  if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, BugCheckParameter2, a1)
    || (v37 = MiTryLockLeafPage(v7), (v38 = v37) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v36, v34, v35);
    goto LABEL_67;
  }
  if ( (*(_BYTE *)(v37 + 35) & 0x40) != 0
    || (*(_BYTE *)(v37 + 34) & 7) != 6 && (*(_BYTE *)(v37 + 34) & 0x20) != 0
    || (v52 = MiMapPageInHyperSpaceWorker((v37 + 0x58000000000LL) / 48, 0LL, 0x80000000),
        v48 = MiComparePages(v52, v10),
        MiUnmapPageInHyperSpaceWorker(v52, 0x11u),
        !v48)
    || (**(_BYTE **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v8 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v36, v34, v35);
    goto LABEL_67;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v36, v39, v40);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_67;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MI_GET_PFN_PRIORITY(BugCheckParameter2);
  MiUpdatePfnPriority(v38);
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v36, v41, v42);
  v59 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v43 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(v59, 0LL, 0x80000000));
  *v43 = v9;
  if ( (unsigned int)MiPteInShadowRange(v43) )
    MiWritePteShadow(v43, v9);
  MiUnmapPageInHyperSpaceWorker((__int64)v43, 0x11u);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  v44 = 48 * v59 - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v44, v45, v46);
  MiDecrementShareCount(v44);
  _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_63:
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
