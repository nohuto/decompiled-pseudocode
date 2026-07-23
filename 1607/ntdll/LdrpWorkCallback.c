/*
 * XREFs of LdrpWorkCallback @ 0x18000E100
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180020640 (TppWorkpExecuteCallback.c)
 * Callees:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18000E34C (LdrpUpdateStatistics.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 */

void __fastcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (__int64 *)LdrpWorkQueue;
    v4 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v4 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v4 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v3 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v3 )
      LdrpProcessWork(v3 - 7, 0LL);
  }
}
