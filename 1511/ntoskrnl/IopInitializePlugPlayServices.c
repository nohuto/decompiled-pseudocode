/*
 * XREFs of IopInitializePlugPlayServices @ 0x1407561E8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     PnpDiagnosticTrace @ 0x1400D09D4 (PnpDiagnosticTrace.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopCreateRegistryKeyEx @ 0x1403B9D0C (IopCreateRegistryKeyEx.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PsDereferencePrimaryToken @ 0x1404B252C (PsDereferencePrimaryToken.c)
 *     PipAllocateDeviceNode @ 0x1404E9B10 (PipAllocateDeviceNode.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404EC974 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmAddDeviceToContainer @ 0x1404ECF48 (_CmAddDeviceToContainer.c)
 *     _CmSetDeviceRegProp @ 0x1404EE690 (_CmSetDeviceRegProp.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmCreateDevice @ 0x1404F0DA8 (_CmCreateDevice.c)
 *     PipSetDevNodeUserFlags @ 0x14050AAD0 (PipSetDevNodeUserFlags.c)
 *     IopOpenRegistryKeyEx @ 0x140522A1C (IopOpenRegistryKeyEx.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     PiPnpRtlInit @ 0x140524F8C (PiPnpRtlInit.c)
 *     IopPortInitialize @ 0x1405286EC (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x14052877C (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x1405287EC (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x14052884C (IopBusNumberInitialize.c)
 *     IopMemInitialize @ 0x14052EBBC (IopMemInitialize.c)
 *     PnpAllocateDeviceInstancePath @ 0x140547518 (PnpAllocateDeviceInstancePath.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x14054B0D8 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpCopyDeviceInstancePath @ 0x14054B8D0 (PnpCopyDeviceInstancePath.c)
 *     PnpLogEvent @ 0x14060369C (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140606490 (PiDcHandleSystemFirmwareUpdate.c)
 *     PiDmInit @ 0x140742F20 (PiDmInit.c)
 *     PipHardwareConfigInit @ 0x14074F610 (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140750B14 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
 *     PiInitCacheGroupInformation @ 0x1407539C0 (PiInitCacheGroupInformation.c)
 *     PiSwInit @ 0x140755538 (PiSwInit.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407555C4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140755648 (PipProcessPendingServices.c)
 *     PnpDiagInitialize @ 0x140756188 (PnpDiagInitialize.c)
 *     PiUEventInit @ 0x140756CC8 (PiUEventInit.c)
 *     PiDcInit @ 0x140756E88 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x140756EE4 (PpInitializeBootDDB.c)
 *     IopInitializeResourceMap @ 0x140761370 (IopInitializeResourceMap.c)
 *     PpDevCfgInit @ 0x1407682AC (PpDevCfgInit.c)
 *     PiAuCreateSecurityObjects @ 0x140769B88 (PiAuCreateSecurityObjects.c)
 *     PnpInitializeNotification @ 0x14076EA38 (PnpInitializeNotification.c)
 *     PiDqInit @ 0x14076EEB0 (PiDqInit.c)
 *     ArbInitializeOsInaccessibleRange @ 0x14077036C (ArbInitializeOsInaccessibleRange.c)
 *     PnpInitializeDeviceEvents @ 0x140770D44 (PnpInitializeDeviceEvents.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PnpBusTypeGuidInitialize @ 0x140771BEC (PnpBusTypeGuidInitialize.c)
 *     PpProfileInit @ 0x140771CE8 (PpProfileInit.c)
 *     PiDeviceDependencyInit @ 0x140771DFC (PiDeviceDependencyInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x140771E68 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x1407721FC (PiInitFirmwareResources.c)
 */

int __fastcall IopInitializePlugPlayServices(__int64 a1, ETWENABLECALLBACK *a2)
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
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rbx
  unsigned int *v22; // rdi
  _BYTE v23[8]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v26; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  int v28; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+78h] [rbp-88h] BYREF
  void *v30; // [rsp+88h] [rbp-78h] BYREF
  PVOID v31; // [rsp+90h] [rbp-70h] BYREF
  PVOID v32; // [rsp+98h] [rbp-68h] BYREF
  PVOID v33; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v34; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v35; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING GuidString; // [rsp+C0h] [rbp-40h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE v38; // [rsp+D8h] [rbp-28h] BYREF
  ULONG Disposition; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v40; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v41; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  __int64 v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]

  v30 = 0LL;
  v23[0] = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    result = PnpDiagInitialize(a1, a2);
    if ( result >= 0 )
    {
      TraceLoggingRegisterEx(&stru_1402CFD80, 0LL, 0LL);
      result = PiDcInit(1LL);
      if ( result >= 0 )
      {
        result = PiUEventInit(1LL);
        if ( result >= 0 )
        {
          v19 = *(_QWORD *)(a1 + 240);
          UserData.Ptr = *(_QWORD *)(v19 + 120);
          *(_QWORD *)&UserData.Size = 8LL;
          v20 = *(_QWORD *)(v19 + 120);
          v46 = 8LL;
          v45 = v20 + 8;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
          result = PiPnpRtlInit(1u);
          if ( result >= 0 )
          {
            PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 10, 0, 0LL, 0LL, 0LL);
            LOWORD(PnpShutdownEvent.Header.Lock) = 0;
            PnpShutdownEvent.Header.WaitListHead.Blink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.WaitListHead.Flink = &PnpShutdownEvent.Header.WaitListHead;
            PnpShutdownEvent.Header.Size = 6;
            PnpShutdownEvent.Header.SignalState = 0;
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
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
    dword_140305ED4 = 90;
    CmRegisterSystemHiveLimitCallback(a1, (__int64)a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v40) >= 0 )
      {
        v21 = (unsigned int *)v40;
        if ( v40 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v22 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v21 + v21[2]));
              RtlInitUnicodeString(&v41, (PCWSTR)((char *)v22 + v22[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v41, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v22, 0);
            }
          }
          ExFreePoolWithTag(v21, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_1402FA3E8 = 0LL;
    qword_1402FA3A8 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_1402FA3D8 = (__int64)&qword_1402FA3D0;
    qword_1402FA3D0 = (__int64)&qword_1402FA3D0;
    qword_1402FA3C0 = (__int64)&qword_1402FA3B8;
    qword_1402FA3B8 = (__int64)&qword_1402FA3B8;
    dword_1402FA3B0 = 0;
    byte_1402FA3C8 = 5;
    byte_1402FA3CA = 8;
    dword_1402FA3CC = 0;
    dword_1402FA3E0 = 0x7FFFFFFF;
    PiInitFirmwareResources(a1);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 0x400) == 0 )
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
      ArbInitializeOsInaccessibleRange((unsigned int)dword_1402FE6F4);
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
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v30);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v26.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v26.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v30, &v26, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v32) >= 0 )
        {
          if ( *((_DWORD *)v32 + 1) == 4 && *((_DWORD *)v32 + 3) == 4 )
            PnpAsyncOptions = *(_DWORD *)((char *)v32 + *((unsigned int *)v32 + 2));
          ExFreePoolWithTag(v32, 0);
        }
        if ( IopGetRegistryValue(Handle, L"DisableRebalance", 0, &v33) >= 0 )
        {
          if ( *((_DWORD *)v33 + 1) == 4 && *((_DWORD *)v33 + 3) == 4 )
            PnpDisableRebalance = *(_DWORD *)((char *)v33 + *((unsigned int *)v33 + 2));
          ExFreePoolWithTag(v33, 0);
        }
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v31) >= 0 )
        {
          if ( *((_DWORD *)v31 + 1) == 4 && *((_DWORD *)v31 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v31 + *((unsigned int *)v31 + 2));
          ExFreePoolWithTag(v31, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v35) >= 0 )
        {
          if ( *((_DWORD *)v35 + 1) == 4 && *((_DWORD *)v35 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v35 + *((unsigned int *)v35 + 2));
          ExFreePoolWithTag(v35, 0);
        }
        IopQueryDeviceResetRegistrySettings(Handle);
        ZwClose(Handle);
      }
      *(_DWORD *)&v26.Length = 4063292;
      v26.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v26, 0x20019u) >= 0 )
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
      PipCheckSystemFirmwareUpdated(v23);
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
      CachedContextBaseKey = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)L"HTREE\\ROOT\\0", 983103, &v38, 0LL, 0);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v16 = v38;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v38,
        0x25u,
        1u,
        (__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}",
        0x4Eu,
        0);
      v28 = 0;
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)L"HTREE\\ROOT\\0",
        (__int64)v16,
        0xBu,
        4u,
        (__int64)&v28,
        4u,
        0);
      ZwClose(v16);
      qword_1402FA428 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_1402FA438 = (__int64)&IopPendingSurpriseRemovals;
      IopPendingSurpriseRemovals = &IopPendingSurpriseRemovals;
      ExInitializeResourceLite(&IopDeviceTreeLock);
      ExInitializeResourceLite(&IopSurpriseRemoveListLock);
      ExInitializeResourceLite(&PnpDevicePropertyLock);
      ExInitializeResourceLite(&PiEngineLock);
      PnpSpinLock = 0LL;
      PiResourceListLock.Event.Header.WaitListHead.Blink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Event.Header.WaitListHead.Flink = &PiResourceListLock.Event.Header.WaitListHead;
      PiResourceListLock.Count = 1;
      PiResourceListLock.Owner = 0LL;
      PiResourceListLock.Contention = 0;
      LOWORD(PiResourceListLock.Event.Header.Lock) = 1;
      PiResourceListLock.Event.Header.Size = 6;
      PiResourceListLock.Event.Header.SignalState = 0;
      CachedContextBaseKey = PiDeviceDependencyInit();
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
      PnpEnumerationInProgress = 0;
      PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
      PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
      qword_1402F9008 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = &PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v26.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v26.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v26, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
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
        goto LABEL_65;
      }
      PipSetDevNodeFlags(IopRootDeviceNode, 305);
      PipSetDevNodeUserFlags(IopRootDeviceNode, 10);
      *(_DWORD *)(IopRootDeviceNode + 660) = -2;
      CachedContextBaseKey = PnpAllocateDeviceInstancePath(IopRootDeviceNode, 0x1Au);
      if ( CachedContextBaseKey >= 0 )
      {
        *(_DWORD *)&v34.Length = 1703960;
        v34.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
        PnpCopyDeviceInstancePath(IopRootDeviceNode, &v34);
        CachedContextBaseKey = PnpMapDeviceObjectToDeviceInstance(
                                 *(_QWORD *)(IopRootDeviceNode + 32),
                                 IopRootDeviceNode + 40);
        if ( CachedContextBaseKey >= 0 )
        {
          *(_DWORD *)&GuidString.Length = 5111884;
          GuidString.Buffer = L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}";
          RtlGUIDFromString(&GuidString, (GUID *)(IopRootDeviceNode + 664));
          PnpQueryAndSaveDeviceNodeCapabilities(IopRootDeviceNode);
          PipSetDevNodeState(IopRootDeviceNode, 776);
LABEL_65:
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
              if ( v23[0] )
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
                      *(_QWORD *)((char *)&v29 + 2) = 0LL;
                      LODWORD(v29) = 2359330;
                      *((_QWORD *)&v29 + 1) = L"\\Driver\\DeviceApi";
                      CachedContextBaseKey = IoCreateDriver(
                                               &v29,
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
