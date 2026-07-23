/*
 * XREFs of IoInitSystemPreDrivers @ 0x14079EDEC
 * Callers:
 *     IoInitSystem @ 0x1407936BC (IoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeGenericTableAvl @ 0x1400C1E1C (RtlInitializeGenericTableAvl.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x14012FFD4 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x14013CCC8 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140143590 (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14014BDF0 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x14014C4B0 (IopInitializeSystemVariableService.c)
 *     VslpIumPhase4Initialize @ 0x14014C7E0 (VslpIumPhase4Initialize.c)
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SecureDump_PrepareForInit @ 0x1401CBB40 (SecureDump_PrepareForInit.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x1403D5368 (ExInitializeSystemLookasideList.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     NtCreateEvent @ 0x14041DCA0 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExSubscribeWnfStateChange @ 0x1404D1B24 (ExSubscribeWnfStateChange.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     EtwWriteStartScenario @ 0x140547FD0 (EtwWriteStartScenario.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 *     IoInitializeProcessor @ 0x140552F84 (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 *     PsLocateSystemDlls @ 0x140554B44 (PsLocateSystemDlls.c)
 *     SeAuditBootConfiguration @ 0x14056EE10 (SeAuditBootConfiguration.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14057EF2C (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140580EDC (IopQueryProcessorInitValues.c)
 *     PpPagePathAssign @ 0x14062CC20 (PpPagePathAssign.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     IopStoreArcInformation @ 0x14079A6CC (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 *     WMIInitialize @ 0x14079DDF8 (WMIInitialize.c)
 *     WheaInitialize @ 0x1407A0948 (WheaInitialize.c)
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407AB1C0 (IopInitCrashDumpDuringSysInit.c)
 *     SmInitSystem @ 0x1407B62B8 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x1407B80E0 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x1407B8C3C (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x1407B901C (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x1407B980C (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x1407BB2D8 (PnpMarkHalDeviceNode.c)
 *     KitpInitAitSampleRate @ 0x1407BB31C (KitpInitAitSampleRate.c)
 *     PoInitDriverServices @ 0x1407BBDBC (PoInitDriverServices.c)
 *     IopCreateRootDirectories @ 0x1407BBEC0 (IopCreateRootDirectories.c)
 *     IopProtectSystemPartition @ 0x1407BC468 (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x1407BCB20 (IopInitializeSessionNotifications.c)
 */

char __fastcall IoInitSystemPreDrivers(UNICODE_STRING *Context)
{
  int v2; // eax
  ULONG ActiveProcessorCount; // ebx
  ULONG v4; // eax
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r9
  KIRQL v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG v13; // ebx
  int SystemDlls; // eax
  _BYTE OutputBuffer[8]; // [rsp+48h] [rbp-69h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-61h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-59h] BYREF
  PVOID Object; // [rsp+60h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-19h] BYREF
  int v21; // [rsp+A8h] [rbp-9h] BYREF
  __int64 *v22; // [rsp+B0h] [rbp-1h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+7h] BYREF
  __int16 v24[6]; // [rsp+C8h] [rbp+17h] BYREF
  int v25; // [rsp+D4h] [rbp+23h]
  int v26; // [rsp+D8h] [rbp+27h]
  int v27; // [rsp+DCh] [rbp+2Bh]
  int v28; // [rsp+E0h] [rbp+2Fh]

  v21 = 0x1000000;
  OutputBuffer[0] = 0;
  v22 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  qword_1403208D8 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_1403208E8 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_1403208F8 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140320908 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140320918 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140320928 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140320938 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140320948 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140320958 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140320968 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingLock = 0LL;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  if ( !pIofCompleteRequest )
    pIofCompleteRequest = (void (__stdcall *)(PIRP, CCHAR))IopfCompleteRequest;
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
  IopQueryProcessorInitValues((__int64)v24);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    v24[3],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v27,
    1819308617,
    v24[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v26,
    1836085833,
    v24[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v25,
    1936749129,
    v24[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v28,
    543974477,
    v24[4],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  for ( ResultLength = 0; v4 < ActiveProcessorCount; ResultLength = v4 )
  {
    IoInitializeProcessor(KiProcessorBlock[v4], v24);
    v4 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_1403209A8 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
    return 0;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    qword_140320AD8 = (__int64)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    LODWORD(IopIrpStackProfilerDpc) = 275;
    qword_140320AE0 = 0LL;
    qword_140320AF8 = 0LL;
    qword_140320AD0 = 0LL;
  }
  v6 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x50uLL);
  *v6 = 4;
  v7 = IopDiskIoAttributionBaseIoSize;
  if ( (unsigned int)IopDiskIoAttributionBaseIoSize >= 0x400000 )
  {
    v7 = 0x400000;
    IopDiskIoAttributionBaseIoSize = 0x400000;
  }
  if ( v7 <= 0x1000 )
    IopDiskIoAttributionBaseIoSize = 4096;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
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
                               || dword_14076063C != 4
                               || dword_140760644 == 4;
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
  qword_140320BA8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140320BE8 = (__int64)&qword_140320BE0;
  qword_140320BE0 = (__int64)&qword_140320BE0;
  Semaphore.Header.WaitListHead.Blink = &Semaphore.Header.WaitListHead;
  Semaphore.Header.WaitListHead.Flink = &Semaphore.Header.WaitListHead;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_140320C48 = (__int64)&qword_140320C40;
  qword_140320C40 = &qword_140320C40;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&IopTimer.Processor = 0LL;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_140320BF0 = 0LL;
  Semaphore.Header.Type = 5;
  Semaphore.Header.Size = 8;
  Semaphore.Header.SignalState = 0;
  Semaphore.Limit = 0x7FFFFFFF;
  byte_140320C18 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140320C50 = 0LL;
  byte_140320C78 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
    goto LABEL_31;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_140320CE0.Header.WaitListHead.Blink = &stru_140320CE0.Header.WaitListHead;
  stru_140320CE0.Header.WaitListHead.Flink = &stru_140320CE0.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_140320CE0.Header.Lock) = 0;
  stru_140320CE0.Header.Size = 6;
  stru_140320CE0.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
    goto LABEL_31;
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, 0LL) < 0 )
    goto LABEL_31;
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_1402F3840();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, (__int64)Context) )
    return 0;
  EtwInitialize(0);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0
    || EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
  {
    return 0;
  }
  SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)&Context[15].Length + 2496LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v8);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
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
    KeReleaseSpinLock(&IopErrorLogLock, v9);
  }
  WheaInitialize(Context, 0LL);
  if ( (int)IopStoreArcInformation((__int64)Context) < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, (ETWENABLECALLBACK *)1) < 0 )
    goto LABEL_31;
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
  if ( HvlPhase2Initialize((__int64)Context) < 0 )
    return 0;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, 0LL);
  VslpIumPhase4Initialize();
  if ( PnpEtwHandle )
    EtwWriteStartScenario(
      (ULONG_PTR *)PnpEtwHandle,
      &KMPnPEvt_DriverInitPhase_Start,
      &PnpDriverInitPhaseActivityId,
      0,
      0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_1403202C8 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v10, OutputBuffer);
  if ( ForceDumpDisabled || OutputBuffer[0] )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  IopInitializeIoRate(v12, v11);
  if ( !(unsigned int)IopInitializeBootDrivers(Context) )
    goto LABEL_31;
  if ( !PoInitSystem(2, (__int64)Context) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, OutputBuffer, 1u) >= 0 && OutputBuffer[0] )
  {
    ExSubscribeWnfStateChange(
      (__int64)&VslpIumCsWnfSubscription,
      (__int64)&WNF_PO_SCENARIO_CHANGE,
      1,
      0,
      (__int64)VslpConnectedStandbyWnfCallback,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_LOW_POWER_EPOCH,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
    PoRegisterPowerSettingCallback(
      0LL,
      &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
      (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
      0LL,
      0LL);
  }
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
  {
    EtwRegister(&LiveDumpProvGuid, (PETWENABLECALLBACK)IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
    TraceLoggingRegisterEx(&stru_1402F3560, 0LL, 0LL);
  }
  if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
    IopRemoveDumpCapsuleSupport();
  PpLastGoodDoBootProcessing();
  v13 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v13;
  if ( SystemDlls < 0
    || (PfSnBeginBootPhase(0), !(unsigned __int8)IopReassignSystemRoot(Context, &v21))
    || !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
LABEL_31:
    HeadlessKernelAddLogEntry();
    return 0;
  }
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
  if ( !WMIInitialize(1, 0LL) )
    return 0;
  WheaInitialize(Context, 1LL);
  return 1;
}
