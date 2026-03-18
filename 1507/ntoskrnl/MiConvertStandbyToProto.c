/*
 * XREFs of MiConvertStandbyToProto @ 0x14022926C
 * Callers:
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiTryLockLeafPage @ 0x1400E2750 (MiTryLockLeafPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14013131C (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x140225A30 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiGetContainingPageTable @ 0x140225A80 (MiGetContainingPageTable.c)
 *     MiMakePrototypePteDirect @ 0x140225C38 (MiMakePrototypePteDirect.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiComparePages @ 0x1402284DC (MiComparePages.c)
 *     MiFillCombinePage @ 0x14022A650 (MiFillCombinePage.c)
 *     MiRecheckCombineVm @ 0x14022AF38 (MiRecheckCombineVm.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v9; // r12
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 TransitionPte; // rdi
  __int64 *v16; // r9
  unsigned int v17; // ecx
  __int64 *v18; // r15
  char v19; // r11
  __int16 v20; // ax
  char v21; // dl
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int16 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 PteShadow; // rax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r9
  unsigned int v32; // ecx
  __int64 v33; // r11
  char v34; // cl
  __int64 *v35; // rdi
  __int16 *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r15
  ULONG_PTR v39; // rdi
  __int64 v40; // rax
  ULONG_PTR v41; // r14
  char v42; // al
  unsigned int v43; // edx
  __int64 *v44; // r15
  __int64 v45; // rbx
  unsigned int v46; // ecx
  __int64 v47; // rdx
  char v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v51; // [rsp+40h] [rbp-98h]
  unsigned int v52; // [rsp+48h] [rbp-90h]
  unsigned int v53; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v54; // [rsp+50h] [rbp-88h]
  unsigned int v55; // [rsp+54h] [rbp-84h]
  __int64 v56; // [rsp+58h] [rbp-80h]
  unsigned __int64 v57; // [rsp+58h] [rbp-80h]
  __int64 ContainingPageTable; // [rsp+60h] [rbp-78h]
  _KPROCESS *v59; // [rsp+70h] [rbp-68h]
  __int64 v62; // [rsp+E8h] [rbp+10h]
  __int64 v63; // [rsp+E8h] [rbp+10h]
  bool v65; // [rsp+F0h] [rbp+18h]
  int v66; // [rsp+F8h] [rbp+20h]

  v56 = *a2;
  v9 = a4 + 48;
  v59 = (_KPROCESS *)(a4 + 48);
  v10 = *(_DWORD *)(a4 + 40);
  v66 = v10;
  v11 = MiMakePrototypePteDirect(a4 + 48) | 0x800;
  v13 = (__int64)(*(_QWORD *)(v12 + 56) << 25) >> 16;
  if ( a7 != -1 )
  {
    v50 = 48 * a7 - 0x58000000000LL;
    v14 = BugCheckParameter2;
    if ( (unsigned int)MiFillCombinePage(0x58000000000LL, v50, BugCheckParameter2, v13) )
    {
      TransitionPte = MiMakeTransitionPte(a7, v10);
      v51 = 0LL;
      ContainingPageTable = MiGetContainingPageTable(v9);
      v16 = a2;
      v65 = a2 != (__int64 *)&unk_14034EF18;
      v55 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
        {
          v17 = v55 + 1;
          v55 = v17;
          if ( (v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
        v16 = a2;
      }
      if ( (**(_BYTE **)(a3 + 56) & 1) == 0 )
        goto LABEL_133;
      if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
        goto LABEL_133;
      if ( !(unsigned int)MiRecheckCombineVm(v16, BugCheckParameter2, a1) )
        goto LABEL_133;
      v18 = (__int64 *)(BugCheckParameter2 + 16);
      if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v66 )
        goto LABEL_133;
      if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0LL) )
      {
        MiDiscardTransitionPte(BugCheckParameter2);
LABEL_133:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return 0LL;
      }
      v19 = 16;
      if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && (*v18 & 1) == 0 )
      {
        v20 = MiReverseSwizzleInvalidPte(*v18);
        if ( (v20 & 0x400) == 0 && (v20 & 0x800) == 0 && (v20 & 4) == 0 )
          *(_BYTE *)(BugCheckParameter2 + 34) = v19 | v21;
      }
      v22 = *v18;
      if ( (*v18 & 2) == 0 )
      {
        if ( a2 == (__int64 *)&unk_14034EF18 && (v22 & 4) != 0 )
        {
          v27 = *v18;
          if ( (*v18 & 4) != 0 )
          {
            PteShadow = *v18;
            if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
              PteShadow = MiReadPteShadow(BugCheckParameter2 + 16, *v18);
            *v18 = v27 & 0xFFFFFFFFFFFFFFFBuLL;
          }
          else if ( (v27 & 2) != 0 )
          {
            PteShadow = *v18;
            if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
              PteShadow = MiReadPteShadow(BugCheckParameter2 + 16, *v18);
          }
          else
          {
            PteShadow = 0LL;
          }
          v51 = PteShadow;
          *(_BYTE *)(BugCheckParameter2 + 34) |= v19;
        }
        goto LABEL_60;
      }
      if ( a2 == (__int64 *)&unk_14034EF18 )
      {
        v23 = *v18;
        if ( (v22 & 4) != 0 )
        {
          v24 = *v18;
          if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
            v24 = MiReadPteShadow(BugCheckParameter2 + 16, *v18);
          *v18 = v23 & 0xFFFFFFFFFFFFFFFBuLL;
          goto LABEL_47;
        }
        if ( (v22 & 2) == 0 )
        {
          v24 = 0LL;
          goto LABEL_47;
        }
        v24 = *v18;
        if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
LABEL_32:
          v24 = MiReadPteShadow(BugCheckParameter2 + 16, *v18);
      }
      else
      {
        v25 = *(_WORD *)(*(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)v22 >> 12) + 2672] + 164LL);
        if ( ((unsigned __int8)v25 & (unsigned __int8)v19) == 0 && ((v25 & 0x20) == 0 || (v22 & 2) == 0) )
        {
          v51 = *v18;
LABEL_48:
          *v18 &= ~2uLL;
LABEL_60:
          v53 = 0;
          v29 = 48 * ContainingPageTable - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
            {
              v30 = v53 + 1;
              v53 = v30;
              if ( (v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v30);
                v29 = 48 * ContainingPageTable - 0x58000000000LL;
              }
            }
            while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
            v14 = BugCheckParameter2;
          }
          *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v54 = 0;
          v31 = 48 * a7 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 24), 0x3FuLL) )
          {
            do
            {
              v32 = v54 + 1;
              v54 = v32;
              if ( (v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v32);
                v31 = 48 * a7 - 0x58000000000LL;
              }
            }
            while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
            v18 = (__int64 *)(v14 + 16);
          }
          MiFinalizePageAttribute(v31, *(unsigned __int8 *)(v14 + 34) >> 6, 1);
          MiCopyPfnEntry(v50, v14);
          v34 = *(_BYTE *)(v33 + 35);
          if ( (v34 & 8) == 0 && (v34 & 7u) < 5 )
            *(_BYTE *)(v33 + 35) = v34 & 0xF8 | 5;
          *(_QWORD *)(v33 + 8) = v9 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v33 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v33 + 40) & 0xFFFFFFF000000000uLL | 0x200000000000000LL;
          *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
          MI_MAKE_PROTECT_WRITE_COPY((__int64 *)(v33 + 16));
          if ( v65 )
            *(_QWORD *)(v50 + 16) |= 8uLL;
          *(_QWORD *)&v59->Header.Lock = 0LL;
          *(_QWORD *)&v59->Header.Lock = TransitionPte;
          if ( (unsigned __int64)&v59[0x32BC88773LL].ReadyListHead <= 0x7F8 )
            MiWritePteShadow((__int64)v59, TransitionPte);
          v62 = *(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL;
          v35 = (__int64 *)((*(_DWORD *)(v14 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(v62, 0LL));
          *v35 = v11;
          if ( (unsigned __int64)(v35 + 0x12090482600LL) <= 0x7F8 )
            MiWritePteShadow((__int64)v35, v11);
          MiUnmapPageInHyperSpaceWorker((__int64)v35, 0x11u);
          *(_QWORD *)(v14 + 24) |= 0x4000000000000000uLL;
          MiPfnReferenceCountIsZero(v50, a7);
          _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v65 && (*(_DWORD *)v18 & 4) != 0 )
          {
            *v18 &= ~4uLL;
            if ( v51 )
              v51 &= ~4uLL;
          }
          *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
          MiPfnReferenceCountIsZero(v14, (v14 + 0x58000000000LL) / 48);
          v36 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v14 + 40)) >> 8) & 0x3FF);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v65 )
          {
            if ( (__int16 *)v56 == MiSystemPartition )
            {
              MiReturnResidentAvailable(1uLL);
              _InterlockedExchangeAdd64(&qword_14034F950, 1uLL);
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v56 + 5568), 1uLL);
            }
            MiReturnCommit(v56, 1LL);
            _InterlockedExchangeAdd64(&qword_14034FCE0, 0xFFFFFFFFFFFFFFFFuLL);
          }
          MiLockAndDecrementShareCount(48 * v62 - 0x58000000000LL, 0);
          if ( v51 )
            MiReleasePageFileInfo((struct _KEVENT *)v36, v51, 1);
          goto LABEL_129;
        }
        v26 = *v18;
        if ( (v22 & 4) != 0 )
        {
          v24 = *v18;
          if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
            v24 = MiReadPteShadow(BugCheckParameter2 + 16, *v18);
          *v18 = v26 & 0xFFFFFFFFFFFFFFFBuLL;
          goto LABEL_47;
        }
        if ( (v22 & 2) == 0 )
        {
          v24 = 0LL;
          goto LABEL_47;
        }
        v24 = *v18;
        if ( BugCheckParameter2 + 0x90482413010LL <= 0x7F8 )
          goto LABEL_32;
      }
LABEL_47:
      *(_BYTE *)(BugCheckParameter2 + 34) |= v19;
      v51 = v24;
      goto LABEL_48;
    }
    return 0LL;
  }
  v37 = MiLockProtoPoolPage(v9, 0LL);
  v38 = v37;
  if ( !v37 )
    return 0LL;
  v39 = BugCheckParameter2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    MiUnlockProtoPoolPage(v37, 0x11u);
    return 0LL;
  }
  if ( a6 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, BugCheckParameter2, a1)
    || (v40 = MiTryLockLeafPage(v59, 1LL), (v41 = v40) == 0) )
  {
    MiUnlockNestedProtoPoolPage(v38);
    goto LABEL_133;
  }
  if ( (*(_BYTE *)(v40 + 35) & 0x40) != 0
    || (*(_BYTE *)(v40 + 34) & 7) != 6 && (*(_BYTE *)(v40 + 34) & 0x20) != 0
    || (v57 = MiMapPageInHyperSpaceWorker((v40 + 0x58000000000LL) / 48, 0LL),
        v49 = MiComparePages(v57, v13),
        MiUnmapPageInHyperSpaceWorker(v57, 0x11u),
        !v49)
    || (**(_BYTE **)(a3 + 56) & 1) == 0
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v66 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v38);
    goto LABEL_133;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0LL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockNestedProtoPoolPage(v38);
    MiDiscardTransitionPte(BugCheckParameter2);
    goto LABEL_133;
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  v42 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v42 & 8) != 0 )
    v43 = 5;
  else
    v43 = v42 & 7;
  MiUpdatePfnPriority(v41, v43, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockNestedProtoPoolPage(v38);
  v63 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v44 = (__int64 *)((*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF) + MiMapPageInHyperSpaceWorker(v63, 0LL));
  *v44 = v11;
  if ( (unsigned __int64)(v44 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v44, v11);
  MiUnmapPageInHyperSpaceWorker((__int64)v44, 0x11u);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  v45 = 48 * v63 - 0x58000000000LL;
  v52 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
  {
    do
    {
      v46 = v52 + 1;
      v52 = v46;
      if ( (v46 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v46);
    }
    while ( (*(_QWORD *)(v45 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) );
    v39 = BugCheckParameter2;
  }
  if ( (*(_BYTE *)(v45 + 34) & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      48 * v63 / 48,
      *(_BYTE *)(48 * v63 - 0x58000000000LL + 34) & 7,
      *(_QWORD *)(48 * v63 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v47 = (*(_QWORD *)(v45 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v45 + 24) ^= (*(_QWORD *)(v45 + 24) ^ v47) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v47 )
    MiPfnShareCountIsZero(v45, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_129:
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
