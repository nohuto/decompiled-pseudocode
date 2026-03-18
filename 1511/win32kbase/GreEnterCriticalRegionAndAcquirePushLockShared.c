/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockShared @ 0x1C00BF180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreEnterCriticalRegionAndAcquirePushLockShared(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
