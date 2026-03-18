/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01312E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002310 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078B3C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149948 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0166F50 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  DXGPROCESS *v8; // rdi
  char *v9; // rbx
  struct DXGADAPTER *v10; // [rsp+38h] [rbp+10h]

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
  Current = DXGPROCESS::GetCurrent(v2);
  v8 = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v7);
    v3 = -1073741811LL;
    goto LABEL_3;
  }
  v9 = (char *)Current + 144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9, 0LL);
  *((_QWORD *)v9 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v8, v10);
  DXGADAPTER::AcquireCoreSync((__int64)v10, 1);
  DXGADAPTER::AcquireDdiSync((__int64)v10, 1);
  return 0LL;
}
