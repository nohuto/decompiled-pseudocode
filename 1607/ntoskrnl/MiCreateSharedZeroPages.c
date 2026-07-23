/*
 * XREFs of MiCreateSharedZeroPages @ 0x140038C30
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     KeCheckForZeroPage @ 0x140162310 (KeCheckForZeroPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MiGetClusterPage @ 0x1401F6144 (MiGetClusterPage.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  _DWORD *v3; // r14
  unsigned __int64 v5; // rbx
  int *v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // eax
  __int64 ClusterPage; // rax
  __int64 PageChain; // rdx
  unsigned int v12; // eax
  int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // r11
  _KPROCESS *Process; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rax
  char v20; // al
  _QWORD *v21; // rdx
  _KPROCESS *v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int16 v26; // cx
  int v28; // r11d
  __int64 v29; // rax
  bool v30; // zf
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  char v34; // al
  __int64 v35; // rbx
  int v36; // r11d
  int v37; // eax
  __int64 v38; // r12
  __int64 DemandZeroPte; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // r11
  __int64 v44; // rax
  __int64 v45; // r10
  char v46; // r11
  unsigned int v47; // r15d
  __int64 ContainingPageTable; // rax
  __int64 v49; // r10
  int v50; // r11d
  __int64 v51; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // esi
  unsigned int v54; // esi
  char v55; // al
  int v56; // r13d
  __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  int v60; // ecx
  unsigned __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // r8
  __int64 v65; // rsi
  unsigned __int64 v66; // rax
  int v67; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 8);
  v6 = a1;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (*v3 >> 5) & 0x1F;
  if ( v5 )
  {
    v9 = *(_DWORD *)(v5 + 48);
    if ( (v9 & 0x8000) == 0 && (v9 & 0x100000) != 0 )
    {
      ClusterPage = MiGetClusterPage(*((_QWORD *)a1 + 8), *((_QWORD *)a1 + 1), a1[8], a1[9], v2 + 5);
      PageChain = ClusterPage;
      if ( ClusterPage )
      {
        if ( (*(_QWORD *)(ClusterPage + 24) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
        {
          *a2 = 1LL;
          if ( *(_BYTE *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 5) == 1 )
            *v6 |= 4u;
        }
        else
        {
          *a2 = 16LL;
          v12 = (unsigned int)v7 >> 12;
          v7 &= 0xFFFFFFFFFFFF0000uLL;
          *((_QWORD *)v6 + 1) = v7;
          v3 -= 2 * (v12 & 0xF);
        }
        goto LABEL_46;
      }
      *a2 = 1LL;
    }
  }
  if ( (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v6 + 3)) & 8) == 0 )
  {
    LODWORD(v14) = v13;
    if ( v7 < 0xFFFF800000000000uLL )
    {
      if ( v5 )
      {
LABEL_25:
        if ( (*(_DWORD *)(v5 + 48) & 0x8000) == 0 )
        {
          v18 = *(unsigned __int64 **)(v5 + 72);
          if ( v18 )
          {
            v19 = *v18;
LABEL_41:
            if ( v19 )
            {
              v26 = *(_WORD *)(v19 + 60) & 0x3FF;
              if ( v26 != 1023 )
                v14 = *(_QWORD *)(qword_140327038 + 8LL * v26);
            }
          }
        }
        goto LABEL_44;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = Process[2].Affinity.Bitmap[5];
      if ( v5 )
      {
        v17 = v7 >> 12;
        if ( v7 >> 12 >= (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
          && v17 <= (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) )
        {
LABEL_24:
          *((_QWORD *)v6 + 8) = v5;
          if ( !v5 )
            goto LABEL_44;
          goto LABEL_25;
        }
        v5 = Process[2].Affinity.Bitmap[3];
        while ( v5 )
        {
          if ( v17 > (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) )
          {
            v5 = *(_QWORD *)(v5 + 8);
          }
          else
          {
            if ( v17 >= (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) )
            {
              Process[2].Affinity.Bitmap[5] = v5;
              goto LABEL_24;
            }
            v5 = *(_QWORD *)v5;
          }
        }
      }
      v5 = 0LL;
      goto LABEL_24;
    }
    v20 = *(_BYTE *)(v15 + 184) & 7;
    if ( v20 == 4 )
    {
      v21 = &unk_1403268C0;
    }
    else
    {
      if ( v20 != 1 )
        goto LABEL_44;
      v22 = KeGetCurrentThread()->ApcState.Process;
      v23 = v22[1].ActiveProcessors.Bitmap[2];
      if ( !v23 )
        goto LABEL_44;
      if ( v22 == PsInitialSystemProcess )
        goto LABEL_44;
      v21 = (_QWORD *)(v23 + 2880);
      if ( !v21 )
        goto LABEL_44;
    }
    v24 = (_QWORD *)v21[2];
    while ( v24 )
    {
      v25 = v24[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( v7 >= v25 + v24[4] )
      {
        v24 = (_QWORD *)v24[1];
      }
      else
      {
        if ( v7 >= v25 )
        {
          v19 = v24[6] & 0xFFFFFFFFFFFFFFF8uLL;
          goto LABEL_41;
        }
        v24 = (_QWORD *)*v24;
      }
    }
  }
LABEL_44:
  PageChain = MiGetPageChain(v14, v15, v6[11], v8, 66, -1LL, (__int64)a2);
  if ( !PageChain )
    return 3221225495LL;
LABEL_46:
  v28 = 0;
  *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *((_QWORD *)v6 + 7);
  *(_DWORD *)v2 = 0;
  if ( v5 )
  {
    v29 = *(unsigned int *)(v5 + 52);
    LODWORD(v29) = v29 & 0x7FFFFFFF;
    if ( (v29 | ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) << 31)) == 0x7FFFFFFFELL )
      v28 = 64;
    *(_DWORD *)v2 = v28;
  }
  *(_DWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  v30 = *a2 == 0;
  *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v7 & 0xFFFFFFFFFFFFF000uLL;
  if ( !v30 )
  {
    *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0xFFFFF6BFFFFFFF78uLL;
    *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 0xFFFFF6C000000000uLL;
    do
    {
      v31 = (volatile signed __int32 *)(PageChain + 24);
      v32 = *(_QWORD *)(PageChain + 24) & 0xFFFFFFFFFLL;
      *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = PageChain;
      if ( v32 == 0xFFFFFFFFFLL )
        *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
      else
        *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 48 * v32 - 0x58000000000LL;
      v33 = (PageChain + 0x58000000000LL) / 48;
      v34 = MiFlags;
      *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v33;
      if ( v34 < 0
        && v33 < 0x200000
        && (*(_BYTE *)(48 * v33 - 0x57FFFFFFFDDLL) & 0x40) == 0
        && (++dword_140327160 & MmPageValidationFrequency) == 0 )
      {
        if ( KeGetCurrentPrcb()->HyperPte )
        {
          v35 = MiMapPageInHyperSpaceWorker(v33, (unsigned __int8 *)(v2 + 6), 0x80000000);
          if ( KeCheckForZeroPage(v35) )
            MiPageNotZero(v35, v33);
          MiUnmapPageInHyperSpaceWorker(v35, *(unsigned __int8 *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 6));
          v28 = *(_DWORD *)v2;
        }
      }
      v36 = v28 | 0x112;
      v37 = *v6;
      v38 = (*v3 >> 5) & 0x1F;
      *(_DWORD *)v2 = v36;
      *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v38;
      if ( (v37 & 4) != 0 || (((_DWORD)v38 - 4) & 0xFFFFFFFD) != 0 )
        *(_DWORD *)v2 = v36 | 0x20;
      DemandZeroPte = MI_READ_PTE_LOCK_FREE(v3);
      if ( (v43 & 4) != 0 )
      {
        if ( DemandZeroPte )
          DemandZeroPte = ((unsigned __int16)DemandZeroPte ^ (unsigned __int16)(32 * v38)) & 0x3E0 ^ (unsigned __int64)DemandZeroPte;
        else
          DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v38, v40, v41, v42);
      }
      v44 = MiTransferSoftwarePte(DemandZeroPte, 0LL, 0LL, 4LL);
      *(_QWORD *)(v45 + 16) = v44;
      if ( (v46 & 2) != 0 )
      {
        *(_QWORD *)(v45 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v46 & 8) == 0 )
      {
        *(_QWORD *)(v45 + 16) = v44 & 0xFFFFFFFFFC00FFFFuLL;
      }
      if ( (_DWORD)v38 == 31 )
      {
        v47 = 1;
      }
      else if ( (unsigned int)v38 >> 3 == 3 && (v38 & 7) != 0 )
      {
        v47 = dword_1403A92D0;
      }
      else
      {
        v47 = 1;
        if ( (unsigned int)v38 >> 3 == 1 )
          v47 = MiPlatformCacheAttributes;
      }
      *(_WORD *)(v45 + 32) = 1;
      ContainingPageTable = MiGetContainingPageTable(v3);
      *(_QWORD *)(v49 + 40) ^= (ContainingPageTable ^ *(_QWORD *)(v49 + 40)) & 0xFFFFFFFFFLL;
      v51 = 48 * ContainingPageTable - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v54 = (Queue >> 9) & 7;
      }
      else
      {
        v54 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v55 = 2;
          if ( v54 < 2 )
            v55 = v54;
          LOBYTE(v54) = v55;
        }
      }
      *(_BYTE *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 17;
      v56 = v50 & 1;
      if ( (v50 & 1) == 0 )
      {
        if ( (v50 & 0x10) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v56;
          if ( !_interlockedbittestandset64(v31, 0x3FuLL) )
            goto LABEL_95;
          do
          {
            do
              KeYieldProcessorEx((_DWORD *)(v2 + 32));
            while ( (*(_QWORD *)v31 & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64(v31, 0x3FuLL) );
          v38 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        }
        else
        {
          *(_BYTE *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = MiLockPageInline(v49);
        }
        v50 = *(_DWORD *)v2;
        v49 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      }
LABEL_95:
      if ( (v50 & 0x20) == 0 )
        *(_BYTE *)(v49 + 34) |= 0x10u;
      *(_DWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx((_DWORD *)(v2 + 36));
          while ( (*(_QWORD *)(v51 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
        v38 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        v50 = *(_DWORD *)v2;
      }
      *(_QWORD *)(v51 + 24) ^= (*(_QWORD *)(v51 + 24) ^ (*(_QWORD *)(v51 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v57 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
      if ( *(unsigned __int8 *)(v57 + 34) >> 6 != v47 )
      {
        MiChangePageAttribute(*(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10), v47, 1);
        v50 = *(_DWORD *)v2;
      }
      v58 = *(_QWORD *)v31 & 0xC000000000000001uLL;
      *(_QWORD *)(v57 + 8) = v3;
      *(_QWORD *)v31 = v58 | 1;
      *(_BYTE *)(v57 + 35) ^= (v54 ^ *(_BYTE *)(v57 + 35)) & 7;
      *(_BYTE *)(v57 + 34) = *(_BYTE *)(v57 + 34) & 0xF8 | 6;
      if ( (v50 & 0x40) != 0 )
        *(_BYTE *)(v57 + 35) |= 0x20u;
      if ( !v56 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v31, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v50 & 0x10) == 0 )
          __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 4));
      }
      v59 = MmProtectToPteMask[(unsigned int)v38] ^ ((*(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) << 12) ^ MmProtectToPteMask[(unsigned int)v38]) & 0xFFFFFFFFF000LL | 0x21;
      if ( (unsigned __int64)v3 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7FFFFFFFuLL )
        v59 &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v3 <= *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40)
        && (unsigned __int64)v3 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v3 >= 0xFFFFF6FB40000000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB5FFFFFF8uLL
        || (unsigned __int64)v3 >= 0xFFFFF6FB7DA00000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DAFFFF8uLL
        || (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v59 |= 4uLL;
      }
      if ( (unsigned __int64)v3 < *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) )
      {
        v60 = HIBYTE(word_140326AE8);
LABEL_129:
        if ( v60 )
          v59 |= 0x100uLL;
        goto LABEL_131;
      }
      if ( ((unsigned __int64)v3 < (((unsigned __int64)qword_140326950 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
         || (unsigned __int64)v3 >= (((unsigned __int64)(qword_140326950 + 0x8000000000LL) >> 9) & 0x7FFFFFFFF8LL)
                                  - 0x98000000000LL)
        && ((unsigned __int64)v3 < 0xFFFFF6FB40000000uLL || (unsigned __int64)v3 > 0xFFFFF6FB7FFFFFF8uLL) )
      {
        if ( (unsigned __int64)v3 < (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          || (v60 = HIBYTE(word_140326AE8),
              (unsigned __int64)v3 > (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
        {
          v60 = (unsigned __int8)word_140326AE8;
        }
        goto LABEL_129;
      }
LABEL_131:
      v61 = v59 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8);
      *(_QWORD *)v3 = v61;
      if ( (unsigned int)MiPteInShadowRange(v3, v61) )
        MiWritePteShadow(v63, v62);
      v6 = a1;
      if ( (*a1 & 4) != 0 )
      {
        MiLockAndDecrementShareCount(v57, 0LL);
        v64 = *(_QWORD **)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        v65 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        if ( v64 )
        {
          if ( v65 == *(_QWORD *)(v64[1] + 16LL * v64[3]) + (v64[4] << 12) )
            MiAdvanceFaultList(*(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
        }
        v28 = *(_DWORD *)v2;
      }
      else
      {
        v65 = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      }
      PageChain = *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
      v3 += 2;
      v66 = (unsigned int)(*(_DWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 8) + 1);
      *(_QWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v65 + 4096;
      *(_DWORD *)(((unsigned __int64)&v67 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v66;
    }
    while ( v66 < *a2 );
  }
  return 273LL;
}
