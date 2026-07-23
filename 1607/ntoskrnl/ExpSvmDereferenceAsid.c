/*
 * XREFs of ExpSvmDereferenceAsid @ 0x14022F1BC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpSvmDereferenceAsid(unsigned int a1)
{
  _QWORD *v2; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_1402FB2B8, &LockHandle);
  v2 = (char *)qword_1402FB2B0 + 16 * a1;
  if ( --v2[1] == 0x8000000000000000uLL )
  {
    *v2 = 0LL;
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    --dword_1402FB2A8;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
