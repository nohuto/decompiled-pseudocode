/*
 * XREFs of RtlpCallInterceptRoutine @ 0x180090F54
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x18004377C (RtlpHpReAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1800507D8 (RtlpHpAllocateHeap.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x18008F1D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkInterceptor @ 0x180090FB0 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F9D90 (RtlpStackTraceDatabaseLogPrefix.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
