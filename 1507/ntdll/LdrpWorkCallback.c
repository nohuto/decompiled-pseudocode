/*
 * XREFs of LdrpWorkCallback @ 0x18003BF00
 * Callers:
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18003BF8C (LdrpUpdateStatistics.c)
 */

void LdrpWorkCallback()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v0 = (__int64 *)LdrpWorkQueue;
    v1 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v1 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v1 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v0 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v0 )
      LdrpProcessWork((__int64)(v0 - 7), 0);
  }
}
