/*
 * XREFs of DxgkMiracastQueryMiracastStatus @ 0x1C0198950
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C014F270 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002BF28 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01973F8 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastStatus(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 DeviceContextFromName; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 result; // rax

  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1, 0);
  v7 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    *a2 = *(_DWORD *)(v7 + 416);
    *a3 = *(_DWORD *)(v7 + 424);
    *(_QWORD *)(v7 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v7 + 32);
    DpiMiracastReleaseMiracastDeviceContext((int *)v7, v7);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = -2147483642LL;
    WdLogEvent5_WdError(v8);
    result = 3221226021LL;
    *a3 = -2147483642;
  }
  return result;
}
