/*
 * XREFs of DriverEntry @ 0x1C01027E0
 * Callers:
 *     GsDriverEntry @ 0x1C01054B0 (GsDriverEntry.c)
 * Callees:
 *     NdisAllocateNetBufferListPool @ 0x1C0015EC0 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C001C310 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C001C854 (McGenEventRegister.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C001C86C (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     NdisAllocateNetBufferPool @ 0x1C001CA90 (NdisAllocateNetBufferPool.c)
 *     ndisVerifierInitialization @ 0x1C001CC48 (ndisVerifierInitialization.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C004E550 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     __report_rangecheckfailure @ 0x1C0073998 (__report_rangecheckfailure.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C009C274 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A12AC (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A45F8 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00ADB04 (ndisDoesSystemSupportSriov.c)
 *     ndisAllocateEventLog @ 0x1C00ADB60 (ndisAllocateEventLog.c)
 *     ndisInitializeStackTraces @ 0x1C00ADCF8 (ndisInitializeStackTraces.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C00ADD48 (ndisCreateSecurityDescriptorEx.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00ADDA0 (ndisCreateSecurityDescriptor.c)
 *     WppInitKm @ 0x1C00AFD40 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00AFDA8 (WppLoadTracingSupport.c)
 *     TraceLoggingRegisterEx @ 0x1C00B0874 (TraceLoggingRegisterEx.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00B3580 (--0KPushLock@@QEAA@XZ.c)
 *     ndisIfInitialize @ 0x1C0102000 (ndisIfInitialize.c)
 *     ndisInitializePeriodicReceives @ 0x1C01024DC (ndisInitializePeriodicReceives.c)
 *     ndisCreateGenericSD @ 0x1C01035D4 (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C0103688 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C0103910 (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0103D80 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C0103E30 (ndisVBusNmrInitializeClient.c)
 *     ndisGetProcessorInfo @ 0x1C0103EF8 (ndisGetProcessorInfo.c)
 *     ndisCmInitialize @ 0x1C010458C (ndisCmInitialize.c)
 *     ndisInitializeThreadPool @ 0x1C01046D0 (ndisInitializeThreadPool.c)
 *     ndisReadRegistry @ 0x1C0104778 (ndisReadRegistry.c)
 *     NdisDllInitialize @ 0x1C0105100 (NdisDllInitialize.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C01051EC (-ndisNblTrackerInitialize@@YAXXZ.c)
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
  int v24; // eax
  NTSTATUS v25; // eax
  ULONG RecommendedSharedDataAlignment; // eax
  int v27; // eax
  unsigned int v28; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *PoolWithTag; // rax
  SIZE_T v30; // rax
  SIZE_T v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  KPushLock *v48; // rax
  __int64 v49; // rdi
  KPushLock *v50; // rax
  __int64 v51; // rbx
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
    WPP_SF_(0xBu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
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
  rbc_InitializeFeatureStaging();
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 112), L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  if ( IoCreateDevice(DriverObject, 0, (PUNICODE_STRING)(v2 + 112), 0x12u, 0x100u, 0, &ndisDeviceObject) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 328), L"\\Global??\\NDIS");
    IoCreateSymbolicLink((PUNICODE_STRING)(v2 + 328), (PUNICODE_STRING)(v2 + 112));
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
    v17 = ndisInitializeThreadPool();
    ProcessorInfo = v17;
    if ( v17 < 0 )
    {
      if ( (unsigned __int8)byte_1C00895D4 >= 2u )
        WPP_SF_d(0xCu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v17);
      return ProcessorInfo;
    }
  }
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
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 344), L"\\CallBack\\NdisBindUnbind");
  *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = 48;
  *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 344;
  *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = 592;
  *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = 0LL;
  Callback = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, (POBJECT_ATTRIBUTES)(v2 + 384), 1u, 1u);
  if ( Callback < 0 )
    DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", Callback);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_ACDC_POWER_SOURCE,
         (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
         0LL,
         &ndisPowerStateCallbackHandle) < 0 )
    DbgPrint("Ndis: failed to register a power state Callback routine\n");
  if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, (PVOID)(v2 + 496), 0x20u) >= 0 )
  {
    v22 = *(_BYTE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0);
    if ( v22 )
    {
      ndisAcOnLine = 1;
      if ( v22 == 1 )
        goto LABEL_27;
    }
    else if ( !*(_BYTE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F1) )
    {
      ndisAcOnLine = 1;
      goto LABEL_27;
    }
    ndisAcOnLine = 0;
  }
LABEL_27:
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, (PVOID)((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL), 1u) < 0 )
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
    v24 = ExSubscribeWnfStateChange(v2 + 320, v2 + 528, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v24 < 0 && (unsigned __int8)byte_1C00895D4 >= 2u )
      WPP_SF_d(0xDu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v24);
    v25 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
            0LL,
            0LL);
    if ( v25 < 0 && (unsigned __int8)byte_1C00895D4 >= 2u )
      WPP_SF_d(0xEu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v25);
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  qword_1C008AD38 = (__int64)&ndisGlobalPacketPoolList;
  ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
  qword_1C008AD20 = (__int64)&ndisGlobalNetBufferPoolList;
  ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
  qword_1C008AD00 = (__int64)&ndisGlobalNetBufferListPoolList;
  ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
  qword_1C0089960 = (__int64)&ndisGlobalTimerList;
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
  ndisNetBufferPool = (struct _NDIS_NET_BUFFER_POOL *)NdisAllocateNetBufferPool(
                                                        0LL,
                                                        (PNET_BUFFER_POOL_PARAMETERS)(v2 + 24));
  if ( !ndisNetBufferPool )
    DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
  v27 = ndisInitializePeriodicReceives();
  if ( v27 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
    WPP_SF_d(0xFu, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v27);
  v28 = 2096 * ndisMaxNumberOfProcessors;
  PoolWithTag = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePoolWithTag(
                                                    NonPagedPoolNx,
                                                    2096 * ndisMaxNumberOfProcessors,
                                                    0x2020444Eu);
  ndisPerProcRcvTrackers = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v28);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x50u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
  }
  NdisAllocatePacketPoolEx((PNDIS_STATUS)(v2 + 40), &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
  NdisAllocatePacketPoolEx((PNDIS_STATUS)(v2 + 40), &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
  v30 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv100BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v30 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7254444Eu,
    0);
  v31 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv1514BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
    0x7254444Eu,
    0);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisSetupDeviceListLock);
  AllUsersAclRead = (PACL)ndisCreateAcl(v33, v32, v34, v35, DeviceCharacteristics, 1, 0x80000001);
  AllUsersAclWrite = (PACL)ndisCreateAcl(v37, v36, v38, v39, DeviceCharacteristicsa, 1, 0x40000002u);
  AllUsersAclReadWrite = (PACL)ndisCreateAcl(v41, v40, v42, v43, DeviceCharacteristicsb, 1, 0xC0000013);
  AdminsAcl = (PACL)ndisCreateAcl(v45, v44, v46, v47, DeviceCharacteristicsc, 0, 0xC0000013);
  ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
  ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
  ndisIfInitialize();
  ndisCmInitialize();
  IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
  KeInitializeEvent((PRKEVENT)(v2 + 360), NotificationEvent, 0);
  memset(&DpcWatchdogCount, 0, 0x28uLL);
  memset(&DpcTimeCount, 0, 0x28uLL);
  KeInitializeDpc((PRKDPC)(v2 + 432), ndisGetDpcWatchdogInfo, (PVOID)(v2 + 360));
  KeSetImportanceDpc((PRKDPC)(v2 + 432), HighImportance);
  KeInsertQueueDpc((PRKDPC)(v2 + 432), 0LL, 0LL);
  KeWaitForSingleObject((PVOID)(v2 + 360), Executive, 0, 0, 0LL);
  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo >= 0 )
  {
    qsort(
      ndisRssProcessors,
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine),
      4uLL,
      (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
    qword_1C0089108 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    if ( qword_1C0089108 )
    {
      v48 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x6762444Eu);
      v49 = (__int64)v48;
      if ( v48 )
      {
        KPushLock::KPushLock(v48 + 1);
        KPushLock::KPushLock((KPushLock *)(v49 + 16));
        KPushLock::KPushLock((KPushLock *)(v49 + 24));
        *(_QWORD *)(v49 + 36) = 0LL;
        *(_QWORD *)(v49 + 48) = 0LL;
        Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(v49 + 32, 0LL);
        *(_QWORD *)(v49 + 60) = 0LL;
        *(_QWORD *)(v49 + 72) = 0LL;
        Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::grow(v49 + 56, 0LL);
        qword_1C0089678 = v49;
      }
      else
      {
        v49 = 0LL;
        qword_1C0089678 = 0LL;
      }
      if ( !v49 )
        return -1073741670;
      v50 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2048uLL, 0x6741444Eu);
      v51 = (__int64)v50;
      if ( v50 )
      {
        KPushLock::KPushLock(v50 + 1);
        *(_QWORD *)(v51 + 8240) = 0LL;
        *(_QWORD *)(v51 + 24) = v51 + 16;
        *(_QWORD *)(v51 + 16) = v51 + 16;
        *(_DWORD *)(v51 + 32) = 0x10000;
        *(_QWORD *)(v51 + 40) = v51 + 48;
        RtlClearAllBits((PRTL_BITMAP)(v51 + 32));
        RtlSetBit((PRTL_BITMAP)(v51 + 32), 0);
        *(_QWORD *)(v51 + 8256) = v51 + 8248;
        *(_QWORD *)(v51 + 8248) = v51 + 8248;
      }
      else
      {
        v51 = 0LL;
      }
      qword_1C0089668 = v51;
      if ( v51 )
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
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 4980810;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = L"Per Processor Network Activity Cycles";
        memset((void *)(v2 + 176), 0, 0x30uLL);
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 256;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = &`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 13;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 64;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = ndisCounterSetProviderCallback;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 2LL;
        PcwRegister(&ndisNetworkActivityCyclesCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 176));
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 5374032;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = L"Physical Network Interface Card Activity";
        memset((void *)(v2 + 224), 0, 0x30uLL);
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 256;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF8) = &`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 5;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x100) = ndisPhysicalNicPcwProviderCallback;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x108) = 3LL;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 80;
        PcwRegister(&ndisPhysicalNICCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 224));
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1835034;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = L"RDMA Activity";
        memset((void *)(v2 + 272), 0, 0x30uLL);
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x110) = 256;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x128) = &`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
        *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 10;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = ndisNdkPcwProviderCallback;
        *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x118) = ((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                              + 96;
        PcwRegister(&ndisNetworkDirectCounterSet, (PPCW_REGISTRATION_INFORMATION)(v2 + 272));
        ndisRegisterPDCounterSets();
        word_1C008885E = ndisNblTrackerMode;
        word_1C0088860 = ndisMaxNumberOfProcessors;
        qword_1C0088868 = (__int64)&ndisGlobalNetBufferListPoolList;
        NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
        ndisDoesSystemSupportSriov();
        KeInitializeEvent(&g_WdiLoadInProgress.m_event, NotificationEvent, 0);
        KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
        ndisMpHookNmrInitializeClient();
        RtlRunOnceInitialize(&ndisNsiInitOnceBlock);
      }
      else
      {
        return -1073741670;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x10u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
  }
  return ProcessorInfo;
}
