/*
 * XREFs of PopFxIdleWorker @ 0x1400BF61C
 * Callers:
 *     PopFxIdleComponent @ 0x1400BF9A0 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x1401124F8 (PopFxComponentWork.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     PopFxIdleWorkerTail @ 0x1400BF6F0 (PopFxIdleWorkerTail.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxIdleWorker(_QWORD *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rbx
  KIRQL v5; // r14
  char v6; // di
  void (__fastcall *v7)(_QWORD, _QWORD); // rax

  v4 = *(_QWORD *)(BugCheckParameter2[78] + 8LL * a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
    return;
  }
  KeResetEvent((PRKEVENT)(v4 + 104));
  *(_DWORD *)(v4 + 136) = 2;
  v6 = 0;
  v7 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[15];
  if ( v7 )
  {
    v7(BugCheckParameter2[21], a2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
      goto LABEL_5;
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
  }
  v6 = 1;
LABEL_5:
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
  if ( v6 )
    PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
}
