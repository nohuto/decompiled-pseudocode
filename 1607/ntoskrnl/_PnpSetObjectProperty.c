/*
 * XREFs of _PnpSetObjectProperty @ 0x140511490
 * Callers:
 *     PnpStartDeviceNode @ 0x1403EFF98 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1403F1A54 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404C2DC4 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     PnpInitializeSessionId @ 0x14050F95C (PnpInitializeSessionId.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     PiDcContainerRequiresConfiguration @ 0x140630830 (PiDcContainerRequiresConfiguration.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1406DCA60 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x1407CED08 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x140511864 (_PnpSetObjectPropertyWorker.c)
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
