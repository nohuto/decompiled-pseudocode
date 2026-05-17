/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1800D8A44
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800DA550 (RtlpSetHeapDebuggingInformation.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F0340 (RtlpStackTraceDatabaseLogPrefix.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
