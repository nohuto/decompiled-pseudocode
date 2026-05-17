/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A8930
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpFreeUserBlock @ 0x180023AD4 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     EtwpFreeRegistration @ 0x180047F28 (EtwpFreeRegistration.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18004EA78 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlInterlockedPushEntrySList @ 0x18004EB30 (RtlInterlockedPushEntrySList.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     RtlStdReleaseStackTrace @ 0x1800E95A0 (RtlStdReleaseStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x1800FD150 (RtlFreeMemoryBlockLookaside.c)
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
