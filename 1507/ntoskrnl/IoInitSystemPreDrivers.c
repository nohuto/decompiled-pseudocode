/*
 * XREFs of IoInitSystemPreDrivers @ 0x1407C116C
 * Callers:
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     HeadlessKernelAddLogEntry @ 0x1401539BC (HeadlessKernelAddLogEntry.c)
 *     KeIpiGenericCall @ 0x140156B40 (KeIpiGenericCall.c)
 *     IopInitializeIoQos @ 0x14015EAF0 (IopInitializeIoQos.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14016C07C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitDumpCapsuleSupport @ 0x14016FFFC (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x1401702BC (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x140170560 (HvlPhase2Initialize.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     ExInitializeSystemLookasideList @ 0x1403F7CAC (ExInitializeSystemLookasideList.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwWriteStartScenario @ 0x140584044 (EtwWriteStartScenario.c)
 *     EtwInitialize @ 0x140595964 (EtwInitialize.c)
 *     IoInitializeProcessor @ 0x140595D04 (IoInitializeProcessor.c)
 *     SeAuditBootConfiguration @ 0x1405A1EC8 (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x1405B5788 (PsLocateSystemDlls.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405C1974 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1405C21E8 (IopQueryProcessorInitValues.c)
 *     PpPagePathAssign @ 0x14067D6C8 (PpPagePathAssign.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 *     WMIInitialize @ 0x1407C07E4 (WMIInitialize.c)
 *     WheaInitialize @ 0x1407C0D60 (WheaInitialize.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1407D546C (IopInitCrashDumpDuringSysInit.c)
 *     BootApplicationPersistentDataProcess @ 0x1407DC974 (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x1407DEB40 (SmInitSystem.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 *     IopInitializePassiveInterruptServices @ 0x1407E3660 (IopInitializePassiveInterruptServices.c)
 *     IopInitializeReserveIrps @ 0x1407E3D08 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x1407E431C (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x1407E4D04 (IopReassignSystemRoot.c)
 *     PnpMarkHalDeviceNode @ 0x1407E6258 (PnpMarkHalDeviceNode.c)
 *     KitpInitAitSampleRate @ 0x1407E659C (KitpInitAitSampleRate.c)
 *     PoInitDriverServices @ 0x1407E74CC (PoInitDriverServices.c)
 *     IopCreateRootDirectories @ 0x1407E7698 (IopCreateRootDirectories.c)
 *     IopProtectSystemPartition @ 0x1407E7F0C (IopProtectSystemPartition.c)
 *     IopInitializeSessionNotifications @ 0x1407E870C (IopInitializeSessionNotifications.c)
 */

char __fastcall IoInitSystemPreDrivers(char *Context)
{
  int v2; // eax
  ULONG v3; // ebx
  ULONG v4; // eax
  _DWORD *v6; // rbx
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // bl
  ULONG v9; // ebx
  int SystemDlls; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HANDLE KeyHandle; // [rsp+48h] [rbp-79h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-71h] BYREF
  PVOID v15; // [rsp+58h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-31h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-21h] BYREF
  int v19; // [rsp+A8h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+B0h] [rbp-11h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-9h] BYREF
  __int16 v22[6]; // [rsp+C8h] [rbp+7h] BYREF
  int v23; // [rsp+D4h] [rbp+13h]
  int v24; // [rsp+D8h] [rbp+17h]
  int v25; // [rsp+DCh] [rbp+1Bh]
  int v26; // [rsp+E0h] [rbp+1Fh]
  __int64 retaddr; // [rsp+120h] [rbp+5Fh]

  v19 = 0x1000000;
  v20 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  qword_14034B7F8 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_14034B808 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_14034B818 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_14034B828 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_14034B838 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_14034B848 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_14034B858 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_14034B868 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_14034B878 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_14034B888 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingLock = 0LL;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
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
  v3 = KeNumberProcessors_0;
  v4 = 0;
  for ( ResultLength = 0; v4 < v3; ResultLength = v4 )
  {
    IoInitializeProcessor(KiProcessorBlock[v4], v22);
    v4 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_14034B8B8 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
  {
    IopInitFailCode = 1;
    return 0;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    qword_14034B9D8 = (__int64)IopIrpStackProfilerDpcRoutine;
    IopIrpStackProfilerFlags |= 4u;
    IopIrpStackProfilerSampleSize = 2000;
    IopIrpStackProfilerDpc = 275;
    qword_14034B9E0 = 0LL;
    qword_14034B9F8 = 0LL;
    qword_14034B9D0 = 0LL;
  }
  v6 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x48uLL);
  *v6 = 4;
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
                               || dword_14080B634 != 4
                               || dword_14080B63C == 4;
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
  qword_14034BAA8 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_14034BAE8 = (__int64)&qword_14034BAE0;
  qword_14034BAE0 = (__int64)&qword_14034BAE0;
  Semaphore.Header.WaitListHead.Blink = &Semaphore.Header.WaitListHead;
  Semaphore.Header.WaitListHead.Flink = &Semaphore.Header.WaitListHead;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  qword_14034BB48 = (__int64)&qword_14034BB40;
  qword_14034BB40 = &qword_14034BB40;
  IopTimerDpc.TargetInfoAsUlong = 275;
  IopTimerDpc.DpcData = 0LL;
  IopTimerDpc.ProcessorHistory = 0LL;
  IopTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&IopTimer.Processor = 0LL;
  IopHardError.Parameter = 0LL;
  IopHardError.List.Flink = 0LL;
  qword_14034BAF0 = 0LL;
  Semaphore.Header.Type = 5;
  Semaphore.Header.Size = 8;
  Semaphore.Header.SignalState = 0;
  Semaphore.Limit = 0x7FFFFFFF;
  byte_14034BB18 = 0;
  IopKeepAliveTracker.Parameter = 0LL;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_14034BB50[0] = 0LL;
  byte_14034BB78 = 0;
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
    return 0;
  }
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  IopMountCompletionEvent.Header.WaitListHead.Blink = &IopMountCompletionEvent.Header.WaitListHead;
  IopMountCompletionEvent.Header.WaitListHead.Flink = &IopMountCompletionEvent.Header.WaitListHead;
  stru_14034BBE0.Header.WaitListHead.Blink = &stru_14034BBE0.Header.WaitListHead;
  stru_14034BBE0.Header.WaitListHead.Flink = &stru_14034BBE0.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Blink = &IopLinkTrackingPortObject.Header.WaitListHead;
  IopLinkTrackingPortObject.Header.WaitListHead.Flink = &IopLinkTrackingPortObject.Header.WaitListHead;
  LOWORD(IopMountCompletionEvent.Header.Lock) = 0;
  IopMountCompletionEvent.Header.Size = 6;
  IopMountCompletionEvent.Header.SignalState = 0;
  LOWORD(stru_14034BBE0.Header.Lock) = 0;
  stru_14034BBE0.Header.Size = 6;
  stru_14034BBE0.Header.SignalState = 0;
  LOWORD(IopLinkTrackingPortObject.Header.Lock) = 1;
  IopLinkTrackingPortObject.Header.Size = 6;
  IopLinkTrackingPortObject.Header.SignalState = 1;
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 3;
    return 0;
  }
  if ( (int)IopInitializeSessionNotifications() < 0 )
  {
    IopInitFailCode = 15;
    return 0;
  }
  if ( IopInitializePlugPlayServices((__int64)Context, 0LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 4;
    return 0;
  }
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_140321B70();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, (__int64)Context) )
    return 0;
  EtwInitialize(0);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0 )
  {
    IopInitFailCode = 16;
    return 0;
  }
  if ( (_BYTE)dword_1403D0108 && EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
  {
    IopInitFailCode = 11;
    return 0;
  }
  SeAuditBootConfiguration(*(_QWORD *)(*((_QWORD *)Context + 30) + 2496LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext, v7);
  if ( !IopErrorLogDisabledThisBoot )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&IopErrorLogLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopErrorLogLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopErrorLogLock);
    }
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&IopErrorLogLock, retaddr);
    else
      _InterlockedAnd64(&IopErrorLogLock, 0LL);
    __writecr8(CurrentIrql);
  }
  IoEtwHandle = 0LL;
  WheaInitialize((__int64)Context, 0);
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( IopInitializePlugPlayServices((__int64)Context, 1LL) < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 5;
    return 0;
  }
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  LODWORD(IoStatusBlockRangeTableLock) = 1;
  qword_14034BCE8 = (__int64)&qword_14034BCE0;
  qword_14034BCE0 = (__int64)&qword_14034BCE0;
  qword_14034BCC8 = 0LL;
  dword_14034BCD0 = 0;
  word_14034BCD8 = 1;
  byte_14034BCDA = 6;
  dword_14034BCDC = 0;
  KitpInitAitSampleRate(Context);
  if ( EtwRegister(&MS_Windows_AIT_Provider, 0LL, 0LL, &KitEtwHandle) < 0 )
    KitEtwHandle = 0LL;
  KseInitialize((__int64)Context, 1);
  HvlPhase2Initialize((__int64)Context);
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, 0LL);
  if ( PnpEtwHandle )
    EtwWriteStartScenario(
      (ULONG_PTR *)PnpEtwHandle,
      &KMPnPEvt_DriverInitPhase_Start,
      &PnpDriverInitPhaseActivityId,
      0,
      0LL);
  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_14034B208 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  IopInitDumpCapsuleSupport();
  if ( !(unsigned int)IopInitializeBootDrivers(Context) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 6;
    return 0;
  }
  if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  IopInitializeSystemVariableService();
  EtwRegister(&LiveDumpProvGuid, (PETWENABLECALLBACK)IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  TraceLoggingRegisterEx(&stru_140320EC0, 0LL, 0LL);
  if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
    IopRemoveDumpCapsuleSupport();
  PpLastGoodDoBootProcessing();
  v9 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v9;
  if ( SystemDlls < 0 )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 7;
    return 0;
  }
  PfSnBeginBootPhase(0);
  if ( !(unsigned __int8)IopReassignSystemRoot(Context, &v19) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 9;
    return 0;
  }
  if ( !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
    HeadlessKernelAddLogEntry();
    IopInitFailCode = 10;
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
      if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &v15, 0LL) >= 0 )
      {
        PpPagePathAssign((struct _FILE_OBJECT *)v15);
        ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      }
      ZwClose(KeyHandle);
    }
  }
  if ( !WMIInitialize(1, 0LL) )
    return 0;
  WheaInitialize((__int64)Context, 1u);
  IopInitializeIoQos(v12, v11);
  return 1;
}
