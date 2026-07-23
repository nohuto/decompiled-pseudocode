/*
 * XREFs of MmPurgeSection @ 0x140072630
 * Callers:
 *     CcPurgeCacheSection @ 0x1400724A0 (CcPurgeCacheSection.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiComputeDataFlushRange @ 0x1400214D8 (MiComputeDataFlushRange.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x1400223E0 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiIncrementSubsectionViewCount @ 0x14002CAA0 (MiIncrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiCanFileBeTruncatedInternal @ 0x140072E5C (MiCanFileBeTruncatedInternal.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1400973E8 (MiWaitForPageWriteCompletion.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x1400B0704 (MiInvalidateCollidedIos.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     MiSubsectionProtosCreated @ 0x1401EDAE0 (MiSubsectionProtosCreated.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, __int64 *a2, __int64 a3, char a4, _BYTE *a5)
{
  __int64 *v7; // rbx
  __int64 CanFileBeTruncatedInternal; // rax
  KIRQL v9; // dl
  __int64 v10; // r14
  __int64 v12; // rdx
  ULONG_PTR v13; // r15
  KIRQL v14; // bl
  ULONG_PTR v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // r12
  __int64 v18; // rcx
  char v19; // r8
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  ULONG_PTR v31; // rsi
  __int64 v32; // rax
  ULONG_PTR BugCheckParameter4; // rax
  struct _KEVENT *v34; // r9
  __int64 v35; // r10
  __int64 v36; // rcx
  char v37; // al
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r12
  __int64 inserted; // r13
  __int64 v46; // r15
  __int64 v47; // r14
  signed __int32 v48; // edx
  bool v49; // zf
  signed __int32 v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // r14
  __int16 v56; // r9
  char v57; // al
  __int64 v58; // rcx
  int v59; // r9d
  __int64 v60; // rbx
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r12
  int v68; // [rsp+30h] [rbp-D0h]
  _QWORD *v69; // [rsp+38h] [rbp-C8h]
  int v70; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v71; // [rsp+48h] [rbp-B8h]
  int v72; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+54h] [rbp-ACh]
  int v74; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h]
  ULONG_PTR v77; // [rsp+70h] [rbp-90h]
  struct _KEVENT *v78; // [rsp+78h] [rbp-88h]
  unsigned __int64 v79; // [rsp+80h] [rbp-80h]
  __int64 v80; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v81; // [rsp+90h] [rbp-70h]
  __int64 v82; // [rsp+98h] [rbp-68h]
  __int64 v83; // [rsp+A0h] [rbp-60h]
  _BYTE v84[8]; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  __int64 v86; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v87; // [rsp+C0h] [rbp-40h]
  __int64 v88; // [rsp+C8h] [rbp-38h]
  _BYTE v89[40]; // [rsp+D8h] [rbp-28h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]
  unsigned __int8 v91; // [rsp+140h] [rbp+40h] BYREF
  __int64 v92; // [rsp+148h] [rbp+48h] BYREF
  char v93; // [rsp+158h] [rbp+58h]

  v7 = a2;
  *a5 = 0;
  if ( a2 )
  {
    v7 = &v80;
    v80 = *a2;
  }
  v73 = a4 & 2;
  v71 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&v92);
  v9 = v92;
  v10 = CanFileBeTruncatedInternal;
  v83 = CanFileBeTruncatedInternal;
  if ( (_BYTE)v92 == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) || !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(CanFileBeTruncatedInternal + 72), v92);
    return 0;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v9, v7, a3, 1, (__int64)v84) )
    return 1;
  v13 = BugCheckParameter2;
  v14 = 17;
  v15 = v87;
  v16 = v88;
  LOBYTE(v92) = 17;
  v93 = 1;
LABEL_13:
  v77 = v15;
  v69 = (_QWORD *)v13;
  if ( v14 == 17 )
  {
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    LOBYTE(v92) = v14;
  }
  if ( v16 == v15 )
  {
    v17 = v86 + 8;
  }
  else
  {
    v12 = *(unsigned int *)(v15 + 44);
    v17 = *(_QWORD *)(v15 + 8) + 8 * v12;
  }
  v79 = v17;
  v20 = MiSubsectionUsingExtents(v15, v12);
  v68 = v20;
  if ( *(_QWORD *)(v15 + 8) )
  {
    MiIncrementSubsectionViewCount(v18, 0LL);
    if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
      ((void (*)(void))MiRemoveUnusedSubsection)();
    *(_WORD *)(v15 + 32) |= 1u;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72), v14);
    v91 = 17;
    v76 = 0LL;
    v27 = 0LL;
    if ( v20 )
      MiChangingSubsectionProtos(v15);
    if ( v13 >= v17 )
      goto LABEL_116;
    while ( 1 )
    {
      if ( (v13 & 0xFFF) != 0 )
      {
        if ( v91 != 17 )
          goto LABEL_31;
      }
      else if ( v91 != 17 )
      {
        MiUnlockProtoPoolPage(v27, v91);
      }
      v76 = MiCheckProtoPtePageState(v13, &v91);
      v27 = v76;
      if ( v76 )
        break;
      v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_109:
      v69 = (_QWORD *)v13;
LABEL_110:
      if ( v13 >= v17 )
        goto LABEL_113;
      v27 = v76;
    }
    while ( 1 )
    {
LABEL_31:
      while ( 1 )
      {
        v28 = MI_READ_PTE_LOCK_FREE(v13);
        v75 = v28;
        if ( (v28 & 1) == 0 )
          break;
        v29 = MI_GET_PAGE_FRAME_FROM_PTE(&v75);
LABEL_41:
        if ( MiIsPfnInline(v29) )
        {
          v31 = 48 * v30 - 0x58000000000LL;
          v72 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v72);
              while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
            v20 = v68;
          }
          v32 = MI_READ_PTE_LOCK_FREE(v13);
          if ( v32 == v75 )
          {
            if ( !v31 )
            {
LABEL_108:
              v13 += 8LL;
              goto LABEL_109;
            }
            BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v13);
            if ( (BugCheckParameter4 & 1) != 0 )
              goto LABEL_112;
            v36 = *(_QWORD *)(v31 + 16);
            if ( (v36 & 0x400) == 0 || (v36 & 1) != 0 || (*(_QWORD *)(v31 + 8) | 0x8000000000000000uLL) != v13 )
              KeBugCheckEx(0xDEu, 2uLL, v13, *(_QWORD *)(v31 + 8), BugCheckParameter4);
            v37 = *(_BYTE *)(v31 + 34);
            if ( (v37 & 0x10) != 0 && v73 )
            {
LABEL_112:
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v93 = 0;
            }
            else
            {
              if ( (v37 & 8) != 0 )
              {
                MiWaitForPageWriteCompletion(v31, v10, v27, v91);
                v91 = 17;
                goto LABEL_110;
              }
              if ( v20 && *(_WORD *)(v31 + 32) )
                *a5 = 1;
              v78 = v34;
              v38 = (unsigned __int64)v34;
              v39 = *(_QWORD *)(v31 + 40);
              v81 = (__int64)(v31 - v35) / 48;
              v40 = *(_QWORD *)(v31 + 16);
              v82 = v39 & 0xFFFFFFFFFLL;
              PrototypePteDirect = MiGetPrototypePteDirect(v40);
              v44 = PrototypePteDirect;
              inserted = v43;
              v46 = *(_QWORD *)PrototypePteDirect;
              if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0
                || (v47 = PrototypePteDirect, !*(_QWORD *)(v46 + 64)) )
              {
                v47 = v43;
              }
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                LOBYTE(v42) = -1;
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v46 + 72, v42);
              }
              else
              {
                v70 = v43;
                if ( _interlockedbittestandset((volatile signed __int32 *)(v46 + 72), 0x1Fu) )
                  v70 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v46 + 72), 0xFFu);
                v48 = *(_DWORD *)(v46 + 72);
                while ( (v48 & 0xBFFFFFFF) != 0x80000000 )
                {
                  if ( (v48 & 0x40000000) == 0 )
                  {
                    v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v46 + 72), v48 | 0x40000000, v48);
                    v49 = v48 == v50;
                    v48 = v50;
                    if ( !v49 )
                      continue;
                  }
                  KeYieldProcessorEx(&v70);
                  v48 = *(_DWORD *)(v46 + 72);
                }
              }
              if ( v47 )
              {
                v49 = (*(_DWORD *)(v47 + 104))-- == 1;
                if ( v49 && !*(_QWORD *)(v47 + 96) && (*(_BYTE *)(v44 + 34) & 1) == 0 && (*(_BYTE *)(v47 + 34) & 8) != 0 )
                {
                  MiRemoveUnusedSubsection(v47);
                  inserted = MiInsertUnusedSubsection(v47, 1LL, v51, v52);
                }
              }
              --*(_QWORD *)(v46 + 32);
              if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46 + 72, retaddr);
              else
                *(_DWORD *)(v46 + 72) = 0;
              if ( inserted )
                MiReturnSubsectionCharges(inserted);
              v54 = MiTransferSoftwarePte(*(_QWORD *)(v31 + 16), 0LL, 0LL, 0LL);
              v55 = 0LL;
              if ( *(_WORD *)(v31 + 32) == v56 )
              {
                MiUnlinkPageFromList(v31, 0);
                if ( (*(_DWORD *)(v31 + 16) & 0x400LL) == 0 )
                {
                  v38 = MiCapturePageFileInfoInline(v31 + 16, 0LL, 1LL);
                  v78 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v31 + 40)) >> 8) & 0x3FF);
                }
              }
              else
              {
                *(_QWORD *)(v31 + 24) |= 0x4000000000000000uLL;
                v57 = *(_BYTE *)(v31 + 34);
                if ( (v57 & 0x20) != 0 && (v57 & 8) == 0 )
                {
                  v55 = *(_QWORD *)v31 - 32LL;
                  if ( *(_QWORD *)(v55 + 16) == v55 + 16 )
                    v55 = 0LL;
                }
              }
              v13 = (ULONG_PTR)v69;
              *v69 = v54;
              if ( (unsigned int)MiPteInShadowRange(v69, v53) )
                MiWritePteShadow(v58, v54);
              if ( v59 == 4 )
                MiInsertPageInFreeOrZeroedList(v81, 2);
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v60 = 48 * v82 - 0x58000000000LL;
              v74 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v74);
                  while ( (*(_QWORD *)(v60 + 24) & 0x8000000000000000uLL) != 0 );
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v60 + 24), 0x3FuLL) );
                v13 = (ULONG_PTR)v69;
              }
              if ( (*(_BYTE *)(v60 + 34) & 7) != 6 )
                KeBugCheckEx(
                  0x4Eu,
                  0x99uLL,
                  (v60 + 0x58000000000LL) / 48,
                  *(_BYTE *)(v60 + 34) & 7,
                  *(_QWORD *)(v60 + 24) & 0x3FFFFFFFFFFFFFFFLL);
              v61 = *(_QWORD *)(v60 + 24);
              v62 = (v61 & 0x3FFFFFFFFFFFFFFFLL) - 1;
              *(_QWORD *)(v60 + 24) = v61 ^ (v62 ^ v61) & 0x3FFFFFFFFFFFFFFFLL;
              if ( (v61 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
                MiPfnShareCountIsZero(v60, v62);
              _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v55 )
                MiInvalidateCollidedIos(v55);
              if ( v38 )
                MiReleasePageFileInfo(v78, v38, 1);
              v10 = v83;
              if ( *(_QWORD *)(v83 + 32) )
              {
                v17 = v79;
                v20 = v68;
                goto LABEL_108;
              }
            }
LABEL_113:
            if ( v91 != 17 )
              MiUnlockProtoPoolPage(v76, v91);
            v20 = v68;
            v15 = v77;
            v16 = v88;
LABEL_116:
            if ( v20 )
              MiSubsectionProtosCreated(v15, v89);
            LOBYTE(v92) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
            v14 = v92;
            v63 = MiDecrementSubsectionViewCount(v15, 0);
            v67 = v63 + v71;
            v49 = *(_QWORD *)(v15 + 96) == 0LL;
            v71 += v63;
            if ( v49 && (*(_BYTE *)(v15 + 34) & 1) == 0 )
              v71 = MiInsertUnusedSubsection(v64, 1LL, v65, v66) + v67;
            v19 = v93;
LABEL_122:
            if ( v15 == v16 || !v19 )
              goto LABEL_21;
            v15 = *(_QWORD *)(v15 + 16);
            v13 = *(_QWORD *)(v15 + 8);
            goto LABEL_13;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v28 & 0x400) != 0 || (v28 & 0x800) == 0 )
        goto LABEL_108;
      if ( (unsigned int)MiInvalidPteConforms(v28) )
      {
        v29 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v75);
        goto LABEL_41;
      }
    }
  }
  if ( v15 != v16 && v19 )
    goto LABEL_122;
LABEL_21:
  v21 = MiDecrementSubsections(v87, v87, 0);
  v22 = v21 + v71;
  v23 = MiDecrementSubsections(v16, v16, 0);
  --*(_QWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 56) &= ~4u;
  v24 = v23 + v22;
  MiCheckControlArea(v10, v14, v25, v26);
  if ( v24 )
    MiReturnSubsectionCharges(v24);
  return v93;
}
