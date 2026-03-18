/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockExclusive @ 0x1C00BD9F0
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B6210 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockExclusive(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
