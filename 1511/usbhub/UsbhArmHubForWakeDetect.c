/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1C0010858
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0045BF8 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C000F030 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0025B78 (UsbhDisarmHubForWakeDetect.c)
 */

LONG __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  int v4; // r10d
  NTSTATUS v5; // eax
  LONG result; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  v2 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1750554411, 0, 0LL);
  UsbhEtwLogHubIrpEvent((__int64)DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START);
  while ( 1 )
  {
    Log(
      (_DWORD)DeviceObject,
      16,
      1750554488,
      0,
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4884), 2, 1));
    if ( v4 == 1 )
      break;
    result = v4 - 2;
    if ( ((v4 - 2) & 0xFFFFFFFD) == 0 )
      return result;
    UsbhDisarmHubForWakeDetect(DeviceObject);
  }
  KeWaitForSingleObject((PVOID)(v2 + 4896), Executive, 0, v3, (PLARGE_INTEGER)(v3 & (unsigned __int64)Timeout));
  Log((_DWORD)DeviceObject, 16, 1750554480, 0, 0LL);
  KeResetEvent((PRKEVENT)(v2 + 4896));
  v5 = PoRequestPowerIrp(DeviceObject, 0, *(POWER_STATE *)(v2 + 5036), UsbhFdoWakePoComplete_Action, 0LL, 0LL);
  if ( v5 == 259 )
    return Log((_DWORD)DeviceObject, 16, 1749111373, 0, 0LL);
  Log((_DWORD)DeviceObject, 16, 1463896944, v5, 0LL);
  *(_DWORD *)(v2 + 4884) = 1;
  return KeSetEvent((PRKEVENT)(v2 + 4896), 0, 0);
}
