/*
 * XREFs of PopEsExitSleep @ 0x140531E1C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PopEsStartTelemetry @ 0x140545FEC (PopEsStartTelemetry.c)
 */

void PopEsExitSleep()
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsStartTelemetry();
  PopReleaseRwLock(&PopEsLock);
}
