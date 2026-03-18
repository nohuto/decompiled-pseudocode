/*
 * XREFs of MiDeletePteRun @ 0x14004FE20
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDeletePagablePteRange @ 0x1400BACF0 (MiDeletePagablePteRange.c)
 * Callees:
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeletePteRun(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // r14
  ULONG_PTR v8; // r12
  __int64 v9; // rsi
  unsigned int v10; // r13d
  int *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rbx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // r15
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // ebx
  __int64 v21; // r12
  __int64 v22; // r14
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  _QWORD *CloneAddress; // rax
  unsigned __int16 v29; // ax
  int *v30; // rax
  signed __int8 v31; // cf
  char v32; // dl
  char v33; // cl
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // ax
  int *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // r8d
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rbx
  __int64 PteAddress; // rax
  unsigned __int8 v45; // r15
  int v46; // eax
  bool v47; // zf
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r13
  unsigned __int64 *v51; // r15
  unsigned __int64 v52; // r15
  unsigned __int64 v53; // rbx
  unsigned __int64 HyperPte; // r13
  int v55; // ebx
  _QWORD *v56; // r15
  unsigned __int64 v57; // r13
  unsigned int v58; // ebx
  void *v59; // rax
  __int64 v60; // rax
  char v61; // al
  char v62; // al
  char v63; // al
  unsigned __int16 v64; // ax
  int *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  char v68; // al
  __int64 v69; // rcx
  unsigned int v70; // edx
  unsigned __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  int v76; // [rsp+50h] [rbp+0h] BYREF

  v5 = (unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL;
  result = *(unsigned __int16 *)(a3 + 1460);
  v7 = a5;
  v8 = BugCheckParameter2;
  *(_QWORD *)(v5 + 88) = BugCheckParameter2;
  v9 = a3;
  *(_QWORD *)(v5 + 32) = a3;
  *(_QWORD *)(v5 + 96) = a4;
  v10 = 0;
  *(_QWORD *)(v5 + 128) = a2;
  *(_QWORD *)(v5 + 16) = a5;
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  if ( (_WORD)result == 1023 )
  {
    v11 = &MiSystemPartition;
  }
  else
  {
    v12 = (unsigned __int16)result;
    result = qword_1402FEC28;
    v11 = *(int **)(qword_1402FEC28 + 8 * v12);
  }
  *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v11;
  if ( v8 <= a2 )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(v8);
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = result;
      if ( (result & 1) != 0 )
        goto LABEL_150;
      if ( !result )
      {
        v13 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        if ( v10 )
        {
          result = MiDeleteBatch(
                     (_QWORD *)(v5 + 272),
                     (_QWORD *)(v5 + 144),
                     v10,
                     *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                     0);
          *(_QWORD *)(v7 + 8) += result;
          v10 = 0;
          *(_DWORD *)v5 = 0;
        }
        goto LABEL_151;
      }
      if ( (result & 0x400) == 0 )
      {
        v13 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        if ( v10 )
        {
          *(_QWORD *)(v7 + 8) += MiDeleteBatch(
                                   (_QWORD *)(v5 + 272),
                                   (_QWORD *)(v5 + 144),
                                   v10,
                                   *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                                   0);
          v10 = 0;
          *(_DWORD *)v5 = 0;
        }
        result = MiDeleteTransitionPte(v8, 1);
        if ( (_DWORD)result == 1 )
        {
          v74 = MI_READ_PTE_LOCK_FREE(v8);
          *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v74;
          v75 = v74;
          MiReleasePageFileSpace(v11, v74, 1LL);
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v75) )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          goto LABEL_148;
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        if ( (_DWORD)result == 3 )
          ++*(_QWORD *)(v7 + 8);
        goto LABEL_151;
      }
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
      v14 = result & 0xFFFFFFFFFFFFFBFEuLL | 1;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v14;
      v15 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      v16 = 0LL;
      v17 = MI_READ_PTE_LOCK_FREE(v5 + 48);
      if ( !(unsigned int)MI_IS_PFN((v17 >> 12) & 0xFFFFFFFFFLL) )
      {
        MiDereferenceIoPages(1LL, v18);
        v20 = 4;
        v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
        goto LABEL_130;
      }
      v22 = 48 * v18 - 0x58000000000LL;
      v23 = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
      if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 )
      {
        if ( v10 )
        {
          v37 = MiDeleteBatch(
                  (_QWORD *)(v5 + 272),
                  (_QWORD *)(v5 + 144),
                  v10,
                  *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  0);
          v38 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          v10 = 0;
          *(_DWORD *)v5 = 0;
          v19 = 0xFFFFFFFFFLL;
          *(_QWORD *)(v38 + 8) += v37;
        }
        if ( v23 != v8 )
          KeBugCheckEx(0x1Au, 0x403uLL, v8, v14, *(_QWORD *)(v22 + 8));
        v21 = 48 * (v19 & *(_QWORD *)(v22 + 40)) - 0x58000000000LL;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) + 920LL),
          0xFFFFFFFFFFFFFFFFuLL);
        *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(v5 + 68);
          while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_QWORD *)(v22 + 24) |= 0x4000000000000000uLL;
LABEL_64:
        if ( (*(_BYTE *)(v22 + 34) & 7) != 6 )
          KeBugCheckEx(
            0x4Eu,
            0x99uLL,
            (v22 + 0x58000000000LL) / 48,
            *(_BYTE *)(v22 + 34) & 7,
            *(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL);
        v20 = 4;
        *(_QWORD *)(v22 + 24) ^= (((*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ *(_QWORD *)(v22 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(v22 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
        {
          v39 = *(_QWORD *)(v22 + 40);
          if ( (v39 & 0x200000000000000LL) != 0 )
          {
            v40 = 4;
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = (*(_DWORD *)(v22 + 16) >> 5) & 0x1F;
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
            v41 = v39 & 0xFFFFFFFFFLL;
            v42 = *(unsigned __int8 *)(48 * v41 - 0x58000000000LL + 34) >> 6;
            if ( !v42 || v42 == 3 )
            {
              v40 = 12;
            }
            else if ( v42 == 2 )
            {
              v40 = 28;
            }
            v43 = MmProtectToPteMask[v40] ^ ((v41 << 12) ^ MmProtectToPteMask[v40]) & 0xFFFFFFFFF000LL | 0x21;
            PteAddress = MiGetPteAddress(0xFFFF800000000000uLL);
            v45 = word_1402FE760;
            if ( PteAddress )
            {
              v46 = HIBYTE(word_1402FE760);
              goto LABEL_79;
            }
            if ( (MiGetPteAddress(0xFFFFF90000000000uLL) || !MiGetPteAddress(0xFFFFF98000000000uLL))
              && MiGetPteAddress(0xFFFFF68000000000uLL) )
            {
              v47 = MiGetPteAddress(0xFFFFF58000000000uLL) == 0;
              v46 = HIBYTE(word_1402FE760);
              if ( !v47 )
                v46 = v45;
LABEL_79:
              if ( v46 )
                v43 |= 0x100uLL;
            }
            CurrentPrcb = KeGetCurrentPrcb();
            v49 = (((unsigned __int16)v43 ^ (unsigned __int16)(v45 << 8)) & 0x100 ^ (unsigned __int64)v43) & 0xFFFFFFFFFFFFFF3DuLL | 0x42;
            v50 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
            v51 = (unsigned __int64 *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            *v51 = v49;
            if ( (unsigned int)MiPteInShadowRange(v51) )
              MiWritePteShadow(v51, v49);
            v52 = v50 + 8 * ((*(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) >> 3) & 0x1FFLL);
            v53 = (32 * (*(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) & 0x1F | 0x40LL)) | MI_READ_PTE_LOCK_FREE(v52) & 0xFFFFFFFFFFFFF81EuLL;
            *(_QWORD *)v52 = v53;
            if ( (unsigned int)MiPteInShadowRange(v52) )
              MiWritePteShadow(v52, v53);
            HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
            v55 = HyperPte & 0xFFF;
            v56 = (_QWORD *)((((v52 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v57 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
            v58 = v55 + 1;
            *v56 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v56) )
              MiWritePteShadow(v56, 0LL);
            if ( v58 == 64 )
            {
              MiFlushHyperSpace();
              v58 = 0;
            }
            v59 = (void *)(v57 | v58);
            v10 = *(_DWORD *)v5;
            KeGetCurrentPrcb()->HyperPte = v59;
          }
          v47 = (*(_WORD *)(v22 + 32))-- == 1;
          v60 = *(_QWORD *)(v22 + 24);
          if ( !v47 )
          {
            if ( (v60 & 0x4000000000000000LL) != 0 )
            {
              *(_BYTE *)(v22 + 34) |= 7u;
            }
            else
            {
              v61 = *(_BYTE *)(v22 + 34);
              if ( (v61 & 0x10) != 0 )
                v62 = v61 & 0xF8 | 3;
              else
                v62 = v61 & 0xF8 | 2;
              *(_BYTE *)(v22 + 34) = v62;
            }
            if ( (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 && (MI_READ_PTE_LOCK_FREE(v22 + 16) & 0x2000) != 0 )
              *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF) + 594) = 1;
            v15 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v20 = 3;
            if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) != 0
              && !*(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38)
              && !v15 )
            {
              v20 = 4;
            }
LABEL_129:
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v7 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
LABEL_130:
            *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(v5 + 64);
              while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0 );
            }
            if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
              KeBugCheckEx(
                0x4Eu,
                0x99uLL,
                (v21 + 0x58000000000LL) / 48,
                *(_BYTE *)(v21 + 34) & 7,
                *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL);
            v73 = *(_QWORD *)(v21 + 24);
            *(_QWORD *)(v21 + 24) = v73 ^ (((v73 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v73) & 0x3FFFFFFFFFFFFFFFLL;
            if ( (v73 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
              MiPfnShareCountIsZero(v21);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v16 )
              MiReleasePageFileInfo(*(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28), v16, 1LL);
            if ( *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) )
            {
              v20 = MiDecrementCombinedPte(*(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
              goto LABEL_140;
            }
            if ( v15 )
            {
              v9 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              v20 = MiDecrementCloneBlockReference(
                      v15,
                      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68),
                      v9);
            }
            else
            {
LABEL_140:
              v9 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
            }
            if ( v20 == 3 )
            {
              ++*(_QWORD *)(v7 + 8);
            }
            else if ( v20 == 5 )
            {
              ++*(_QWORD *)(v7 + 16);
            }
            v8 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
LABEL_148:
            *(_QWORD *)v8 = 0LL;
            result = MiPteInShadowRange(v8);
            if ( (_DWORD)result )
              result = MiWritePteShadow(v8, 0LL);
LABEL_150:
            v13 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            goto LABEL_151;
          }
          if ( (v60 & 0x4000000000000000LL) != 0 )
          {
            v63 = *(_BYTE *)(v22 + 35);
            if ( (v63 & 0x10) != 0 )
              *(_BYTE *)(v22 + 35) = v63 & 0xEF;
            v64 = ((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF;
            if ( v64 == 1023 )
              v65 = &MiSystemPartition;
            else
              v65 = *(int **)(qword_1402FEC28 + 8LL * v64);
            v66 = *(_QWORD *)(v22 + 16);
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v66;
            if ( (v66 & 0x400) == 0 )
            {
              v67 = (v66 & 0x2000) != 0 || (v66 & 0x1000) != 0 ? MI_READ_PTE_LOCK_FREE(v5 + 72) : 0LL;
              *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v67;
              if ( v67 )
                MiReleasePageFileInfo(v65, v67, 0LL);
            }
            MiInsertPageInFreeOrZeroedList((v22 + 0x58000000000LL) / 48, 2uLL);
          }
          else
          {
            v68 = *(_BYTE *)(v22 + 34);
            if ( (v68 & 0x10) != 0 )
            {
              v69 = v22;
              v70 = 136;
              if ( *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) != 1LL )
                v70 = 8;
            }
            else
            {
              v71 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
              *(_BYTE *)(v22 + 34) = v68 & 0xF8 | 2;
              if ( v71 > 1 && (unsigned int)MI_GET_PFN_PRIORITY(v22) < 5 )
              {
                MiInsertProtectedStandbyPage(v72, v22);
                goto LABEL_127;
              }
              v70 = 4;
              v69 = v22;
            }
            MiInsertPageInList(v69, v70);
          }
LABEL_127:
          v20 = 4;
        }
        v15 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        goto LABEL_129;
      }
      if ( v8 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v8 >= 0xFFFFF68000000000uLL )
      {
        if ( (*(_QWORD *)(v22 + 8) & 0x8000000000000000uLL) != 0 )
        {
          v26 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
          if ( *(_QWORD *)(v26 + 912) )
          {
            v27 = *(_QWORD *)(v22 + 8) | 0x8000000000000000uLL;
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v23;
            CloneAddress = MiLocateCloneAddress(v26, v27);
            *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = CloneAddress;
            if ( CloneAddress )
            {
              if ( v10 )
              {
LABEL_17:
                v24 = MiDeleteBatch(
                        (_QWORD *)(v5 + 272),
                        (_QWORD *)(v5 + 144),
                        v10,
                        *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                        0);
                v25 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                v10 = 0;
                *(_DWORD *)v5 = 0;
                *(_QWORD *)(v25 + 8) += v24;
                goto LABEL_22;
              }
            }
          }
        }
        else
        {
          *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v23;
          if ( v10 )
            goto LABEL_17;
        }
      }
      v25 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
LABEL_22:
      v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
      if ( !v10 )
        goto LABEL_30;
      v13 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v21 != v13
        || ((v29 = (HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF, v29 != 1023)
          ? (v30 = *(int **)(qword_1402FEC28 + 8LL * v29))
          : (v30 = &MiSystemPartition),
            v30 != *(int **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)
         || _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL)) )
      {
        *(_QWORD *)(v25 + 8) += MiDeleteBatch((_QWORD *)(v5 + 272), (_QWORD *)(v5 + 144), v10, v13, 0);
        v10 = 0;
        *(_DWORD *)v5 = 0;
LABEL_30:
        v13 = v21;
        *(_DWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0;
        v31 = _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL);
        *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v21;
        if ( v31 )
        {
          do
          {
            do
              KeYieldProcessorEx(v5 + 80);
            while ( (*(_QWORD *)(v22 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) );
        }
      }
      if ( (*(_BYTE *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) & 0x42) != 0 )
      {
        v32 = *(_BYTE *)(v22 + 34);
        v16 = 0LL;
        if ( (v32 & 0x10) == 0 )
        {
          if ( (*(_DWORD *)(v22 + 16) & 0x400LL) == 0 && (v32 & 8) == 0 )
            v16 = MiCapturePageFileInfoInline(v22 + 16, 1LL, 0LL);
          *(_BYTE *)(v22 + 34) |= 0x10u;
        }
      }
      v33 = *(_BYTE *)(v22 + 34);
      if ( (v33 & 7) != 6
        || (*(_DWORD *)(v22 + 16) & 0x400LL) != 0
        || (v33 & 0x10) == 0
        || *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38)
        || *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) )
      {
        v35 = ((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF;
        if ( v35 == 1023 )
          v36 = &MiSystemPartition;
        else
          v36 = *(int **)(qword_1402FEC28 + 8LL * v35);
        *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v36;
        if ( v10 )
        {
          *(_QWORD *)(v25 + 8) += MiDeleteBatch((_QWORD *)(v5 + 272), (_QWORD *)(v5 + 144), v10, v13, 1);
          v10 = 0;
          *(_DWORD *)v5 = 0;
        }
        goto LABEL_64;
      }
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110 + 8LL * v10) = v22;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 8LL * v10) = v16;
      if ( !v10 )
      {
        v34 = ((unsigned int)HIDWORD(*(_QWORD *)(v22 + 40)) >> 8) & 0x3FF;
        if ( v34 == 1023 )
          *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = &MiSystemPartition;
        else
          *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_QWORD *)(qword_1402FEC28 + 8LL * v34);
      }
      v8 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
      *(_QWORD *)v8 = 0LL;
      result = MiPteInShadowRange(v8);
      if ( (_DWORD)result )
        result = MiWritePteShadow(v8, 0LL);
      *(_DWORD *)v5 = ++v10;
      if ( v10 == 16 )
      {
        result = MiDeleteBatch((_QWORD *)(v5 + 272), (_QWORD *)(v5 + 144), 0x10u, v13, 0);
        v7 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v10 = 0;
        v9 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        *(_DWORD *)v5 = 0;
        *(_QWORD *)(v7 + 8) += result;
      }
      else
      {
        v7 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v9 = *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      }
LABEL_151:
      v8 += 8LL;
      *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v8;
      if ( v8 > *(_QWORD *)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) )
      {
        if ( v10 )
        {
          result = MiDeleteBatch((_QWORD *)(v5 + 272), (_QWORD *)(v5 + 144), v10, v13, 0);
          *(_QWORD *)(v7 + 8) += result;
        }
        return result;
      }
      v11 = *(int **)(((unsigned __int64)&v76 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
    }
  }
  return result;
}
