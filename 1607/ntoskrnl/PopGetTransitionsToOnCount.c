/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140114774
 * Callers:
 *     PopSetSleepMarker @ 0x140531690 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopTelemetryOsState);
  v0 = dword_140302B88;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
