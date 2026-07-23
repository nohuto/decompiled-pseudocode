/*
 * XREFs of ExpSvmReferenceAsid @ 0x14022F394
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpSvmReferenceAsid(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v2; // r9
  ULONG_PTR *v3; // rdx
  ULONG_PTR v4; // rbx
  __int64 v5; // rax
  ULONG_PTR BugCheckParameter4; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (unsigned int)BugCheckParameter1;
  KeAcquireInStackQueuedSpinLock(&qword_1402FB2B8, &LockHandle);
  v2 = 0LL;
  v3 = (ULONG_PTR *)((char *)qword_1402FB2B0 + 16 * (unsigned int)v1);
  if ( (unsigned int)v1 >= (unsigned int)dword_1402FB2A4 )
  {
    BugCheckParameter4 = 0LL;
LABEL_7:
    if ( (unsigned int)v1 < (unsigned int)dword_1402FB2A4 )
      v2 = *v3;
    KeBugCheckEx(0x158u, v1, (unsigned int)dword_1402FB2A4, v2, BugCheckParameter4);
  }
  v4 = *v3;
  if ( !*v3 || (v5 = v3[1], v5 < 0) )
  {
    BugCheckParameter4 = v3[1];
    goto LABEL_7;
  }
  v3[1] = v5 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return *(_QWORD *)(v4 + 1752);
}
