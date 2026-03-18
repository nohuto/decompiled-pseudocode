/*
 * XREFs of PiDrvDbUnloadNodeReset @ 0x1400F2244
 * Callers:
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1404C25EC (PiDrvDbUnloadNodeWorkerCallback.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PiDrvDbUnloadNodeReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al

  v1 = (KSPIN_LOCK *)(a1 + 424);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 424));
  *(_BYTE *)(a1 + 432) = 0;
  KeReleaseSpinLock(v1, v3);
}
