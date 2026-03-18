/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x14023108C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.32);
    v1 = WheaPassiveDrsList;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KeReleaseSpinLock((PKSPIN_LOCK)&WheapDispatchPtr.DeviceQueue.32, v0);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v1 + 16))(v1, *(_QWORD *)(v1 + 32));
    v2 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v3 = v2 <= 1;
    result = (unsigned int)(v2 - 1);
  }
  while ( !v3 );
  return result;
}
