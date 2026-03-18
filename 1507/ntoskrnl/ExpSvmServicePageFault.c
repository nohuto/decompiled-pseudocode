/*
 * XREFs of ExpSvmServicePageFault @ 0x140265694
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  ULONG_PTR v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v13[48]; // [rsp+38h] [rbp-50h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140324FD8, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_140324FD0 + 2 * a3);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0, (__int64)v13);
    v8 = 1;
  }
  if ( (a1 & 8) != 0 )
  {
    v9 = -1073741819;
  }
  else
  {
    v10 = 0LL;
    if ( (a1 & 2) != 0 )
      v10 = 2LL;
    if ( (a1 & 4) != 0 )
      v10 |= 0x10uLL;
    v9 = MmAccessFault(v10, a2, 1u, 0LL);
  }
  if ( v8 )
    KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
  return v9;
}
