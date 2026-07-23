/*
 * XREFs of PopCurrentPowerState @ 0x140502CF0
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x1405344F8 (PopEsEnterSleepShutdown.c)
 *     PopEsUpdateState @ 0x140545F60 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x140545FEC (PopEsStartTelemetry.c)
 *     PopCurrentPowerStatePrecise @ 0x14054816C (PopCurrentPowerStatePrecise.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 */

void __fastcall PopCurrentPowerState(_OWORD *a1)
{
  PopAcquireRwLockShared(&qword_140303748);
  *a1 = xmmword_140303758;
  a1[1] = xmmword_140303768;
  PopReleaseRwLock(&qword_140303748);
}
