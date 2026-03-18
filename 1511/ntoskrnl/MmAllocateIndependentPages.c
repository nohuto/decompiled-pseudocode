/*
 * XREFs of MmAllocateIndependentPages @ 0x1403CBDCC
 * Callers:
 *     KeAllocateInterrupt @ 0x1401226DC (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1403A8F2C (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14052F6BC (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14052F954 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14052FCCC (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x1405F6FB8 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1405FCFE8 (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     InitializePool @ 0x1407496B4 (InitializePool.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiObtainNonPagedPoolCharges @ 0x140019B68 (MiObtainNonPagedPoolCharges.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rsi
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int16 v9; // r12
  int v10; // r13d
  _WORD *v11; // r15
  unsigned int v12; // ebp
  __int64 Page; // rax
  _WORD *v14; // [rsp+20h] [rbp-38h] BYREF
  __int16 v15; // [rsp+28h] [rbp-30h]
  unsigned __int16 v16; // [rsp+2Ah] [rbp-2Eh]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v4 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  v5 = MiReservePtes((__int64)&qword_1402FF7B0, v4, a3);
  if ( !v5 )
    return 0LL;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v4) )
  {
    MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v5, v4);
    return 0LL;
  }
  v17 = (__int64)(v5 << 25) >> 16;
  v8 = MiMakeValidKernelPte(-1LL, 4, v5, v7) | 0x42;
  MI_INITIALIZE_COLOR_BASE(0LL, a2 + 1, (__int64)&v14);
  v9 = v15;
  v10 = v16;
  v11 = v14;
  do
  {
    v12 = v10 | (unsigned __int16)(v9 & ++*v11);
    while ( 1 )
    {
      Page = MiGetPage((__int64)MiSystemPartition, v12, 8u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage((__int64)MiSystemPartition);
    }
    v8 ^= (v8 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v5, 4u, 4);
    *(_QWORD *)v5 = v8;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, v8);
    v5 += 8LL;
    --v4;
  }
  while ( v4 );
  return v17;
}
