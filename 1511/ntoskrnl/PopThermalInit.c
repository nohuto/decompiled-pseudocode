/*
 * XREFs of PopThermalInit @ 0x140762D90
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x14052F670 (PopInitializeTimer.c)
 */

__int64 PopThermalInit()
{
  unsigned int v0; // ebx
  _BYTE *v1; // rcx
  __int64 result; // rax
  unsigned int v3; // kr00_4

  v0 = 0;
  LOBYTE(PopSystemThermalInfo) = 1;
  PopThermalLock = 0LL;
  qword_1402DE9A8 = 0LL;
  qword_1402DE858 = 0LL;
  PopThermalTelemetryLock = 0LL;
  PopInitializeTimer(
    (__int64)PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  v1 = PopThermalTrackingThresholds;
  do
  {
    v3 = v0;
    result = -858993459 * v0;
    v0 += 100;
    *v1++ = v3 / 0x14;
  }
  while ( v0 < 0x7D0 );
  return result;
}
