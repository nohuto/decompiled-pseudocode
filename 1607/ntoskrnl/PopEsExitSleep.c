/*
 * XREFs of PopEsExitSleep @ 0x1405318DC
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140545AAC (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock(&PopEsLock);
}
