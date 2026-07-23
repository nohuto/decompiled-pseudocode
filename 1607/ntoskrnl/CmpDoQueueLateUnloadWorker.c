/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x1404F7984
 * Callers:
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDoFlushNextHive @ 0x1403FA454 (CmpDoFlushNextHive.c)
 *     CmpDelayDerefKCBWorker @ 0x1404003D0 (CmpDelayDerefKCBWorker.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmReleaseLoadKeyContext @ 0x1404A4818 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404CBD00 (CmWorkerEngineQueueWorkItem.c)
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
