/*
 * XREFs of _PnpGetObjectProperty @ 0x14043CBB0
 * Callers:
 *     PiRebalanceOptOut @ 0x1401BFCEC (PiRebalanceOptOut.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PiCMGetObjectProperty @ 0x14043A998 (PiCMGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x14043D0A0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043EC40 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x14043F954 (PiDqPnPGetObjectProperty.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x140440644 (PiPnpRtlIsDeviceValidForSession.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140441EDC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PnpGetDevicePropertyData @ 0x140459534 (PnpGetDevicePropertyData.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14045A014 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14045C2F8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiDcHandleDeviceEvent @ 0x140496FCC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140497168 (PiDcHandleInterfaceEvent.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PiUEventCacheObjectProperties @ 0x1404E15C4 (PiUEventCacheObjectProperties.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1404E1A5C (PiUEventProcessBroadcastNotifications.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PiUEventDeviceNeedsInstall @ 0x1404E6028 (PiUEventDeviceNeedsInstall.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404E61F8 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     PnpAssignResourcesToDevices @ 0x1404F2504 (PnpAssignResourcesToDevices.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14050DFF4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDcContainerRequiresConfiguration @ 0x14050E088 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140513B78 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x14051B57C (PiDmListInitEnumCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140603F98 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140604FE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMUnregisterDeviceInterface @ 0x14061426C (PiCMUnregisterDeviceInterface.c)
 *     PiAuditDeviceOperation @ 0x140617A00 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x140617FD4 (PiAuditDeviceStart.c)
 *     _CmMatchLastKnownParentCallback @ 0x140694658 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x1406954B8 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140698A44 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14069EA6C (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x14043DAD8 (_PnpGetObjectPropertyWorker.c)
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
  v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 304);
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
