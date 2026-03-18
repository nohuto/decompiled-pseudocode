/*
 * XREFs of MmFreeIndependentPages @ 0x1403C5554
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140136B70 (HvlStartBootLogicalProcessors.c)
 *     HvlpInitializeHvCrashdump @ 0x1401B4B7C (HvlpInitializeHvCrashdump.c)
 *     ExDeletePoolTagTable @ 0x140212AD8 (ExDeletePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x1405F683C (HvlDeleteProcessor.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1405FCFE8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x1405FD364 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpReleaseResources @ 0x1405FD674 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     MmFreeIsrStack @ 0x140626004 (MmFreeIsrStack.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnNonPagedPoolCharges @ 0x1400D6B5C (MiReturnNonPagedPoolCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

signed __int64 __fastcall MmFreeIndependentPages(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  _QWORD *PteAddress; // rdi
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  unsigned __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v15; // [rsp+90h] [rbp+18h]

  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v3 = ((a2 & 0xFFF) != 0) + (a2 >> 12);
  v10 = v3;
  v13 = v3;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  v15 = PteAddress;
  v5 = &PteAddress[v3];
  do
  {
    v14 = MI_READ_PTE_LOCK_FREE(PteAddress);
    v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v7 = *(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL;
    *PteAddress = 0LL;
    v8 = 48 * v7 - 0x58000000000LL;
    if ( MiPteInShadowRange((__int64)PteAddress) )
      MiWritePteShadow((__int64)PteAddress, 0LL);
    if ( (unsigned int)MiLockAndDecrementShareCount(v6, 1) == 3 )
      v11 = ++v2;
    MiLockAndDecrementShareCount(v8, 0);
    ++PteAddress;
  }
  while ( PteAddress < v5 );
  MiReleasePtes((__int64)&qword_1402FF7B0, v15, v3);
  return MiReturnNonPagedPoolCharges(&v10);
}
