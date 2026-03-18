/*
 * XREFs of ExpSvmDereferenceAsid @ 0x140265420
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  _QWORD *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140324FD8, &LockHandle);
  v2 = (char *)qword_140324FD0 + 16 * a1;
  if ( --v2[1] == 0x8000000000000000uLL )
  {
    *v2 = 0LL;
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    --dword_140324FC8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
