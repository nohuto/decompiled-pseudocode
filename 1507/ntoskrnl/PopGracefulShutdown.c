/*
 * XREFs of PopGracefulShutdown @ 0x140403318
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     TmShutdownSystem_0 @ 0x140001260 (TmShutdownSystem_0.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeAttachProcess @ 0x14010C324 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14012DD44 (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     VfShutdownScheduleWatchdog @ 0x14025B230 (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x1403EE24C (PopSetDevicesSystemState.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x140402FFC (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x140403FF4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1404040B8 (ExShutdownSystem.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     EtwWriteEndScenario @ 0x1405843A4 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14058FA44 (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1406A0668 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 *     PopSetShutdownMarker @ 0x1406B0898 (PopSetShutdownMarker.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1406C3C40 (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  PVOID *v0; // rcx
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  PVOID *v8; // rbx
  char v9; // al
  int v10; // ecx

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_14032E678 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_14032E670 )
    off_140321BA8(v0);
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    v2 = KeAbPreAcquire((ULONG_PTR)&PopShutdownListMutex, 0LL, 0LL, v1);
    v3 = v2;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopShutdownListMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopShutdownListMutex, v2);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    qword_14032F148 = 0LL;
    dword_14032F170 = CurrentIrql;
    PopShutdownListAvailable = 0;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)&PopShutdownListMutex, 1, 0);
    if ( v5 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopShutdownListMutex, v5);
    __writecr8(CurrentIrql);
    KeAbPostRelease((ULONG_PTR)&PopShutdownListMutex);
    while ( 1 )
    {
      v7 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      v6 = *(_QWORD *)PopShutdownQueue;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue || *(_QWORD *)(v6 + 8) != PopShutdownQueue )
        __fastfail(3u);
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v6 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v7 + 16))(*(_QWORD *)(v7 + 24));
    }
    while ( 1 )
    {
      v8 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v8[1], Executive, 0, 0, 0LL);
      ObfDereferenceObject(v8[1]);
      ExFreePoolWithTag(v8, 0);
    }
  }
  TmShutdownSystem_0();
  CmShutdownSystem(0LL);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  v9 = PopShutdownCleanly;
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
    v9 = PopShutdownCleanly;
  }
  if ( (v9 & 0x10) != 0 )
    ObShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  EtwShutdown(0LL);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0);
  PopSetShutdownMarker();
  PnpWaitForEmptyDeviceActionQueue();
  IoShutdownSystem(1);
  CcWaitForCurrentLazyWriterActivity();
  v10 = qword_14032E670;
  if ( qword_14032E670 )
  {
    if ( *(_QWORD *)(qword_14032E670 + 8) )
    {
      KeAttachProcess(*(PRKPROCESS *)(qword_14032E670 + 8));
      v10 = qword_14032E670;
    }
    IoAddTriageDumpDataBlock(v10, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_14032E670 + 32),
      *(_QWORD *)(qword_14032E670 + 40),
      *(_QWORD *)(qword_14032E670 + 48),
      *(_QWORD *)(qword_14032E670 + 56),
      *(_QWORD *)(qword_14032E670 + 64));
  }
  *(_DWORD *)(qword_14032E678 + 440) = 0;
  PopBuildDeviceNotifyList((void *)(qword_14032E678 + 48));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_14032E644);
}
