/*
 * XREFs of MxSwapPages @ 0x1407C7254
 * Callers:
 *     MxRelocatePageTables @ 0x1407C4868 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x1407C68A0 (MxMovePageTables.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiLockAndInsertPageInFreeList @ 0x14015F7F4 (MiLockAndInsertPageInFreeList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x1407C78D0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, __int64 *a2)
{
  __int64 PteShadow; // rbx
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // r13
  _WORD *v10; // rcx
  __int16 v11; // dx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // [rsp+68h] [rbp+10h] BYREF
  __int64 CurrentIrql; // [rsp+70h] [rbp+18h]

  PteShadow = *a2;
  v3 = 0x90482413000LL;
  v4 = 2040LL;
  if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)a2, *a2);
  v26 = PteShadow;
  v7 = PteShadow;
  if ( (unsigned __int64)&v26 + v3 <= v4 )
    v7 = MiReadPteShadow((__int64)&v26, PteShadow);
  result = MxGetPhase0Mapping();
  v9 = result;
  if ( result )
  {
    v10 = *(_WORD **)a1;
    v11 = *(_WORD *)(a1 + 8);
    result = MiGetPage(
               (__int64)MiSystemPartition,
               *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(++*v10 & v11),
               8u);
    v12 = result;
    if ( result != -1 )
    {
      v13 = 48 * result - 0x58000000000LL;
      v14 = 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0 );
      }
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v16);
        }
        while ( (*(_QWORD *)(v13 + 24) & 0x8000000000000000uLL) != 0 );
      }
      MiFinalizePageAttribute(v13, *(unsigned __int8 *)(v14 + 34) >> 6, 1);
      MiCopyPfnEntry(v13, v14);
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)CurrentIrql);
      CurrentIrql = (v12 & 0xFFFFFFFFFLL) << 12;
      v17 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v17) )
        v18 |= 0x100uLL;
      v19 = v18 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
      *(_QWORD *)v17 = v19;
      if ( v17 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v19);
      v20 = 32LL;
      v21 = (_OWORD *)v9;
      v22 = (__int64)((_QWORD)a2 << 25) >> 16;
      do
      {
        *v21 = *(_OWORD *)v22;
        v21[1] = *(_OWORD *)(v22 + 16);
        v21[2] = *(_OWORD *)(v22 + 32);
        v21[3] = *(_OWORD *)(v22 + 48);
        v21[4] = *(_OWORD *)(v22 + 64);
        v21[5] = *(_OWORD *)(v22 + 80);
        v21[6] = *(_OWORD *)(v22 + 96);
        v21 += 8;
        v23 = *(_OWORD *)(v22 + 112);
        v22 += 128LL;
        *(v21 - 1) = v23;
        --v20;
      }
      while ( v20 );
      if ( ((v17 ^ ((__int64)((_QWORD)a2 << 25) >> 16)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        *(_QWORD *)v17 = 0LL;
        if ( v17 + 0x90482413000LL <= 0x7F8 )
        {
          v24 = (_QWORD *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
LABEL_33:
          MiWritePteShadow((__int64)v24, 0LL);
        }
      }
      else
      {
        v24 = (_QWORD *)(v9 + 8 * ((v17 >> 3) & 0x1FF));
        *v24 = 0LL;
        if ( (unsigned __int64)(v24 + 0x12090482600LL) <= 0x7F8 )
          goto LABEL_33;
      }
      v25 = CurrentIrql | PteShadow & 0xFFFF000000000FFFuLL | 0x20;
      v26 = v25;
      *a2 = v25;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow((__int64)a2, v25);
      KeFlushSingleTb((__int64)((_QWORD)a2 << 25) >> 16, 0, 1);
      KeFlushSingleTb(v9, 0, 1);
      *(_BYTE *)(v14 + 34) &= 0xD7u;
      *(_QWORD *)(v14 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v14 + 32) = 0;
      return MiLockAndInsertPageInFreeList(v14);
    }
  }
  return result;
}
