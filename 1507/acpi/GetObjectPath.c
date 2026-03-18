/*
 * XREFs of GetObjectPath @ 0x1C0005854
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ProcessEvalObj @ 0x1C0004210 (ProcessEvalObj.c)
 *     CreateNativeNameSpaceObject @ 0x1C000535C (CreateNativeNameSpaceObject.c)
 *     Release @ 0x1C00055C0 (Release.c)
 *     Acquire @ 0x1C0005690 (Acquire.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C001532C (GetFieldUnitRegionObj.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018E08 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0042D58 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C0043C40 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C00444F0 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0047580 (ResetSignal.c)
 *     Wait @ 0x1C0049870 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C0014710 (GetObjectPathNoLock.c)
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
