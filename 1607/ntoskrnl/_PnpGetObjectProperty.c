/*
 * XREFs of _PnpGetObjectProperty @ 0x1404FE7B0
 * Callers:
 *     PiRebalanceOptOut @ 0x1401CE480 (PiRebalanceOptOut.c)
 *     PiUEventDeviceNeedsInstall @ 0x1403EE8F4 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1403EF550 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x1403F09EC (PiUEventCacheObjectProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpAssignResourcesToDevices @ 0x1404C8194 (PnpAssignResourcesToDevices.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404CF88C (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1404CFAC4 (_CmGetDeviceParent.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404DF7C0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x1404DF8F8 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1404DF98C (PiDcHandleInterfaceEvent.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PnpGetDevicePropertyData @ 0x1404F7610 (PnpGetDevicePropertyData.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x1404F9E9C (PiPnpRtlIsDeviceValidForSession.c)
 *     PnpGetObjectProperty @ 0x1404FBC64 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404FC99C (PiCMGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404FE360 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404FE930 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404FECB4 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140500CEC (PiPnpRtlInterfaceFilterCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x140501BE4 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140503538 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140506388 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     PiDmListInitEnumCallback @ 0x14054D120 (PiDmListInitEnumCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14062E2D4 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EE40 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062EFB8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1406390C4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x140648A14 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x14064C720 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x14064CCF4 (PiAuditDeviceStart.c)
 *     _CmMatchLastKnownParentCallback @ 0x1406D9580 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1406DA3D8 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406DD98C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1406DE334 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x1406E59D0 (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x1404FF58C (_PnpGetObjectPropertyWorker.c)
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
