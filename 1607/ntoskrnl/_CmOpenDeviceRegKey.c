/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1404FCD30
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PnpCheckDeviceIdsChanged @ 0x140489604 (PnpCheckDeviceIdsChanged.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140489B8C (PnpDeviceObjectToDeviceInstance.c)
 *     IopGetRootDevices @ 0x14049DC40 (IopGetRootDevices.c)
 *     IopReleaseDeviceResources @ 0x1404C5E64 (IopReleaseDeviceResources.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404C8D70 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404CE780 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IoOpenDeviceRegistryKey @ 0x1404D4314 (IoOpenDeviceRegistryKey.c)
 *     PiCMOpenDeviceKey @ 0x1404D6418 (PiCMOpenDeviceKey.c)
 *     _CmCreateDeviceWorker @ 0x1404E6FA4 (_CmCreateDeviceWorker.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404ECE6C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404FE360 (_CmGetDeviceRegPropWorker.c)
 *     _PnpDispatchDevice @ 0x140500604 (_PnpDispatchDevice.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054CF80 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405551A8 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140555CD0 (IopWriteAllocatedResourcesToRegistry.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405711DC (PiDevCfgProcessDeviceCallback.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140637764 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x1406394B4 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8934 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DC9A4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DCAC4 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DE9C4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DEBB0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x1406E5AF4 (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
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
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 328);
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
  v14 = CmOpenDeviceRegKeyWorker(a1, v20[3], SBYTE4(v20[3]), v20[4], (__int64)&v20[5]);
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
