/*
 * XREFs of MmFreeMappingAddress @ 0x14052C764
 * Callers:
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x140644578 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x14064499C (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiRemoveMappingNode @ 0x14011103C (MiRemoveMappingNode.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemovePteTracker @ 0x1401FC81C (MiRemovePteTracker.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rsi
  _QWORD *v4; // rax
  void *v5; // rbp
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  if ( !BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x10DuLL, (ULONG_PTR)BaseAddress, (ULONG_PTR)v4, v2);
  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = PteAddress;
  if ( PteAddress < PteAddress + 8 * BugCheckParameter4 )
  {
    do
    {
      if ( v8 == PteAddress || (v8 & 0xFFF) == 0 )
      {
        v11 = MiGetPteAddress(v8);
        if ( (MI_READ_PTE_LOCK_FREE(v11) & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      }
      if ( MI_READ_PTE_LOCK_FREE(v8) )
        KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      v8 = v9 + 8;
    }
    while ( v8 < v10 );
  }
  if ( (dword_1403A913C & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_1403278B0, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
