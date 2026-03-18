/*
 * XREFs of MiUnlockVa @ 0x14007C98C
 * Callers:
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 * Callees:
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 *v4; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v6; // rdi
  __int64 Wsle; // rbx

  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v4;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v4, *v4);
  v6 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  Wsle = MiLocateWsle(a2);
  MiUpdateWorkingSetAgeDistribution(
    a1,
    (*(_DWORD *)(Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL) >> 9) & 7,
    1LL);
  MiRemoveLockedPageFromWorkingSet(a1, a2, Wsle, v6);
  return MiInsertWsle(
           0xFFFFF58010804000uLL,
           MEMORY[0xFFFFF58010804008] * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBD00LL,
           0LL);
}
