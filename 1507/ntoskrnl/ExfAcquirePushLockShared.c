/*
 * XREFs of ExfAcquirePushLockShared @ 0x1400F2EF0
 * Callers:
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     VerifierExfAcquirePushLockShared @ 0x140751CCC (VerifierExfAcquirePushLockShared.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
