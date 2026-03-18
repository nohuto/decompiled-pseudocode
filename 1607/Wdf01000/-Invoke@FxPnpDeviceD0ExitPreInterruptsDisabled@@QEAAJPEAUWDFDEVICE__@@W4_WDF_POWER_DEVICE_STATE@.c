/*
 * XREFs of ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C0064340
 * Callers:
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094F60 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ @ 0x1C009515C (-PowerGotoDxIoStoppedNP@FxPkgPnp@@IEAAEXZ.c)
 *     ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095440 (-PowerInitialDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095C40 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095D00 (-PowerWakingDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095DA0 (-PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

int (__fastcall *__fastcall FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
        FxPnpDeviceD0ExitPreInterruptsDisabled *this,
        WDFDEVICE__ *Device,
        unsigned int TargetState))(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE)
{
  int (__fastcall *result)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax

  result = this->m_Method;
  if ( this->m_Method )
    return (int (__fastcall *)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE))((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))result)(
                                                                         Device,
                                                                         TargetState);
  return result;
}
