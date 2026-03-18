/*
 * XREFs of WheaDeferredRecoveryService @ 0x1402673A0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((__int64)&WheapDispatchPtr.DeviceQueue, 0LL, 0LL, 0LL, 0);
  return result;
}
