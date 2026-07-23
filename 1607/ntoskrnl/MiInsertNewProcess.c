/*
 * XREFs of MiInsertNewProcess @ 0x1400FF514
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14057D568 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MiInsertNewProcess(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v4 = (_QWORD *)qword_1403269C0;
  v5 = a1 + 194;
  if ( *(__int64 **)qword_1403269C0 != &qword_1403269B8 )
    __fastfail(3u);
  *v5 = &qword_1403269B8;
  a1[195] = v4;
  *v4 = v5;
  qword_1403269C0 = (__int64)(a1 + 194);
  if ( a2 )
  {
    v6 = *(_QWORD **)(a2 + 24);
    v7 = a1 + 104;
    if ( *v6 != a2 + 16 )
      __fastfail(3u);
    *v7 = a2 + 16;
    a1[105] = v6;
    *v6 = v7;
    *(_QWORD *)(a2 + 24) = v7;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
