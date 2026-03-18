/*
 * XREFs of ExpSvmServicePageFault @ 0x140215530
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall ExpSvmServicePageFault(char a1, signed __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // rdi
  _KPROCESS *v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  ULONG_PTR v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v13; // [rsp+38h] [rbp-50h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_1402D5F38, &LockHandle);
  v7 = (_KPROCESS *)*((_QWORD *)qword_1402D5F30 + 2 * a3);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v8 = 0;
  if ( Process != v7 )
  {
    KiStackAttachProcess(v7, 0LL, (__int64)&v13);
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
    v9 = MmAccessFault(v10, a2, 1, 0LL);
  }
  if ( v8 )
    KiUnstackDetachProcess(&v13, 0LL);
  return v9;
}
