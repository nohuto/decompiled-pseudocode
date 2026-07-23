/*
 * XREFs of ExpAllocateAsid @ 0x14022EDCC
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r14
  unsigned int v1; // edi
  char *PoolWithTag; // rbp
  unsigned int v3; // ecx
  void *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  _KPROCESS **v7; // rdx
  int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
LABEL_14:
  KeAcquireInStackQueuedSpinLock(&qword_1402FB2B8, &LockHandle);
  v3 = dword_1402FB2A4;
  while ( 1 )
  {
    v5 = dword_1402FB2A8;
    v6 = v3;
    if ( v3 != dword_1402FB2A8 )
      break;
    if ( v3 == ExpSvmAgents )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v1 = v6 + 8;
    if ( v6 + 8 >= v6 )
    {
      if ( v1 > ExpSvmAgents )
        v1 = ExpSvmAgents;
    }
    else
    {
      v1 = ExpSvmAgents;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x73417845u);
    if ( !PoolWithTag )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_1402FB2B8, &LockHandle);
    v3 = dword_1402FB2A4;
    v4 = PoolWithTag;
    if ( v6 == (_DWORD)dword_1402FB2A4 )
    {
      v4 = qword_1402FB2B0;
      if ( qword_1402FB2B0 )
        memmove(PoolWithTag, qword_1402FB2B0, 16LL * v6);
      memset(&PoolWithTag[16 * v6], 0, 16LL * (v1 - v6));
      v3 = v1;
      qword_1402FB2B0 = PoolWithTag;
      LODWORD(dword_1402FB2A4) = v1;
    }
    if ( v4 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(v4, 0);
      goto LABEL_14;
    }
  }
  v7 = (_KPROCESS **)qword_1402FB2B0;
  v8 = 0;
  if ( v3 )
  {
    while ( *v7 )
    {
      v7 += 2;
      if ( ++v8 >= v3 )
        goto LABEL_23;
    }
    v7[1] = (_KPROCESS *)1;
    *v7 = Process;
    v5 = dword_1402FB2A8;
  }
LABEL_23:
  dword_1402FB2A8 = v5 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)(v8 + 1);
}
