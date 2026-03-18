/*
 * XREFs of MiFillPagedPoolLockedDown @ 0x1406A4AAC
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     MiUpdateShareCount @ 0x14003A4C0 (MiUpdateShareCount.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiSetPfnOwnedAndActive @ 0x1401225E4 (MiSetPfnOwnedAndActive.c)
 *     MiUnlockPage @ 0x14017E538 (MiUnlockPage.c)
 *     MiSetPfnOriginalPte @ 0x140195D70 (MiSetPfnOriginalPte.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiLockPage @ 0x140226160 (MiLockPage.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

unsigned int *__fastcall MiFillPagedPoolLockedDown(unsigned __int64 a1, __int64 a2)
{
  __int64 DemandZeroPte; // rdi
  int v5; // r8d
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned int *result; // rax
  __int16 v9; // bp
  int v10; // r15d
  unsigned int v11; // esi
  __int64 Page; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  unsigned __int64 *v15; // rsi
  unsigned __int64 PteShadow; // r15
  __int64 v17; // r15
  __int64 v18; // rcx
  unsigned __int8 v19; // r10
  unsigned int *v20; // [rsp+20h] [rbp-68h]
  unsigned int *v21; // [rsp+28h] [rbp-60h] BYREF
  __int16 v22; // [rsp+30h] [rbp-58h]
  unsigned __int16 v23; // [rsp+32h] [rbp-56h]
  __int16 v24; // [rsp+90h] [rbp+8h]
  int v25; // [rsp+98h] [rbp+10h]
  BOOL v26; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h] BYREF

  DemandZeroPte = MiMakeDemandZeroPte(4);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a1) )
    v6 |= 0x100uLL;
  v7 = v6 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  result = MI_INITIALIZE_COLOR_BASE(0LL, v5 + 1, (__int64)&v21);
  if ( a2 )
  {
    v9 = v22;
    v10 = v23;
    v24 = v22;
    v25 = v23;
    v26 = MiPteInShadowRange((__int64)&v27);
    result = v21;
    v20 = v21;
    do
    {
      v11 = v10 | (unsigned __int16)(v9 & ++*(_WORD *)result);
      while ( 1 )
      {
        Page = MiGetPage((__int64)MiSystemPartition, v11, 0);
        v13 = Page;
        if ( Page != -1 )
          break;
        MiWaitForFreePage((__int64)MiSystemPartition);
      }
      v14 = 48 * Page - 0x58000000000LL;
      MiSetPfnOriginalPte(v14, DemandZeroPte);
      v15 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      PteShadow = *v15;
      if ( MiPteInShadowRange((__int64)v15) )
        PteShadow = MiReadPteShadow((__int64)v15, PteShadow);
      v27 = PteShadow;
      if ( v26 )
        PteShadow = MiReadPteShadow((__int64)&v27, PteShadow);
      v17 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v14 + 40) = v17 & 0xFFFFFFFFFLL | *(_QWORD *)(v14 + 40) & 0xFDFFFFF000000000uLL;
      MiSetPfnOwnedAndActive(v14, a1, 1u, 1LL);
      MiLockPage(48 * v17 - 0x58000000000LL);
      MiUpdateShareCount(48 * v17 - 0x58000000000LL, 1LL);
      MiUnlockPage(v18, v19);
      v7 ^= (v7 ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
      *(_QWORD *)a1 = v7;
      if ( MiPteInShadowRange(a1) )
        MiWritePteShadow(a1, v7);
      result = v20;
      a1 += 8LL;
      v9 = v24;
      v10 = v25;
      --a2;
    }
    while ( a2 );
  }
  return result;
}
