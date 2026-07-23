/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x1400357F0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiFlushHyperSpace @ 0x14009D9E8 (MiFlushHyperSpace.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiDecrementAndInsertStandbyPages(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r14
  unsigned __int8 v5; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // r10
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 TransitionPte; // rax
  __int64 *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r10d
  __int64 v34; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a2;
  v5 = a3;
  v7 = 0LL;
  if ( a2 )
  {
    do
    {
      v8 = *(_QWORD *)(a1 + 8 * v7);
      v9 = *(_BYTE *)(v8 + 34);
      *(_QWORD *)(v8 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v8 + 32) = 0;
      *(_BYTE *)(v8 + 34) = v9 & 0xF8 | 2;
      v11 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v8 + 16);
      v13 = v12 | *(_QWORD *)(v10 + 8);
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
        v15 |= 0x100uLL;
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = (unsigned __int64 *)((((((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
                                  + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12)) >> 9) & 0x7FFFFFFFF8LL)
                               - 0x98000000000LL);
      *v17 = (((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int8)word_140326AE8 << 8)) & 0x100 ^ v15) & 0xFFFFFFFFFFFFFF3DuLL | 0x42;
      if ( (unsigned int)MiPteInShadowRange(v17, v14) )
        MiWritePteShadow(v18, v20);
      v34 = MI_READ_PTE_LOCK_FREE(v19 + 8 * ((v13 >> 3) & 0x1FF));
      v21 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
      TransitionPte = MiMakeTransitionPte(v21, v11);
      v34 = TransitionPte;
      *v23 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(v23, TransitionPte) )
        MiWritePteShadow(v25, v24);
      v27 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v28 = (_QWORD *)((((v26 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v28 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v28, v24) )
        MiWritePteShadow(v29, 0LL);
      if ( v30 == 64 )
      {
        MiFlushHyperSpace();
        v30 = 0;
      }
      ++v7;
      KeGetCurrentPrcb()->HyperPte = (void *)(v27 | v30);
    }
    while ( v7 < v4 );
    v3 = a2;
    v5 = a3;
  }
  return MiInsertAndUnlockStandbyPages(0LL, a1, v3, v5);
}
