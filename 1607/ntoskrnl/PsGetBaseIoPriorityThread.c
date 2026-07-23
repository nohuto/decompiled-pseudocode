/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x1400E9DA0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006BC64 (KiAbSetMinimumThreadPriority.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     IoRetrievePriorityInfo @ 0x1400E96E0 (IoRetrievePriorityInfo.c)
 *     IopCallDriverReference @ 0x1400E98EC (IopCallDriverReference.c)
 *     PfSnCheckLoggingForThread @ 0x1400E9B50 (PfSnCheckLoggingForThread.c)
 *     CcCopyWriteWontFlush @ 0x1400E9BD0 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x1400E9C50 (CcCopyWriteEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1728) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
