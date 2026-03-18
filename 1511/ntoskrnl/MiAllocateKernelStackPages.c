/*
 * XREFs of MiAllocateKernelStackPages @ 0x1400DFB3C
 * Callers:
 *     MmCreateKernelStack @ 0x14002CB50 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x14013D1C8 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiMarkKernelStack @ 0x1400DFD18 (MiMarkKernelStack.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(unsigned __int64 *a1, __int64 a2, __int64 a3, __int16 a4, char a5)
{
  __int64 v5; // rbx
  unsigned __int64 *v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rsi
  _WORD *v9; // r13
  unsigned int v10; // r14d
  __int64 Page; // rax
  __int64 v12; // r9
  _QWORD *v13; // r14
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v17; // r13
  _QWORD *v19; // rbx
  _WORD *v20; // [rsp+20h] [rbp-38h] BYREF
  __int16 v21; // [rsp+28h] [rbp-30h]
  unsigned __int16 v22; // [rsp+2Ah] [rbp-2Eh]

  v5 = a2;
  v6 = a1;
  if ( !a2 )
    return 1LL;
  v7 = (unsigned __int64)&a1[a2];
  v8 = 0LL;
  MI_INITIALIZE_COLOR_BASE(0LL, (unsigned __int16)(a4 + 1), (__int64)&v20);
  v9 = v20;
  while ( 1 )
  {
    v10 = v22 | (unsigned __int16)(v21 & ++*v9);
    Page = MiGetPage((__int64)MiSystemPartition, v10, 0);
    if ( Page == -1 )
      break;
LABEL_6:
    v13 = (_QWORD *)(48 * Page - 0x58000000000LL);
    *v13 = v8;
    v8 = v13;
    if ( !--v5 )
    {
      v14 = v6;
      v15 = MiMakeValidKernelPte(-1LL, 4, (unsigned __int64)v6, v12) | 0x42;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      do
      {
        v17 = (_QWORD *)*v13;
        v15 ^= (v15 ^ (((__int64)(v13 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        MiInitializePfn((__int64)v13, (unsigned __int64)v6, 4u, 20);
        *v6 = v15;
        if ( (unsigned int)MiPteInShadowRange(v6) )
          MiWritePteShadow(v6, v15);
        ++v6;
        v13 = v17;
      }
      while ( (unsigned __int64)v6 < v7 );
      MiMarkKernelStack(v14, v7, a3);
      __writecr8(CurrentIrql);
      return 1LL;
    }
  }
  while ( (a5 & 2) == 0 )
  {
    MiWaitForFreePage(MiSystemPartition);
    Page = MiGetPage((__int64)MiSystemPartition, v10, 0);
    if ( Page != -1 )
      goto LABEL_6;
  }
  if ( v8 )
  {
    do
    {
      v19 = (_QWORD *)*v8;
      MiReleaseFreshPage((__int64)v8);
      v8 = v19;
    }
    while ( v19 );
  }
  return 0LL;
}
