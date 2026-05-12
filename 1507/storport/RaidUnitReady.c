/*
 * XREFs of RaidUnitReady @ 0x1C0033240
 * Callers:
 *     RaidAdapterDeviceReady @ 0x1C0021388 (RaidAdapterDeviceReady.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitReady(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al

  v1 = (volatile LONG *)(a1 + 472);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 472));
  *(_DWORD *)(a1 + 432) = 0;
  ExReleaseSpinLockExclusive(v1, v3);
  RaidRestartIoQueue(a1);
}
