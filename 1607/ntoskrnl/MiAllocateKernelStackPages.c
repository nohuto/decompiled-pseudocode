/*
 * XREFs of MiAllocateKernelStackPages @ 0x140001B34
 * Callers:
 *     MmCreateKernelStack @ 0x1400EF600 (MmCreateKernelStack.c)
 *     MmGrowKernelStackEx @ 0x140136A80 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiMarkKernelStack @ 0x140001D14 (MiMarkKernelStack.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateKernelStackPages(__int64 *a1, __int64 a2, __int64 a3, __int16 a4, char a5)
{
  __int64 v5; // rbx
  __int64 *v6; // rdi
  unsigned __int64 v7; // r12
  _QWORD *v8; // rsi
  _WORD *v9; // r13
  unsigned int v10; // r14d
  __int64 Page; // rax
  _QWORD *v12; // r14
  __int64 *v13; // rsi
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // rbx
  _WORD *v21; // [rsp+20h] [rbp-38h] BYREF
  __int16 v22; // [rsp+28h] [rbp-30h]
  unsigned __int16 v23; // [rsp+2Ah] [rbp-2Eh]

  v5 = a2;
  v6 = a1;
  if ( !a2 )
    return 1LL;
  v7 = (unsigned __int64)&a1[a2];
  v8 = 0LL;
  MiInitializePageColorBase(0LL, (unsigned __int16)(a4 + 1), &v21);
  v9 = v21;
  while ( 1 )
  {
    v10 = v23 | (unsigned __int16)(v22 & ++*v9);
    Page = MiGetPage(&MiSystemPartition, v10, 0LL);
    if ( Page == -1 )
      break;
LABEL_6:
    v12 = (_QWORD *)(48 * Page - 0x58000000000LL);
    *v12 = v8;
    v8 = v12;
    if ( !--v5 )
    {
      v13 = v6;
      v14 = MiMakeValidKernelPte(-1LL, 4LL, v6) | 0x42;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      do
      {
        v16 = (_QWORD *)*v12;
        v14 ^= (v14 ^ (((__int64)(v12 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
        MiInitializePfn(v12, v6, 4LL);
        *v6 = v14;
        if ( (unsigned int)MiPteInShadowRange(v6, v17) )
          MiWritePteShadow(v18, v14);
        ++v6;
        v12 = v16;
      }
      while ( (unsigned __int64)v6 < v7 );
      MiMarkKernelStack(v13, v7, a3);
      __writecr8(CurrentIrql);
      return 1LL;
    }
  }
  while ( (a5 & 2) == 0 )
  {
    MiWaitForFreePage(&MiSystemPartition);
    Page = MiGetPage(&MiSystemPartition, v10, 0LL);
    if ( Page != -1 )
      goto LABEL_6;
  }
  if ( v8 )
  {
    do
    {
      v20 = (_QWORD *)*v8;
      MiReleaseFreshPage(v8);
      v8 = v20;
    }
    while ( v20 );
  }
  return 0LL;
}
