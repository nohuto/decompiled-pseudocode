/*
 * XREFs of MmFreeIndependentPages @ 0x1403E1F14
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140139734 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C08E8 (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x14022CD44 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x1406203EC (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140626FD8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1406272E8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140627610 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x14065B890 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     MiLockAndDecrementShareCount @ 0x140075DFC (MiLockAndDecrementShareCount.c)
 *     MiReturnNonPagedPoolCharges @ 0x140098570 (MiReturnNonPagedPoolCharges.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _QWORD *PteAddress; // rdi
  __int64 v5; // r14
  _QWORD *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v12 = v3;
  v15 = v3;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v5 = (__int64)PteAddress;
  v6 = &PteAddress[v3];
  do
  {
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)PteAddress);
    v7 = 48
       * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL)
                    - 0x58000000000LL
                    + 40) & 0xFFFFFFFFFLL);
    *PteAddress = 0LL;
    v8 = v7 - 0x58000000000LL;
    if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
      MiWritePteShadow(v9, 0LL);
    if ( (unsigned int)MiLockAndDecrementShareCount(v10, 1) == 3 )
      v13 = ++v2;
    MiLockAndDecrementShareCount(v8, 0);
    ++PteAddress;
  }
  while ( PteAddress < v6 );
  MiReleasePtes((__int64)&qword_140327870, v5, v3);
  return MiReturnNonPagedPoolCharges(&v12);
}
