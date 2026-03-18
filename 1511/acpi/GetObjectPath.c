/*
 * XREFs of GetObjectPath @ 0x1C00057B4
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     ProcessEvalObj @ 0x1C00041B0 (ProcessEvalObj.c)
 *     CreateNativeNameSpaceObject @ 0x1C00052C0 (CreateNativeNameSpaceObject.c)
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018D3C (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0042778 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0043660 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0043910 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C0043F10 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0045C44 (DumpObject.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0046E90 (ResetSignal.c)
 *     Wait @ 0x1C0049180 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0015640 (GetObjectPathNoLock.c)
 */

__int64 __fastcall GetObjectPath(__int64 a1)
{
  KIRQL v2; // bl
  __int64 ObjectPathNoLock; // rdi

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  ObjectPathNoLock = GetObjectPathNoLock(a1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return ObjectPathNoLock;
}
