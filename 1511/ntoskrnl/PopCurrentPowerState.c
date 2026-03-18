/*
 * XREFs of PopCurrentPowerState @ 0x140454230
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x1404F7350 (PopEsEnterSleepShutdown.c)
 *     PopCurrentPowerStatePrecise @ 0x1404F9FFC (PopCurrentPowerStatePrecise.c)
 *     PopEsUpdateState @ 0x14050B97C (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x14050BA04 (PopEsStartTelemetry.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall PopCurrentPowerState(bool *a1)
{
  bool v2; // al

  memset(a1, 0, 0x20uLL);
  a1[7] = dword_1402DE438;
  PopAcquireRwLockShared((volatile signed __int64 *)&PopPolicyDeviceLock);
  PopAcquireRwLockShared((volatile signed __int64 *)&PopCB);
  if ( dword_1402DE3D4 )
  {
    v2 = xmmword_1402DE400 & 1;
    a1[1] = 1;
    *a1 = v2;
    a1[2] = (xmmword_1402DE400 & 4) != 0;
    a1[3] = (xmmword_1402DE400 & 2) != 0;
    *((_DWORD *)a1 + 2) = xmmword_1402DE424;
    *((_DWORD *)a1 + 3) = DWORD1(xmmword_1402DE400);
    *((_DWORD *)a1 + 4) = HIDWORD(xmmword_1402DE400);
    *((_DWORD *)a1 + 5) = dword_1402DE410;
    *((_QWORD *)a1 + 3) = *(_QWORD *)((char *)&xmmword_1402DE424 + 4);
  }
  else
  {
    *a1 = dword_1402DE28C == 0;
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  PopReleaseRwLock((signed __int64 *)&PopPolicyDeviceLock);
}
