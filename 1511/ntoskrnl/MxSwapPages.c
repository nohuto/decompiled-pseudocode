/*
 * XREFs of MxSwapPages @ 0x14074817C
 * Callers:
 *     MxRelocatePageTables @ 0x140745ED8 (MxRelocatePageTables.c)
 *     MxMovePageTables @ 0x140747B78 (MxMovePageTables.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockAndInsertPageInFreeList @ 0x140131B78 (MiLockAndInsertPageInFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x140748514 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxSwapPages(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // r13
  _WORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // r14
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  BOOL v17; // ebp
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  bool v22; // zf
  __int64 v23; // rbx
  __int64 v24; // [rsp+60h] [rbp+18h] BYREF

  v24 = MI_READ_PTE_LOCK_FREE((__int64 *)a2);
  v4 = MI_READ_PTE_LOCK_FREE(&v24);
  result = MxGetPhase0Mapping();
  v6 = result;
  if ( result )
  {
    v7 = *(_WORD **)a1;
    result = MiGetPage(
               (__int64)MiSystemPartition,
               *(unsigned __int16 *)(a1 + 10) | (unsigned int)(unsigned __int16)(++*v7 & *(_WORD *)(a1 + 8)),
               8u);
    v8 = result;
    if ( result != -1 )
    {
      v9 = 48 * result - 0x58000000000LL;
      v10 = 48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v11 = (unsigned __int8)MiLockPageInline(v10);
      MiLockNestedPageAtDpcInline(v9, v12, v13);
      MiFinalizePageAttribute(v9, *(unsigned __int8 *)(v10 + 34) >> 6, 1);
      MiCopyPfnEntry(v9, v10);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
      v14 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = MiMakeValidKernelPte(v8, 4, v14, v15) | 0x42;
      *(_QWORD *)v14 = v16;
      v17 = MiPteInShadowRange(v14);
      if ( v17 )
        MiWritePteShadow(v14, v16);
      v18 = 32LL;
      v19 = (_OWORD *)v6;
      v20 = a2 << 25 >> 16;
      do
      {
        *v19 = *(_OWORD *)v20;
        v19[1] = *(_OWORD *)(v20 + 16);
        v19[2] = *(_OWORD *)(v20 + 32);
        v19[3] = *(_OWORD *)(v20 + 48);
        v19[4] = *(_OWORD *)(v20 + 64);
        v19[5] = *(_OWORD *)(v20 + 80);
        v19[6] = *(_OWORD *)(v20 + 96);
        v19 += 8;
        v21 = *(_OWORD *)(v20 + 112);
        v20 += 128LL;
        *(v19 - 1) = v21;
        --v18;
      }
      while ( v18 );
      if ( ((v14 ^ (a2 << 25 >> 16)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        *(_QWORD *)v14 = 0LL;
        v22 = !v17;
      }
      else
      {
        v14 = v6 + 8 * ((v14 >> 3) & 0x1FF);
        *(_QWORD *)v14 = 0LL;
        v22 = !MiPteInShadowRange(v14);
      }
      if ( !v22 )
        MiWritePteShadow(v14, 0LL);
      v23 = v24 ^ (v24 ^ (v8 << 12)) & 0xFFFFFFFFF000LL | 0x20;
      v24 = v23;
      *(_QWORD *)a2 = v23;
      if ( MiPteInShadowRange(a2) )
        MiWritePteShadow(a2, v23);
      KeFlushSingleTb(a2 << 25 >> 16, 0, 1u);
      KeFlushSingleTb(v6, 0, 1u);
      *(_BYTE *)(v10 + 34) &= 0xD7u;
      *(_QWORD *)(v10 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v10 + 32) = 0;
      return MiLockAndInsertPageInFreeList(v10);
    }
  }
  return result;
}
