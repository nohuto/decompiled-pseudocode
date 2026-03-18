/*
 * XREFs of _CmOpenDeviceRegKey @ 0x14043AEB4
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     _PnpDispatchDevice @ 0x14043E1C8 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14045AE44 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     IopReleaseDeviceResources @ 0x1404A0EBC (IopReleaseDeviceResources.c)
 *     IoOpenDeviceRegistryKey @ 0x1404AE9F0 (IoOpenDeviceRegistryKey.c)
 *     PiCMOpenDeviceKey @ 0x1404B28C0 (PiCMOpenDeviceKey.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404EE7E8 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404EE910 (PnpCheckDeviceIdsChanged.c)
 *     PiQueryAndAllocateBootResources @ 0x1404EF1A4 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1404EF3B0 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404EF738 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1404EFA28 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     _CmCreateDeviceWorker @ 0x1404F0F08 (_CmCreateDeviceWorker.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgInitDeviceContext @ 0x14051047C (PiDevCfgInitDeviceContext.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405139AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140514590 (PiDevCfgEnumDeviceKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14051FF04 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405291E0 (IopIsReportedAlready.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140529A40 (IopWriteAllocatedResourcesToRegistry.c)
 *     _CmSetDeviceRegPropWorker @ 0x14053AB90 (_CmSetDeviceRegPropWorker.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406041B0 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406975C4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406976E4 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140698E10 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14069EB98 (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
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
