/*
 * XREFs of MiActOnPte @ 0x14001C9B4
 * Callers:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiCheckUserVirtualAddress @ 0x14001D660 (MiCheckUserVirtualAddress.c)
 *     MiUpdatePageTableUseCount @ 0x14001EC38 (MiUpdatePageTableUseCount.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiLockLeafPage @ 0x1400A2340 (MiLockLeafPage.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x1400BACAC (MiSetWsleAge.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiActOnPte(__int64 a1, ULONG_PTR a2, _QWORD *a3, int a4, unsigned int a5, int **a6, __int64 *a7)
{
  __int64 *v7; // r12
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r13
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  ULONG_PTR v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v21; // rdx
  unsigned int updated; // ebx
  unsigned __int16 *v23; // r13
  __int64 v24; // r15
  unsigned __int64 Wsle; // rax
  _DWORD *v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rdx
  char v29; // cl
  unsigned int v30; // esi
  int v31; // r15d
  unsigned __int64 v32; // rdx
  unsigned int v33; // ebx
  _DWORD *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  struct _LIST_ENTRY *Flink; // rdi
  unsigned __int64 v40; // r15
  _DWORD *v41; // rsi
  unsigned int v42; // ebx
  char v43; // al
  int v44; // r12d
  _QWORD *v45; // r14
  unsigned __int64 v46; // rcx
  unsigned int v47; // ebx
  char v48; // al
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  ULONG_PTR v52; // rcx
  __int64 v53; // rdx
  _DWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbx
  char v57; // al
  _DWORD *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rbx
  _QWORD *v62; // rcx
  __int64 v63; // rax
  int *v64; // rdi
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  _QWORD v68[2]; // [rsp+20h] [rbp-10h] BYREF
  int v70; // [rsp+80h] [rbp+50h] BYREF

  v7 = a7;
  *a6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *v7 = 0LL;
  Process = CurrentThread->ApcState.Process;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = a3;
      if ( !a3 )
        v13 = (_QWORD *)a2;
      v14 = MI_READ_PTE_LOCK_FREE(v13);
      v15 = v14;
      v68[0] = v14;
      if ( (v14 & 1) == 0 )
        break;
      if ( !a3 )
      {
        v18 = MI_READ_PTE_LOCK_FREE(v68);
        if ( !(unsigned int)MI_IS_PFN((v18 >> 12) & 0xFFFFFFFFFLL) )
          return 3221226548LL;
        v16 = 48 * v19 - 0x58000000000LL;
        v21 = *(_QWORD *)(v16 + 8);
        if ( v21 < 0 )
        {
          if ( MiLocateCloneAddress(Process, v21 | 0x8000000000000000uLL) )
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
        if ( (*(_BYTE *)(a1 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(a2) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
LABEL_28:
        if ( a4 == 2 )
        {
          updated = MiUpdatePfnPriority(v16, a5, a3 == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( updated != -1 && !a3 )
          {
            v23 = &Process[1].IdealNode[12];
            v24 = *((_QWORD *)v23 + 23);
            Wsle = MiLocateWsle((__int64)(a2 << 25) >> 16);
            v26 = (_DWORD *)(*(_QWORD *)(v24 + 496) + Wsle * *(unsigned int *)(v24 + 64));
            v27 = (*v26 >> 9) & 7;
            if ( updated != (_DWORD)v27 && (updated == 7 || (_DWORD)v27 == 7) )
            {
              if ( Wsle >= *(_QWORD *)(v24 + 8) )
              {
                MiUpdateWorkingSetAgeDistribution(v23, v27, -1LL);
                MiUpdateWorkingSetAgeDistribution(v23, updated, 1LL);
              }
              if ( !updated )
                *(_QWORD *)a2 |= 0x20uLL;
              MiSetWsleAge(v24, v26, updated);
            }
          }
          v28 = *(_QWORD *)(v16 + 8);
          if ( v28 >= 0 && !a3 )
            MiDemoteCombinedPte(a2, v28 | 0x8000000000000000uLL);
          return 0LL;
        }
        v29 = *(_BYTE *)(v16 + 34);
        if ( (v29 & 8) != 0 )
        {
          v30 = -1073740748;
LABEL_118:
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return v30;
        }
        if ( a4 == 1 )
        {
          v31 = 0;
          if ( (v29 & 0x10) != 0 || !a3 && (v15 & 0x42) != 0 )
            v31 = -1073740748;
          if ( (v29 & 0x10) == 0 && (*(_DWORD *)(v16 + 16) & 0x2000LL) == 0 )
            *(_BYTE *)(v16 + 34) = v29 | 0x10;
          v32 = *(_QWORD *)(v16 + 16);
          if ( (v32 & 1) != 0 || (v32 & 0xC00) != 0 || (v32 & 0x3000) != 0 || HIDWORD(v32) != 1 )
          {
            v31 = -1073740748;
          }
          else
          {
            v33 = *(_QWORD *)(v16 + 16);
            *(_QWORD *)(v16 + 16) = (unsigned int)v32;
            if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
              MiWritePteShadow(v16 + 16, v33);
          }
          v30 = v31;
          goto LABEL_118;
        }
        if ( (v29 & 0x10) != 0 )
          *(_BYTE *)(v16 + 34) = v29 & 0xEF;
        v34 = (_DWORD *)(v16 + 16);
        v35 = MiCapturePageFileInfoInline(v16 + 16, 1LL, 1LL);
        *v7 = v35;
        if ( v35 )
          *a6 = (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
        v36 = *v34 & 0xFFFFEFFF | 0x100000000LL;
        *(_QWORD *)v34 = v36;
        if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
          MiWritePteShadow(v16 + 16, v36);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( a3 || (v68[0] & 0x42) == 0 )
          return 0LL;
        v37 = v68[0] & 0xFFFFFFFFFFFFFF9DuLL;
        v68[0] = v37;
        *(_QWORD *)a2 = v37;
        if ( (unsigned int)MiPteInShadowRange(a2) )
          MiWritePteShadow(a2, v37);
        v38 = MiLocateWsle((__int64)(a2 << 25) >> 16);
        Flink = Process[2].Header.WaitListHead.Flink;
        v40 = v38;
        v41 = (_DWORD *)((char *)Flink[31].Flink + v38 * LODWORD(Flink[4].Flink));
        v42 = (*v41 >> 9) & 7;
        if ( v42 )
        {
          if ( ((*v41 >> 9) & 7) == 7 )
            return 3221225505LL;
          if ( (struct _LIST_ENTRY *)v38 >= Flink->Blink )
            MiUpdateWorkingSetAgeDistribution(&Process[1].IdealNode[12], v42, -1LL);
        }
        if ( v42 < 7 )
        {
          if ( (struct _LIST_ENTRY *)v40 >= Flink->Blink )
            ++Process[1].CycleTime;
          MiSetWsleAge(Flink, v41, 1LL);
        }
        return 3221225505LL;
      }
      v16 = MiLockLeafPage(a3, 0LL);
      if ( v16 )
      {
        v68[0] = MI_READ_PTE_LOCK_FREE(a3);
        LOBYTE(v15) = v68[0];
        if ( (v68[0] & 1) != 0 )
          goto LABEL_28;
LABEL_17:
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v14 & 0x400) != 0 )
      return 0LL;
    if ( (v14 & 0x800) == 0 )
      break;
    if ( a3 )
      v17 = MiLockLeafPage(a3, 0LL);
    else
      v17 = MiLockTransitionLeafPage(a2, 0LL);
    v16 = v17;
    if ( v17 )
    {
      if ( a3 )
      {
        v68[0] = MI_READ_PTE_LOCK_FREE(a3);
        if ( (v68[0] & 1) != 0 )
          goto LABEL_17;
      }
      if ( a4 == 2 )
      {
        MiUpdatePfnPriority(v16, a5, 1LL);
        v30 = 0;
        goto LABEL_118;
      }
      v43 = *(_BYTE *)(v16 + 34);
      v44 = 0;
      if ( (v43 & 7) == 2 )
      {
        if ( a4 != 1 )
        {
          if ( (v43 & 0x28) == 0 )
          {
            v54 = (_DWORD *)(v16 + 16);
            v55 = MiCapturePageFileInfoInline(v16 + 16, 1LL, 1LL);
            *a7 = v55;
            if ( v55 )
              *a6 = (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
            v56 = *v54 & 0xFFFFEFFF | 0x100000000LL;
            v68[0] = v56;
            *(_QWORD *)v54 = v56;
            if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
              MiWritePteShadow(v16 + 16, v56);
          }
          goto LABEL_117;
        }
        v45 = (_QWORD *)(v16 + 16);
        v46 = *(_QWORD *)(v16 + 16);
        if ( (v46 & 1) != 0 || (v46 & 0xC00) != 0 || (v46 & 0x3000) != 0 || HIDWORD(v46) != 1 )
        {
          v44 = -1073740748;
        }
        else
        {
          v47 = *(_QWORD *)(v16 + 16);
          *v45 = (unsigned int)v46;
          if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
            MiWritePteShadow(v16 + 16, v47);
        }
        if ( (*(_DWORD *)v45 & 0x2000LL) != 0 )
        {
LABEL_117:
          v30 = v44;
          goto LABEL_118;
        }
        v48 = *(_BYTE *)(v16 + 34) | 0x10;
        *(_BYTE *)(v16 + 34) = v48;
        if ( *(_WORD *)(v16 + 32) )
        {
          *(_BYTE *)(v16 + 34) = v48 & 0xF8 | 3;
          goto LABEL_117;
        }
        v49 = MiUnlinkPageFromList(v16);
        v52 = v16;
        if ( !v49 )
        {
          MiDiscardTransitionPte(v16);
          v44 = -1073740748;
          goto LABEL_117;
        }
        v53 = 8LL;
      }
      else
      {
        if ( (v43 & 7) != 3 )
          goto LABEL_117;
        if ( a4 == 1 )
        {
          v44 = -1073740748;
          goto LABEL_117;
        }
        if ( (v43 & 8) != 0 || a4 || (v43 & 0x20) != 0 )
          goto LABEL_117;
        v57 = v43 & 0xEF;
        *(_BYTE *)(v16 + 34) = v57;
        if ( *(_WORD *)(v16 + 32) )
          *(_BYTE *)(v16 + 34) = v57 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v16);
        v58 = (_DWORD *)(v16 + 16);
        v59 = MiCapturePageFileInfoInline(v16 + 16, 1LL, 1LL);
        *a7 = v59;
        if ( v59 )
          *a6 = (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v16 + 40)) >> 8) & 0x3FF);
        v60 = *v58 & 0xFFFFEFFF | 0x100000000LL;
        v68[0] = v60;
        *(_QWORD *)v58 = v60;
        if ( (unsigned int)MiPteInShadowRange(v16 + 16) )
          MiWritePteShadow(v16 + 16, v60);
        if ( *(_WORD *)(v16 + 32) )
          goto LABEL_117;
        v53 = 4LL;
        v52 = v16;
      }
      MiInsertPageInList(v52, v53, v50, v51);
      goto LABEL_117;
    }
  }
  if ( a4 == 2 )
    return 0LL;
  if ( !v14 )
  {
    if ( !a3 && !a4 && !MiCheckUserVirtualAddress((__int64)(a2 << 25) >> 16, &v70, a1) && v70 != 24 )
    {
      MiUpdatePageTableUseCount((__int64)(a2 << 25) >> 16, 1LL);
      v61 = 32 * (v70 & 0x1F | 0x8000000LL);
      v68[0] = v61;
      *(_QWORD *)a2 = v61;
      if ( (unsigned int)MiPteInShadowRange(a2) )
      {
        v62 = (_QWORD *)a2;
        goto LABEL_154;
      }
      return 0LL;
    }
    return 3221226548LL;
  }
  v63 = MiPartitionIdToPointer(LOWORD(Process[2].Header.SignalState));
  v64 = (int *)v63;
  if ( a3 )
  {
    v64 = &MiSystemPartition;
    if ( (v15 & 0x1000000) != 0 )
      v64 = (int *)v63;
  }
  if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v15) )
  {
    if ( a4 == (_DWORD)v66 )
      return 3221226548LL;
    v67 = MiCapturePageFileInfoInline(v68, (unsigned int)v66, v65);
    *v7 = v67;
    if ( !v67 )
      return 0LL;
    *a6 = v64;
    if ( !a3 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      a3 = (_QWORD *)a2;
    }
    v61 = v68[0];
  }
  else
  {
    if ( a4 == (_DWORD)v66 )
    {
      if ( ((unsigned __int8)v15 & (unsigned __int8)v66) != 0
        || (v15 & 0x800) != 0
        || (v15 & 0x400) != 0
        || ((unsigned __int8)(v15 >> 13) & (unsigned __int8)v66) != 0
        || ((unsigned __int8)(v15 >> 12) & (unsigned __int8)v66) != 0
        || HIDWORD(v15) != v66 )
      {
        return 3221226548LL;
      }
      v68[0] = (unsigned int)v15;
      if ( (unsigned int)MiPteInShadowRange(v68) )
        MiWritePteShadow(v68, (unsigned int)v15);
      v61 = v68[0];
    }
    else
    {
      if ( ((unsigned __int8)(v15 >> 12) & (unsigned __int8)v66) != 0 )
      {
        MiReleasePageFileSpace(v64, v15, (unsigned int)v66);
        LODWORD(v15) = v15 & 0xFFFFEFFF;
      }
      v61 = (unsigned int)v15 | 0x100000000LL;
      v68[0] = v61;
    }
    if ( !a3 )
      a3 = (_QWORD *)a2;
  }
  *a3 = v61;
  if ( (unsigned int)MiPteInShadowRange(a3) )
  {
    v62 = a3;
LABEL_154:
    MiWritePteShadow(v62, v61);
  }
  return 0LL;
}
