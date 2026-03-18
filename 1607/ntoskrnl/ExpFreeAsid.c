/*
 * XREFs of ExpFreeAsid @ 0x14022F130
 * Callers:
 *     ExFreeSvmAsid @ 0x140075598 (ExFreeSvmAsid.c)
 *     ExpAssignPasid @ 0x1406B69D0 (ExpAssignPasid.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rdi
  _QWORD *v3; // rax
  int v5; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_1402FB2B8, &LockHandle);
  v3 = (char *)qword_1402FB2B0 + 16 * a1;
  if ( v3[1]-- == 1LL )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_1402FB2A8;
  }
  else
  {
    v3[1] |= 0x8000000000000000uLL;
    v5 = 0;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 == 1 )
    ObfDereferenceObjectWithTag(Process, 0x746C6644u);
}
