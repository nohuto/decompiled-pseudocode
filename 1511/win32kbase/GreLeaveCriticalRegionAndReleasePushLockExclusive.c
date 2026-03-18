/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00BF230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1);
  KeLeaveCriticalRegion();
}
