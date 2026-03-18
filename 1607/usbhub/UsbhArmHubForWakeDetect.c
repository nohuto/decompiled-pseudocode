/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x1C0018E40
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0045E78 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001CFC0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C00227B4 (UsbhDisarmHubForWakeDetect.c)
 */

void __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // r9d
  __int64 v7; // r9
  int v8; // r10d
  NTSTATUS v9; // eax
  int Timeouta; // [rsp+20h] [rbp-18h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+28h] [rbp-10h]

  v5 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 16, 1750554411, 0LL, 0LL);
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START, v6 & Timeouta, v6 & v12);
  while ( 1 )
  {
    Log((__int64)DeviceObject, 16, 1750554488, 0LL, _InterlockedCompareExchange(v5 + 1221, 2, 1));
    if ( v8 == 1 )
      break;
    if ( ((v8 - 2) & 0xFFFFFFFD) == 0 )
      return;
    UsbhDisarmHubForWakeDetect(DeviceObject);
  }
  KeWaitForSingleObject(v5 + 1224, Executive, 0, v7, (PLARGE_INTEGER)(v7 & (unsigned __int64)Timeout));
  Log((__int64)DeviceObject, 16, 1750554480, 0LL, 0LL);
  KeResetEvent((PRKEVENT)v5 + 204);
  v9 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v5[1259], UsbhFdoWakePoComplete_Action, 0LL, 0LL);
  if ( v9 == 259 )
  {
    Log((__int64)DeviceObject, 16, 1749111373, 0LL, 0LL);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1463896944, v9, 0LL);
    v5[1221] = 1;
    KeSetEvent((PRKEVENT)v5 + 204, 0, 0);
  }
}
