/*
 * XREFs of MmAllocateIndependentPages @ 0x1404E6034
 * Callers:
 *     KeAllocateInterrupt @ 0x14012CF1C (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C08E8 (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1403D3AC4 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14054E204 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14054E4D8 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14054E9A0 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140620624 (HvlpPreallocatePageListResources.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 *     MiInitializePageColorBase @ 0x1400E60A0 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiObtainNonPagedPoolCharges @ 0x140102084 (MiObtainNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // rbx
  __int16 v8; // r12
  int v9; // r13d
  _WORD *v10; // r15
  unsigned int v11; // ebp
  __int64 Page; // rax
  __int64 v13; // rcx
  _WORD *v14; // [rsp+20h] [rbp-38h] BYREF
  __int16 v15; // [rsp+28h] [rbp-30h]
  unsigned __int16 v16; // [rsp+2Ah] [rbp-2Eh]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v4 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  v5 = MiReservePtes((__int64)&qword_140327870, (unsigned int)v4, a3);
  if ( !v5 )
    return 0LL;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v4) )
  {
    MiReleasePtes((__int64)&qword_140327870, v5, v4);
    return 0LL;
  }
  v17 = (__int64)(v5 << 25) >> 16;
  v7 = MiMakeValidKernelPte(-1LL, 4, v5) | 0x42;
  MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v14);
  v8 = v15;
  v9 = v16;
  v10 = v14;
  do
  {
    v11 = v9 | (unsigned __int16)(v8 & ++*v10);
    while ( 1 )
    {
      Page = MiGetPage((__int64)MiSystemPartition, v11, 8u);
      if ( Page != -1 )
        break;
      MiWaitForFreePage((__int64)MiSystemPartition);
    }
    v7 ^= (v7 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
    MiInitializePfn(48 * Page - 0x58000000000LL, v5, 4LL, 4);
    *(_QWORD *)v5 = v7;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v13, v7);
    v5 += 8LL;
    --v4;
  }
  while ( v4 );
  return v17;
}
