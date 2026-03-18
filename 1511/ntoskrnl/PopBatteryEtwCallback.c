/*
 * XREFs of PopBatteryEtwCallback @ 0x140636AE4
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14011B4A0 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
    PopAcquireRwLockExclusive((__int64)&PopCB);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((signed __int64 *)&PopCB);
    PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
  }
}
