/*
 * XREFs of ?Invoke@FxPowerPolicyStateCallback@@QEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA@@@Z @ 0x1C0098588
 * Callers:
 *     ?NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0023940 (-NotPowerPolicyOwnerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0023CE0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPowerPolicyStateCallback::Invoke(
        FxPowerPolicyStateCallback *this,
        _WDF_DEVICE_POWER_POLICY_STATE State,
        _WDF_STATE_NOTIFICATION_TYPE Type,
        WDFDEVICE__ *Device,
        const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *NotificationData)
{
  unsigned __int32 v5; // edx
  void (__fastcall *v6)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *); // rax

  v5 = State & 0xFFFF7FFF;
  v6 = (void (__fastcall *)(WDFDEVICE__ *, const _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA *))*((_QWORD *)&this[-8]
                                                                                               + 2 * v5
                                                                                               - 111);
  if ( v6 )
  {
    if ( (Type & *((_DWORD *)&this[-8] + 4 * v5 - 224)) != 0 )
      v6(Device, NotificationData);
  }
}
