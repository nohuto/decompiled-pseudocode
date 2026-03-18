/*
 * XREFs of PopEsExitSleep @ 0x1404F8D74
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x14050BA04 (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((__int64)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock((signed __int64 *)&PopEsLock);
}
