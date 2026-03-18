/*
 * XREFs of PopCurrentPowerState @ 0x14051FC88
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x140533FB8 (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x140545A20 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x140545AAC (PopEsStartTelemetry.c)
 *     PopCurrentPowerStatePrecise @ 0x140547C2C (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  PopAcquireRwLockShared(&qword_140303808);
  *a1 = xmmword_140303818;
  a1[1] = xmmword_140303828;
  PopReleaseRwLock(&qword_140303808);
}
