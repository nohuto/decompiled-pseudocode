/*
 * XREFs of _CmGetDeviceRegProp @ 0x14043AFD0
 * Callers:
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetRegistryProperty @ 0x140443A00 (PiCMGetRegistryProperty.c)
 *     PiControlGetPropertyData @ 0x140458140 (PiControlGetPropertyData.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14045C2F8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404AF568 (_CmGetDeviceSoftwareKey.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     IopPnPDispatch @ 0x1404E2670 (IopPnPDispatch.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E70C0 (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404E7628 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E7700 (PipGetRegistrySecurityWithFallback.c)
 *     _CmIsLocalMachineContainer @ 0x1404EB5BC (_CmIsLocalMachineContainer.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404ECDAC (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404EE910 (PnpCheckDeviceIdsChanged.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x1404EF088 (PpHotSwapUpdateRemovalPolicy.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404F066C (PiQueryRemovableDeviceOverride.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140514590 (PiDevCfgEnumDeviceKeys.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140604ED4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406056EC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x1406066E0 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140608D10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14060A40C (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 *     _CmClassFilterCallback @ 0x1406967E0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140696B44 (_CmServiceFilterCallback.c)
 *     PipMigrateResetDeviceCallback @ 0x14078353C (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
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
