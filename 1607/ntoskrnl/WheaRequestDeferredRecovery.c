/*
 * XREFs of WheaRequestDeferredRecovery @ 0x140230D64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall WheaRequestDeferredRecovery(signed __int64 a1, __int64 a2)
{
  signed __int64 v3; // rax

  if ( !WheaDrsInitialized || _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 8), 1, 0) )
    return 0;
  *(_QWORD *)(a1 + 32) = a2;
  while ( 1 )
  {
    v3 = WheaDrsList;
    *(_QWORD *)a1 = WheaDrsList;
    if ( v3 == _InterlockedCompareExchange64(&WheaDrsList, a1, v3) )
      break;
    _mm_pause();
  }
  if ( _InterlockedIncrement(&WheaDrsItemsToProcess) == 1 )
    HalRequestDeferredRecoveryServiceInterrupt((unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 1));
  return 1;
}
