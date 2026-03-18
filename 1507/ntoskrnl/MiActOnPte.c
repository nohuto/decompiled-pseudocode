/*
 * XREFs of MiActOnPte @ 0x14007FD30
 * Callers:
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiUpdatePageTableUseCount @ 0x14005DCE0 (MiUpdatePageTableUseCount.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x14008090C (MiSetWsleAge.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x140089780 (MiCheckUserVirtualAddress.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x140225960 (MI_CLEAR_RESET_PTE.c)
 *     MI_IS_RESET_PTE @ 0x1402259E8 (MI_IS_RESET_PTE.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiActOnPte(
        _KPROCESS *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int16 **a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // rbx
  ULONG_PTR v10; // r12
  _KPROCESS *v11; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 PteShadow; // rdi
  __int64 v14; // rdx
  ULONG_PTR v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  ULONG_PTR v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  unsigned int v28; // edi
  unsigned int updated; // ebx
  unsigned __int16 *v30; // r13
  __int64 v31; // rdi
  unsigned __int64 Wsle; // rax
  _DWORD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rdx
  char v36; // cl
  __int64 v37; // r10
  unsigned __int64 *v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 *v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // r15
  _DWORD *v45; // rsi
  unsigned int v46; // ebx
  char v47; // al
  char v48; // al
  bool v49; // zf
  int v50; // eax
  ULONG_PTR v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r10
  unsigned __int64 *v54; // r9
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 *v57; // r9
  char v58; // al
  __int64 v59; // r10
  unsigned __int64 *v60; // r9
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 *v63; // r9
  char v64; // di
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  ULONG_PTR v67; // rcx
  __int16 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int16 *v71; // r9
  __int16 v72; // ax
  __int64 v73; // rax
  __int64 v74; // rbx
  _QWORD v75[7]; // [rsp+20h] [rbp-38h] BYREF
  int v76; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0LL;
  v10 = a2;
  v11 = a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  *a7 = 0LL;
  *a6 = 0LL;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        if ( a3 )
        {
          PteShadow = *(_QWORD *)a3;
          if ( a3 + 0x90482413000LL > 0x7F8
            || !(unsigned int)MiPteHasShadow(a1, a2)
            || (PteShadow & 1) == 0
            || (PteShadow & 0x20) != 0 && (PteShadow & 0x42) != 0 )
          {
            goto LABEL_21;
          }
          v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( !v14 )
            goto LABEL_21;
          v15 = a3;
        }
        else
        {
          PteShadow = *(_QWORD *)v10;
          if ( v10 + 0x90482413000LL > 0x7F8
            || !(unsigned int)MiPteHasShadow(a1, a2)
            || (PteShadow & 1) == 0
            || (PteShadow & 0x20) != 0 && (PteShadow & 0x42) != 0 )
          {
            goto LABEL_21;
          }
          v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( !v14 )
            goto LABEL_21;
          v15 = v10;
        }
        v16 = *(_QWORD *)(v14 + 8 * ((v15 >> 3) & 0x1FF));
        if ( (v16 & 0x20) != 0 )
          PteShadow |= 0x20uLL;
        if ( (v16 & 0x42) != 0 )
          PteShadow |= 0x42uLL;
LABEL_21:
        v75[0] = PteShadow;
        if ( (PteShadow & 1) == 0 )
          break;
        if ( !a3 )
        {
          if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
            PteShadow = MiReadPteShadow(v75, PteShadow);
          v24 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
          if ( !(unsigned int)MI_IS_PFN(v24) )
            return 3221226548LL;
          v17 = 48 * v24 - 0x58000000000LL;
          v26 = *(_QWORD *)(v17 + 8);
          if ( (v26 & v25) != 0 )
          {
            if ( !MiLocateCloneAddress((__int64)Process, v25 | v26) )
            {
              v25 = 0x8000000000000000uLL;
              goto LABEL_64;
            }
          }
          else if ( a4 != 1 )
          {
            if ( !a4 )
              return 274LL;
LABEL_64:
            v28 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v28);
                  v25 = 0x8000000000000000uLL;
                }
              }
              while ( (*(_QWORD *)(v17 + 24) & v25) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
            }
            if ( ((__int64)v11->ThreadListHead.Flink & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(v10) )
              goto LABEL_73;
            LOBYTE(a2) = v75[0];
LABEL_76:
            if ( a4 == 2 )
            {
              if ( !a3 )
                LODWORD(v8) = 1;
              updated = MiUpdatePfnPriority(v17, a5, (unsigned int)v8);
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( updated != -1 && !a3 )
              {
                v30 = &Process[1].IdealNode[8];
                v31 = *((_QWORD *)v30 + 23);
                Wsle = MiLocateWsle((__int64)(v10 << 25) >> 16);
                v33 = (_DWORD *)(*(_QWORD *)(v31 + 496) + Wsle * *(unsigned int *)(v31 + 64));
                v34 = (*v33 >> 9) & 7;
                if ( updated != (_DWORD)v34 && (updated == 7 || (_DWORD)v34 == 7) )
                {
                  if ( Wsle >= *(_QWORD *)(v31 + 8) )
                  {
                    MiUpdateWorkingSetAgeDistribution(v30, v34, -1LL);
                    MiUpdateWorkingSetAgeDistribution(v30, updated, 1LL);
                  }
                  if ( !updated )
                    *(_QWORD *)v10 |= 0x20uLL;
                  MiSetWsleAge(v31, v33, updated);
                }
              }
              v35 = *(_QWORD *)(v17 + 8);
              if ( v35 >= 0 && !a3 )
                MiDemoteCombinedPte(v10, v35 | 0x8000000000000000uLL);
              return 0LL;
            }
            v36 = *(_BYTE *)(v17 + 34);
            if ( (v36 & 8) != 0 )
            {
LABEL_73:
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return 3221226548LL;
            }
            if ( a4 == 1 )
            {
              if ( (v36 & 0x10) != 0 || !a3 && (a2 & 0x42) != 0 )
                LODWORD(v8) = -1073740748;
              if ( (v36 & 0x10) == 0 && (*(_DWORD *)(v17 + 16) & 4) == 0 )
                *(_BYTE *)(v17 + 34) = v36 | 0x10;
              if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v17 + 16)) )
                MI_CLEAR_RESET_PTE(v17 + 16);
              else
                LODWORD(v8) = -1073740748;
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              return (unsigned int)v8;
            }
            if ( (v36 & 0x10) != 0 )
              *(_BYTE *)(v17 + 34) = v36 & 0xEF;
            v37 = *(_QWORD *)(v17 + 16);
            v38 = (unsigned __int64 *)(v17 + 16);
            if ( (v37 & 4) != 0 )
            {
              v8 = *(_QWORD *)(v17 + 16);
              if ( (unsigned __int64)(v17 + 0x90482413010LL) <= 0x7F8 )
                v8 = MiReadPteShadow(v17 + 16, v37);
              *v38 = v37 & 0xFFFFFFFFFFFFFFFBuLL;
            }
            else if ( (v37 & 2) != 0 )
            {
              v8 = *(_QWORD *)(v17 + 16);
              if ( (unsigned __int64)(v17 + 0x90482413010LL) <= 0x7F8 )
                v8 = MiReadPteShadow(v17 + 16, v37);
            }
            *a7 = v8;
            if ( v8 )
              *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v17 + 40)) >> 8) & 0x3FF);
            v39 = MiUpdatePageFileHighInPte(*v38, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
            *v40 = v39;
            if ( (unsigned __int64)(v40 + 0x12090482600LL) <= 0x7F8 )
              MiWritePteShadow(v40, v39);
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !a3 && (v75[0] & 0x42) != 0 )
            {
              v41 = v75[0] & 0xFFFFFFFFFFFFFF9DuLL;
              v75[0] = v41;
              *(_QWORD *)v10 = v41;
              if ( v10 + 0x90482413000LL <= 0x7F8 )
                MiWritePteShadow(v10, v41);
              v42 = MiLocateWsle((__int64)(v10 << 25) >> 16);
              v43 = *(_QWORD *)&Process[2].Header.Lock;
              v44 = v42;
              v45 = (_DWORD *)(*(_QWORD *)(v43 + 496) + v42 * *(unsigned int *)(v43 + 64));
              v46 = (*v45 >> 9) & 7;
              if ( v46 )
              {
                if ( ((*v45 >> 9) & 7) == 7 )
                  return 3221225505LL;
                if ( v42 >= *(_QWORD *)(v43 + 8) )
                  MiUpdateWorkingSetAgeDistribution(&Process[1].IdealNode[8], v46, -1LL);
              }
              if ( v46 < 7 )
              {
                if ( v44 >= *(_QWORD *)(v43 + 8) )
                  ++Process[1].ProcessListEntry.Blink;
                MiSetWsleAge(v43, v45, 1LL);
              }
              return 3221225505LL;
            }
            return 0LL;
          }
          return 3221226548LL;
        }
        v17 = MiLockLeafPage((unsigned __int64 *)a3, 0LL);
        if ( v17 )
        {
          a2 = *(_QWORD *)a3;
          a1 = (_KPROCESS *)(a3 + 0x90482413000LL);
          if ( a3 + 0x90482413000LL <= 0x7F8
            && (unsigned int)MiPteHasShadow(a1, a2)
            && (a2 & 1) != 0
            && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
          {
            a1 = KeGetCurrentThread()->ApcState.Process;
            v18 = *(_QWORD *)&a1[2].ProcessLock;
            if ( v18 )
            {
              v19 = *(_QWORD *)(v18 + 8 * ((a3 >> 3) & 0x1FF));
              if ( (v19 & 0x20) != 0 )
                a2 |= 0x20uLL;
              if ( (v19 & 0x42) != 0 )
                a2 |= 0x42uLL;
            }
          }
          v75[0] = a2;
          if ( (a2 & 1) != 0 )
            goto LABEL_76;
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (PteShadow & 0x400) != 0 )
        return 0LL;
      if ( (PteShadow & 0x800) == 0 )
      {
        if ( a4 == 2 )
          return 0LL;
        if ( PteShadow )
        {
          v68 = MiPartitionIdToPointer(WORD2(Process[1].SecurePid));
          v71 = v68;
          if ( a3 )
          {
            v71 = MiSystemPartition;
            if ( (PteShadow & 8) != 0 )
              v71 = v68;
          }
          if ( (PteShadow & 1) != 0
            || (v72 = MiReverseSwizzleInvalidPte(PteShadow, v69, v70, v71), (v72 & 0x400) != 0)
            || (v72 & 0x800) != 0
            || (v72 & 4) != 0 )
          {
            if ( a4 == 1 )
              return 3221226548LL;
            if ( (PteShadow & 4) != 0 )
            {
              v74 = PteShadow;
              if ( (unsigned __int64)&STACK[0x90482413020] <= 0x7F8 )
                v74 = MiReadPteShadow(v75, PteShadow);
              PteShadow &= ~4uLL;
              v75[0] = PteShadow;
              v8 = v74 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            *a7 = v8;
            if ( !v8 )
              return 0LL;
            *a6 = v71;
            if ( !a3 )
            {
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&Process[1].Affinity.Bitmap[13],
                0xFFFFFFFFFFFFFFFFuLL);
              PteShadow = v75[0];
              a3 = v10;
            }
            *(_QWORD *)a3 = PteShadow;
            if ( a3 + 0x90482413000LL > 0x7F8 )
              return 0LL;
            v66 = PteShadow;
          }
          else
          {
            if ( a4 == 1 )
            {
              if ( !(unsigned int)MI_IS_RESET_PTE(PteShadow) )
                return 3221226548LL;
              MI_CLEAR_RESET_PTE(v75);
              v73 = v75[0];
            }
            else
            {
              if ( (PteShadow & 2) != 0 )
              {
                MiReleasePageFileSpace(v71, PteShadow, 1LL);
                PteShadow &= ~2uLL;
              }
              v73 = MiUpdatePageFileHighInPte(PteShadow, 1LL);
              v75[0] = v73;
            }
            if ( !a3 )
              a3 = v10;
            *(_QWORD *)a3 = v73;
            if ( a3 + 0x90482413000LL > 0x7F8 )
              return 0LL;
            v66 = v73;
          }
          v67 = a3;
        }
        else
        {
          if ( a3 )
            return 3221226548LL;
          if ( a4 )
            return 3221226548LL;
          if ( MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v76, v11, 1LL) )
            return 3221226548LL;
          v64 = v76;
          if ( v76 == 24 )
            return 3221226548LL;
          MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16);
          v65 = (32LL * (v64 & 0x1F)) | MiMakePageFilePte(1LL) & 0xFFFFFFFFFFFFFC1FuLL;
          v75[0] = v65;
          *(_QWORD *)v10 = v65;
          if ( v10 + 0x90482413000LL > 0x7F8 )
            return 0LL;
          v66 = v65;
          v67 = v10;
        }
        MiWritePteShadow(v67, v66);
        return 0LL;
      }
      if ( a3 )
        v20 = MiLockLeafPage((unsigned __int64 *)a3, 0LL);
      else
        v20 = MiLockTransitionLeafPage(v10);
      v21 = v20;
    }
    while ( !v20 );
    if ( !a3 )
      break;
    a2 = *(_QWORD *)a3;
    if ( a3 + 0x90482413000LL <= 0x7F8 && (unsigned int)MiPteHasShadow(a1, a2) )
    {
      if ( (a2 & 1) == 0 )
        break;
      if ( (a2 & 0x20) == 0 || (a2 & 0x42) == 0 )
      {
        a1 = KeGetCurrentThread()->ApcState.Process;
        v22 = *(_QWORD *)&a1[2].ProcessLock;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 8 * ((a3 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            a2 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            a2 |= 0x42uLL;
        }
      }
    }
    if ( (a2 & 1) == 0 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a4 == 2 )
  {
    MiUpdatePfnPriority(v21, a5, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  v47 = *(_BYTE *)(v21 + 34);
  if ( (v47 & 7) == 2 )
  {
    if ( a4 == 1 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v21 + 16)) )
        MI_CLEAR_RESET_PTE(v21 + 16);
      else
        LODWORD(v8) = -1073740748;
      if ( (*(_DWORD *)(v21 + 16) & 4) == 0 )
      {
        v48 = *(_BYTE *)(v21 + 34) | 0x10;
        v49 = *(_WORD *)(v21 + 32) == 0;
        *(_BYTE *)(v21 + 34) = v48;
        if ( v49 )
        {
          v50 = MiUnlinkPageFromList(v21);
          v51 = v21;
          if ( !v50 )
          {
            MiDiscardTransitionPte(v21);
            goto LABEL_142;
          }
          v52 = 8LL;
LABEL_180:
          MiInsertPageInList(v51, v52);
        }
        else
        {
          *(_BYTE *)(v21 + 34) = v48 & 0xF8 | 3;
        }
      }
    }
    else if ( (v47 & 0x28) == 0 )
    {
      v53 = *(_QWORD *)(v21 + 16);
      v54 = (unsigned __int64 *)(v21 + 16);
      if ( (v53 & 4) != 0 )
      {
        v55 = *(_QWORD *)(v21 + 16);
        if ( v21 + 0x90482413010LL <= 0x7F8 )
          v55 = MiReadPteShadow(v21 + 16, v53);
        *v54 = v53 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else if ( (v53 & 2) != 0 )
      {
        v55 = *(_QWORD *)(v21 + 16);
        if ( v21 + 0x90482413010LL <= 0x7F8 )
          v55 = MiReadPteShadow(v21 + 16, v53);
      }
      else
      {
        v55 = 0LL;
      }
      *a7 = v55;
      if ( v55 )
        *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF);
      v56 = MiUpdatePageFileHighInPte(*v54, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
      v75[0] = v56;
      *v57 = v56;
      if ( (unsigned __int64)(v57 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v57, v56);
    }
  }
  else if ( (v47 & 7) == 3 )
  {
    if ( a4 == 1 )
    {
LABEL_142:
      LODWORD(v8) = -1073740748;
    }
    else if ( (v47 & 8) == 0 && !a4 && (v47 & 0x20) == 0 )
    {
      v58 = v47 & 0xEF;
      *(_BYTE *)(v21 + 34) = v58;
      if ( *(_WORD *)(v21 + 32) )
        *(_BYTE *)(v21 + 34) = v58 & 0xF8 | 2;
      else
        MiUnlinkPageFromList(v21);
      v59 = *(_QWORD *)(v21 + 16);
      v60 = (unsigned __int64 *)(v21 + 16);
      if ( (v59 & 4) != 0 )
      {
        v61 = *(_QWORD *)(v21 + 16);
        if ( v21 + 0x90482413010LL <= 0x7F8 )
          v61 = MiReadPteShadow(v21 + 16, v59);
        *v60 = v59 & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else if ( (v59 & 2) != 0 )
      {
        v61 = *(_QWORD *)(v21 + 16);
        if ( v21 + 0x90482413010LL <= 0x7F8 )
          v61 = MiReadPteShadow(v21 + 16, v59);
      }
      else
      {
        v61 = 0LL;
      }
      *a7 = v61;
      if ( v61 )
        *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v21 + 40)) >> 8) & 0x3FF);
      v62 = MiUpdatePageFileHighInPte(*v60, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
      v75[0] = v62;
      *v63 = v62;
      if ( (unsigned __int64)(v63 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(v63, v62);
      if ( !*(_WORD *)(v21 + 32) )
      {
        v52 = 4LL;
        v51 = v21;
        goto LABEL_180;
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v8;
}
