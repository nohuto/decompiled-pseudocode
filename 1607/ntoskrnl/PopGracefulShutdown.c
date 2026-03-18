/*
 * XREFs of PopGracefulShutdown @ 0x1403DEE20
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     TmShutdownSystem_0 @ 0x140001260 (TmShutdownSystem_0.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     KeAttachProcess @ 0x1400ADF38 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1400B06CC (PopDiagTraceEventNoPayload.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F010 (CcWaitForCurrentLazyWriterActivity.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     VfShutdownScheduleWatchdog @ 0x140223914 (VfShutdownScheduleWatchdog.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopSetDevicesSystemState @ 0x1403CF5D0 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     MmShutdownSystem @ 0x1403DEC00 (MmShutdownSystem.c)
 *     PopShutdownSystem @ 0x1403DFA40 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x1403DFB38 (ExShutdownSystem.c)
 *     CmpMarkLockTryAcquired @ 0x1405281C8 (CmpMarkLockTryAcquired.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     EtwWriteEndScenario @ 0x1405485B4 (EtwWriteEndScenario.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405506AC (PnpWaitForEmptyDeviceActionQueue.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1406574F4 (MmZeroPageFileAtShutdown.c)
 *     ObShutdownSystem @ 0x1406655DC (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x14066A634 (PopSetCleanShutdownMarker.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14067FB1C (PsWaitForAllProcesses.c)
 */

void __noreturn PopGracefulShutdown()
{
  PVOID *v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rax
  PVOID *v3; // rbx
  char v4; // al
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  *(_QWORD *)(qword_140303498 + 16) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !qword_140303490 )
    off_1402F3878(v0);
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
  PopSetCleanShutdownMarker();
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  v5 = qword_140303490;
  if ( qword_140303490 )
  {
    if ( *(_QWORD *)(qword_140303490 + 8) )
    {
      KeAttachProcess(*(PRKPROCESS *)(qword_140303490 + 8));
      v5 = qword_140303490;
    }
    IoAddTriageDumpDataBlock(v5, 72);
    KeBugCheckEx(
      *(_DWORD *)(qword_140303490 + 32),
      *(_QWORD *)(qword_140303490 + 40),
      *(_QWORD *)(qword_140303490 + 48),
      *(_QWORD *)(qword_140303490 + 56),
      *(_QWORD *)(qword_140303490 + 64));
  }
  *(_DWORD *)(qword_140303498 + 440) = 0;
  PopBuildDeviceNotifyList((void *)(qword_140303498 + 48));
  PopSetDevicesSystemState(v7, v6, v8, v9);
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(2LL);
  MmShutdownSystem(2);
  PopShutdownSystem((unsigned int)qword_140303464);
}
