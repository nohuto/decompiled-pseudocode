/*
 * XREFs of _CmSetDeviceRegProp @ 0x1404D8AB8
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PnpSaveDeviceCapabilities @ 0x1404D8990 (PnpSaveDeviceCapabilities.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140537510 (PiDcUpdateDeviceContainerMembership.c)
 *     _CmGetDeviceSoftwareKey @ 0x140549A10 (_CmGetDeviceSoftwareKey.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x14058BDB0 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058C1FC (PiPnpRtlSetDeviceRegProperty.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405BA7DC (IoReportRootDevice.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     PiDcResetChildDeviceContainers @ 0x140681488 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     PipMigrateResetDeviceCallback @ 0x1407F9CC0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 */

__int64 __fastcall CmSetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64, int, _QWORD *); // r14
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  _QWORD v20[12]; // [rsp+40h] [rbp-69h] BYREF

  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 320);
  v20[5] = __PAIR64__(a8, a7);
  v20[2] = a3;
  v20[3] = __PAIR64__(a5, a4);
  v20[4] = a6;
  if ( v12 )
  {
    v13 = v12(a1, a2, 1LL, 10LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = CmSetDeviceRegPropWorker(a1, a2, v20[2], LODWORD(v20[3]), HIDWORD(v20[3]), v20[4], v20[5], HIDWORD(v20[5]));
  v14 = v16;
  if ( v12 )
  {
    LODWORD(v20[0]) = v16;
    v17 = v12(a1, a2, 1LL, 10LL, 2, v20);
    v18 = v17;
    if ( v17 != -1073741822 )
    {
      if ( v17 == -1073741536 )
        return LODWORD(v20[0]);
      v19 = v14;
      if ( v18 )
        return (unsigned int)-1073741595;
      return v19;
    }
  }
  return v14;
}
