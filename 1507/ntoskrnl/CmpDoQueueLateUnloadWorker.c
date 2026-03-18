/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x1404460B8
 * Callers:
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpDelayDerefKCBWorker @ 0x1404C8B40 (CmpDelayDerefKCBWorker.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140556428 (CmWorkerEngineQueueWorkItem.c)
 */

void __fastcall CmpDoQueueLateUnloadWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  signed __int64 v5; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  signed __int32 v11; // eax

  v4 = *(_QWORD *)(a1 + 2832);
  v5 = a1 + 4128;
  CurrentThread = KeGetCurrentThread();
  v8 = KeAbPreAcquire(v4, 0LL, 0LL, a4);
  v9 = v8;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = CurrentThread;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 19;
  if ( **(_DWORD **)(a1 + 4104) == 2 && !*(_QWORD *)(a1 + 4120) )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 20;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4120), v5, 0LL) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5500), 1u) & 0x7F) + 5504) = 21;
      *(_QWORD *)(v5 + 24) = CmpLateUnloadHiveWorker;
      *(_DWORD *)(v5 + 16) = 1;
      *(_QWORD *)(v5 + 32) = a1;
      CmpReferenceHive(a1);
      CmWorkerEngineQueueWorkItem(v5);
    }
  }
  v10 = *(_QWORD *)(a1 + 2832);
  *(_QWORD *)(v10 + 8) = 0LL;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)v10, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v10, v11);
  KeAbPostRelease(v10);
}
