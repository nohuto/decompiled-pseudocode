/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400B12EC
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400B1388 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x140159D00 (ZwWaitForSingleObject.c)
 */

__int64 __fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
}
