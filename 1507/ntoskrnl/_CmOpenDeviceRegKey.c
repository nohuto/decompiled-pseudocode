/*
 * XREFs of _CmOpenDeviceRegKey @ 0x14043C350
 * Callers:
 *     _PnpDispatchDevice @ 0x14043B544 (_PnpDispatchDevice.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     PiCMOpenDeviceKey @ 0x1404451DC (PiCMOpenDeviceKey.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404D8C10 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404DC05C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     IopReleaseDeviceResources @ 0x1405383A4 (IopReleaseDeviceResources.c)
 *     IoOpenDeviceRegistryKey @ 0x140545AE8 (IoOpenDeviceRegistryKey.c)
 *     _CmCreateDeviceWorker @ 0x14054EE88 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140550338 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14058B1A0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x14059C324 (IopWriteAllocatedResourcesToRegistry.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405B1FA0 (PiDevCfgProcessDeviceCallback.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405B8298 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140685D00 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1407135A8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140717458 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140717578 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140718C70 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14071F1E0 (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  _QWORD v20[12]; // [rsp+40h] [rbp-71h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 320);
  LODWORD(v20[3]) = a5;
  v20[2] = __PAIR64__(a4, a3);
  BYTE4(v20[3]) = a6;
  v20[4] = a7;
  if ( v12 )
  {
    v13 = v12(a1, a2, 1LL, 11LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
      {
LABEL_12:
        v15 = v20[0];
        goto LABEL_5;
      }
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = CmOpenDeviceRegKeyWorker(a1, a2, v20[2], HIDWORD(v20[2]), v20[3], SBYTE4(v20[3]), v20[4], (__int64)&v20[5]);
  v15 = v14;
  if ( v12 )
  {
    LODWORD(v20[0]) = v14;
    v17 = v12(a1, a2, 1LL, 11LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 != -1073741536 )
      {
        v19 = v15;
        if ( v18 )
          v19 = -1073741595;
        v15 = v19;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v15 >= 0 && a8 )
    *a8 = v20[5];
  return (unsigned int)v15;
}
