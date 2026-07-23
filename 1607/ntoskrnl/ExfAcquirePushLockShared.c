/*
 * XREFs of ExfAcquirePushLockShared @ 0x1400C6108
 * Callers:
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
