/*
 * XREFs of MiUnlockVa @ 0x140021744
 * Callers:
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 * Callees:
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BAC08 (MiUpdateWorkingSetAgeDistribution.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdi
  __int64 Wsle; // rbx

  v4 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
  Wsle = MiLocateWsle(a2);
  MiUpdateWorkingSetAgeDistribution(
    a1,
    (*(_DWORD *)(Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL) >> 9) & 7,
    1LL);
  MiRemoveLockedPageFromWorkingSet(a1, a2, Wsle, v4);
  return MiInsertWsle(
           0xFFFFF58010804000uLL,
           MEMORY[0xFFFFF58010804008] * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL,
           0LL);
}
