/*
 * XREFs of MiDeleteBatch @ 0x14003D3A0
 * Callers:
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeleteBatch(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned int *v5; // rbp
  __int64 v6; // rax
  unsigned int v8; // r14d
  _QWORD *v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // r12
  unsigned __int16 v12; // r9
  int *v13; // r13
  bool v14; // zf
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rbx
  __int64 PteAddress; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // r14
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r12
  unsigned __int64 *v39; // r14
  __int64 v40; // r13
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rbx
  unsigned __int64 HyperPte; // r12
  int v44; // ebx
  _QWORD *v45; // r14
  unsigned __int64 v46; // r12
  unsigned int v47; // ebx
  __int64 v48; // rax
  void *v49; // rax
  __int64 v50; // rax
  char v51; // al
  char v52; // al
  char v53; // al
  __int64 v54; // rax
  char v55; // al
  __int64 v56; // rdx
  char v57; // dl
  __int64 v58; // rbx
  int v60; // [rsp+50h] [rbp+0h] BYREF
  _QWORD *v61; // [rsp+D0h] [rbp+80h]

  v61 = a1;
  v5 = (unsigned int *)((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL);
  v6 = *a1;
  v8 = a3;
  v9 = a2;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  v10 = a1;
  v11 = 0LL;
  v12 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
  if ( v12 == 1023 )
    v13 = &MiSystemPartition;
  else
    v13 = *(int **)(qword_1402FEC28 + 8LL * v12);
  v14 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v13 + 1512;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v13;
  *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  if ( v14 )
  {
    if ( !_InterlockedExchange64((volatile __int64 *)v13 + 756, (__int64)(v5 + 8)) )
      goto LABEL_9;
    KxWaitForLockOwnerShip(v5 + 8);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v5 + 8);
  }
  v10 = v61;
LABEL_9:
  v15 = 0;
  *v5 = 0;
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  if ( !v8 )
    goto LABEL_59;
  do
  {
    v17 = *v10;
    if ( (*(_BYTE *)(*v10 + 34LL) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v17 + 0x58000000000LL) / 48,
        *(_BYTE *)(v17 + 34) & 7,
        *(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    *(_QWORD *)(v17 + 24) ^= (((*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v17 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    {
      v18 = *(_QWORD *)(v17 + 40);
      if ( (v18 & 0x200000000000000LL) == 0 )
      {
LABEL_36:
        v14 = (*(_WORD *)(v17 + 32))-- == 1;
        v50 = *(_QWORD *)(v17 + 24);
        if ( v14 )
        {
          if ( (v50 & 0x4000000000000000LL) != 0 )
          {
            v53 = *(_BYTE *)(v17 + 35);
            if ( (v53 & 0x10) != 0 )
              *(_BYTE *)(v17 + 35) = v53 & 0xEF;
            v54 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v17 + 40)) >> 8) & 0x3FF);
            MiReleasePageFileSpace(v54, *(_QWORD *)(v17 + 16), 1LL);
            MiInsertPageInFreeOrZeroedList((v17 + 0x58000000000LL) / 48);
          }
          else
          {
            v55 = *(_BYTE *)(v17 + 34);
            if ( (v55 & 0x10) != 0 )
            {
              v56 = 136LL;
            }
            else
            {
              v56 = 4LL;
              *(_BYTE *)(v17 + 34) = v55 & 0xF8 | 2;
            }
            MiInsertPageInList(v17, v56, v10, v16);
          }
          v10 = v61;
          v16 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else
        {
          if ( (v50 & 0x4000000000000000LL) != 0 )
          {
            *(_BYTE *)(v17 + 34) |= 7u;
          }
          else
          {
            v51 = *(_BYTE *)(v17 + 34);
            if ( (v51 & 0x10) != 0 )
              v52 = v51 & 0xF8 | 3;
            else
              v52 = v51 & 0xF8 | 2;
            *(_BYTE *)(v17 + 34) = v52;
          }
          if ( (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 && (unsigned int)MI_GET_PAGING_FILE_OFFSET(v17 + 16) )
            *(_BYTE *)(MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v17 + 40)) >> 8) & 0x3FF) + 594) = 1;
          v10 = v61;
          v16 = 0x3FFFFFFFFFFFFFFFLL;
          if ( (*(_QWORD *)(v17 + 40) & 0x200000000000000LL) == 0 )
            *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = ++v11;
        }
        goto LABEL_57;
      }
      v19 = 4LL;
      v20 = *(_QWORD *)(v17 + 8) | 0x8000000000000000uLL;
      *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = (*(_DWORD *)(v17 + 16) >> 5) & 0x1F;
      v21 = v18 & 0xFFFFFFFFFLL;
      v22 = *(unsigned __int8 *)(48 * v21 - 0x58000000000LL + 34) >> 6;
      if ( !v22 || v22 == 3 )
      {
        v19 = 12LL;
      }
      else if ( v22 == 2 )
      {
        v19 = 28LL;
      }
      v23 = MmProtectToPteMask[(unsigned int)v19] ^ ((v21 << 12) ^ MmProtectToPteMask[(unsigned int)v19]) & 0xFFFFFFFFF000LL | 0x21;
      PteAddress = MiGetPteAddress(0xFFFF800000000000uLL, MmProtectToPteMask, v19, 0x3FFFFFFFFFFFFFFFLL);
      v28 = word_1402FE760;
      if ( PteAddress )
      {
        v29 = HIBYTE(word_1402FE760);
      }
      else
      {
        if ( !MiGetPteAddress(0xFFFFF90000000000uLL, v25, v26, v27)
          && MiGetPteAddress(0xFFFFF98000000000uLL, v30, v31, v32)
          || !MiGetPteAddress(0xFFFFF68000000000uLL, v30, v31, v32) )
        {
LABEL_27:
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = (((unsigned __int16)v23 ^ (unsigned __int16)(v28 << 8)) & 0x100 ^ (unsigned __int64)v23) & 0xFFFFFFFFFFFFFF3DuLL | 0x42;
          v38 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
              + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
          v39 = (unsigned __int64 *)(((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          *v39 = v37;
          if ( (unsigned int)MiPteInShadowRange(v39) )
            MiWritePteShadow(v39, v37);
          v40 = (v20 >> 3) & 0x1FF;
          v41 = v38 + 8LL * (unsigned int)v40;
          v42 = (32 * (*(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) & 0x1F | 0x40LL)) | MI_READ_PTE_LOCK_FREE(v41) & 0xFFFFFFFFFFFFF81EuLL;
          *(_QWORD *)v41 = v42;
          if ( (unsigned int)MiPteInShadowRange(v41) )
            MiWritePteShadow(v38 + 8LL * (unsigned int)v40, v42);
          HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
          v44 = HyperPte & 0xFFF;
          v45 = (_QWORD *)((((v41 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v46 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
          v47 = v44 + 1;
          *v45 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v45) )
            MiWritePteShadow(v45, 0LL);
          if ( v47 == 64 )
          {
            MiFlushHyperSpace();
            v47 = 0;
          }
          v8 = a3;
          v48 = v47;
          v15 = *v5;
          v49 = (void *)(v46 | v48);
          v11 = *(_QWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          KeGetCurrentPrcb()->HyperPte = v49;
          goto LABEL_36;
        }
        v14 = MiGetPteAddress(0xFFFFF58000000000uLL, v33, v34, v35) == 0;
        v29 = HIBYTE(word_1402FE760);
        if ( !v14 )
          v29 = v28;
      }
      if ( v29 )
        v23 |= 0x100uLL;
      goto LABEL_27;
    }
LABEL_57:
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v15;
    ++v10;
    *v5 = v15;
    v61 = v10;
  }
  while ( v15 < v8 );
  v9 = a2;
  v13 = *(int **)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
LABEL_59:
  KxReleaseQueuedSpinLock(v5 + 8, 0x8000000000000000uLL, v10, 0x3FFFFFFFFFFFFFFFLL);
  if ( a5 == 1 )
  {
    MiLockNestedPageAtDpcInline(a4);
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v60 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v5 + 1);
      while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0 );
    }
  }
  v57 = *(_BYTE *)(a4 + 34);
  if ( (v57 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a4 + 0x58000000000LL) / 48, v57 & 7, *(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v58 = v8;
  if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v8 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a4 + 0x58000000000LL) / 48, v57 & 7, *(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) - v8)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    do
    {
      if ( *v9 )
        MiReleasePageFileInfo(v13, *v9, 1LL);
      ++v9;
      --v58;
    }
    while ( v58 );
  }
  return v11;
}
