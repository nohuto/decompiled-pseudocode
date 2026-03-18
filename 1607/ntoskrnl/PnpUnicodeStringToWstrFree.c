/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x140500F80
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F2484 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140500E30 (PiControlGetDeviceInterfaceEnabled.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405702EC (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140576614 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
