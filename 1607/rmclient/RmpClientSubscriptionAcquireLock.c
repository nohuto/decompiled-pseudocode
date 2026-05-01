/*
 * XREFs of RmpClientSubscriptionAcquireLock @ 0x180009E30
 * Callers:
 *     RmpClientSubscriptionCleanup @ 0x18000A064 (RmpClientSubscriptionCleanup.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x18000A1BC (RmpClientSubscriptionDeliverPayload.c)
 *     RmpClientSubscriptionWnfCallback @ 0x18000A4F0 (RmpClientSubscriptionWnfCallback.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall RmpClientSubscriptionAcquireLock(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1 + 8);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
