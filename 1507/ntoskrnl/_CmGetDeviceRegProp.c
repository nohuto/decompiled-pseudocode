/*
 * XREFs of _CmGetDeviceRegProp @ 0x14043C46C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404DA6E0 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2B34 (PnpCallDriverQueryServiceHelper.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404E4B2C (PipGetRegistryDwordWithFallback.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E6788 (PipGetRegistrySecurityWithFallback.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmIsLocalMachineContainer @ 0x1405382C8 (_CmIsLocalMachineContainer.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 *     _CmGetDeviceSoftwareKey @ 0x140549A10 (_CmGetDeviceSoftwareKey.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140553DE4 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14067FC98 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140681488 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140685D00 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitDeviceCallback @ 0x140686FA0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x1407135A8 (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x140716370 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1407166D4 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x1407F9CC0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmGetDeviceRegProp(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v11; // eax
  unsigned int DeviceRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _QWORD v19[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 320);
  LODWORD(v19[7]) = 0;
  v19[2] = a3;
  LODWORD(v19[3]) = a4;
  v19[5] = a6;
  v19[6] = a7;
  v19[4] = a5;
  if ( v10 )
  {
    v11 = v10(a1, a2, 1LL, 9LL, 1, v19);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  DeviceRegPropWorker = CmGetDeviceRegPropWorker(a1, a2, v19[2], LODWORD(v19[3]), v19[4], v19[5], v19[6], v19[7]);
  v13 = DeviceRegPropWorker;
  if ( !v10 )
    return v13;
  LODWORD(v19[0]) = DeviceRegPropWorker;
  v14 = v10(a1, a2, 1LL, 9LL, 2, v19);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v19[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
