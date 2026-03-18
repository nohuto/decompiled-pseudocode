/*
 * XREFs of MiUnlockVa @ 0x1400BAA10
 * Callers:
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiProtectPrivateMemory @ 0x1400E1040 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLocateWsle @ 0x140046B50 (MiLocateWsle.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400BAB0C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400BC53C (MiUpdateWorkingSetAgeDistribution.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnlockVa(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rbp
  ULONG_PTR *v5; // rdi
  unsigned __int64 Wsle; // rbx

  v2 = qword_140327F90;
  v5 = (ULONG_PTR *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL);
  Wsle = MiLocateWsle(a2, a1, *v5);
  MiUpdateWorkingSetAgeDistribution(
    a1,
    (*(_DWORD *)(Wsle * *(unsigned int *)(v2 + 276841264) + *(_QWORD *)(qword_140327F90 + 276841312)) >> 9) & 7,
    1LL);
  MiRemoveLockedPageFromWorkingSet(a1, a2, Wsle, v5);
  return MiInsertWsle(
           a1,
           *(_QWORD *)(qword_140327F90 + 276841312) + *(unsigned int *)(v2 + 276841264) * *(_QWORD *)(v2 + 276841240),
           0LL);
}
