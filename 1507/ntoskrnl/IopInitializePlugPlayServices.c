/*
 * XREFs of IopInitializePlugPlayServices @ 0x1407BF6F0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140461AEC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1404D8AB8 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopCreateRegistryKeyEx @ 0x1404E7078 (IopCreateRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     _CmAddDeviceToContainer @ 0x1405376AC (_CmAddDeviceToContainer.c)
 *     PsDereferencePrimaryToken @ 0x1405434E4 (PsDereferencePrimaryToken.c)
 *     _CmCreateDevice @ 0x14054ED28 (_CmCreateDevice.c)
 *     PipAllocateDeviceNode @ 0x1405532C0 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeUserFlags @ 0x140581810 (PipSetDevNodeUserFlags.c)
 *     IopOpenRegistryKeyEx @ 0x14058F9E4 (IopOpenRegistryKeyEx.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     PiPnpRtlInit @ 0x1405953A4 (PiPnpRtlInit.c)
 *     IopPortInitialize @ 0x14059AFA0 (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x14059B030 (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x14059B0A0 (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x14059B100 (IopBusNumberInitialize.c)
 *     IopMemInitialize @ 0x1405A153C (IopMemInitialize.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BE5F8 (PnpAllocateDeviceInstancePath.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x1405C24F0 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpCopyDeviceInstancePath @ 0x1405C2C80 (PnpCopyDeviceInstancePath.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140681238 (PiDcHandleSystemFirmwareUpdate.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407B7C88 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x1407BA388 (PiInitCacheGroupInformation.c)
 *     PiUEventInit @ 0x1407C01DC (PiUEventInit.c)
 *     PiDcInit @ 0x1407C039C (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 *     IopInitializeResourceMap @ 0x1407D5960 (IopInitializeResourceMap.c)
 *     PiDmInit @ 0x1407DB654 (PiDmInit.c)
 *     PpDevCfgInit @ 0x1407DC428 (PpDevCfgInit.c)
 *     PiAuCreateSecurityObjects @ 0x1407DDDA0 (PiAuCreateSecurityObjects.c)
 *     PnpInitializeNotification @ 0x1407E3EF4 (PnpInitializeNotification.c)
 *     PiDqInit @ 0x1407E4654 (PiDqInit.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1407E629C (ArbInitializeOsInaccessibleRange.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407E6EF4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407E6F78 (PipProcessPendingServices.c)
 *     PnpInitializeDeviceEvents @ 0x1407E71F4 (PnpInitializeDeviceEvents.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PnpDiagInitialize @ 0x1407E8214 (PnpDiagInitialize.c)
 *     PiSwInit @ 0x1407E84D8 (PiSwInit.c)
 *     PnpBusTypeGuidInitialize @ 0x1407E8688 (PnpBusTypeGuidInitialize.c)
 *     PpProfileInit @ 0x1407E8784 (PpProfileInit.c)
 *     PiDeviceDependencyInit @ 0x1407E8898 (PiDeviceDependencyInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407E8904 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x1407E8CF8 (PiInitFirmwareResources.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 *v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int CachedContextBaseKey; // ebx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  HANDLE v16; // rbx
  struct _DEVICE_OBJECT *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  REGHANDLE v22; // rbx
  __int64 v23; // rax
  unsigned int *v24; // rbx
  unsigned int *v25; // rdi
  _BYTE v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v29; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-90h] BYREF
  __int128 v32; // [rsp+78h] [rbp-88h] BYREF
  void *v33; // [rsp+88h] [rbp-78h] BYREF
  PVOID v34; // [rsp+90h] [rbp-70h] BYREF
  PVOID v35; // [rsp+98h] [rbp-68h] BYREF
  PVOID v36; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v37; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v38; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING GuidString; // [rsp+C0h] [rbp-40h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE v41; // [rsp+D8h] [rbp-28h] BYREF
  ULONG Disposition; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v43; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v44; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  __int64 v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]

  v33 = 0LL;
  v26[0] = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    result = PnpDiagInitialize();
    if ( result >= 0 )
    {
      TraceLoggingRegisterEx(&stru_14031EF20, 0LL, 0LL);
      result = PiDcInit(1LL);
      if ( result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( result >= 0 )
        {
          v21 = *(_QWORD *)(a1 + 240);
          v22 = PnpEtwHandle;
          UserData.Ptr = *(_QWORD *)(v21 + 120);
          *(_QWORD *)&UserData.Size = 8LL;
          v23 = *(_QWORD *)(v21 + 120) + 8LL;
          v49 = 8LL;
          v48 = v23;
          if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_OsLoader_Time) )
            EtwWrite(v22, &KMPnPEvt_OsLoader_Time, 0LL, 2u, &UserData);
          result = PiPnpRtlInit(1u);
          if ( result >= 0 )
          {
            PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL);
            LOWORD(PnpShutdownEvent.Header.Lock) = 0;
            PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.Size = 6;
            PnpShutdownEvent.Header.SignalState = 0;
            PpInitializeBootDDB(a1, 1LL);
            return 0;
          }
        }
      }
    }
  }
  else
  {
    PnPInitialized = 0;
    PnpSystemHiveLimits = 80;
    dword_140353C54 = 90;
    CmRegisterSystemHiveLimitCallback(a1, a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v43) >= 0 )
      {
        v24 = (unsigned int *)v43;
        if ( v43 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v25 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v24 + v24[2]));
              RtlInitUnicodeString(&v44, (PCWSTR)((char *)v25 + v25[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v44, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v25, 0);
            }
          }
          ExFreePoolWithTag(v24, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_14034A868 = 0LL;
    qword_14034A828 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_14034A858 = (__int64)&qword_14034A850;
    qword_14034A850 = (__int64)&qword_14034A850;
    qword_14034A840 = (__int64)&qword_14034A838;
    qword_14034A838 = (__int64)&qword_14034A838;
    dword_14034A830 = 0;
    byte_14034A848 = 5;
    byte_14034A84A = 8;
    dword_14034A84C = 0;
    dword_14034A860 = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    PpInitializeBootDDB(a1, 0LL);
    PipInitDeviceOverrideCache();
    LOWORD(PnpSystemDeviceEnumerationComplete.Header.Lock) = 0;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Blink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.WaitListHead.Flink = &PnpSystemDeviceEnumerationComplete.Header.WaitListHead;
    PnpSystemDeviceEnumerationComplete.Header.Size = 6;
    PnpSystemDeviceEnumerationComplete.Header.SignalState = 0;
    result = PiInitCacheGroupInformation();
    if ( result >= 0 )
    {
      PpRegistrySemaphore.Header.Type = 5;
      PpRegistrySemaphore.Header.WaitListHead.Blink = &PpRegistrySemaphore.Header.WaitListHead;
      PpRegistrySemaphore.Header.WaitListHead.Flink = &PpRegistrySemaphore.Header.WaitListHead;
      v4 = (__int64 *)&IopLegacyBusInformationTable;
      PpRegistrySemaphore.Header.Size = 8;
      PpRegistrySemaphore.Header.SignalState = 1;
      PpRegistrySemaphore.Limit = 1;
      do
      {
        v4[1] = (__int64)v4;
        *v4 = (__int64)v4;
        v4 += 2;
      }
      while ( (__int64)v4 < (__int64)&IopLegacyDeviceNode );
      IopInitializeResourceMap(a1);
      IopAllocateBootResourcesRoutine = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))&IopReportBootResources;
      IopInitReservedResourceList = 0LL;
      PnpDefaultInterfaceType = 1;
      ArbInitializeOsInaccessibleRange((unsigned int)dword_14034EBA4);
      CachedContextBaseKey = IopPortInitialize(v6, v5);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopMemInitialize(v8, v7);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopDmaInitialize(v11, v10);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopIrqInitialize(v13, v12);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IopBusNumberInitialize(v15, v14);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiPnpRtlInit(0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipMigratePnpState();
      CachedContextBaseKey = PiDmInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v33);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v29.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v29.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v33, &v29, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v35) >= 0 )
        {
          if ( *((_DWORD *)v35 + 1) == 4 && *((_DWORD *)v35 + 3) == 4 )
            PnpAsyncOptions = *(_DWORD *)((char *)v35 + *((unsigned int *)v35 + 2));
          ExFreePoolWithTag(v35, 0);
        }
        if ( IopGetRegistryValue(Handle, L"DisableRebalance", 0, &v36) >= 0 )
        {
          if ( *((_DWORD *)v36 + 1) == 4 && *((_DWORD *)v36 + 3) == 4 )
            PnpDisableRebalance = *(_DWORD *)((char *)v36 + *((unsigned int *)v36 + 2));
          ExFreePoolWithTag(v36, 0);
        }
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v34) >= 0 )
        {
          if ( *((_DWORD *)v34 + 1) == 4 && *((_DWORD *)v34 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v34 + *((unsigned int *)v34 + 2));
          ExFreePoolWithTag(v34, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v38) >= 0 )
        {
          if ( *((_DWORD *)v38 + 1) == 4 && *((_DWORD *)v38 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v38 + *((unsigned int *)v38 + 2));
          ExFreePoolWithTag(v38, 0);
        }
        IopQueryDeviceResetRegistrySettings(Handle);
        ZwClose(Handle);
      }
      *(_DWORD *)&v29.Length = 4063292;
      v29.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v29, 0x20019u) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"SystemSetupInProgress", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"SetupPhase", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupPhaseInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"SetupType", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupTypeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"OOBEInProgress", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupOOBEInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"Upgrade", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupUpgradeInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        if ( IopGetRegistryValue(Handle, L"RollbackActive", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            PnpSetupRollbackActiveInProgress = 1;
          ExFreePoolWithTag(P, 0);
        }
        ZwClose(Handle);
      }
      CachedContextBaseKey = PipHardwareConfigInit((GUID *)(*(_QWORD *)(a1 + 240) + 2216LL));
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      PipCheckSystemFirmwareUpdated(v26);
      CachedContextBaseKey = PiDcInit(0LL);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiAuCreateSecurityObjects();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PiDqInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = PpDevCfgInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)L"HTREE\\ROOT\\0", 983103, &v41, 0LL, 0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v16 = v41;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v41,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v31 = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v31,
        4u,
        0);
      ZwClose(v16);
      qword_14034A8A8 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_14034A8B8 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PnpDevicePropertyLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      qword_14034AA68 = (__int64)&qword_14034AA60;
      qword_14034AA60 = (__int64)&qword_14034AA60;
      LODWORD(PiResourceListLock) = 1;
      qword_14034AA48 = 0LL;
      dword_14034AA50 = 0;
      word_14034AA58 = 1;
      byte_14034AA5A = 6;
      dword_14034AA5C = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_140349488 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = &PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v29.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v29.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v29, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      CachedContextBaseKey = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0, 0, &DeviceObject);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v17 = DeviceObject;
      v18 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      CachedContextBaseKey = PipAllocateDeviceNode((__int64)v18, (void **)&IopRootDeviceNode);
      if ( !IopRootDeviceNode )
      {
        IoDeleteDevice(v17);
        PsDereferencePrimaryToken(PnpDriverObject);
        goto LABEL_63;
      }
      PipSetDevNodeFlags(IopRootDeviceNode, 305);
      PipSetDevNodeUserFlags(IopRootDeviceNode, 10);
      *(_DWORD *)(IopRootDeviceNode + 660) = -2;
      CachedContextBaseKey = PnpAllocateDeviceInstancePath(IopRootDeviceNode, 0x1Au);
      if ( CachedContextBaseKey >= 0 )
      {
        *(_DWORD *)&v37.Length = 1703960;
        v37.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
        PnpCopyDeviceInstancePath(IopRootDeviceNode, &v37);
        CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                 *(_QWORD *)(IopRootDeviceNode + 32),
                                 IopRootDeviceNode + 40,
                                 v19,
                                 v20);
        if ( CachedContextBaseKey >= 0 )
        {
          *(_DWORD *)&GuidString.Length = 5111884;
          GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
          RtlGUIDFromString(&GuidString, (GUID *)(IopRootDeviceNode + 664));
          PnpQueryAndSaveDeviceNodeCapabilities(IopRootDeviceNode);
          PipSetDevNodeState(IopRootDeviceNode, 776);
LABEL_63:
          if ( CachedContextBaseKey >= 0 )
          {
            CachedContextBaseKey = CmAddDeviceToContainer(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                     (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
                                     (__int64)L"HTREE\\ROOT\\0",
                                     0LL);
            if ( CachedContextBaseKey >= 0 )
            {
              if ( v26[0] )
                PiDcHandleSystemFirmwareUpdate();
              CachedContextBaseKey = PnpInitializeDeviceEvents();
              if ( CachedContextBaseKey >= 0 )
              {
                PnpInitializeNotification();
                CachedContextBaseKey = PnpBusTypeGuidInitialize();
                if ( CachedContextBaseKey >= 0 )
                {
                  LOWORD(PnpReplaceEvent.Header.Lock) = 1;
                  PnpReplaceEvent.Header.WaitListHead.Blink = &PnpReplaceEvent.Header.WaitListHead;
                  PnpReplaceEvent.Header.WaitListHead.Flink = &PnpReplaceEvent.Header.WaitListHead;
                  PnpReplaceEvent.Header.Size = 6;
                  PnpReplaceEvent.Header.SignalState = 1;
                  CachedContextBaseKey = PiSwInit();
                  if ( CachedContextBaseKey >= 0 )
                  {
                    CachedContextBaseKey = PiUEventInit(0LL);
                    if ( CachedContextBaseKey >= 0 )
                    {
                      *(_QWORD *)((char *)&v32 + 2) = 0LL;
                      LODWORD(v32) = 2359330;
                      *((_QWORD *)&v32 + 1) = L"\\Driver\\DeviceApi";
                      CachedContextBaseKey = IoCreateDriver(
                                               &v32,
                                               (__int64 (__fastcall *)(PVOID, _QWORD))PiDaDriverEntry);
                      if ( CachedContextBaseKey >= 0 )
                      {
                        if ( (int)PipProcessPendingServices() >= 0 )
                          PipProcessPendingOsExtensionResources();
                        PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return CachedContextBaseKey;
    }
  }
  return result;
}
