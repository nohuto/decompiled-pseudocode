/*
 * XREFs of ExpSvmDereferenceAsid @ 0x14021517C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  _QWORD *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402D5F38, &LockHandle);
  v2 = (char *)qword_1402D5F30 + 16 * a1;
  if ( --v2[1] == 0x8000000000000000uLL )
  {
    *v2 = 0LL;
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    --dword_1402D5F28;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
