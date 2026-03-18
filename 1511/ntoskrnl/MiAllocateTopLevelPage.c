/*
 * XREFs of MiAllocateTopLevelPage @ 0x140621CD4
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x140626044 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  int *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 PteAddress; // rbp
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // r14
  unsigned __int64 *v18; // rcx

  ProcessPartition = MiGetProcessPartition(a1);
  for ( i = (__int64)ProcessPartition; ; i = (__int64)ProcessPartition )
  {
    Page = MiGetPage(i, 0, 0xC2u);
    v8 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage((__int64)ProcessPartition);
  }
  v9 = (__int64 *)(48 * Page - 0x58000000000LL);
  v10 = ~qword_140381310;
  ValidKernelPte = MiMakeValidKernelPte(Page, 6, 0LL, v7);
  *v9 = a1;
  v9[5] ^= (v8 ^ v9[5]) & 0xFFFFFFFFFLL;
  v12 = v10 & (v10 & (ValidKernelPte & 0xFFFFFFFFFFFFFEBDuLL | 0x42) | 0x8000000000000000uLL);
  PteAddress = MiGetPteAddress(0xFFFFF6FB7DBED000uLL);
  MiInitializePfnForOtherProcess(v8, PteAddress, v8, 0);
  MiMarkPageActive((__int64)v9);
  v15 = MiMakeValidKernelPte(v8, 4, a2, v14) | 0x42;
  *(_QWORD *)a2 = v15;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v15);
  v16 = (PteAddress >> 3) & 0x1FF;
  v17 = (__int64)(a2 << 25) >> 16;
  v18 = (unsigned __int64 *)(v17 + 8 * v16);
  *v18 = v12;
  if ( MiPteInShadowRange((__int64)v18) )
    MiWritePteShadow(v17 + 8 * v16, v12);
  return v8;
}
