/*
 * XREFs of MiDecrementAndInsertStandbyPages @ 0x14000FBD0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDecrementAndInsertStandbyPages(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // rcx
  char v7; // al
  unsigned __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ecx
  __int64 ValidKernelPte; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 *v19; // r14
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 HyperPte; // rbp
  int v23; // ebx
  _QWORD *v24; // rsi
  unsigned __int64 v25; // rbp
  unsigned int v26; // ebx
  unsigned int v29; // [rsp+68h] [rbp+10h]

  v29 = a2;
  v3 = a2;
  v4 = a1;
  v5 = 0LL;
  if ( a2 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 + 8 * v5);
      v7 = *(_BYTE *)(v6 + 34);
      *(_QWORD *)(v6 + 24) &= 0xC000000000000000uLL;
      v8 = *(unsigned int *)(v6 + 16);
      v9 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
      v10 = *(_QWORD *)(v6 + 8);
      v11 = 4LL;
      *(_BYTE *)(v6 + 34) = v7 & 0xF8 | 2;
      v12 = v10 | 0x8000000000000000uLL;
      *(_WORD *)(v6 + 32) = 0;
      v13 = (v8 >> 5) & 0x1F;
      v14 = *(unsigned __int8 *)(48 * v9 - 0x58000000000LL + 34) >> 6;
      if ( !v14 || v14 == 3 )
      {
        v11 = 12LL;
      }
      else if ( v14 == 2 )
      {
        v11 = 28LL;
      }
      ValidKernelPte = MiMakeValidKernelPte(v9, v11, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = ValidKernelPte | 0x42;
      v18 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
          + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
      v19 = (__int64 *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v19 = v17;
      if ( (unsigned int)MiPteInShadowRange(v19) )
        MiWritePteShadow(v19, v17);
      v20 = v18 + 8 * ((v12 >> 3) & 0x1FF);
      v21 = (32 * (v13 & 0x1F | 0x40)) | MI_READ_PTE_LOCK_FREE(v20) & 0xFFFFFFFFFFFFF81EuLL;
      *(_QWORD *)v20 = v21;
      if ( (unsigned int)MiPteInShadowRange(v20) )
        MiWritePteShadow(v20, v21);
      HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
      v23 = HyperPte & 0xFFF;
      v24 = (_QWORD *)((((v20 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v25 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v26 = v23 + 1;
      *v24 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v24) )
        MiWritePteShadow(v24, 0LL);
      if ( v26 == 64 )
      {
        MiFlushHyperSpace();
        v26 = 0;
      }
      ++v5;
      KeGetCurrentPrcb()->HyperPte = (void *)(v25 | v26);
      v4 = a1;
    }
    while ( v5 < v3 );
    a2 = v29;
  }
  return MiInsertAndUnlockStandbyPages(0LL, v4, a2, a3);
}
