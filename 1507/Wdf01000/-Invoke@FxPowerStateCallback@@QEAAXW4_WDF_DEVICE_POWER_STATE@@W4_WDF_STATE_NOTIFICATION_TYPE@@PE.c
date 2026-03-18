/*
 * XREFs of ?Invoke@FxPowerStateCallback@@QEAAXW4_WDF_DEVICE_POWER_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_NOTIFICATION_DATA@@@Z @ 0x1C009B6B0
 * Callers:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0019960 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerStateCallback::Invoke(
        FxPowerStateCallback *this,
        _WDF_DEVICE_POWER_STATE State,
        _WDF_STATE_NOTIFICATION_TYPE Type,
        WDFDEVICE__ *Device,
        const _WDF_DEVICE_POWER_NOTIFICATION_DATA *NotificationData)
{
  unsigned __int32 v5; // edx
  void (__fastcall *v6)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *); // rax

  v5 = State & 0xFFFF7FFF;
  v6 = (void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_NOTIFICATION_DATA *))*((_QWORD *)&this[-8]
                                                                                        + 2 * v5
                                                                                        - 47);
  if ( v6 )
  {
    if ( (Type & *((_DWORD *)&this[-8] + 4 * v5 - 96)) != 0 )
      v6(Device, NotificationData);
  }
}
