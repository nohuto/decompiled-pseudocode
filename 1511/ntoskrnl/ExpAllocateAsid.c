/*
 * XREFs of ExpAllocateAsid @ 0x140214D90
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_1402D5F38, &LockHandle);
  v3 = dword_1402D5F24;
  while ( 1 )
  {
    v5 = dword_1402D5F28;
    v6 = v3;
    if ( v3 != dword_1402D5F28 )
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
    KeAcquireInStackQueuedSpinLock(&qword_1402D5F38, &LockHandle);
    v3 = dword_1402D5F24;
    v4 = PoolWithTag;
    if ( v6 == (_DWORD)dword_1402D5F24 )
    {
      v4 = qword_1402D5F30;
      if ( qword_1402D5F30 )
        memmove(PoolWithTag, qword_1402D5F30, 16LL * v6);
      memset(&PoolWithTag[16 * v6], 0, 16LL * (v1 - v6));
      v3 = v1;
      qword_1402D5F30 = PoolWithTag;
      LODWORD(dword_1402D5F24) = v1;
    }
    if ( v4 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExFreePoolWithTag(v4, 0);
      goto LABEL_14;
    }
  }
  v7 = (_KPROCESS **)qword_1402D5F30;
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
    v5 = dword_1402D5F28;
  }
LABEL_23:
  dword_1402D5F28 = v5 + 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)(v8 + 1);
}
