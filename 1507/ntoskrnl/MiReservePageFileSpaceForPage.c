/*
 * XREFs of MiReservePageFileSpaceForPage @ 0x1400DD2E0
 * Callers:
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiReservePageFileSpace @ 0x1400DCF1C (MiReservePageFileSpace.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_IS_RESET_PTE @ 0x1402259E8 (MI_IS_RESET_PTE.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReservePageFileSpaceForPage(__int16 *a1, unsigned __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  BOOL v8; // r12d
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 DemandZeroPte; // rdi
  __int64 v13; // rax
  __int16 *v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int16 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 *v22; // r10
  __int64 PteShadow; // rsi
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // edi
  __int64 v29; // rax
  int v31; // [rsp+20h] [rbp-58h]
  unsigned __int64 v32; // [rsp+28h] [rbp-50h] BYREF
  int v34; // [rsp+88h] [rbp+10h]

  v4 = 0;
  v5 = 0LL;
  v6 = a2 + 0x90482413000LL;
  v7 = a2;
  v31 = 0;
  v34 = 0;
  while ( 1 )
  {
    v8 = 0;
    if ( (a3 & 0x80u) != 0 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = MiLockLeafPage((unsigned __int64 *)v7, 0LL);
      v8 = v9 != 0;
    }
    v10 = *(_QWORD *)v7;
    if ( v6 <= 0x7F8
      && (unsigned int)MiPteHasShadow(a1, a2)
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      a2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( a2 )
      {
        v11 = *(_QWORD *)(a2 + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v10 |= 0x20uLL;
        if ( (v11 & 0x42) != 0 )
          v10 |= 0x42uLL;
      }
    }
    v32 = v10;
    DemandZeroPte = v10;
    if ( (v10 & 1) != 0 )
      break;
    if ( (v10 & 0x400) != 0 )
      goto LABEL_92;
    if ( (v10 & 0x800) == 0 )
    {
      if ( v10 )
      {
        if ( !(unsigned int)MiInvalidPteConforms(v10, a2) || ((v10 >> 5) & 0xF) == 0 )
          goto LABEL_92;
      }
      else
      {
        if ( (a3 & 2) == 0 )
          goto LABEL_92;
        DemandZeroPte = MiMakeDemandZeroPte((a3 >> 2) & 0x1F);
        v32 = DemandZeroPte;
        v31 = 1;
      }
LABEL_55:
      v14 = a1;
      goto LABEL_56;
    }
    if ( (a3 & 0x80u) == 0 )
      goto LABEL_21;
    v13 = MiLockTransitionLeafPage((_KPROCESS *)v7, 0LL);
    v9 = v13;
    if ( v13 )
    {
      v8 = 1;
      if ( (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) != 0 )
      {
        v16 = (unsigned __int64)a1;
        goto LABEL_96;
      }
LABEL_21:
      v14 = a1;
      if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF) == a1 )
      {
        DemandZeroPte = *(_QWORD *)(v9 + 16);
        if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8 )
          DemandZeroPte = MiReadPteShadow(v9 + 16, *(_QWORD *)(v9 + 16));
        v32 = DemandZeroPte;
        if ( !(unsigned int)MI_IS_RESET_PTE(DemandZeroPte) || (*(_BYTE *)(v9 + 34) & 0x10) != 0 )
        {
LABEL_56:
          if ( (DemandZeroPte & 2) != 0 )
          {
            v16 = (unsigned __int64)a1;
            if ( (a3 & 1) != 0 )
              *a4 = DemandZeroPte;
            goto LABEL_93;
          }
          if ( !v9 || (*(_BYTE *)(v9 + 34) & 0x28) == 0 )
          {
            if ( (DemandZeroPte & 4) == 0 )
              goto LABEL_73;
            if ( v9 )
            {
              if ( (a3 & 1) == 0 )
              {
                if ( !*(_WORD *)(v9 + 32) )
                {
                  if ( !(unsigned int)MiUnlinkPageFromList(v9, 0LL) )
                  {
                    MiDiscardTransitionPte(v9);
                    goto LABEL_92;
                  }
                  v34 = 1;
                }
                v16 = *(_QWORD *)(v9 + 16);
                v22 = (unsigned __int64 *)(v9 + 16);
                if ( (v16 & 4) != 0 )
                {
                  PteShadow = *(_QWORD *)(v9 + 16);
                  if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8 )
                    PteShadow = MiReadPteShadow(v9 + 16, *(_QWORD *)(v9 + 16));
                  v16 &= ~4uLL;
                  *v22 = v16;
                  v5 = PteShadow & 0xFFFFFFFFFFFFFFFDuLL;
                }
                *(_BYTE *)(v9 + 34) |= 0x10u;
LABEL_73:
                if ( (a3 & 1) == 0 )
                {
                  v24 = MiReverseSwizzleInvalidPte(*a4, *a4, v15, v16);
                  v26 = MiTransferSoftwarePte(DemandZeroPte, *(_QWORD *)&v14[4 * (v25 >> 12) + 2672], HIDWORD(v24));
                  v27 = v26;
                  if ( (DemandZeroPte & 8) != 0 )
                    v27 = v26 | 8;
                  if ( v9 )
                  {
                    v28 = v34;
                    if ( !*(_WORD *)(v9 + 32) && (*(_BYTE *)(v9 + 34) & 0x10) != 0 && !v34 )
                    {
                      MiUnlinkPageFromList(v9, 0LL);
                      v28 = 1;
                    }
                    *(_QWORD *)(v9 + 16) = v27;
                    if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8 )
                      MiWritePteShadow(v9 + 16, v27);
                    if ( v28 )
                      MiInsertPageInList(v9, 8u);
                  }
                  else
                  {
                    *(_QWORD *)v7 = v27;
                    if ( v6 <= 0x7F8 )
                      MiWritePteShadow(v7, v27);
                  }
                  if ( v31
                    && v7 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                    && v7 >= 0xFFFFF68000000000uLL )
                  {
                    v29 = MI_GET_USED_PTES_HANDLE((__int64)(v7 << 25) >> 16);
                    MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v29, 1u);
                  }
                }
              }
              v4 = 1;
            }
          }
        }
      }
LABEL_92:
      v16 = (unsigned __int64)a1;
      goto LABEL_93;
    }
  }
  if ( (a3 & 0x80u) != 0 )
  {
    v17 = v10;
    if ( (unsigned __int64)&STACK[0x90482413028] <= 0x7F8 )
      v17 = MiReadPteShadow(&v32, v10);
    v9 = 48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (a3 & 1) == 0 )
    {
      v8 = 1;
      v18 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      }
    }
    if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) != 0 )
      goto LABEL_92;
  }
  if ( !*(_QWORD *)v9 )
    goto LABEL_92;
  v19 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF);
  v16 = (unsigned __int64)a1;
  if ( v19 == a1 && (*(_BYTE *)(v9 + 35) & 8) == 0 )
  {
    DemandZeroPte = *(_QWORD *)(v9 + 16);
    if ( (unsigned __int64)(v9 + 0x90482413010LL) <= 0x7F8 )
      DemandZeroPte = MiReadPteShadow(v9 + 16, *(_QWORD *)(v9 + 16));
    v32 = DemandZeroPte;
    if ( (unsigned int)MiInvalidPteConforms(DemandZeroPte, v20) )
    {
      if ( !(unsigned int)MI_IS_RESET_PTE(v21)
        || (*(_BYTE *)(v9 + 34) & 0x10) != 0
        || (a3 & 0x80u) != 0 && (v10 & 0x42) != 0 )
      {
        goto LABEL_55;
      }
    }
  }
LABEL_93:
  if ( !v8 )
    goto LABEL_97;
LABEL_96:
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_97:
  if ( v5 )
    MiReleasePageFileInfo(v16, v5, 1LL);
  return v4;
}
