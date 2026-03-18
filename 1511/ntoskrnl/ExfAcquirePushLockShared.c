/*
 * XREFs of ExfAcquirePushLockShared @ 0x140020A98
 * Callers:
 *     ExpCovQueryInformation @ 0x140674878 (ExpCovQueryInformation.c)
 *     VerifierExfAcquirePushLockShared @ 0x1406CE2F4 (VerifierExfAcquirePushLockShared.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
