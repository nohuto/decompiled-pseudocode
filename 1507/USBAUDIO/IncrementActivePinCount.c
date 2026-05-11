/*
 * XREFs of IncrementActivePinCount @ 0x1C00159DC
 * Callers:
 *     PinSetDeviceState @ 0x1C0015B30 (PinSetDeviceState.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C0014720 (DeviceRequestPowerUp.c)
 */

__int64 __fastcall IncrementActivePinCount(PKSPIN Pin)
{
  NTSTATUS v2; // ebx
  PKSDEVICE Device; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  PKSDEVICE v7; // rsi
  char *Context; // rdi
  PKSFILTER ParentFilter; // rbx
  void *v10; // rcx

  v2 = 0;
  Device = KsGetDevice(Pin);
  v7 = Device;
  Context = (char *)Device->Context;
  if ( *((_DWORD *)Context + 128) != 1 )
  {
    v2 = DeviceRequestPowerUp((PIRP *)Device, v4, v5, v6);
    if ( v2 < 0 )
      return (unsigned int)v2;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsReleaseControl(ParentFilter);
    KeWaitForSingleObject(Context + 528, Executive, 0, 0, 0LL);
    KsAcquireControl(ParentFilter);
    v2 = 0;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 171) == 1 )
  {
    v10 = (void *)*((_QWORD *)Context + 62);
    if ( v10 )
      PoSetPowerRequest(v10, PowerRequestSystemRequired);
    *((_QWORD *)Context + 63) = PoRegisterDeviceForIdleDetection(
                                  v7->PhysicalDeviceObject,
                                  0,
                                  0,
                                  (DEVICE_POWER_STATE)*((_DWORD *)Context + 129));
  }
  return (unsigned int)v2;
}
