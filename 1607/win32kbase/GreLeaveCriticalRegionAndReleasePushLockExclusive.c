/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00CAF50
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00C3DE0 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
