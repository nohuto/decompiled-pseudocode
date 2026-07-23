/*
 * XREFs of MiMarkSessionMasterProcess @ 0x14012A8E0
 * Callers:
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSessionAddProcess @ 0x1404D36DC (MiSessionAddProcess.c)
 */

void __fastcall MiMarkSessionMasterProcess(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp+8h]

  MiSessionAddProcess();
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v4 = a2 + 16;
  v8 = *(_DWORD *)(a1 + 1464);
  BYTE1(v8) |= 1u;
  *(_WORD *)(a1 + 1464) = v8;
  v5 = (_QWORD *)(a1 + 832);
  v6 = *(_QWORD **)(v4 + 8);
  if ( *v6 != v4 )
    __fastfail(3u);
  *v5 = v4;
  v5[1] = v6;
  *v6 = v5;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
