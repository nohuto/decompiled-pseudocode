/*
 * XREFs of MiCompletePrivateZeroFault @ 0x14003B270
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiUpdatePageTableUseCount @ 0x140036FD0 (MiUpdatePageTableUseCount.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiAdvanceFaultList @ 0x1400BE040 (MiAdvanceFaultList.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiFreePageChain @ 0x1401228C0 (MiFreePageChain.c)
 *     MiCapturePageFileInfo @ 0x140159940 (MiCapturePageFileInfo.c)
 *     MiLockPageAtDpc @ 0x140159950 (MiLockPageAtDpc.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(int *a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // rbp
  __int64 v5; // r14
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 DemandZeroPte; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  volatile signed __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r10
  volatile signed __int64 v25; // rdx
  signed __int64 v26; // rdi
  signed __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r10
  __int16 v30; // cx
  unsigned __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // edi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r10
  int v44; // r15d
  __int64 ContainingPageTable; // rax
  __int64 v46; // r10
  __int64 v47; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v50; // ebp
  char v51; // al
  char v52; // al
  int v53; // r12d
  unsigned __int8 v54; // r13
  __int64 v55; // rdx
  unsigned int v56; // edx
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  __int64 *v59; // r12
  int v60; // ebx
  __int64 TransitionPte; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r13
  unsigned __int64 ValidKernelPte; // rdi
  __int64 v66; // rcx
  _QWORD *v68; // rax
  __int64 v69; // r9
  __int64 v70; // rdi
  unsigned int v71; // esi
  __int64 v72; // [rsp+30h] [rbp-98h]
  unsigned int v73; // [rsp+38h] [rbp-90h]
  __int64 v74; // [rsp+40h] [rbp-88h]
  int v75; // [rsp+48h] [rbp-80h]
  __int64 v76; // [rsp+50h] [rbp-78h]
  int v77; // [rsp+58h] [rbp-70h] BYREF
  int v78; // [rsp+5Ch] [rbp-6Ch] BYREF
  __int64 v79; // [rsp+60h] [rbp-68h]
  _QWORD *v80; // [rsp+68h] [rbp-60h]
  _KPROCESS *Process; // [rsp+70h] [rbp-58h]
  __int64 v82; // [rsp+78h] [rbp-50h]
  __int64 v84; // [rsp+D8h] [rbp+10h]
  int v86; // [rsp+E8h] [rbp+20h]

  v4 = a1;
  if ( !a1[9] )
    __incgsdword(0x2E1Cu);
  v5 = (*((_QWORD *)a1 + 1) >> 9) & 0x7FFFFFFFF8LL;
  v80 = (_QWORD *)*((_QWORD *)a1 + 7);
  v6 = v5 - 0x98000000000LL;
  v79 = *((_QWORD *)a1 + 6);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = *((_QWORD *)a1 + 8);
  v8 = 16;
  v82 = ((*((_QWORD *)a1 + 2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = 273;
  v86 = 16;
  if ( v7 )
  {
    v9 = *(unsigned __int8 *)(v7 + 34);
    v10 = *(unsigned int *)(v7 + 52);
    LODWORD(v10) = v10 & 0x7FFFFFFF;
    if ( (v10 | (v9 << 31)) == 0x7FFFFFFFELL )
      v8 = 80;
    v86 = v8;
  }
  v72 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      v11 = MI_READ_PTE_LOCK_FREE(v6);
      v15 = v11;
      if ( !v4[9] )
      {
        if ( !v11 )
        {
          MiUpdatePageTableUseCount((__int64)((v6 << 25) - (v13 << 25)) >> 16);
          DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v4[8], v16, v17, v18);
          *(_QWORD *)v6 = DemandZeroPte;
          v15 = DemandZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v6, v20) )
            MiWritePteShadow(v21, v15);
          v12 = v72;
          v14 = 0xFFFFFFF000000000uLL;
        }
        if ( !a2 )
          goto LABEL_106;
      }
      v22 = (volatile signed __int64 *)(a2 + 24);
      v74 = a2;
      v23 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
      v24 = a2;
      if ( v23 == 0xFFFFFFFFFLL )
        v84 = 0LL;
      else
        v84 = 48 * v23 - 0x58000000000LL;
      v25 = *v22;
      v26 = _InterlockedCompareExchange64(v22, v14 & *v22, *v22);
      if ( v25 != v26 )
      {
        do
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange64(v22, v14 & v26, v26);
        }
        while ( v27 != v26 );
      }
      v28 = (v24 + 0x58000000000LL) / 48;
      v76 = v28;
      if ( v4[9] && (*v4 & 0x40) == 0 && (v15 & 0x400) != 0 )
      {
        if ( MiGetPrototypePteDirect(v15) )
        {
          MiLockPageAtDpc(v29);
          *(_QWORD *)(v74 + 40) = *(_QWORD *)(v74 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
          _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v30 = v15;
          v31 = v15 & 0xFFFFFFFFFFFFFBFFuLL;
          v15 = 0LL;
          if ( (v30 & 0x3E0) != 0 )
            v15 = v31;
        }
        v32 = (void *)MiMapPageInHyperSpaceWorker(v28, 0LL, 0x80000000);
        memset64(v32, v15 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
        LOBYTE(v33) = 17;
        MiUnmapPageInHyperSpaceWorker((__int64)v32, v33);
        v8 |= 8u;
        v86 = v8;
        v15 = MiMakeDemandZeroPte(4LL, v34, v35, v36);
      }
      if ( (*v4 & 4) != 0 )
      {
        v8 |= 0x20u;
        v86 = v8;
      }
      v37 = v4[8];
      v38 = MI_READ_PTE_LOCK_FREE(v6);
      if ( (v8 & 4) != 0 )
      {
        if ( v38 )
          v38 = ((unsigned __int16)v38 ^ (unsigned __int16)(32 * v37)) & 0x3E0 ^ (unsigned __int64)v38;
        else
          v38 = MiMakeDemandZeroPte(v37, v39, v40, v41);
      }
      v42 = MiTransferSoftwarePte(v38, 0LL, 0LL, 4LL);
      *(_QWORD *)(v43 + 16) = v42;
      if ( (v8 & 2) != 0 )
      {
        *(_QWORD *)(v43 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v8 & 8) == 0 )
      {
        *(_QWORD *)(v43 + 16) = v42 & 0xFFFFFFFFFC00FFFFuLL;
      }
      if ( v37 == 31 )
      {
        v44 = 1;
      }
      else if ( v37 >> 3 == 3 && (v37 & 7) != 0 )
      {
        v44 = dword_1403A92D0;
      }
      else
      {
        v44 = 1;
        if ( v37 >> 3 == 1 )
          v44 = MiPlatformCacheAttributes;
      }
      *(_WORD *)(v43 + 32) = 1;
      ContainingPageTable = MiGetContainingPageTable(v6);
      *(_QWORD *)(v46 + 40) ^= (*(_QWORD *)(v46 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
      v47 = 48 * ContainingPageTable - 0x58000000000LL;
      CurrentThread = KeGetCurrentThread();
      Queue = (unsigned int)CurrentThread[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v50 = (Queue >> 9) & 7;
      }
      else
      {
        v50 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v51 = 2;
          if ( v50 < 2 )
            v51 = v50;
          LOBYTE(v50) = v51;
        }
      }
      v52 = v86;
      v53 = v8 & 1;
      v75 = v53;
      v54 = 17;
      if ( !v53 )
      {
        if ( (v86 & 0x10) != 0 )
        {
          v77 = 0;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) )
            goto LABEL_58;
          do
          {
            do
              KeYieldProcessorEx(&v77);
            while ( *v22 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0x3FuLL) );
          v53 = 0;
        }
        else
        {
          v54 = MiLockPageInline(v46);
        }
        v52 = v86;
        v46 = v74;
      }
LABEL_58:
      if ( (v52 & 0x20) == 0 )
        *(_BYTE *)(v46 + 34) |= 0x10u;
      v78 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v78);
          while ( (*(_QWORD *)(v47 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) );
        v53 = v75;
      }
      v55 = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( *(unsigned __int8 *)(v74 + 34) >> 6 == v44 )
      {
        v57 = v74;
      }
      else
      {
        v56 = v44;
        v57 = v74;
        MiChangePageAttribute(v74, v56, 1);
        v55 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v58 = *v22 & 0xC000000000000001uLL;
      *(_QWORD *)(v57 + 8) = v6;
      *v22 = v58 | 1;
      *(_BYTE *)(v57 + 35) ^= (v50 ^ *(_BYTE *)(v57 + 35)) & 7;
      *(_BYTE *)(v57 + 34) = *(_BYTE *)(v57 + 34) & 0xF8 | 6;
      if ( (v86 & 0x40) != 0 )
        *(_BYTE *)(v57 + 35) |= 0x20u;
      if ( !v53 )
      {
        _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v86 & 0x10) == 0 )
          __writecr8(v54);
      }
      v59 = (__int64 *)(v57 + 16);
      if ( (v86 & 8) != 0 )
        *v59 = v15;
      v4 = a1;
      v60 = *a1;
      if ( (*a1 & 4) != 0 )
      {
        TransitionPte = MiMakeTransitionPte(v76, (unsigned int)a1[8]);
        *(_QWORD *)v6 = TransitionPte;
        if ( (unsigned int)MiPteInShadowRange(v6, TransitionPte) )
          MiWritePteShadow(v63, v62);
        if ( (*a1 & 0x20) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
        MiLockAndDecrementShareCount(v57, 0LL);
        if ( v80 )
        {
          if ( (__int64)(v6 << 25) >> 16 == *(_QWORD *)(v80[1] + 16LL * v80[3]) + (v80[4] << 12) )
            MiAdvanceFaultList(v80);
        }
      }
      else
      {
        if ( v6 > 0xFFFFF6BFFFFFFF78uLL || v6 < 0xFFFFF68000000000uLL )
        {
          v64 = v79;
          if ( (*(_BYTE *)(v79 + 184) & 7u) < 2 )
          {
            ValidKernelPte = MmProtectToPteMask[a1[8]] ^ ((v76 << 12) ^ MmProtectToPteMask[a1[8]]) & 0xFFFFFFFFF000LL | 0x21;
            if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB7FFFFFFFuLL )
              ValidKernelPte &= ~qword_1403A9350 & 0x7FFFFFFFFFFFFFFFLL;
            if ( v6 >= 0xFFFFF6FB40000000uLL && v6 <= 0xFFFFF6FB5FFFFFF8uLL
              || v6 >= 0xFFFFF6FB7DA00000uLL && v6 <= 0xFFFFF6FB7DAFFFF8uLL
              || v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
            {
              ValidKernelPte |= 4uLL;
            }
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6) )
              ValidKernelPte |= 0x100uLL;
          }
          else
          {
            ValidKernelPte = MiMakeValidKernelPte(v76, a1[8], v6);
          }
        }
        else
        {
          v64 = v79;
          ValidKernelPte = MmProtectToPteMask[a1[8]] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v76 & 0xFFFFFFFFFLL)) | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
        }
        if ( (ValidKernelPte & 0x800) != 0 )
          ValidKernelPte |= 0x42uLL;
        if ( (v60 & 0x40) != 0 )
        {
          *(_QWORD *)v6 = ValidKernelPte;
          if ( (unsigned int)MiPteInShadowRange(v6, v55) )
            MiWritePteShadow(v66, ValidKernelPte);
        }
        else
        {
          v68 = 0LL;
          v69 = 0LL;
          if ( v6 == v82 )
          {
            if ( (v60 & 8) != 0 )
              v68 = v80;
          }
          else if ( (v60 & 0x80u) != 0 )
          {
            ValidKernelPte &= ~0x20uLL;
            v69 = 512LL;
          }
          if ( !MiAllocateWsle(v64, v6, v57, v69, ValidKernelPte, v68) )
          {
            v70 = 48 * (*(_QWORD *)(v57 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            MiLockPageAtDpc(v57);
            MiCapturePageFileInfo(v57 + 16, 1LL, 0LL);
            *v59 &= ~2uLL;
            *v22 |= 0x4000000000000000uLL;
            MiDecrementShareCount(v57);
            _InterlockedAnd64(v22, 0x7FFFFFFFFFFFFFFFuLL);
            MiLockAndDecrementShareCount(v70, 0LL);
            v71 = v73;
            if ( !v72 )
              v71 = -1073741801;
            v73 = v71;
            MiFreePageChain(v84);
            if ( a1[9] )
              return v71;
            a2 = 0LL;
            goto LABEL_105;
          }
          if ( (*a1 & 0x20) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
          __incgsdword(0x2E1Cu);
        }
      }
      a2 = v84;
LABEL_105:
      v8 = v86;
      v12 = v72;
LABEL_106:
      v6 += 8LL;
      v72 = v12 + 1;
      if ( v12 + 1 >= a3 )
        return v73;
    }
  }
  return 273LL;
}
