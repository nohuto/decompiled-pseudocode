/*
 * XREFs of MiInsertNewProcess @ 0x14006AFE0
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x1405BFD3C (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  __int64 **v4; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (__int64 **)qword_14034EB50;
  a1[192] = qword_14034EB50;
  a1[191] = &qword_14034EB48;
  if ( *v4 != &qword_14034EB48 )
    __fastfail(3u);
  *v4 = a1 + 191;
  qword_14034EB50 = (__int64)(a1 + 191);
  if ( a2 )
  {
    v5 = *(_QWORD **)(a2 + 24);
    v6 = a1 + 104;
    a1[104] = a2 + 16;
    a1[105] = v5;
    if ( *v5 != a2 + 16 )
      __fastfail(3u);
    *v5 = v6;
    *(_QWORD *)(a2 + 24) = v6;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
