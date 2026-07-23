/*
 * XREFs of _PnpGetObjectProperty @ 0x1404E1740
 * Callers:
 *     PiRebalanceOptOut @ 0x1401CE2CC (PiRebalanceOptOut.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14048A27C (PiUEventCacheObjectProperties.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404C2DC4 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x1404C2EFC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1404C2F90 (PiDcHandleInterfaceEvent.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404CBA94 (PiUEventDeviceNeedsInstall.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     PnpGetDevicePropertyData @ 0x1404DA59C (PnpGetDevicePropertyData.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1404DCE28 (PiPnpRtlIsDeviceValidForSession.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404DF92C (PiCMGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404E12F0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404E1C44 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1404E3C7C (PiPnpRtlInterfaceFilterCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404E9318 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PnpAssignResourcesToDevices @ 0x14050B090 (PnpAssignResourcesToDevices.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14050B84C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14050C958 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x14050CB90 (_CmGetDeviceParent.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     PiDmListInitEnumCallback @ 0x14054D4C0 (PiDmListInitEnumCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E388 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140639178 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D6D0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648AF8 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14064CDD8 (PiAuditDeviceStart.c)
 *     _CmMatchLastKnownParentCallback @ 0x1406D96B8 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1406DA510 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406DDAC4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1406DE46C (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1406E5B08 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x1404E251C (_PnpGetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v16; // eax
  __int64 result; // rax
  unsigned int v18; // ebx
  int v19; // eax
  _QWORD v20[10]; // [rsp+60h] [rbp-41h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x48uLL);
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 312);
  v20[3] = a5;
  v20[4] = a6;
  v20[5] = a7;
  v20[6] = a8;
  LODWORD(v20[7]) = a9;
  v20[8] = a10;
  LODWORD(v20[9]) = a11;
  v20[2] = a4;
  if ( v15 )
  {
    v16 = v15(a1, a2, a3, 8LL, 1, v20);
    if ( v16 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v16 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v16 )
        return 3221225701LL;
    }
  }
  result = PnpGetObjectPropertyWorker(a1, a2, a3, v20[2], v20[3], v20[4], v20[5], v20[6], v20[7], v20[8], v20[9]);
  v18 = result;
  if ( !v15 )
    return result;
  LODWORD(v20[0]) = result;
  v19 = v15(a1, a2, a3, 8LL, 2, v20);
  if ( v19 != -1073741822 )
  {
    if ( v19 != -1073741536 )
    {
      if ( !v19 )
        return v18;
      return 3221225701LL;
    }
    return LODWORD(v20[0]);
  }
  return v18;
}
