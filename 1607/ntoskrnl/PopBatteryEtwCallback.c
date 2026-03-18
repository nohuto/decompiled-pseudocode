/*
 * XREFs of PopBatteryEtwCallback @ 0x14066EEC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14012FDFC (PopBatteryTraceSystemBatteryStatus.c)
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
