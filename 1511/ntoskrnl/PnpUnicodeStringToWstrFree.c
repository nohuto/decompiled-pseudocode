/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x14043F59C
 * Callers:
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14043F444 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14053EC08 (PnpSetDeviceInterfacePropertyData.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140545070 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
