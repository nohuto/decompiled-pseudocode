/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A9D70
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180045F48 (RtlpFreeUserBlock.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFB0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x180051C3C (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlInterlockedPushEntrySList @ 0x180051CD0 (RtlInterlockedPushEntrySList.c)
 *     RtlpFreeDebugInfo @ 0x1800524D8 (RtlpFreeDebugInfo.c)
 *     EtwpFreeRegistration @ 0x1800597D8 (EtwpFreeRegistration.c)
 *     RtlStdReleaseStackTrace @ 0x1800F28B0 (RtlStdReleaseStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x1801070F0 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)a1,
           (signed __int64)a2,
           v5 + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return v6;
}
