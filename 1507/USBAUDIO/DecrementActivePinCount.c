/*
 * XREFs of DecrementActivePinCount @ 0x1C0015AB4
 * Callers:
 *     PinSetDeviceState @ 0x1C0015B30 (PinSetDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecrementActivePinCount(void *a1)
{
  PKSDEVICE Device; // rdi
  PVOID Context; // rbx
  void *v3; // rcx

  Device = KsGetDevice(a1);
  Context = Device->Context;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 171, 0xFFFFFFFF) == 1 )
  {
    v3 = (void *)*((_QWORD *)Context + 62);
    if ( v3 )
      PoClearPowerRequest(v3, PowerRequestSystemRequired);
    *((_QWORD *)Context + 63) = PoRegisterDeviceForIdleDetection(
                                  Device->PhysicalDeviceObject,
                                  *((_DWORD *)Context + 130),
                                  *((_DWORD *)Context + 131),
                                  (DEVICE_POWER_STATE)*((_DWORD *)Context + 129));
  }
  return 0LL;
}
