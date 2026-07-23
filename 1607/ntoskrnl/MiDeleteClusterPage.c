/*
 * XREFs of MiDeleteClusterPage @ 0x140091A00
 * Callers:
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetContainingPageTable @ 0x1401F241C (MiGetContainingPageTable.c)
 *     MiInsertLargePageInNodeList @ 0x1401FB978 (MiInsertLargePageInNodeList.c)
 */

__int64 __fastcall MiDeleteClusterPage(__int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rbp
  unsigned __int16 v5; // ax
  struct _KEVENT *v6; // r12
  __int64 v7; // rdi
  __int64 ContainingPageTable; // rax
  unsigned int v9; // r9d
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r9d
  __int64 v14; // r10
  unsigned __int8 *v15; // r11
  ULONG_PTR v16; // rsi
  __int64 v17; // rax
  unsigned __int16 v18; // ax
  int *v19; // rax
  ULONG_PTR v20; // r13
  unsigned __int64 v21; // rdi
  __int64 v22; // r15
  unsigned __int64 v23; // rbp
  _QWORD *v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // al
  char v29; // al
  unsigned __int64 v30; // rax
  char v31; // al
  char v32; // al
  unsigned __int64 v33; // rax
  __int64 v35; // rcx
  ULONG_PTR v37; // rax
  unsigned __int64 v38; // [rsp+30h] [rbp-48h] BYREF
  __int64 v39; // [rsp+38h] [rbp-40h]
  int v40; // [rsp+80h] [rbp+8h] BYREF
  __int64 v41; // [rsp+90h] [rbp+18h]
  unsigned __int64 v42; // [rsp+98h] [rbp+20h] BYREF

  v41 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = WORD2(Process[1].InstrumentationCallback);
  if ( v5 == 1023 )
    v6 = (struct _KEVENT *)MiSystemPartition;
  else
    v6 = *(struct _KEVENT **)(qword_140327038 + 8LL * v5);
  v7 = -1LL;
  ContainingPageTable = MiGetContainingPageTable(a1);
  v9 = 0;
  v10 = ContainingPageTable;
  do
  {
    v11 = MI_READ_PTE_LOCK_FREE(a1 + 8LL * v9);
    if ( !v11 )
      return 0LL;
    if ( (v11 & 0x400) == 0 )
      return 0LL;
    v38 = v11 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v12 = MI_GET_PAGE_FRAME_FROM_PTE(&v38);
    v16 = v12;
    if ( v13 )
    {
      if ( v12 != v7 )
        return 0LL;
    }
    v17 = *(_QWORD *)(48 * v12 - 0x58000000000LL + 40);
    if ( (v17 & 0x200000000000000LL) != 0 )
      return 0LL;
    v18 = (HIDWORD(v17) >> 8) & 0x3FF;
    v19 = v18 == 1023 ? MiSystemPartition : *(int **)(v14 + 8LL * v18);
    if ( v19 != (int *)v6 )
      return 0LL;
    v9 = v13 + 1;
    v7 = v16 + 1;
  }
  while ( v9 < 0x10 );
  MiDeleteBatch(v15);
  v20 = v16 - 15;
  v21 = 48 * v16 - 0x58000000000LL;
  v22 = 48 * v10 - 0x58000000000LL;
  v39 = v22;
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  v23 = 0LL;
  v24 = (_QWORD *)(a1 + 120);
  v25 = 0x7FFFFFFFFFFFFFFFLL;
  v26 = 0xC000000000000000uLL;
  v27 = 0x4000000000000000LL;
  do
  {
    v40 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v40);
        while ( (*(_QWORD *)(v21 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
      v25 = 0x7FFFFFFFFFFFFFFFLL;
      v26 = 0xC000000000000000uLL;
      v27 = 0x4000000000000000LL;
    }
    if ( (_QWORD *)(*(_QWORD *)(v21 + 8) | 0x8000000000000000uLL) != v24 )
    {
      v37 = MI_READ_PTE_LOCK_FREE(v24);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v24, v37, *(_QWORD *)(v21 + 8));
    }
    if ( (*(_BYTE *)(v21 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (__int64)(v21 + 0x58000000000LL) / 48,
        *(_BYTE *)(v21 + 34) & 7,
        *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v21 + 32) != 1 || (v28 = *(_BYTE *)(v21 + 35), (v28 & 0x40) != 0) || v23 )
    {
      if ( (*(_QWORD *)(v21 + 24) & 0x4000000000000000LL) == 0 )
        *(_QWORD *)(v21 + 24) |= 0x4000000000000000uLL;
      if ( !v23 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), v25);
        v23 = v21;
        v16 = v20 + 15;
        v21 = 48 * (v20 + 15) - 0x58000000000LL;
        if ( v21 > v23 )
        {
          do
          {
            MiLockPageAtDpcInline(v21);
            *(_QWORD *)(v21 + 40) &= 0xFFFFFFF000000000uLL;
            MiInsertPageInFreeOrZeroedList(v16, 2);
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            --v16;
            v21 -= 48LL;
          }
          while ( v21 > v23 );
          v22 = v39;
        }
        MiLockPageAtDpcInline(v21);
      }
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      if ( (*(_WORD *)(v21 + 32))-- == 1 )
      {
        MiPfnReferenceCountIsZero(v21, v16);
      }
      else
      {
        ++*(_QWORD *)(v41 + 8);
        *(_BYTE *)(v21 + 34) |= 7u;
      }
    }
    else
    {
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      *(_BYTE *)(v21 + 35) = v28 & 0xF8;
      v29 = (*(_QWORD *)(v21 + 40) >> 54) & 7;
      *(_WORD *)(v21 + 32) = 0;
      if ( v29 == 3 )
        MiClearPfnImageVerified(v21, 0xCu);
      v42 = *(_QWORD *)(v21 + 16);
      if ( (v42 & 0x400) == 0 )
      {
        v30 = MiCapturePageFileInfoInline(&v42, 0LL, 1LL);
        v42 = v30;
        if ( v30 )
          MiReleasePageFileInfo(v6, v30, 0);
      }
      v31 = *(_BYTE *)(v21 + 34) & 0xC0;
      *(_QWORD *)(v21 + 16) = 0LL;
      if ( v31 != 64 )
      {
        MiAbortCombineScan(v21, v25, v26, v27);
        *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0x3F | 0x40;
      }
      v32 = *(_BYTE *)(v21 + 35);
      if ( (v32 & 0x10) != 0 )
        *(_BYTE *)(v21 + 35) = v32 & 0xEF;
      *(_BYTE *)(v21 + 34) &= ~0x10u;
      v33 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 40) = v33 | 0xFFFFFFFFCLL;
      *(_BYTE *)(v21 + 34) = *(_BYTE *)(v21 + 34) & 0xF8 | 1;
      *(_QWORD *)(v21 + 24) &= ~0x4000000000000000uLL;
      if ( v16 == v20 )
        MiInsertLargePageInNodeList(v16, 16LL, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *v24 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v24, 0x7FFFFFFFFFFFFFFFLL) )
    {
      MiWritePteShadow(v35, 0LL);
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 -= 48LL;
    --v16;
    --v24;
    v26 = 0xC000000000000000uLL;
    v27 = 0x4000000000000000LL;
  }
  while ( v16 >= v20 );
  MiLockPageAtDpcInline(v22);
  *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 1LL;
}
