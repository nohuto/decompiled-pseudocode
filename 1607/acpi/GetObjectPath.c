/*
 * XREFs of GetObjectPath @ 0x1C0005860
 * Callers:
 *     AMLIEvalNameSpaceObject @ 0x1C0001210 (AMLIEvalNameSpaceObject.c)
 *     SyncEvalObject @ 0x1C0001300 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     ProcessEvalObj @ 0x1C0003390 (ProcessEvalObj.c)
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 *     ReadFieldObj @ 0x1C001C410 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C001DC28 (GetFieldUnitRegionObj.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     AMLIFindNameSpaceObject @ 0x1C0020F88 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0059E44 (Simulator_NotifyNamespaceCollision.c)
 *     DebugNotify @ 0x1C005AD30 (DebugNotify.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 *     RunMethodCallBack @ 0x1C005B570 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 *     FreeContext @ 0x1C005DD2C (FreeContext.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C005E690 (ResetSignal.c)
 *     Wait @ 0x1C0060C40 (Wait.c)
 * Callees:
 *     GetObjectPathNoLock @ 0x1C001B9F0 (GetObjectPathNoLock.c)
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
