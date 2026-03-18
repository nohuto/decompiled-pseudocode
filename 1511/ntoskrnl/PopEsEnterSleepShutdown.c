/*
 * XREFs of PopEsEnterSleepShutdown @ 0x1404F7350
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x140454230 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x1404F738C (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  bool v0[40]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v0);
  PopAcquireRwLockExclusive((__int64)&PopEsLock);
  PopEsSnapTelemetry(v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock((signed __int64 *)&PopEsLock);
}
