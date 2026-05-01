/*
 * XREFs of RmpClientCallbackCleanup @ 0x180009D48
 * Callers:
 *     RmpClientSubscriptionCleanup @ 0x18000A064 (RmpClientSubscriptionCleanup.c)
 *     RmpClientSubscriptionDeliverPayload @ 0x18000A1BC (RmpClientSubscriptionDeliverPayload.c)
 * Callees:
 *     RmpClientSubscriptionRemoveCallback @ 0x18000A3D8 (RmpClientSubscriptionRemoveCallback.c)
 */

__int64 __fastcall RmpClientCallbackCleanup(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  if ( *(_QWORD *)(a1 + 32) != -1LL )
    return RmpClientSubscriptionRemoveCallback(a2, a1);
  return result;
}
