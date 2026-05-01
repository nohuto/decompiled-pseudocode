/*
 * XREFs of RmpClientWnfSubscriptionWorker @ 0x18000D3B0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientWnfAddMessage @ 0x18000D134 (RmpClientWnfAddMessage.c)
 */

__int64 __fastcall RmpClientWnfSubscriptionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        unsigned int a6)
{
  __int64 result; // rax

  if ( !a5 )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesReceived);
  result = RmpClientWnfAddMessage(a4, a6, a5);
  if ( (int)result >= 0 )
    return 0LL;
  _InterlockedIncrement((volatile signed __int32 *)&RmpClientWnfMessagesDropped);
  return result;
}
