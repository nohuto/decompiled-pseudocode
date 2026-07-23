/*
 * XREFs of MiAllocateTopLevelPage @ 0x140656E44
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x14065B9B4 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  int *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r15
  __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  unsigned __int64 PteAddress; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 *v15; // rcx
  __int64 v16; // rcx

  ProcessPartition = MiGetProcessPartition(a1);
  for ( i = (__int64)ProcessPartition; ; i = (__int64)ProcessPartition )
  {
    Page = MiGetPage(i, 0, 0xC2u);
    v7 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage((__int64)ProcessPartition);
  }
  v8 = (__int64 *)(48 * Page - 0x58000000000LL);
  v9 = Page ^ v8[5];
  *v8 = a1;
  v10 = qword_1403A9350;
  v8[5] ^= v9 & 0xFFFFFFFFFLL;
  v11 = ~v10 & (~v10 & (MiMakeValidKernelPte(v7, 6, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42) | 0x8000000000000000uLL);
  PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  MiInitializePfnForOtherProcess(v7, PteAddress, v7, 0);
  MiMarkPageActive((__int64)v8);
  *(_QWORD *)a2 = MiMakeValidKernelPte(v7, 4, a2) | 0x42;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(v14, v13);
  v15 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 8 * ((PteAddress >> 3) & 0x1FF));
  *v15 = v11;
  if ( MiPteInShadowRange((unsigned __int64)v15) )
    MiWritePteShadow(v16, v11);
  return v7;
}
