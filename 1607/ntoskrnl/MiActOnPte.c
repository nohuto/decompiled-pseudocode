/*
 * XREFs of MiActOnPte @ 0x1400B9B18
 * Callers:
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 * Callees:
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiCheckUserVirtualAddress @ 0x14001EA50 (MiCheckUserVirtualAddress.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiUpdatePageTableUseCount @ 0x140036FD0 (MiUpdatePageTableUseCount.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BA3CC (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiSetWsleAge @ 0x1400BBB24 (MiSetWsleAge.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakePageFilePte @ 0x1401F2578 (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiActOnPte(__int64 a1, ULONG_PTR a2, _QWORD *a3, int a4, unsigned int a5, _QWORD *a6, __int64 *a7)
{
  _KPROCESS *Process; // r13
  __int64 v11; // r12
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r9d
  unsigned __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r11d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r11d
  unsigned int v25; // r9d
  unsigned __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r8
  unsigned int updated; // ebx
  ULONG_PTR *SharedWorkingSetList; // r13
  unsigned __int64 Wsle; // rax
  _DWORD *v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // r8
  unsigned __int8 v39; // cl
  unsigned int v40; // esi
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 *v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // r10d
  unsigned __int64 *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // r14
  ULONG_PTR *v57; // rax
  __int64 v58; // rcx
  ULONG_PTR *v59; // rdi
  _DWORD *v60; // rsi
  unsigned int v61; // ebx
  char v62; // al
  int v63; // r14d
  _DWORD *v64; // r9
  __int16 v65; // r11
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 *v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  unsigned int v73; // edx
  unsigned __int64 *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  char v79; // al
  unsigned __int64 *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int16 v85; // r9
  __int64 PageFilePte; // rax
  _QWORD *v87; // rcx
  unsigned __int64 v88; // rdx
  int *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _KEVENT *v93; // rdi
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  _QWORD v102[2]; // [rsp+20h] [rbp-10h] BYREF
  int v104; // [rsp+80h] [rbp+50h] BYREF

  *a7 = 0LL;
  *a6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = (__int64)&Process[1].IdealNode[12];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = a3;
      if ( !a3 )
        v12 = (_QWORD *)a2;
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v15 = v13;
      v102[0] = v13;
      if ( ((unsigned __int8)v13 & (unsigned __int8)v14) == 0 )
        break;
      if ( !a3 )
      {
        v26 = MI_GET_PAGE_FRAME_FROM_PTE(v102);
        if ( !MiIsPfnInline(v26) )
          return 3221226548LL;
        v16 = 48 * v27 - 0x58000000000LL;
        v30 = *(_QWORD *)(v16 + 8);
        if ( (v30 & v28) != 0 )
        {
          if ( MiLocateCloneAddress(Process, v28 | v30) )
            return 3221226548LL;
        }
        else
        {
          if ( a4 == 1 )
            return 3221226548LL;
          if ( !a4 )
            return 274LL;
        }
        MiLockPageAtDpcInline(v16);
        v18 = a1;
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
        {
          v31 = MiRotatedToFrameBuffer(a2);
          v20 = 0;
          if ( v31 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
        else
        {
          v20 = 0;
        }
        v19 = 1;
LABEL_30:
        if ( a4 == 2 )
        {
          v32 = v20;
          if ( !a3 )
            v32 = v19;
          updated = MiUpdatePfnPriority(v16, a5, v32);
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != -1 && !a3 )
          {
            SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)&Process[1].IdealNode[12]);
            Wsle = MiLocateWsle((__int64)(a2 << 25) >> 16, v11, *(_QWORD *)v16);
            v36 = (_DWORD *)(SharedWorkingSetList[10] + Wsle * *((unsigned int *)SharedWorkingSetList + 8));
            v37 = (*v36 >> 9) & 7;
            if ( updated != v37 && (updated == 7 || v37 == 7) )
            {
              if ( Wsle >= SharedWorkingSetList[1] )
              {
                MiUpdateWorkingSetAgeDistribution(v11, v37, -1LL);
                MiUpdateWorkingSetAgeDistribution(v11, updated, 1LL);
              }
              if ( !updated )
                *(_QWORD *)a2 |= 0x20uLL;
              MiSetWsleAge(v11, v36, updated);
            }
          }
          v38 = *(_QWORD *)(v16 + 8);
          if ( v38 >= 0 && !a3 )
            MiDemoteCombinedPte(v11, a2, v38 | 0x8000000000000000uLL);
          return 0LL;
        }
        v39 = *(_BYTE *)(v16 + 34);
        if ( (v39 & 8) != 0 )
        {
          v40 = -1073740748;
LABEL_112:
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return v40;
        }
        if ( a4 == v19 )
        {
          if ( ((unsigned __int8)v19 & (v39 >> 4)) == 0
            && (((unsigned __int8)*(_DWORD *)(v16 + 16) >> 2) & (unsigned __int8)v19) == 0 )
          {
            *(_BYTE *)(v16 + 34) = v39 | 0x10;
          }
          if ( MI_IS_RESET_PTE(*(_QWORD *)(v16 + 16), v17, v18) )
          {
            v42 = MI_READ_PTE_LOCK_FREE(v41);
            v43 = MiUpdatePageFileHighInPte(v42, 0LL);
            *v44 = v43;
            if ( (unsigned int)MiPteInShadowRange(v44, v43) )
              MiWritePteShadow(v46, v45);
          }
          else
          {
            v47 = -1073740748;
          }
          v40 = v47;
          goto LABEL_112;
        }
        if ( (v39 & 0x10) != 0 )
          *(_BYTE *)(v16 + 34) = v39 & 0xEF;
        v48 = (unsigned __int64 *)(v16 + 16);
        v49 = MiCapturePageFileInfoInline((_QWORD *)(v16 + 16), v19, v19);
        *a7 = v49;
        if ( v49 )
          *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
        v50 = MiUpdatePageFileHighInPte(*v48, 1LL);
        *v48 = v50 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(v16 + 16, v50 & 0xFFFFFFFFFFFFFFFDuLL) )
          MiWritePteShadow(v52, v51);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 || (v102[0] & 0x42) == 0 )
          return 0LL;
        v53 = v102[0] & 0xFFFFFFFFFFFFFF9DuLL;
        v102[0] = v53;
        *(_QWORD *)a2 = v53;
        if ( (unsigned int)MiPteInShadowRange(a2, v53) )
          MiWritePteShadow(v55, v54);
        v56 = MiLocateWsle((__int64)(a2 << 25) >> 16, (__int64)&Process[1].IdealNode[12], *(_QWORD *)v16);
        v57 = MiGetSharedWorkingSetList((__int64)&Process[1].IdealNode[12]);
        v59 = v57;
        v60 = (_DWORD *)(v57[10] + v56 * *((unsigned int *)v57 + 8));
        v61 = (*v60 >> 9) & 7;
        if ( v61 )
        {
          if ( ((*v60 >> 9) & 7) == 7 )
            return 3221225505LL;
          if ( v56 >= v57[1] )
            MiUpdateWorkingSetAgeDistribution(v58, v61, -1LL);
        }
        if ( v61 < 7 )
        {
          if ( v56 >= v59[1] )
            ++Process[1].CycleTime;
          MiSetWsleAge(&Process[1].IdealNode[12], v60, 1LL);
        }
        return 3221225505LL;
      }
      v16 = MiLockLeafPage((__int64)a3, 0);
      if ( v16 )
      {
        v102[0] = MI_READ_PTE_LOCK_FREE(a3);
        if ( (v102[0] & (unsigned __int8)v19) != 0 )
          goto LABEL_30;
LABEL_17:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v13 & 0x400) != 0 )
      return 0LL;
    if ( (v13 & 0x800) == 0 )
      break;
    if ( a3 )
      v21 = MiLockLeafPage((__int64)a3, 0);
    else
      v21 = MiLockTransitionLeafPage(a2, 0LL);
    v24 = 0;
    v16 = v21;
    v25 = 1;
    if ( v21 )
    {
      if ( a3 )
      {
        v102[0] = MI_READ_PTE_LOCK_FREE(a3);
        if ( (v102[0] & (unsigned __int8)v25) != 0 )
          goto LABEL_17;
      }
      if ( a4 == 2 )
      {
        MiUpdatePfnPriority(v16, a5, v25);
        v40 = 0;
        goto LABEL_112;
      }
      v62 = *(_BYTE *)(v16 + 34);
      v63 = v24;
      if ( (v62 & 7) == 2 )
      {
        if ( a4 != v25 )
        {
          if ( (v62 & 0x28) == 0 )
          {
            v74 = (unsigned __int64 *)(v16 + 16);
            v75 = MiCapturePageFileInfoInline((_QWORD *)(v16 + 16), v25, v25);
            *a7 = v75;
            if ( v75 )
              *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
            v76 = MiUpdatePageFileHighInPte(*v74, 1LL);
            v102[0] = v76 & 0xFFFFFFFFFFFFFFFDuLL;
            *v74 = v76 & 0xFFFFFFFFFFFFFFFDuLL;
            if ( (unsigned int)MiPteInShadowRange(v16 + 16, v76 & 0xFFFFFFFFFFFFFFFDuLL) )
              MiWritePteShadow(v78, v77);
          }
          goto LABEL_111;
        }
        if ( MI_IS_RESET_PTE(*(_QWORD *)(v16 + 16), v22, v23) )
        {
          v66 = MI_READ_PTE_LOCK_FREE(v64);
          v67 = MiUpdatePageFileHighInPte(v66, 0LL);
          *v68 = v67;
          if ( (unsigned int)MiPteInShadowRange(v68, v67) )
            MiWritePteShadow(v70, v69);
        }
        else
        {
          v63 = -1073740748;
        }
        if ( (*v64 & 4) != 0 )
        {
LABEL_111:
          v40 = v63;
          goto LABEL_112;
        }
        *(_BYTE *)(v16 + 34) |= 0x10u;
        if ( *(_WORD *)(v16 + 32) != v65 )
        {
          *(_BYTE *)(v16 + 34) = *(_BYTE *)(v16 + 34) & 0xF8 | 3;
          goto LABEL_111;
        }
        v71 = MiUnlinkPageFromList(v16, 0);
        v72 = v16;
        if ( !v71 )
        {
          MiDiscardTransitionPte(v16);
          v63 = -1073740748;
          goto LABEL_111;
        }
        v73 = 8;
      }
      else
      {
        if ( (v62 & 7) != 3 )
          goto LABEL_111;
        if ( a4 == v25 )
        {
          v63 = -1073740748;
          goto LABEL_111;
        }
        if ( (v62 & 8) != 0 || a4 || (v62 & 0x20) != 0 )
          goto LABEL_111;
        v79 = v62 & 0xEF;
        *(_BYTE *)(v16 + 34) = v79;
        if ( *(_WORD *)(v16 + 32) == (_WORD)v24 )
          MiUnlinkPageFromList(v16, 0);
        else
          *(_BYTE *)(v16 + 34) = v79 & 0xF8 | 2;
        v80 = (unsigned __int64 *)(v16 + 16);
        v81 = MiCapturePageFileInfoInline((_QWORD *)(v16 + 16), 1, 1);
        *a7 = v81;
        if ( v81 )
          *a6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
        v82 = MiUpdatePageFileHighInPte(*v80, 1LL);
        v102[0] = v82 & 0xFFFFFFFFFFFFFFFDuLL;
        *v80 = v82 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(v16 + 16, v82 & 0xFFFFFFFFFFFFFFFDuLL) )
          MiWritePteShadow(v84, v83);
        if ( *(_WORD *)(v16 + 32) != v85 )
          goto LABEL_111;
        v73 = 4;
        v72 = v16;
      }
      MiInsertPageInList(v72, v73);
      goto LABEL_111;
    }
  }
  if ( a4 == 2 )
    return 0LL;
  if ( v13 )
  {
    v89 = MiPartitionIdToPointer(WORD2(Process[1].InstrumentationCallback));
    v93 = (struct _KEVENT *)v89;
    if ( a3 )
    {
      v93 = (struct _KEVENT *)MiSystemPartition;
      if ( (v15 & 8) != 0 )
        v93 = (struct _KEVENT *)v89;
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15, v90, v91, v92) )
    {
      if ( a4 == (_DWORD)v96 )
        return 3221226548LL;
      v99 = MiCapturePageFileInfoInline(v102, v96, 0);
      *a7 = v99;
      if ( !v99 )
        return 0LL;
      *a6 = v93;
      if ( !a3 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
        a3 = (_QWORD *)a2;
      }
      v88 = v102[0];
    }
    else
    {
      if ( a4 == (_DWORD)v96 )
      {
        if ( !MI_IS_RESET_PTE(v15, v94, v95) )
          return 3221226548LL;
        v97 = MI_READ_PTE_LOCK_FREE(v102);
        v102[0] = MiUpdatePageFileHighInPte(v97, 0LL);
        if ( (unsigned int)MiPteInShadowRange(v102, v102[0]) )
          MiWritePteShadow(v102, v98);
        v88 = v102[0];
      }
      else
      {
        if ( (((unsigned __int8)v15 >> 1) & (unsigned __int8)v96) != 0 )
        {
          MiReleasePageFileSpace(v93, v15, (unsigned int)v96);
          v15 &= ~2uLL;
          v96 = 1LL;
        }
        v88 = MiUpdatePageFileHighInPte(v15, v96);
        v102[0] = v88;
      }
      if ( !a3 )
        a3 = (_QWORD *)a2;
    }
    v87 = a3;
    *a3 = v88;
    goto LABEL_141;
  }
  if ( a3 || a4 || MiCheckUserVirtualAddress((__int64)(a2 << 25) >> 16, &v104, a1, v14) || v104 == 24 )
    return 3221226548LL;
  MiUpdatePageTableUseCount((__int64)(a2 << 25) >> 16);
  PageFilePte = MiMakePageFilePte(1LL);
  v87 = (_QWORD *)a2;
  v88 = (32LL * (v104 & 0x1F)) | PageFilePte & 0xFFFFFFFFFFFFFC1FuLL;
  v102[0] = v88;
  *(_QWORD *)a2 = v88;
LABEL_141:
  if ( (unsigned int)MiPteInShadowRange(v87, v88) )
    MiWritePteShadow(v101, v100);
  return 0LL;
}
