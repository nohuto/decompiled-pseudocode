/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0155270
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0008810 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C009FBB8 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01733B4 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0193258 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rcx
  DXGPROCESS *v10; // rdi
  __int64 v11; // rbx
  struct DXGADAPTER *v12; // [rsp+38h] [rbp+10h]

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
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  v10 = (DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v4 = WdLogNewEntry5_WdError(v9);
    v3 = -1073741811LL;
    goto LABEL_3;
  }
  v11 = ProcessDxgProcess + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v10, v12);
  DXGADAPTER::AcquireCoreSync((__int64)v12, 1);
  DXGADAPTER::AcquireDdiSync((__int64)v12, 1);
  return 0LL;
}
