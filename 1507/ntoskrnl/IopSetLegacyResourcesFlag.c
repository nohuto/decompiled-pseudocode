/*
 * XREFs of IopSetLegacyResourcesFlag @ 0x1401FB71C
 * Callers:
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopSetLegacyResourcesFlag(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(a1 + 16) |= 0x40u;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
}
