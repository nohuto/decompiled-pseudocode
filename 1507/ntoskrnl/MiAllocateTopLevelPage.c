/*
 * XREFs of MiAllocateTopLevelPage @ 0x1406A13F8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1406A7DDC (MiAllocateProcessShadow.c)
 * Callees:
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int16 *ProcessPartition; // rbx
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v7; // r14
  __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi

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
  v9 = ((Page & 0xFFFFFFFFFLL) << 12) | qword_1403D0240 & 0xFFFF000000000FFFuLL | 0x21;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v9 |= 0x100uLL;
  v11 = v8[5] & 0xFFFFFFF000000000uLL;
  *v8 = a1;
  v8[5] = v10 | v11;
  v12 = ~qword_1403D0220 & (~qword_1403D0220 & (v9 & 0xFFFFFFFFFFFFFE3DuLL | 0x42) | 0x8000000000000000uLL);
  MiInitializePfnForOtherProcess(v7, 0xFFFFF6FB7DBEDF68uLL, v7, 0);
  MiMarkPageActive((__int64)v8);
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(a2) )
    v13 |= 0x100uLL;
  v14 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  *(_QWORD *)a2 = v14;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v14);
  v15 = (__int64)(a2 << 25) >> 16;
  *(_QWORD *)(v15 + 3944) = v12;
  if ( MiPteInShadowRange(v15 + 3944) )
    MiWritePteShadow(v15 + 3944, v12);
  return v7;
}
