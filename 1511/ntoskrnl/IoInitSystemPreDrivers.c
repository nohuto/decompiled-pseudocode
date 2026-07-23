/*
 * XREFs of IoInitSystemPreDrivers @ 0x140757B24
 * Callers:
 *     IoInitSystem @ 0x140763E54 (IoInitSystem.c)
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x140003214 (HeadlessKernelAddLogEntry.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x1400909E4 (RtlInitializeGenericTableAvl.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14013A67C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x140141FF0 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1401423C8 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x140142738 (HvlPhase2Initialize.c)
 *     IopInitializeIoQos @ 0x1401427EC (IopInitializeIoQos.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x1403A7B7C (ExInitializeSystemLookasideList.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x14042E720 (NtCreateEvent.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     ExSubscribeWnfStateChange @ 0x1404C45E0 (ExSubscribeWnfStateChange.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x1405045C4 (EtwWriteStartScenario.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     EtwInitialize @ 0x14052554C (EtwInitialize.c)
 *     IoInitializeProcessor @ 0x1405258EC (IoInitializeProcessor.c)
 *     SeAuditBootConfiguration @ 0x14053CB28 (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x14053F938 (PsLocateSystemDlls.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140549E00 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x14054AD5C (IopQueryProcessorInitValues.c)
 *     PpPagePathAssign @ 0x1406028A8 (PpPagePathAssign.c)
 *     IopStoreArcInformation @ 0x140750ED8 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 *     WMIInitialize @ 0x1407572D0 (WMIInitialize.c)
 *     WheaInitialize @ 0x140757730 (WheaInitialize.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140760E7C (IopInitCrashDumpDuringSysInit.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140768658 (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x14076A984 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x14076E2E0 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x14076E84C (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x14076EB74 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x14076F68C (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x140770328 (PnpMarkHalDeviceNode.c)
 *     KitpInitAitSampleRate @ 0x14077066C (KitpInitAitSampleRate.c)
 *     PoInitDriverServices @ 0x1407710B0 (PoInitDriverServices.c)
 *     IopCreateRootDirectories @ 0x14077127C (IopCreateRootDirectories.c)
 *     IopProtectSystemPartition @ 0x140771860 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x140771C70 (IopInitializeSessionNotifications.c)
 */

char __fastcall IoInitSystemPreDrivers(UNICODE_STRING *Context)
{
  int v2; // eax
  ULONG ActiveProcessorCount; // ebx
  ULONG v4; // eax
  _DWORD *v5; // rbx
  __int64 v6; // r9
  KIRQL v7; // bl
  ULONG v8; // ebx
  int SystemDlls; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE OutputBuffer[8]; // [rsp+40h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-69h] BYREF
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  int v19; // [rsp+A0h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp-11h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v22[6]; // [rsp+C0h] [rbp+7h] BYREF
  int v23; // [rsp+CCh] [rbp+13h]
  int v24; // [rsp+D0h] [rbp+17h]
  int v25; // [rsp+D4h] [rbp+1Bh]
  int v26; // [rsp+D8h] [rbp+1Fh]

  v19 = 0x1000000;
  v20 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  qword_1402FB378 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_1402FB388 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_1402FB398 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_1402FB3A8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_1402FB3B8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_1402FB3C8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_1402FB3D8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_1402FB3E8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_1402FB3F8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_1402FB408 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingLock = 0LL;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  if ( !pIofCompleteRequest )
    pIofCompleteRequest = (__int64 (__fastcall *)(_QWORD, _QWORD))IopfCompleteRequest;
  if ( !pIoAllocateIrp )
    pIoAllocateIrp = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))IopAllocateIrpPrivate;
  if ( !pIoFreeIrp )
    pIoFreeIrp = (__int64 (__fastcall *)(_QWORD))IopFreeIrp;
  v2 = 0;
  IopIrpStackProfilerFlags = 0;
  IopUniqueDeviceObjectNumber = 0;
  if ( !IopLargeIrpStackLocations )
  {
    v2 = 1;
    IopLargeIrpStackLocations = 14;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v2 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)v22);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    v22[3],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v25,
    1819308617,
    v22[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v24,
    1836085833,
    v22[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v23,
    1936749129,
    v22[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v26,
    543974477,
    v22[4],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  for ( ResultLength = 0; v4 < ActiveProcessorCount; ResultLength = v4 )
  {
    IoInitializeProcessor(KiProcessorBlock[v4], v22);
    v4 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_1402FB438 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( (unsigned __int8)IopInitializeReserveIrps() )
  {
    if ( (IopIrpStackProfilerFlags & 3) != 0 )
    {
      IopIrpStackProfilerMinSizeThreshold = 400;
      qword_1402FB558 = (__int64)IopIrpStackProfilerDpcRoutine;
      IopIrpStackProfilerFlags |= 4u;
      IopIrpStackProfilerSampleSize = 2000;
      LODWORD(IopIrpStackProfilerDpc) = 275;
      qword_1402FB560 = 0LL;
      qword_1402FB578 = 0LL;
      qword_1402FB550 = 0LL;
    }
    v5 = IopRevocationExtension;
    memset(IopRevocationExtension, 0, 0x50uLL);
    *v5 = 4;
    ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    {
      IopErrorLogDisabledThisBoot = 1;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Start");
      IopErrorLogDisabledThisBoot = NtQueryValueKey(
                                      KeyHandle,
                                      &DestinationString,
                                      KeyValuePartialInformation,
                                      IoInitSystem_valueBuffer,
                                      0x20u,
                                      &ResultLength) < 0
                                 || dword_1407175FC != 4
                                 || dword_140717604 == 4;
      ObCloseHandle(KeyHandle, 0);
    }
    *(_QWORD *)&IopTimer.Header.Lock = 9LL;
    IopTimerQueueHead.Blink = &IopTimerQueueHead;
    IopTimerQueueHead.Flink = &IopTimerQueueHead;
    IopTimerLock = 0LL;
    IopTimerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)IopTimerDispatch;
    IopTimerDpc.DeferredContext = &IopTimerCount;
    IopTimer.Header.WaitListHead.Blink = &IopTimer.Header.WaitListHead;
    IopTimer.Header.WaitListHead.Flink = &IopTimer.Header.WaitListHead;
    qword_1402FB628 = (__int64)&IopDeadIrps;
    IopDeadIrps = (__int64)&IopDeadIrps;
    IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
    qword_1402FB668 = (__int64)&qword_1402FB660;
    qword_1402FB660 = (__int64)&qword_1402FB660;
    Semaphore.Header.WaitListHead.Blink = &Semaphore.Header.WaitListHead;
    Semaphore.Header.WaitListHead.Flink = &Semaphore.Header.WaitListHead;
    IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
    qword_1402FB6C8 = (__int64)&qword_1402FB6C0;
    qword_1402FB6C0 = &qword_1402FB6C0;
    IopTimerDpc.TargetInfoAsUlong = 275;
    IopTimerDpc.DpcData = 0LL;
    IopTimerDpc.ProcessorHistory = 0LL;
    IopTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&IopTimer.Processor = 0LL;
    IopHardError.Parameter = 0LL;
    IopHardError.List.Flink = 0LL;
    qword_1402FB670 = 0LL;
    Semaphore.Header.Type = 5;
    Semaphore.Header.Size = 8;
    Semaphore.Header.SignalState = 0;
    Semaphore.Limit = 0x7FFFFFFF;
    byte_1402FB698 = 0;
    IopKeepAliveTracker.Parameter = 0LL;
    IopKeepAliveTracker.List.Flink = 0LL;
    qword_1402FB6D0 = 0LL;
    byte_1402FB6F8 = 0;
    IopErrorLogSessionPending = 1;
    RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 528;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
    {
      HeadlessKernelAddLogEntry();
    }
    else
    {
      ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      IopLinkTrackingServiceEvent = (__int64)Object;
      IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
      IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
      stru_1402FB760.Header.WaitListHead.Blink = &stru_1402FB760.Header.WaitListHead;
      stru_1402FB760.Header.WaitListHead.Flink = &stru_1402FB760.Header.WaitListHead;
      IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
      IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
      LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
      IopMountCompletionEvent.Header.Size = 6;
      IopMountCompletionEvent.Header.SignalState = 0;
      LOWORD(stru_1402FB760.Header.Lock) = 0;
      stru_1402FB760.Header.Size = 6;
      stru_1402FB760.Header.SignalState = 0;
      LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
      IopLinkTrackingPortObject.Header.Size = 6;
      IopLinkTrackingPortObject.Header.SignalState = 1;
      ObCloseHandle(KeyHandle, 0);
      if ( (unsigned __int8)IopCreateRootDirectories() )
      {
        if ( (int)IopInitializeSessionNotifications() < 0 )
        {
          IopInitFailCode = 15;
        }
        else if ( IopInitializePlugPlayServices((__int64)Context, 0LL) < 0 )
        {
          HeadlessKernelAddLogEntry();
          IopInitFailCode = 4;
        }
        else
        {
          KseInitialize((__int64)Context, 0);
          PoInitDriverServices();
          off_1402D2A20();
          PnpMarkHalDeviceNode();
          if ( WMIInitialize(0, (__int64)Context) )
          {
            EtwInitialize(0);
            if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
            {
              IopInitFailCode = 16;
            }
            else if ( (_BYTE)dword_140381118 && EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
            {
              IopInitFailCode = 11;
            }
            else
            {
              SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)&Context[15].Length + 2496LL));
              BootApplicationPersistentDataProcess(1LL);
              BapdRecordFirmwareBootStats();
              KdInitialize(2LL, 0LL, &KdpContext, v6);
              if ( !IopErrorLogDisabledThisBoot )
              {
                v7 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
                if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
                {
                  IopErrorLogSessionPending = 0;
                }
                else
                {
                  IopErrorLogWorkItem.Parameter = 0LL;
                  IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
                  IopErrorLogWorkItem.List.Flink = 0LL;
                  ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
                }
                KeReleaseSpinLock(&IopErrorLogLock, v7);
              }
              IoEtwHandle = 0LL;
              WheaInitialize((__int64)Context, 0);
              if ( (int)IopStoreArcInformation((__int64)Context) >= 0 )
              {
                if ( IopInitializePlugPlayServices((__int64)Context, (ETWENABLECALLBACK *)1) < 0 )
                {
                  HeadlessKernelAddLogEntry();
                  IopInitFailCode = 5;
                }
                else
                {
                  RtlInitializeGenericTableAvl(
                    &IoStatusBlockRangeTable,
                    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
                    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
                    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
                    0LL);
                  IoStatusBlockRangeTableLock.Count = 1;
                  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
                  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
                  IoStatusBlockRangeTableLock.Owner = 0LL;
                  IoStatusBlockRangeTableLock.Contention = 0;
                  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
                  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
                  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
                  KitpInitAitSampleRate(Context);
                  if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
                    KitEtwHandle = 0LL;
                  KseInitialize((__int64)Context, 1);
                  HvlPhase2Initialize((__int64)Context);
                  if ( PnpEtwHandle )
                    EtwWriteStartScenario(
                      (ULONG_PTR *)PnpEtwHandle,
                      &KMPnPEvt_DriverInitPhase_Start,
                      &PnpDriverInitPhaseActivityId,
                      0,
                      0LL);
                  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
                  qword_1402FAD88 = (__int64)&ActiveConnectList;
                  ActiveConnectList = (__int64)&ActiveConnectList;
                  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
                  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
                  ActiveConnectListLock.Header.Size = 6;
                  ActiveConnectListLock.Header.SignalState = 1;
                  if ( (int)IopInitializePassiveInterruptServices() >= 0 )
                  {
                    IopInitDumpCapsuleSupport();
                    if ( (unsigned int)IopInitializeBootDrivers(Context) )
                    {
                      if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
                        KeBugCheck(0xA0u);
                      SmInitSystem(1LL);
                      EtwInitialize(1u);
                      if ( (HvlpFlags & 0x2000) != 0
                        && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0
                        && OutputBuffer[0] )
                      {
                        ExSubscribeWnfStateChange(
                          (__int64)&HvlpIumCsWnfSubscription,
                          (__int64)&WNF_PO_SCENARIO_CHANGE,
                          1,
                          0,
                          (__int64)HvlpConnectedStandbyWnfCallback,
                          0LL);
                        PoRegisterPowerSettingCallback(
                          0LL,
                          &GUID_LOW_POWER_EPOCH,
                          (PPOWER_SETTING_CALLBACK)HvlpConnectedStandbyPoCallback,
                          0LL,
                          0LL);
                        PoRegisterPowerSettingCallback(
                          0LL,
                          &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                          (PPOWER_SETTING_CALLBACK)HvlpConnectedStandbyPoCallback,
                          0LL,
                          0LL);
                      }
                      IopInitializeSystemVariableService();
                      EtwRegister(
                        &LiveDumpProvGuid,
                        (PETWENABLECALLBACK)IopLiveDumpTracingControlCallback,
                        0LL,
                        &IopLiveDumpEtwRegHandle);
                      TraceLoggingRegisterEx(&stru_1402D1D70, 0LL, 0LL);
                      if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
                        IopRemoveDumpCapsuleSupport();
                      PpLastGoodDoBootProcessing();
                      v8 = NtGlobalFlag;
                      NtGlobalFlag |= 0x40000u;
                      SystemDlls = PsLocateSystemDlls();
                      NtGlobalFlag = v8;
                      if ( SystemDlls < 0 )
                      {
                        HeadlessKernelAddLogEntry();
                        IopInitFailCode = 7;
                      }
                      else
                      {
                        PfSnBeginBootPhase(0);
                        if ( (unsigned __int8)IopReassignSystemRoot(Context, &v19) )
                        {
                          if ( (unsigned __int8)IopProtectSystemPartition(Context) )
                          {
                            if ( NtVhdBootFile )
                            {
                              ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
                              ObjectAttributes.Length = 48;
                              ObjectAttributes.RootDirectory = 0LL;
                              ObjectAttributes.Attributes = 576;
                              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                              if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
                              {
                                if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
                                {
                                  PpPagePathAssign((struct _FILE_OBJECT *)Object);
                                  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
                                }
                                ZwClose(KeyHandle);
                              }
                            }
                            if ( WMIInitialize(1, 0LL) )
                            {
                              WheaInitialize((__int64)Context, 1u);
                              IopInitializeIoQos(v11, v10);
                              return 1;
                            }
                          }
                          else
                          {
                            HeadlessKernelAddLogEntry();
                            IopInitFailCode = 10;
                          }
                        }
                        else
                        {
                          HeadlessKernelAddLogEntry();
                          IopInitFailCode = 9;
                        }
                      }
                    }
                    else
                    {
                      HeadlessKernelAddLogEntry();
                      IopInitFailCode = 6;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        HeadlessKernelAddLogEntry();
        IopInitFailCode = 3;
      }
    }
  }
  else
  {
    IopInitFailCode = 1;
  }
  return 0;
}
