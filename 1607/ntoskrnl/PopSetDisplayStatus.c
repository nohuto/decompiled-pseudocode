/*
 * XREFs of PopSetDisplayStatus @ 0x1405342D0
 * Callers:
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     PopAcquireAdaptiveLock @ 0x1404EF160 (PopAcquireAdaptiveLock.c)
 *     PopSetSessionDisplayStatus @ 0x140546224 (PopSetSessionDisplayStatus.c)
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
