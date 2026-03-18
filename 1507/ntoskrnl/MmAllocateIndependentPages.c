/*
 * XREFs of MmAllocateIndependentPages @ 0x1405610B8
 * Callers:
 *     KeAllocateInterrupt @ 0x140155490 (KeAllocateInterrupt.c)
 *     HvlStartBootLogicalProcessors @ 0x140163754 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401EFA5C (HvlpInitializeHvCrashdump.c)
 *     KiInitializePrcbContext @ 0x1403FA5A8 (KiInitializePrcbContext.c)
 *     MmAllocateIsrStack @ 0x14059A694 (MmAllocateIsrStack.c)
 *     HvlInitializeProcessor @ 0x14059A970 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14059AD08 (ExCreatePoolTagTable.c)
 *     HvlpPreallocatePageListResources @ 0x140670DC4 (HvlpPreallocatePageListResources.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     InitializePool @ 0x1407C9DC4 (InitializePool.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiObtainNonPagedPoolCharges @ 0x140125C58 (MiObtainNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MmAllocateIndependentPages(unsigned __int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int16 v9; // r12
  int v10; // r13d
  _WORD *v11; // r15
  unsigned int v12; // r14d
  __int64 Page; // rax
  _WORD *v14; // [rsp+20h] [rbp-38h] BYREF
  __int16 v15; // [rsp+28h] [rbp-30h]
  unsigned __int16 v16; // [rsp+2Ah] [rbp-2Eh]
  __int64 v17; // [rsp+60h] [rbp+8h]

  v4 = ((a1 & 0xFFF) != 0) + (a1 >> 12);
  v5 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, v4, a3);
  if ( !v5 )
    return 0LL;
  if ( !(unsigned int)MiObtainNonPagedPoolCharges(v4) )
  {
    MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)v5, v4);
    return 0LL;
  }
  v17 = (__int64)(v5 << 25) >> 16;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
    v7 |= 0x100uLL;
  v8 = v7 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
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
    MiInitializePfn(48 * Page - 0x58000000000LL, (__int64 *)v5, 4u, 4);
    *(_QWORD *)v5 = v8;
    if ( MiPteInShadowRange(v5) )
      MiWritePteShadow(v5, v8);
    v5 += 8LL;
    --v4;
  }
  while ( v4 );
  return v17;
}
