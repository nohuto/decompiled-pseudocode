/*
 * XREFs of MiSynchronizePageFree @ 0x1401DF454
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiSynchronizePageFree(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = a1 + 1280;
  LOBYTE(v2) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  return MiUnlockWorkingSetExclusive(v1, v2, v3);
}
