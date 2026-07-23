/*
 * XREFs of MmQueryCommitReleaseState @ 0x1400AEEB0
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiAttachThreadDone @ 0x140108E2C (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140108EA0 (MiPrepareAttachThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MmQueryCommitReleaseState(
        ULONG_PTR BugCheckParameter1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  int v6; // edi
  LONG *SharedVm; // r14
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rbp
  int v12; // ebx
  LONG *v13; // rbx
  LONG *v14; // rax
  KIRQL v15; // dl
  _QWORD *result; // rax
  int v17; // [rsp+20h] [rbp-C8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v22[48]; // [rsp+60h] [rbp-88h] BYREF

  v5 = BugCheckParameter1 + 1280;
  v6 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v17 = *(_DWORD *)(v5 + 184);
  v9 = 0LL;
  v10 = 0LL;
  v11 = *((_QWORD *)SharedVm + 1);
  if ( (HIBYTE(v17) & 0xC0) == 0x80 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    v12 = MiPrepareAttachThread(BugCheckParameter1, v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v12 )
    {
      KiStackAttachProcess(BugCheckParameter1);
      v13 = MiGetSharedVm(v5);
      ExAcquireSpinLockShared(v13);
      if ( v13[1] )
        _InterlockedExchange(v13 + 1, 0);
      v17 = *(_DWORD *)(v5 + 184);
      if ( (HIBYTE(v17) & 0xC0) == 0x80 )
      {
        v10 = *((_QWORD *)SharedVm + 2);
        v9 = *(_QWORD *)(*((_QWORD *)SharedVm + 4) + 32LL);
      }
      v14 = MiGetSharedVm(v5);
      ExReleaseSpinLockShared(v14, v15);
      KiUnstackDetachProcess(v22, 1LL);
      MiAttachThreadDone(v5);
    }
  }
  if ( (unsigned __int8)(HIBYTE(v17) >> 6) < 2u )
    v11 = 0LL;
  LOBYTE(v6) = HIBYTE(v17) >> 6 != 0;
  *a2 = v6;
  *a3 = v11;
  *a4 = v9;
  result = a5;
  *a5 = v10;
  return result;
}
