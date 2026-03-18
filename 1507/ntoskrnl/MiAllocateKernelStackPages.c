/*
 * XREFs of MiAllocateKernelStackPages @ 0x140069190
 * Callers:
 *     MmCreateKernelStack @ 0x140022090 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140169560 (MmGrowKernelStackEx.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMarkKernelStack @ 0x14006ABCC (MiMarkKernelStack.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(unsigned __int64 *a1, __int64 a2, __int64 a3, __int16 a4, char a5)
{
  __int64 v5; // rbx
  unsigned __int64 *v6; // rdi
  unsigned __int64 v8; // r13
  _QWORD *v9; // rsi
  _WORD *v10; // r12
  unsigned int v11; // r14d
  __int64 Page; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // r10
  __int64 v17; // r11
  unsigned __int64 *v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v21; // r15
  _QWORD *v22; // rbx
  _WORD *v23; // [rsp+20h] [rbp-38h] BYREF
  __int16 v24; // [rsp+28h] [rbp-30h]
  unsigned __int16 v25; // [rsp+2Ah] [rbp-2Eh]

  v5 = a2;
  v6 = a1;
  if ( !a2 )
    return 1LL;
  v8 = (unsigned __int64)&a1[a2];
  v9 = 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, (unsigned __int16)(a4 + 1), (__int64)&v23);
  v10 = v23;
  while ( 1 )
  {
    v11 = v25 | (unsigned __int16)(v24 & ++*v10);
    Page = MiGetPage(MiSystemPartition, v11, 0LL);
    if ( Page == -1 )
      break;
LABEL_7:
    *(_QWORD *)(48 * Page - 0x58000000000LL) = v9;
    v9 = (_QWORD *)(48 * Page - 0x58000000000LL);
    if ( !--v5 )
    {
      v13 = qword_1403D0230 | 0xFFFFFFFFF021LL;
      if ( (unsigned __int64)(v6 + 0x12098000000LL) <= 0x3FFFFFFF )
        v13 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      v14 = 0x98000000000LL;
      if ( (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v6 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v6 >= 0xFFFFF6FB7DA00000uLL
        && (v14 = 0x90482600000LL,
            (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
        || (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v13 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v6, v13, v14) )
        v15 |= 0x100uLL;
      v18 = v6;
      v19 = v15 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      do
      {
        v21 = (_QWORD *)*v16;
        v19 ^= (v19 ^ (((__int64)&v16[v17] / 48) << 12)) & 0xFFFFFFFFF000LL;
        MiInitializePfn(v16, v6, 4LL);
        *v6 = v19;
        if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(v6, v19);
        ++v6;
        v16 = v21;
        v17 = 0xB000000000LL;
      }
      while ( (unsigned __int64)v6 < v8 );
      MiMarkKernelStack(v18, v8, a3);
      __writecr8(CurrentIrql);
      return 1LL;
    }
  }
  while ( (a5 & 2) == 0 )
  {
    MiWaitForFreePage(MiSystemPartition);
    Page = MiGetPage(MiSystemPartition, v11, 0LL);
    if ( Page != -1 )
      goto LABEL_7;
  }
  if ( v9 )
  {
    do
    {
      v22 = (_QWORD *)*v9;
      MiReleaseFreshPage(v9);
      v9 = v22;
    }
    while ( v22 );
  }
  return 0LL;
}
