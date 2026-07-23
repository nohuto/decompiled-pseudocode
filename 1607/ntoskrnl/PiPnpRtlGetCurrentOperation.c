/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x1404E2A30
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404E2934 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x1404E2AC0 (PiPnpRtlOperationListAcquireSharedLock.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( v3 )
    *a1 = v3;
  else
    return (unsigned int)-1073741275;
  return v2;
}
