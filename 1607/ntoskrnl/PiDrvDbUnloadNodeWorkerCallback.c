/*
 * XREFs of PiDrvDbUnloadNodeWorkerCallback @ 0x1403F1F94
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400084E8 (PnpDiagnosticTraceObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PiDrvDbUnloadNodeReset @ 0x1400B4F18 (PiDrvDbUnloadNodeReset.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  PiDrvDbUnloadNodeReset(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( *(_BYTE *)(a1 + 488) )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Start, (unsigned __int16 *)(a1 + 16));
    v3 = *(void **)(a1 + 72);
    if ( v3 )
    {
      ZwClose(v3);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    *(_WORD *)(a1 + 488) = 0;
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseUnload_Pend, (unsigned __int16 *)(a1 + 16));
    *(_QWORD *)(a1 + 440) = 0LL;
    *(_QWORD *)(a1 + 456) = PiDrvDbUnloadNodeWaitWorkerCallback;
    *(_QWORD *)(a1 + 464) = a1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 440), DelayedWorkQueue);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
}
