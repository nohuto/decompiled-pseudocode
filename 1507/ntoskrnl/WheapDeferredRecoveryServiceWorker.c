/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x140267584
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // rbx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData);
    }
    v1 = WheaPassiveDrsList;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, 0LL);
    __writecr8(CurrentIrql);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v1 + 16))(v1, *(_QWORD *)(v1 + 32));
    v2 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v3 = v2 <= 1;
    result = (unsigned int)(v2 - 1);
  }
  while ( !v3 );
  return result;
}
