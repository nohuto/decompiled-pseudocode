/*
 * XREFs of MmFreeMappingAddress @ 0x1404EA1C0
 * Callers:
 *     SmFpCleanup @ 0x1400F6A78 (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x140610088 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x1406104AC (PnprInitializeMappingReserve.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiValidateReservedMapping @ 0x1401066D4 (MiValidateReservedMapping.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePteTracker @ 0x1401E0BF8 (MiRemovePteTracker.c)
 */

void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // r14
  __int64 *PteAddress; // rbx
  __int64 *v5; // r15
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 *v7; // rbp

  v2 = PoolTag;
  PteAddress = (__int64 *)MiGetPteAddress((unsigned __int64)BaseAddress);
  v5 = PteAddress - 2;
  BugCheckParameter4 = MiValidateReservedMapping((ULONG_PTR)BaseAddress, (unsigned int)v2) - 2;
  v7 = &PteAddress[BugCheckParameter4];
  while ( PteAddress < v7 )
  {
    if ( MI_READ_PTE_LOCK_FREE(PteAddress) )
      KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
    ++PteAddress;
  }
  if ( (dword_1403810F0 & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_1402FF7B0, v5, BugCheckParameter4 + 2);
}
