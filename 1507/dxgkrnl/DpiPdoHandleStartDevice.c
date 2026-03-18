/*
 * XREFs of DpiPdoHandleStartDevice @ 0x1C00DF3A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStartDevice(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rbx
  POWER_STATE v3; // r8d
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 451) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v3.SystemState = *(SYSTEM_POWER_STATE *)(*((_QWORD *)DeviceExtension + 113) + 52LL);
  *((POWER_STATE *)DeviceExtension + 62) = v3;
  *((_DWORD *)DeviceExtension + 61) = 1;
  PoSetPowerState(DeviceObject, DevicePowerState, v3);
  v4 = *((_BYTE *)DeviceExtension + 451) == 0;
  *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( !v4 )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  v9 = WdLogNewEntry5_WdEvent(v6, v5, v7, v8);
  *(_QWORD *)(v9 + 24) = DpiPdoHandleStartDevice;
  *(_QWORD *)(v9 + 32) = DeviceObject;
  WdLogEvent5_WdEvent(v9);
  return 0LL;
}
