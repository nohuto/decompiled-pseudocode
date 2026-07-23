/*
 * XREFs of ExWaitForUnblockPushLock @ 0x14022D6C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExWaitForUnblockPushLock(__int64 a1, volatile signed __int32 *a2)
{
  return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
}
