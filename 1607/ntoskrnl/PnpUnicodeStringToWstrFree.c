/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1404E3F10
 * Callers:
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F1348 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1404E3DC0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14050EA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14050EB84 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiDeviceRegistration @ 0x14050F534 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x140540DA8 (IoRegisterDeviceInterface.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14057082C (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140576B54 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14062B704 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E388 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
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
