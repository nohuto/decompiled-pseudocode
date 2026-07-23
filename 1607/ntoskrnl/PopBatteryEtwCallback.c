/*
 * XREFs of PopBatteryEtwCallback @ 0x14066EFA4
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14013036C (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    PopAcquireRwLockShared(&PopPolicyDeviceLock);
    PopAcquireRwLockExclusive((unsigned __int64 *)PopCB);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock(PopCB);
    PopReleaseRwLock(&PopPolicyDeviceLock);
  }
}
