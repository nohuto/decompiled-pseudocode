/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0131390
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00022B0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0078A80 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0149E34 (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C0166F50 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  DXGADAPTER *v8; // [rsp+38h] [rbp+10h]

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
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v6);
    v3 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(v8);
  DXGADAPTER::ReleaseCoreSync((__int64)v8, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, v8);
  *((_QWORD *)Current + 19) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
