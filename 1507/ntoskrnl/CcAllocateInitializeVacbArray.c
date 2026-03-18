/*
 * XREFs of CcAllocateInitializeVacbArray @ 0x140166A8C
 * Callers:
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcInitializeVacbs @ 0x1407DB71C (CcInitializeVacbs.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *CcAllocateInitializeVacbArray()
{
  KIRQL v0; // al
  char *PoolWithTag; // rax
  char *v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  KIRQL v6; // al

  v0 = KeAcquireQueuedSpinLock(4uLL);
  if ( (unsigned int)CcVacbArraysAllocated >= 0x500 )
  {
    KeReleaseQueuedSpinLock(4uLL, v0);
    return 0LL;
  }
  else
  {
    ++CcVacbArraysAllocated;
    KeReleaseQueuedSpinLock(4uLL, v0);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x61566343u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x20000uLL);
      v3 = v2 + 48;
      v4 = 3276LL;
      do
      {
        *v3 = v2;
        v3 += 5;
        --v4;
      }
      while ( v4 );
    }
    else
    {
      v6 = KeAcquireQueuedSpinLock(4uLL);
      --CcVacbArraysAllocated;
      KeReleaseQueuedSpinLock(4uLL, v6);
    }
    return v2;
  }
}
