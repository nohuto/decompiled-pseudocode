/*
 * XREFs of LdrpWorkCallback @ 0x18000E110
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18000E35C (LdrpUpdateStatistics.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 */

void LdrpWorkCallback()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
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
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v0 )
      LdrpProcessWork(v0 - 7, 0LL);
  }
}
