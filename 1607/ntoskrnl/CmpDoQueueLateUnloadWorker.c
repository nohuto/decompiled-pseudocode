/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x140514594
 * Callers:
 *     CmpDoFlushNextHive @ 0x1403FB594 (CmpDoFlushNextHive.c)
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmReleaseLoadKeyContext @ 0x14049C680 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     CmpReferenceHive @ 0x14002D220 (CmpReferenceHive.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404E9AA4 (CmWorkerEngineQueueWorkItem.c)
 */

void __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  signed __int64 v2; // rdi

  v2 = a1 + 4128;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2832));
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 19;
  if ( **(_DWORD **)(a1 + 4104) == 2 && !*(_QWORD *)(a1 + 4120) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4120), v2, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 21;
      *(_DWORD *)(v2 + 16) = 1;
      *(_QWORD *)(v2 + 24) = CmpLateUnloadHiveWorker;
      *(_QWORD *)(v2 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem((_QWORD *)v2);
    }
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 2832));
}
