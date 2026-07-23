/*
 * XREFs of PopFanReportBootStartDevices @ 0x1407BD198
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     PopSqmFanEnumeration @ 0x1406768EC (PopSqmFanEnumeration.c)
 */

void PopFanReportBootStartDevices()
{
  __int64 *i; // rbx

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  PopReleaseRwLock(&PopPolicyDeviceLock);
}
