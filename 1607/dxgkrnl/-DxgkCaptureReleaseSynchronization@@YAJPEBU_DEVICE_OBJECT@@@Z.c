/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0155330
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00087A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FB04 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0173B00 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0193258 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGPROCESS *ProcessDxgProcess; // rdi
  DXGADAPTER *v10; // [rsp+38h] [rbp+10h]

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v3 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v4 = WdLogNewEntry5_WdError(v2);
LABEL_3:
    *(_QWORD *)(v4 + 24) = v3;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v3;
  }
  CurrentProcess = PsGetCurrentProcess(v2);
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v4 = WdLogNewEntry5_WdError(v8);
    v3 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(v10);
  DXGADAPTER::ReleaseCoreSync((__int64)v10, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(ProcessDxgProcess, v10);
  *((_QWORD *)ProcessDxgProcess + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)ProcessDxgProcess + 136, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
