/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x140438E10
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E3A00 (IopBuildGlobalSymbolicLinkString.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405B36D0 (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1405C43F4 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14067EBE8 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
