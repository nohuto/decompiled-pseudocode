/*
 * XREFs of _PnpGetObjectProperty @ 0x140438FD0
 * Callers:
 *     PiRebalanceOptOut @ 0x1401FB924 (PiRebalanceOptOut.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectGetAggregatedBooleanPropertyData @ 0x1404394C0 (PiDmObjectGetAggregatedBooleanPropertyData.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043AE64 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x14043B1A0 (PiDqPnPGetObjectProperty.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlIsDeviceValidForSession @ 0x14043EB50 (PiPnpRtlIsDeviceValidForSession.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14043FBF0 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiCMGetObjectProperty @ 0x140440E88 (PiCMGetObjectProperty.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     PnpAssignResourcesToDevices @ 0x14045C31C (PnpAssignResourcesToDevices.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140460C1C (PiUEventCacheObjectProperties.c)
 *     PiUEventDeviceNeedsInstall @ 0x140460DF0 (PiUEventDeviceNeedsInstall.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404DA6E0 (_CmIsDeviceSafeRemovalRequired.c)
 *     PnpGetDevicePropertyData @ 0x1404DB80C (PnpGetDevicePropertyData.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceParent @ 0x1404DEA74 (_CmGetDeviceParent.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1404DF600 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140537028 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x140537188 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140537304 (PiDcHandleInterfaceEvent.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x14055A084 (PiDrvDbLoadNodeWorkerCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     PiDcContainerRequiresConfiguration @ 0x140584570 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x14058C670 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14067EBE8 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x1406937D4 (PiCMUnregisterDeviceInterface.c)
 *     PiAuditStartedDevice @ 0x1406964A4 (PiAuditStartedDevice.c)
 *     _CmMatchLastKnownParentCallback @ 0x1407141F0 (_CmMatchLastKnownParentCallback.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140715048 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1407188A8 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpGetDeviceInstancePropertyData @ 0x14071F08C (PnpGetDeviceInstancePropertyData.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpGetObjectPropertyWorker @ 0x14043A628 (_PnpGetObjectPropertyWorker.c)
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
  if ( v15 )
  {
    LODWORD(v20[0]) = result;
    v19 = v15(a1, a2, a3, 8LL, 2, v20);
    switch ( v19 )
    {
      case -1073741822:
        return v18;
      case -1073741536:
        return LODWORD(v20[0]);
      case 0:
        return v18;
    }
    return 3221225701LL;
  }
  return result;
}
