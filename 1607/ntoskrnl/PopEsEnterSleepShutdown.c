/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140533FB8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PopCurrentPowerState @ 0x14051FC88 (PopCurrentPowerState.c)
 *     PopEsSnapTelemetry @ 0x140533FF4 (PopEsSnapTelemetry.c)
 */

void PopEsEnterSleepShutdown()
{
  _OWORD v0[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v0);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
  PopEsSnapTelemetry(v0);
  PopEsLastStateChangeTimeStamp = 0LL;
  PopReleaseRwLock(&PopEsLock);
}
