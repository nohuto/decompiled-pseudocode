/*
 * XREFs of _PnpSetObjectProperty @ 0x14045C530
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404E61F8 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpInitializeSessionId @ 0x1404EF974 (PnpInitializeSessionId.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     PiDcContainerRequiresConfiguration @ 0x14050E088 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140543AF4 (IoReportRootDevice.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140697548 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x14078353C (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14045C6A0 (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD SecurityDescriptor[10]; // [rsp+58h] [rbp-39h] BYREF

  LODWORD(SecurityDescriptor[0]) = 0;
  memset(&SecurityDescriptor[1], 0, 0x48uLL);
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 304);
  SecurityDescriptor[3] = a5;
  SecurityDescriptor[4] = a6;
  LODWORD(SecurityDescriptor[5]) = a7;
  SecurityDescriptor[6] = a8;
  SecurityDescriptor[7] = __PAIR64__(a10, a9);
  SecurityDescriptor[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptor);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptor[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v18 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptor[2],
          SecurityDescriptor[3],
          SecurityDescriptor[4],
          SecurityDescriptor[5],
          (PSECURITY_DESCRIPTOR)SecurityDescriptor[6],
          SecurityDescriptor[7],
          SHIDWORD(SecurityDescriptor[7]));
  v16 = v18;
  if ( v14 )
  {
    LODWORD(SecurityDescriptor[0]) = v18;
    v19 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptor);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(SecurityDescriptor[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
