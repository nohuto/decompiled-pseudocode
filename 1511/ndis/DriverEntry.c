/*
 * XREFs of DriverEntry @ 0x1C00FC3C0
 * Callers:
 *     GsDriverEntry @ 0x1C00FC040 (GsDriverEntry.c)
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1C00167F0 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C0016D34 (McGenEventRegister.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0016D4C (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     NdisAllocateNetBufferPool @ 0x1C0016FC0 (NdisAllocateNetBufferPool.c)
 *     ndisVerifierInitialization @ 0x1C0017178 (ndisVerifierInitialization.c)
 *     NdisAllocateNetBufferListPool @ 0x1C001E6D0 (NdisAllocateNetBufferListPool.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     __report_rangecheckfailure @ 0x1C006EAE8 (__report_rangecheckfailure.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C0097994 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     WppInitKm @ 0x1C009A088 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C009A0F0 (WppLoadTracingSupport.c)
 *     ndisDoesSystemSupportSriov @ 0x1C009A298 (ndisDoesSystemSupportSriov.c)
 *     ndisInitializeStackTraces @ 0x1C009A340 (ndisInitializeStackTraces.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C009A390 (ndisCreateSecurityDescriptorEx.c)
 *     ndisAllocateEventLog @ 0x1C009B1B0 (ndisAllocateEventLog.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009B5F0 (ndisCreateSecurityDescriptor.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A6A9C (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A7870 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C00ACD8C (TraceLoggingRegisterEx.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00AE538 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisSetupDeviceInitialize@@YAXXZ @ 0x1C00FC000 (-ndisSetupDeviceInitialize@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C00FC060 (NdisDllInitialize.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C00FC150 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ndisCreateGenericSD @ 0x1C00FD06C (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C00FD120 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C00FD3A8 (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C00FD818 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C00FD8C8 (ndisVBusNmrInitializeClient.c)
 *     ndisGetProcessorInfo @ 0x1C00FD990 (ndisGetProcessorInfo.c)
 *     ndisCmInitialize @ 0x1C00FE024 (ndisCmInitialize.c)
 *     ndisInitializePeriodicReceives @ 0x1C00FE168 (ndisInitializePeriodicReceives.c)
 *     ndisInitializeThreadPool @ 0x1C00FE464 (ndisInitializeThreadPool.c)
 *     ndisReadRegistry @ 0x1C00FE50C (ndisReadRegistry.c)
 *     ndisIfInitialize @ 0x1C00FEE90 (ndisIfInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned __int64 v2; // rbp
  unsigned __int8 v4; // al
  __int64 v6; // rcx
  ETWENABLECALLBACK *v7; // rdx
  PETWENABLECALLBACK v8; // rdx
  ETWENABLECALLBACK *v9; // rdx
  const struct _TlgProvider_t *v10; // rcx
  void *v11; // r8
  ACL *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  NTSTATUS ProcessorInfo; // edi
  char *v19; // rdi
  __int64 v20; // rbx
  NTSTATUS Callback; // eax
  char v22; // al
  unsigned __int8 v23; // al
  ULONG RecommendedSharedDataAlignment; // eax
  int v25; // eax
  unsigned int v26; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  SIZE_T v28; // rax
  SIZE_T v29; // rax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  KPushLock *v46; // rax
  __int64 v47; // rdi
  KPushLock *v48; // rax
  __int64 v49; // rbx
  int v51; // eax
  NTSTATUS v52; // eax
  int DeviceCharacteristics; // [rsp+20h] [rbp-60h]
  int DeviceCharacteristicsa; // [rsp+20h] [rbp-60h]
  int DeviceCharacteristicsb; // [rsp+20h] [rbp-60h]
  int DeviceCharacteristicsc; // [rsp+20h] [rbp-60h]
  char v57; // [rsp+80h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = 0;
  *(_BYTE *)(v2 + 496) = 0;
  *(_QWORD *)(v2 + 497) = 0LL;
  *(_QWORD *)(v2 + 505) = 0LL;
  *(_QWORD *)(v2 + 513) = 0LL;
  *(_DWORD *)(v2 + 521) = 0;
  *(_WORD *)(v2 + 525) = 0;
  *(_BYTE *)(v2 + 527) = 0;
  *(_BYTE *)v2 = 0;
  do
  {
    v6 = v4;
    if ( v4 >= 0x20uLL )
      _report_rangecheckfailure();
    ++v4;
    *((_BYTE *)&ndisWppEnabledLevelPerFlag + v6) = 0;
  }
  while ( v4 < 0x20u );
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_NDISTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  traceInited = 1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
  McGenEventRegister(&NDIS_PROVIDER_ID, v7, &NDIS_PROVIDER_ID_Context, &Microsoft_Windows_NDISHandle);
  McGenEventRegister(
    &SLEEPSTUDY_ETW_PROVIDER,
    v8,
    &SLEEPSTUDY_ETW_PROVIDER_Context,
    &Microsoft_Windows_SleepStudyHandle);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = (__int128)NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx(v10, v9, v11);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2, 0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 112), L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  if ( IoCreateDevice(DriverObject, 0, (PUNICODE_STRING)(v2 + 112), 0x12u, 0x100u, 0, &ndisDeviceObject) < 0 )
    goto LABEL_11;
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 352), L"\\Global??\\NDIS");
  IoCreateSymbolicLink((PUNICODE_STRING)(v2 + 352), (PUNICODE_STRING)(v2 + 112));
  ndisDeviceObject->Flags |= 0x10u;
  memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
  ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
  ndisCreateSecurityDescriptorEx(v12);
  CreateDeviceDriverSecurityDescriptor(DriverObject, v13, 0LL);
  CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v14, 0LL);
  LOBYTE(v15) = 1;
  CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v16, v15);
  IoWMIRegistrationControl(ndisDeviceObject, 1u);
  DriverObject->DriverUnload = 0LL;
  KeInitializeSpinLock(&ndisGlobalLock);
  KeInitializeSpinLock(&ndisMiniDriverListLock);
  KeInitializeSpinLock(&ndisProtocolListLock);
  KeInitializeSpinLock(&ndisMiniportListLock);
  KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
  KeInitializeSpinLock(&ndisGlobalNetBufferPoolListLock);
  KeInitializeSpinLock(&ndisGlobalNetBufferListPoolListLock);
  KeInitializeSpinLock(&ndisGlobalOpenListLock);
  KeInitializeSpinLock(&ndisGlobalFilterListLock);
  KeInitializeSpinLock(&ndisFilterDriverListLock);
  KeInitializeSpinLock(&ndisAbortedRequestsListLock);
  KeInitializeSpinLock(&ndisGlobalTimerListLock);
  ndisDmaAlignment = 8;
  ndisTimeIncrement = KeQueryTimeIncrement();
  ExInitializeResourceLite(&SharedMemoryResource);
  ndisReadRegistry();
  ndisFlags &= ~0x400u;
  ndisSystemProcess = (void *)-1LL;
  v17 = ndisInitializeThreadPool();
  ProcessorInfo = v17;
  if ( v17 >= 0 )
  {
LABEL_11:
    KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
    PoolAgingTicks.HighPart = 0;
    PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
    ndisInitializeStackTraces();
    ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0LL, 7);
    if ( (ndisFlags & 0x100) == 0 )
      ndisVerifierInitialization();
    v19 = (char *)&ndisAbortedRequests;
    v20 = 16LL;
    do
    {
      memset(v19, 0, 0xB0uLL);
      v19 += 248;
      --v20;
    }
    while ( v20 );
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 416), L"\\CallBack\\NdisBindUnbind");
    *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 48;
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 416;
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = 592;
    *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = 0LL;
    Callback = ExCreateCallback(
                 (PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject,
                 (POBJECT_ATTRIBUTES)(v2 + 368),
                 1u,
                 1u);
    if ( Callback < 0 )
      DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", Callback);
    if ( PoRegisterPowerSettingCallback(
           0LL,
           &GUID_ACDC_POWER_SOURCE,
           (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
           0LL,
           &ndisPowerStateCallbackHandle) < 0 )
      DbgPrint("Ndis: failed to register a power state Callback routine\n");
    if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, (PVOID)(v2 + 496), 0x20u) < 0 )
      goto LABEL_22;
    v22 = *(_BYTE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0);
    if ( v22 )
    {
      ndisAcOnLine = 1;
      if ( v22 == 1 )
      {
LABEL_22:
        if ( ZwPowerInformation(
               PlatformInformation,
               0LL,
               0,
               (PVOID)((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL),
               1u) < 0 )
        {
          v23 = ndisAoAcCapable;
        }
        else
        {
          v23 = *(_BYTE *)v2;
          ndisAoAcCapable = *(_BYTE *)v2;
        }
        if ( v23 || ndisAoAcTest )
        {
          *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = WNF_PO_SCENARIO_CHANGE;
          v51 = ExSubscribeWnfStateChange(v2 + 320, v2 + 528, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
          if ( v51 < 0 && (unsigned __int8)byte_1C0083714 >= 2u )
            WPP_SF_d(0xDu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v51);
          v52 = PoRegisterPowerSettingCallback(
                  0LL,
                  &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                  (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
                  0LL,
                  0LL);
          if ( v52 < 0 && (unsigned __int8)byte_1C0083714 >= 2u )
            WPP_SF_d(0xEu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v52);
          ndisDefaultPnPCapabilities &= ~0x10u;
        }
        qword_1C0084F10 = (__int64)&ndisGlobalPacketPoolList;
        ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
        qword_1C0084EC0 = (__int64)&ndisGlobalNetBufferPoolList;
        ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
        qword_1C0084ED0 = (__int64)&ndisGlobalNetBufferListPoolList;
        ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
        qword_1C0084BA8 = (__int64)&ndisGlobalTimerList;
        ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
        KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
        KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
        KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
        RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
        ndisPcwOffsetToPerCpuData = (RecommendedSharedDataAlignment + 255) & ~(RecommendedSharedDataAlignment - 1);
        if ( RecommendedSharedDataAlignment < 0x1C0 )
          RecommendedSharedDataAlignment = 448;
        ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1048960;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 256;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1684948046;
        ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, (PNET_BUFFER_LIST_POOL_PARAMETERS)(v2 + 8));
        if ( !ndisNetBufferListPool )
          DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 1684948046LL;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 786816;
        ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, (PNET_BUFFER_POOL_PARAMETERS)(v2 + 24));
        if ( !ndisNetBufferPool )
          DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
        v25 = ndisInitializePeriodicReceives();
        if ( v25 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
          WPP_SF_d(0xFu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v25);
        v26 = 2096 * ndisMaxNumberOfProcessors;
        PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(
                                       NonPagedPoolNx,
                                       2096 * ndisMaxNumberOfProcessors,
                                       0x2020444Eu);
        WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v26);
        }
        else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        {
          WPP_SF_(0x50u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
        }
        NdisAllocatePacketPoolEx((PNDIS_STATUS)(v2 + 40), &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
        NdisAllocatePacketPoolEx((PNDIS_STATUS)(v2 + 40), &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
        v28 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
        ExInitializeNPagedLookasideList(
          &ndisRcv100BytesLL,
          0LL,
          0LL,
          0x200u,
          ((v28 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
          0x7254444Eu,
          0);
        v29 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
        ExInitializeNPagedLookasideList(
          &ndisRcv1514BytesLL,
          0LL,
          0LL,
          0x200u,
          ((v29 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
          0x7254444Eu,
          0);
        ndisSetupDeviceInitialize();
        AllUsersAclRead = (PACL)ndisCreateAcl(v31, v30, v32, v33, DeviceCharacteristics, 1, 0x80000001);
        AllUsersAclWrite = (PACL)ndisCreateAcl(v35, v34, v36, v37, DeviceCharacteristicsa, 1, 0x40000002u);
        AllUsersAclReadWrite = (PACL)ndisCreateAcl(v39, v38, v40, v41, DeviceCharacteristicsb, 1, 0xC0000013);
        AdminsAcl = (PACL)ndisCreateAcl(v43, v42, v44, v45, DeviceCharacteristicsc, 0, 0xC0000013);
        ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
        ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
        ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
        ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
        ndisIfInitialize();
        ndisCmInitialize();
        IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
        KeInitializeEvent((PRKEVENT)(v2 + 328), NotificationEvent, 0);
        memset(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0x28uLL);
        memset(&WPP_MAIN_CB.DeviceExtension, 0, 0x28uLL);
        KeInitializeDpc((PRKDPC)(v2 + 432), ndisGetDpcWatchdogInfo, (PVOID)(v2 + 328));
        KeSetImportanceDpc((PRKDPC)(v2 + 432), HighImportance);
        KeInsertQueueDpc((PRKDPC)(v2 + 432), 0LL, 0LL);
        KeWaitForSingleObject((PVOID)(v2 + 328), Executive, 0, 0, 0LL);
        ProcessorInfo = ndisGetProcessorInfo();
        if ( ProcessorInfo < 0 )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x10u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids);
        }
        else
        {
          qsort(
            *(void **)&WPP_MAIN_CB.DeviceQueue.32,
            HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next),
            4uLL,
            ndisCompareProcNumInit);
          qword_1C00831D8 = (__int64)KeRegisterProcessorChangeCallback(
                                       (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                       0LL,
                                       0);
          if ( qword_1C00831D8 )
          {
            v46 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6762444Eu);
            v47 = (__int64)v46;
            if ( v46 )
            {
              KPushLock::KPushLock(v46 + 1);
              KPushLock::KPushLock((KPushLock *)(v47 + 16));
              KPushLock::KPushLock((KPushLock *)(v47 + 24));
              *(_QWORD *)(v47 + 36) = 0LL;
              *(_QWORD *)(v47 + 48) = 0LL;
              Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(v47 + 32, 0LL);
              *(_QWORD *)(v47 + 60) = 0LL;
              *(_QWORD *)(v47 + 72) = 0LL;
              Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow(v47 + 56, 0LL);
              qword_1C00837F0 = v47;
            }
            else
            {
              v47 = 0LL;
              qword_1C00837F0 = 0LL;
            }
            if ( !v47 )
              goto LABEL_67;
            v48 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2048uLL, 0x6741444Eu);
            v49 = (__int64)v48;
            if ( v48 )
            {
              KPushLock::KPushLock(v48 + 1);
              *(_QWORD *)(v49 + 8240) = 0LL;
              *(_QWORD *)(v49 + 24) = v49 + 16;
              *(_QWORD *)(v49 + 16) = v49 + 16;
              *(_DWORD *)(v49 + 32) = 0x10000;
              *(_QWORD *)(v49 + 40) = v49 + 48;
              RtlClearAllBits((PRTL_BITMAP)(v49 + 32));
              RtlSetBit((PRTL_BITMAP)(v49 + 32), 0);
              *(_QWORD *)(v49 + 8256) = v49 + 8248;
              *(_QWORD *)(v49 + 8248) = v49 + 8248;
            }
            else
            {
              v49 = 0LL;
            }
            qword_1C00837E0 = v49;
            if ( v49 )
            {
              ProcessorInfo = 0;
              ndisVBusNmrInitializeClient();
              IoRegisterPlugPlayNotification(
                EventCategoryDeviceInterfaceChange,
                0,
                &GUID_DEVINTERFACE_NET,
                DriverObject,
                (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ndisMiniportDeviceReadyNotification,
                0LL,
                &ndisMiniportDeviceReadyRegistrationHandle);
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 6029402;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = L"Per Processor Network Interface Card Activity";
              memset((void *)(v2 + 128), 0, 0x30uLL);
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 25;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = &`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = ndisCounterSetProviderCallback;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 48;
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 256;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 1LL;
              PcwRegister(&ndisNetworkInterfaceCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 128));
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 4980810;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = L"Per Processor Network Activity Cycles";
              memset((void *)(v2 + 176), 0, 0x30uLL);
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 256;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = &`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 13;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 80;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = ndisCounterSetProviderCallback;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 2LL;
              PcwRegister(&ndisNetworkActivityCyclesCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 176));
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 5374032;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = L"Physical Network Interface Card Activity";
              memset((void *)(v2 + 272), 0, 0x30uLL);
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 256;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = &`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 5;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = ndisPhysicalNicPcwProviderCallback;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = 3LL;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                    + 64;
              PcwRegister(&ndisPhysicalNICCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 272));
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1835034;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = L"RDMA Activity";
              memset((void *)(v2 + 224), 0, 0x30uLL);
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 256;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = &`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
              *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 10;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = ndisNdkPcwProviderCallback;
              *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 96;
              PcwRegister(&ndisNetworkDirectCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 224));
              ndisRegisterPDCounterSets();
              word_1C00823DE = ndisNblTrackerMode;
              word_1C00823E0 = ndisMaxNumberOfProcessors;
              qword_1C00823E8 = (__int64)&ndisGlobalNetBufferListPoolList;
              NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
              ndisDoesSystemSupportSriov();
              KeInitializeEvent(&g_WdiLoadInProgress.m_event, NotificationEvent, 0);
              KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
              ndisMpHookNmrInitializeClient();
              RtlRunOnceInitialize(&ndisNsiInitOnceBlock);
            }
            else
            {
LABEL_67:
              ProcessorInfo = -1073741670;
            }
          }
          else
          {
            ProcessorInfo = -1073741823;
          }
        }
        goto LABEL_44;
      }
    }
    else if ( !*(_BYTE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F1) )
    {
      ndisAcOnLine = 1;
      goto LABEL_22;
    }
    ndisAcOnLine = 0;
    goto LABEL_22;
  }
  if ( (unsigned __int8)byte_1C0083714 >= 2u )
    WPP_SF_d(0xCu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v17);
LABEL_44:
  ndisWrapperInitialized = 1;
  return ProcessorInfo;
}
