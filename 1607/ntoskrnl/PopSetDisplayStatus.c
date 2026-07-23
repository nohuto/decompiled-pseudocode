/*
 * XREFs of PopSetDisplayStatus @ 0x140534810
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404D1254 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x140546764 (PopSetSessionDisplayStatus.c)
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
