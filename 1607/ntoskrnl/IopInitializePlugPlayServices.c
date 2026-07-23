/*
 * XREFs of IopInitializePlugPlayServices @ 0x14079CCD4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x1400AEE00 (PnpDiagnosticTrace.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     PsDereferencePrimaryToken @ 0x1404C4BF8 (PsDereferencePrimaryToken.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmCreateDevice @ 0x14050D534 (_CmCreateDevice.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     _CmAddDeviceToContainer @ 0x14050FC58 (_CmAddDeviceToContainer.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14050FD98 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1405121B4 (_CmSetDeviceRegProp.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x140539738 (IopCreateRegistryKeyEx.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     PiPnpRtlInit @ 0x140551E10 (PiPnpRtlInit.c)
 *     IopPortInitialize @ 0x140554D2C (IopPortInitialize.c)
 *     IopDmaInitialize @ 0x140554DBC (IopDmaInitialize.c)
 *     IopIrqInitialize @ 0x140554E2C (IopIrqInitialize.c)
 *     IopBusNumberInitialize @ 0x140554E8C (IopBusNumberInitialize.c)
 *     IopMemInitialize @ 0x14055B5C0 (IopMemInitialize.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B92C (PnpAllocateDeviceInstancePath.c)
 *     CmRegisterSystemHiveLimitCallback @ 0x140581318 (CmRegisterSystemHiveLimitCallback.c)
 *     PnpCopyDeviceInstancePath @ 0x140581BDC (PnpCopyDeviceInstancePath.c)
 *     PnpLogEvent @ 0x14062DB4C (PnpLogEvent.c)
 *     PiDcHandleSystemFirmwareUpdate @ 0x140630958 (PiDcHandleSystemFirmwareUpdate.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 *     PipCheckSystemFirmwareUpdated @ 0x14079A898 (PipCheckSystemFirmwareUpdated.c)
 *     PnpDiagInitialize @ 0x14079CC74 (PnpDiagInitialize.c)
 *     PiUEventInit @ 0x14079D7F0 (PiUEventInit.c)
 *     PiDcInit @ 0x14079D9B0 (PiDcInit.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     PiDmInit @ 0x1407B1E38 (PiDmInit.c)
 *     PiInitCacheGroupInformation @ 0x1407B25EC (PiInitCacheGroupInformation.c)
 *     PiAuCreateSecurityObjects @ 0x1407B3320 (PiAuCreateSecurityObjects.c)
 *     PpDevCfgInit @ 0x1407B8124 (PpDevCfgInit.c)
 *     PnpInitializeNotification @ 0x1407B8E44 (PnpInitializeNotification.c)
 *     PiDqInit @ 0x1407B9358 (PiDqInit.c)
 *     ArbInitializeOsInaccessibleRange @ 0x1407BADF8 (ArbInitializeOsInaccessibleRange.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407BB858 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407BB8DC (PipProcessPendingServices.c)
 *     PnpInitializeDeviceEvents @ 0x1407BBB2C (PnpInitializeDeviceEvents.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PiSwInit @ 0x1407BC880 (PiSwInit.c)
 *     PnpBusTypeGuidInitialize @ 0x1407BCA9C (PnpBusTypeGuidInitialize.c)
 *     PpProfileInit @ 0x1407BCB98 (PpProfileInit.c)
 *     PiDeviceDependencyInit @ 0x1407BCCAC (PiDeviceDependencyInit.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407BCD18 (IopQueryDeviceResetRegistrySettings.c)
 *     PiInitFirmwareResources @ 0x1407BD10C (PiInitFirmwareResources.c)
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
  struct _DEVICE_OBJECT *v17; // rdi
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int *v21; // rbx
  unsigned int *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-88h] BYREF
  void *v31; // [rsp+90h] [rbp-78h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp-70h] BYREF
  PVOID v33; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v34; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v35; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v36; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v37; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE v38; // [rsp+C8h] [rbp-40h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING v43; // [rsp+F0h] [rbp-18h] BYREF
  UNICODE_STRING GuidString; // [rsp+100h] [rbp-8h] BYREF
  UNICODE_STRING v45; // [rsp+110h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+18h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+130h] [rbp+28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+58h] BYREF
  __int64 v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v52; // [rsp+1A8h] [rbp+A0h]
  __int64 v53; // [rsp+1B0h] [rbp+A8h]
  __int64 *v54; // [rsp+1B8h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+B8h]
  __int64 *v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]

  v31 = 0LL;
  LOBYTE(v24) = 0;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      return -1073741584;
    result = PnpDiagInitialize(a1, a2);
    if ( result >= 0 )
    {
      TlgRegisterAggregateProviderEx(&stru_1402F3230, 0LL, 0LL);
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
          v50 = 8LL;
          v49 = v20 + 8;
          PnpDiagnosticTrace(&KMPnPEvt_OsLoader_Time, 2u, &UserData);
          if ( stru_1402F3740.LevelPlus1 > 4 && TlgKeywordOn(&stru_1402F3740, 0x400000000000uLL) )
          {
            v23 = *(_QWORD *)(a1 + 240);
            v40 = **(_QWORD **)(v23 + 120);
            v41 = *(_QWORD *)(*(_QWORD *)(v23 + 120) + 8LL);
            v42 = *(_QWORD *)(v23 + 2152);
            v52 = &v40;
            v54 = &v41;
            v56 = &v42;
            v53 = 8LL;
            v55 = 8LL;
            v57 = 8LL;
            TlgWrite(&stru_1402F3740, &unk_14027BBE9, 0LL, 0LL, 5u, &pData);
          }
          EtwUnregister(stru_1402F3740.RegHandle);
          stru_1402F3740.RegHandle = 0LL;
          stru_1402F3740.LevelPlus1 = 0;
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
    dword_140328EDC = 90;
    CmRegisterSystemHiveLimitCallback(a1, (__int64)a2, (__int64)&PnpSystemHiveLimits);
    PnpSystemHiveTooLarge = 0;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"OldSystemBiosDate", 0, &v33) >= 0 )
      {
        v21 = (unsigned int *)v33;
        if ( v33 )
        {
          if ( IopGetRegistryValue(KeyHandle, L"SystemBiosDate", 0, &P) >= 0 )
          {
            v22 = (unsigned int *)P;
            if ( P )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v21 + v21[2]));
              RtlInitUnicodeString(&v45, (PCWSTR)((char *)v22 + v22[2]));
              PnpLogEvent((const void **)&DestinationString, (const void **)&v45, 1073741868, 0LL, 0);
              ExFreePoolWithTag(v22, 0);
            }
          }
          ExFreePoolWithTag(v21, 0);
        }
      }
      ZwClose(KeyHandle);
    }
    qword_14031F928 = 0LL;
    qword_14031F8E8 = (__int64)&PnpDeviceCompletionQueue;
    PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
    qword_14031F918 = (__int64)&qword_14031F910;
    qword_14031F910 = (__int64)&qword_14031F910;
    qword_14031F900 = (__int64)&qword_14031F8F8;
    qword_14031F8F8 = (__int64)&qword_14031F8F8;
    dword_14031F8F0 = 0;
    byte_14031F908 = 5;
    byte_14031F90A = 8;
    dword_14031F90C = 0;
    dword_14031F920 = 0x7FFFFFFF;
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
      ArbInitializeOsInaccessibleRange((unsigned int)dword_140326A24);
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
      CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 **)&PiPnpRtlCtx, 4, (__int64 *)&v31);
      if ( CachedContextBaseKey < 0 )
        return CachedContextBaseKey;
      v27.Buffer = L"Control\\Pnp";
      *(_DWORD *)&v27.Length = 1572886;
      if ( (int)IopCreateRegistryKeyEx(&Handle, v31, &v27, 0xF003Fu, 0, 0LL) >= 0 )
      {
        if ( IopGetRegistryValue(Handle, L"AsynchronousOptions", 0, &v34) >= 0 )
        {
          if ( *((_DWORD *)v34 + 1) == 4 && *((_DWORD *)v34 + 3) == 4 )
            PnpAsyncOptions = *(_DWORD *)((char *)v34 + *((unsigned int *)v34 + 2));
          ExFreePoolWithTag(v34, 0);
        }
        if ( IopGetRegistryValue(Handle, L"DisableRebalance", 0, &v35) >= 0 )
        {
          if ( *((_DWORD *)v35 + 1) == 4 && *((_DWORD *)v35 + 3) == 4 )
            PnpDisableRebalance = *(_DWORD *)((char *)v35 + *((unsigned int *)v35 + 2));
          ExFreePoolWithTag(v35, 0);
        }
        if ( IopGetRegistryValue(Handle, L"BootOptions", 0, &v36) >= 0 )
        {
          if ( *((_DWORD *)v36 + 1) == 4 && *((_DWORD *)v36 + 3) == 4 )
            PnpBootOptions = *(_DWORD *)((char *)v36 + *((unsigned int *)v36 + 2));
          ExFreePoolWithTag(v36, 0);
        }
        if ( IopGetRegistryValue(Handle, L"FindBestConfigurationTimeout", 0, &v37) >= 0 )
        {
          if ( *((_DWORD *)v37 + 1) == 4 && *((_DWORD *)v37 + 3) == 4 )
            PnpFindBestConfigurationTimeout = *(_DWORD *)((char *)v37 + *((unsigned int *)v37 + 2));
          ExFreePoolWithTag(v37, 0);
        }
        IopQueryDeviceResetRegistrySettings(Handle);
        ZwClose(Handle);
      }
      *(_DWORD *)&v27.Length = 4063292;
      v27.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\Setup";
      if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v27, 0x20019u) >= 0 )
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
      PipCheckSystemFirmwareUpdated(&v24);
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
      LODWORD(v28) = 0;
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
      qword_14031F968 = (__int64)&IopPendingEjects;
      IopPendingEjects = (__int64)&IopPendingEjects;
      qword_14031F978 = (__int64)&IopPendingSurpriseRemovals;
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
      qword_14031E548 = (__int64)&PnpEnumerationRequestList;
      PnpEnumerationRequestList = &PnpEnumerationRequestList;
      LOWORD(PnpEnumerationLock.Header.Lock) = 0;
      PnpEnumerationLock.Header.Size = 6;
      PnpEnumerationLock.Header.SignalState = 1;
      PpProfileInit();
      IopWarmEjectPdo = 0LL;
      IopWarmEjectLock.Header.WaitListHead.Blink = &IopWarmEjectLock.Header.WaitListHead;
      IopWarmEjectLock.Header.WaitListHead.Flink = &IopWarmEjectLock.Header.WaitListHead;
      LOWORD(IopWarmEjectLock.Header.Lock) = 1;
      v27.Buffer = L"\\Driver\\PnpManager";
      IopWarmEjectLock.Header.Size = 6;
      IopWarmEjectLock.Header.SignalState = 1;
      *(_DWORD *)&v27.Length = 2490404;
      CachedContextBaseKey = IoCreateDriver(&v27, (__int64 (__fastcall *)(PVOID, _QWORD))PipPnPDriverEntry);
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
        *(_DWORD *)&v43.Length = 1703960;
        v43.Buffer = (wchar_t *)L"HTREE\\ROOT\\0";
        PnpCopyDeviceInstancePath(IopRootDeviceNode, &v43);
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
              if ( (_BYTE)v24 )
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
                      *(_QWORD *)((char *)&v30 + 2) = 0LL;
                      LODWORD(v30) = 2359330;
                      *((_QWORD *)&v30 + 1) = L"\\Driver\\DeviceApi";
                      CachedContextBaseKey = IoCreateDriver(
                                               &v30,
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
