/*
 * XREFs of PopFanReportBootStartDevices @ 0x14076620C
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     PopSqmFanEnumeration @ 0x14063E094 (PopSqmFanEnumeration.c)
 */

void PopFanReportBootStartDevices()
{
  __int64 *i; // rbx

  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  for ( i = (__int64 *)PopFans; i != &PopFans; i = (__int64 *)*i )
    PopSqmFanEnumeration();
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
