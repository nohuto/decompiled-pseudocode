/*
 * XREFs of PopGracefulShutdown @ 0x1403B2154
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     TmShutdownSystem_0 @ 0x140001260 (TmShutdownSystem_0.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAttachProcess @ 0x1400C7800 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1400F07C8 (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     VfShutdownScheduleWatchdog @ 0x14020BE58 (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x1403A492C (PopSetDevicesSystemState.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1403B1F2C (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1403B2D54 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1403B2E04 (ExShutdownSystem.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     EtwWriteEndScenario @ 0x14050451C (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140522A7C (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x140620FD4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 *     PopSetShutdownMarker @ 0x140632328 (PopSetShutdownMarker.c)
 *     PsShutdownSystem @ 0x140641460 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140641720 (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  PVOID *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rax
  PVOID *v3; // rbx
  char v4; // al
  int v5; // ecx

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_1402DE0B8 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_1402DE0B0 )
    off_1402D2A58(v0);
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v2 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      v1 = *(_QWORD *)PopShutdownQueue;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue || *(_QWORD *)(v1 + 8) != PopShutdownQueue )
        __fastfail(3u);
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v1 + 8) = &PopShutdownQueue;
      (*(void (__fastcall **)(_QWORD))(v2 + 16))(*(_QWORD *)(v2 + 24));
    }
    while ( 1 )
    {
      v3 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v3[1], Executive, 0, 0, 0LL);
      ObfDereferenceObject(v3[1]);
      ExFreePoolWithTag(v3, 0);
    }
  }
  TmShutdownSystem_0();
  CmShutdownSystem(0LL);
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  v4 = PopShutdownCleanly;
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
    v4 = PopShutdownCleanly;
  }
  if ( (v4 & 0x10) != 0 )
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
  v5 = qword_1402DE0B0;
  if ( qword_1402DE0B0 )
  {
    if ( *(_QWORD *)(qword_1402DE0B0 + 8) )
    {
      KeAttachProcess(*(PRKPROCESS *)(qword_1402DE0B0 + 8));
      v5 = qword_1402DE0B0;
    }
    IoAddTriageDumpDataBlock(v5, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_1402DE0B0 + 32),
      *(_QWORD *)(qword_1402DE0B0 + 40),
      *(_QWORD *)(qword_1402DE0B0 + 48),
      *(_QWORD *)(qword_1402DE0B0 + 56),
      *(_QWORD *)(qword_1402DE0B0 + 64));
  }
  *(_DWORD *)(qword_1402DE0B8 + 440) = 0;
  PopBuildDeviceNotifyList((void *)(qword_1402DE0B8 + 48));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_1402DE084);
}
