/*
 * XREFs of MiMarkSessionMasterProcess @ 0x14011F6A4
 * Callers:
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSessionAddProcess @ 0x1404C6998 (MiSessionAddProcess.c)
 */

void __fastcall MiMarkSessionMasterProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  MiSessionAddProcess();
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_BYTE *)(a1 + 1497) |= 1u;
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
