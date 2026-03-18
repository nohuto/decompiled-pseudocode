/*
 * XREFs of MiFillPagedPoolLockedDown @ 0x14065A01C
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiSetPfnOwnedAndActive @ 0x14001B640 (MiSetPfnOwnedAndActive.c)
 *     MiUpdateShareCount @ 0x140023630 (MiUpdateShareCount.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x1400E60A0 (MiInitializePageColorBase.c)
 *     MiLockPage @ 0x1401593D8 (MiLockPage.c)
 *     MiSetPfnOriginalPte @ 0x1401718E0 (MiSetPfnOriginalPte.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2734 (MiMakeDemandZeroPte.c)
 *     MiUnlockPage @ 0x1401F2B80 (MiUnlockPage.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 */

unsigned int *__fastcall MiFillPagedPoolLockedDown(unsigned __int64 *a1, __int64 a2, int a3)
{
  __int64 DemandZeroPte; // rdi
  int v7; // edx
  unsigned __int64 v8; // rbx
  unsigned int *result; // rax
  __int64 v10; // r11
  __int16 v11; // r13
  _WORD *v12; // r12
  unsigned int v13; // esi
  __int64 Page; // rax
  __int64 v15; // r15
  unsigned __int64 PteAddress; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned __int8 v21; // r10
  __int64 v22; // rcx
  _WORD *v23; // [rsp+30h] [rbp-48h] BYREF
  __int16 v24; // [rsp+38h] [rbp-40h]
  unsigned __int16 v25; // [rsp+3Ah] [rbp-3Eh]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]

  DemandZeroPte = MiMakeDemandZeroPte(4);
  v8 = MiMakeValidKernelPte(-1LL, v7, (unsigned __int64)a1) | 0x42;
  result = MiInitializePageColorBase(0LL, a3 + 1, (__int64)&v23);
  if ( a2 )
  {
    LODWORD(result) = v25;
    LOWORD(v10) = 1;
    v11 = v24;
    v12 = v23;
    v27 = v25;
    do
    {
      *v12 += v10;
      v13 = (unsigned int)result | (unsigned __int16)(v11 & *v12);
      while ( 1 )
      {
        Page = MiGetPage((__int64)MiSystemPartition, v13, 0);
        v15 = Page;
        if ( Page != -1 )
          break;
        MiWaitForFreePage((__int64)MiSystemPartition);
      }
      MiSetPfnOriginalPte(48 * Page - 0x58000000000LL, DemandZeroPte);
      PteAddress = MiGetPteAddress((unsigned __int64)a1);
      v26 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v18 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v26);
      *(_QWORD *)(v17 + 40) = v18 & 0xFFFFFFFFFLL | *(_QWORD *)(v17 + 40) & 0xFDFFFFF000000000uLL;
      MiSetPfnOwnedAndActive(v17, 0, (__int64)a1, 1u, 1);
      v19 = 48 * v18 - 0x58000000000LL;
      MiLockPage(v19);
      MiUpdateShareCount(v19, 1LL);
      MiUnlockPage(v20, v21);
      v8 ^= (v8 ^ (v15 << 12)) & 0xFFFFFFFFF000LL;
      *a1 = v8;
      if ( MiPteInShadowRange((unsigned __int64)a1) )
        MiWritePteShadow(v22, v8);
      result = (unsigned int *)v27;
      ++a1;
      a2 -= v10;
    }
    while ( a2 );
  }
  return result;
}
