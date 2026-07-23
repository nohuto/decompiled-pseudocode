/*
 * XREFs of PopGetTransitionsToOnCount @ 0x140114CE4
 * Callers:
 *     PopSetSleepMarker @ 0x140531BD0 (PopSetSleepMarker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 */

__int64 PopGetTransitionsToOnCount()
{
  unsigned int v0; // ebx

  PopAcquireRwLockExclusive((unsigned __int64 *)&PopTelemetryOsState);
  v0 = dword_140302BE8;
  PopReleaseRwLock(&PopTelemetryOsState);
  return v0;
}
