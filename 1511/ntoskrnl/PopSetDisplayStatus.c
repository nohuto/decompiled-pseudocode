/*
 * XREFs of PopSetDisplayStatus @ 0x1404F537C
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404C4150 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x14050BBB8 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int SessionId; // ebx
  __int64 v3; // r8

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(SessionId, a1, v3);
  return PopReleaseAdaptiveLock();
}
