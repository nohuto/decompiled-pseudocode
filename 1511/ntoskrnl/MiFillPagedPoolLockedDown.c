/*
 * XREFs of MiFillPagedPoolLockedDown @ 0x1406251DC
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiUpdateShareCount @ 0x1400A9600 (MiUpdateShareCount.c)
 *     MiSetPfnOwnedAndActive @ 0x1400C0054 (MiSetPfnOwnedAndActive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiLockPage @ 0x1401DFF7C (MiLockPage.c)
 *     MiUnlockPage @ 0x1401DFF84 (MiUnlockPage.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

unsigned int *__fastcall MiFillPagedPoolLockedDown(unsigned __int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v6; // r14
  unsigned __int64 v7; // rbx
  unsigned int *result; // rax
  __int16 v9; // r13
  _WORD *v10; // r12
  unsigned int v11; // edi
  __int64 Page; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 *PteAddress; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int8 v19; // r10
  _WORD *v20; // [rsp+20h] [rbp-48h] BYREF
  __int16 v21; // [rsp+28h] [rbp-40h]
  unsigned __int16 v22; // [rsp+2Ah] [rbp-3Eh]
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v6 = (_QWORD *)a1;
  v7 = MiMakeValidKernelPte(-1LL, 4, a1, a4) | 0x42;
  result = MI_INITIALIZE_COLOR_BASE(0LL, a3 + 1, (__int64)&v20);
  if ( a2 )
  {
    LODWORD(result) = v22;
    v9 = v21;
    v10 = v20;
    v24 = v22;
    do
    {
      v11 = (unsigned int)result | (unsigned __int16)(v9 & ++*v10);
      while ( 1 )
      {
        Page = MiGetPage((__int64)MiSystemPartition, v11, 0);
        v13 = Page;
        if ( Page != -1 )
          break;
        MiWaitForFreePage((__int64)MiSystemPartition);
      }
      v14 = 48 * Page - 0x58000000000LL;
      *(_QWORD *)(v14 + 16) = 128LL;
      PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)v6);
      v23 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v14 + 40) = v16 | *(_QWORD *)(v14 + 40) & 0xFDFFFFF000000000uLL;
      MiSetPfnOwnedAndActive(v14, (__int64)v6, 1, 1);
      v17 = 48 * v16 - 0x58000000000LL;
      MiLockPage(v17);
      MiUpdateShareCount(v17, 1LL);
      MiUnlockPage(v18, v19);
      v7 ^= (v7 ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
      *v6 = v7;
      if ( MiPteInShadowRange((__int64)v6) )
        MiWritePteShadow((__int64)v6, v7);
      result = (unsigned int *)v24;
      ++v6;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
