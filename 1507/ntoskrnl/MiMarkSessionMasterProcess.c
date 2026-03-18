/*
 * XREFs of MiMarkSessionMasterProcess @ 0x140154808
 * Callers:
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiSessionAddProcess @ 0x14055D338 (MiSessionAddProcess.c)
 */

void __fastcall MiMarkSessionMasterProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  MiSessionAddProcess();
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_BYTE *)(a1 + 1489) |= 1u;
  v4 = a2 + 16;
  v5 = (_QWORD *)(a1 + 832);
  v6 = *(_QWORD **)(v4 + 8);
  *v5 = v4;
  v5[1] = v6;
  if ( *v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
