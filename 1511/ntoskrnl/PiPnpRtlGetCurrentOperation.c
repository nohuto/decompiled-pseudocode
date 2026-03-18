/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x14043DE60
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043DD68 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043DEF0 (PiPnpRtlOperationListAcquireSharedLock.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  __int64 *v5; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = 0LL;
  *a1 = 0LL;
  PiPnpRtlOperationListAcquireSharedLock();
  v5 = (__int64 *)PiPnpRtlActiveOperations;
  while ( v5 != &PiPnpRtlActiveOperations )
  {
    v3 = v5;
    if ( (struct _KTHREAD *)v5[2] == CurrentThread )
      break;
    v5 = (__int64 *)*v5;
    v3 = 0LL;
  }
  ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v3 )
    *a1 = v3;
  else
    return (unsigned int)-1073741275;
  return v2;
}
