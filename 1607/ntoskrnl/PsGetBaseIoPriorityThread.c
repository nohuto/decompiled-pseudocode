/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x1400EBF30
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     KiAbSetMinimumThreadPriority @ 0x14006C0E4 (KiAbSetMinimumThreadPriority.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     IoRetrievePriorityInfo @ 0x1400EB870 (IoRetrievePriorityInfo.c)
 *     IopCallDriverReference @ 0x1400EBA7C (IopCallDriverReference.c)
 *     PfSnCheckLoggingForThread @ 0x1400EBCE0 (PfSnCheckLoggingForThread.c)
 *     CcCopyWriteWontFlush @ 0x1400EBD60 (CcCopyWriteWontFlush.c)
 *     CcCopyWriteEx @ 0x1400EBDE0 (CcCopyWriteEx.c)
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
