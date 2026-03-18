/*
 * XREFs of PopSetDisplayStatus @ 0x140569878
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x14055DCE8 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x140582FD8 (PopSetSessionDisplayStatus.c)
 */

void __fastcall PopSetDisplayStatus(unsigned int a1)
{
  unsigned int SessionId; // ebx
  __int64 v3; // r8

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1);
  LOBYTE(v3) = 1;
  PopSetSessionDisplayStatus(SessionId, a1, v3);
  PopReleaseAdaptiveLock();
}
