/*
 * XREFs of ExpFreeAsid @ 0x1402651C0
 * Callers:
 *     ExFreeSvmAsid @ 0x14012A494 (ExFreeSvmAsid.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpFreeAsid(unsigned int a1)
{
  _KPROCESS *Process; // rdi
  _QWORD *v3; // rax
  int v5; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  KeAcquireInStackQueuedSpinLock(&qword_140324FD8, &LockHandle);
  v3 = (char *)qword_140324FD0 + 16 * a1;
  if ( v3[1]-- == 1LL )
  {
    *v3 = 0LL;
    v5 = 1;
    --dword_140324FC8;
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
