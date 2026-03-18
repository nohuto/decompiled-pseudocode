/*
 * XREFs of ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00901E0
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C008FF48 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C008FCB8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessEvictQueues(VIDMM_WORKER_THREAD *this, bool *a2)
{
  struct VIDMM_PAGING_QUEUE **v4; // r14
  char *v5; // rsi
  struct VIDMM_PAGING_QUEUE *i; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  *a2 = 0;
  v4 = (struct VIDMM_PAGING_QUEUE **)((char *)this + 64);
  v5 = (char *)this + 128;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    for ( i = *v4; i != (struct VIDMM_PAGING_QUEUE *)v4; i = *(struct VIDMM_PAGING_QUEUE **)i )
    {
      if ( *((_DWORD *)i + 29) == 2 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    if ( !i )
      break;
    VIDMM_WORKER_THREAD::FlushEvictQueue(this, i, v7, v8);
    *a2 = 1;
  }
}
