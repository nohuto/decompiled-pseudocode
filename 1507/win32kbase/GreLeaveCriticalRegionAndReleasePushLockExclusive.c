/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00BDAC0
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B6210 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
