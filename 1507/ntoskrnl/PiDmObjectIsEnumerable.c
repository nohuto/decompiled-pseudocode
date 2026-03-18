/*
 * XREFs of PiDmObjectIsEnumerable @ 0x14043BBF4
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  signed __int64 v6; // rax
  unsigned __int64 v7; // rdx
  signed __int64 v8; // rcx
  volatile signed __int64 v9; // rtt
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v11; // ax

  PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2, a2, a3, a4);
  v5 = *(_BYTE *)(BugCheckParameter2 + 32) & 1;
  _m_prefetchw((const void *)BugCheckParameter2);
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = *(_QWORD *)BugCheckParameter2 - 16LL;
  if ( v7 <= 0x10 )
    v8 = 0LL;
  if ( (v6 & 2) != 0
    || (v9 = *(_QWORD *)BugCheckParameter2,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v8, v6)) )
  {
    ExfReleasePushLock((_QWORD *)BugCheckParameter2, v7);
  }
  KeAbPostRelease(BugCheckParameter2);
  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
