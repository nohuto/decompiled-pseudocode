/*
 * XREFs of WheaDeferredRecoveryService @ 0x140216D50
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheapDispatchPtr.DeviceQueue, 0LL, 0LL, 0LL, 0);
  return result;
}
