/*
 * XREFs of ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00579E0
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C005785C (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00575F8 (-FlushEvictQueue@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 */

void __fastcall VIDMM_WORKER_THREAD::ProcessEvictQueues(VIDMM_WORKER_THREAD *this, bool *a2)
{
  struct VIDMM_PAGING_QUEUE **v4; // r14
  struct VIDMM_PAGING_QUEUE *i; // rbx

  *a2 = 0;
  v4 = (struct VIDMM_PAGING_QUEUE **)((char *)this + 40);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 104, 0LL);
    *((_QWORD *)this + 14) = KeGetCurrentThread();
    for ( i = *v4; i != (struct VIDMM_PAGING_QUEUE *)v4; i = *(struct VIDMM_PAGING_QUEUE **)i )
    {
      if ( *((_DWORD *)i + 27) == 2 )
        goto LABEL_7;
    }
    i = 0LL;
LABEL_7:
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    KeLeaveCriticalRegion();
    if ( !i )
      break;
    VIDMM_WORKER_THREAD::FlushEvictQueue((ADAPTER_RENDER ***)this, i);
    *a2 = 1;
  }
}
