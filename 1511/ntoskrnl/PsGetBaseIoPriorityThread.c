/*
 * XREFs of PsGetBaseIoPriorityThread @ 0x140077F80
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x140032518 (KiAbSetMinimumThreadPriority.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     PfSnCheckLoggingForThread @ 0x140077A24 (PfSnCheckLoggingForThread.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     CcCopyWriteEx @ 0x140077D10 (CcCopyWriteEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14007967C (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetBaseIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 )
    return 0LL;
  return result;
}
