/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x1401EE46C
 * Callers:
 *     PopPepUnregisterDevice @ 0x14063749C (PopPepUnregisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v2; // al

  v1 = (volatile LONG *)(a1 + 64);
  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  ExReleaseSpinLockExclusive(v1, v2);
}
