/*
 * XREFs of _PnpSetObjectProperty @ 0x140488D1C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1404C5220 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404DF7C0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpInitializeSessionId @ 0x1404EC988 (PnpInitializeSessionId.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140577E18 (IoReportRootDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x14063077C (PiDcContainerRequiresConfiguration.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8934 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1406DC928 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x1407CED08 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404890F0 (_PnpSetObjectPropertyWorker.c)
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
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 312);
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
