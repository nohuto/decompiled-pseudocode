/*
 * XREFs of LdrpWorkCallback @ 0x180009200
 * Callers:
 *     <none>
 * Callees:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x180009428 (LdrpUpdateStatistics.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
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
