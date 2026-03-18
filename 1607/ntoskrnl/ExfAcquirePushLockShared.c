/*
 * XREFs of ExfAcquirePushLockShared @ 0x1400C8268
 * Callers:
 *     ExpCovQueryInformation @ 0x1406B71B8 (ExpCovQueryInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
