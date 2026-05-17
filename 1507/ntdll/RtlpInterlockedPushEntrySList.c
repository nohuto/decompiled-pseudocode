/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800955A0
 * Callers:
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18000922C (RtlpHpLfhCacheAddSubsegment.c)
 *     EtwpFreeRegistration @ 0x18000E448 (EtwpFreeRegistration.c)
 *     RtlpFreeUserBlock @ 0x18002A230 (RtlpFreeUserBlock.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlInterlockedPushEntrySList @ 0x180060F70 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x1800E4A40 (RtlStdReleaseStackTrace.c)
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
