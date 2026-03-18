/*
 * XREFs of GreEnterCriticalRegionAndAcquirePushLockShared @ 0x1C00CAEA0
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
