/*
 * XREFs of PiPnpRtlGetCurrentOperation @ 0x14043AB20
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043AA00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiPnpRtlOperationListAcquireSharedLock @ 0x14043ABD4 (PiPnpRtlOperationListAcquireSharedLock.c)
 */

__int64 __fastcall PiPnpRtlGetCurrentOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  __int64 *v5; // rax
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

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
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v3 )
    *a1 = v3;
  else
    return (unsigned int)-1073741275;
  return v2;
}
