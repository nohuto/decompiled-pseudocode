/*
 * XREFs of MiClearCommitReleaseState @ 0x1401CF714
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiClearCommitReleaseState(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1);
  *(_BYTE *)(a1 + 219) &= 0x3Fu;
  LOBYTE(v3) = v2;
  return MiUnlockWorkingSetExclusive(a1, v3, v4);
}
