/*
 * XREFs of PoFxInitPowerManagement @ 0x1407B8408
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     PopFxCreateEmergencyWorkerThread @ 0x14057B3F0 (PopFxCreateEmergencyWorkerThread.c)
 */

__int64 PoFxInitPowerManagement()
{
  __int64 v0; // r9
  __int64 (__fastcall **v1)(__int64); // r8
  char *v2; // rdx
  __int64 (__fastcall *v3)(__int64); // rcx
  __int64 (__fastcall **v4)(__int64); // rax
  char *v5; // rax
  __int64 result; // rax

  PopFxResidentDpc.TargetInfoAsUlong = 275;
  *(_QWORD *)&PopFxResidentTimer.Header.Lock = 9LL;
  qword_1403045B8 = (__int64)&PopFxDeviceList;
  PopFxDeviceList = (ULONG_PTR)&PopFxDeviceList;
  qword_1403045A8 = (__int64)&PopFxAcpiDeviceList;
  PopFxAcpiDeviceList = (__int64)&PopFxAcpiDeviceList;
  qword_1403045D8 = (__int64)&PopFxPluginList;
  PopFxPluginList = (ULONG_PTR)&PopFxPluginList;
  PopFxDeviceRegisterHead = (__int64)&PopFxPluginList;
  qword_140304670 = (__int64)PopFxResidentTimeoutRoutine;
  PopFxResidentDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopFxResidentTimeoutDpcRoutine;
  PopFxResidentTimer.Header.WaitListHead.Blink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxResidentTimer.Header.WaitListHead.Flink = &PopFxResidentTimer.Header.WaitListHead;
  PopFxDeviceListLock = 0LL;
  PopFxPluginLock = 0LL;
  qword_140304678 = 0LL;
  PopFxActiveIdleThreshold *= 10000;
  PopFxResidentWorkItem = 0LL;
  PopFxResidentDpc.DeferredContext = 0LL;
  PopFxResidentDpc.DpcData = 0LL;
  PopFxResidentDpc.ProcessorHistory = 0LL;
  PopFxResidentTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopFxResidentTimer.Processor = 0LL;
  if ( (unsigned int)PopFxActiveIdleLevel >= 3 )
    PopFxActiveIdleLevel = 1;
  PopFxDeviceAccountingLevel = PopSleepStudyDeviceAccountingLevel;
  if ( PopSleepStudyDisabled )
    PopFxDeviceAccountingLevel = 0;
  v0 = 4LL;
  qword_1403046D8 = (__int64)&SocSubsystemsList;
  v1 = (__int64 (__fastcall **)(__int64))&unk_140304710;
  SocSubsystemsList = (__int64)&SocSubsystemsList;
  v2 = (char *)&unk_140304861;
  do
  {
    v1[3] = 0LL;
    v3 = (__int64 (__fastcall *)(__int64))(v2 - 65);
    *v1 = PopFxPluginWork;
    v4 = v1 - 2;
    *(_QWORD *)(v2 + 63) = v1 - 2;
    *(_DWORD *)v3 = 0;
    *(_DWORD *)(v2 - 61) = 0;
    *(_BYTE *)v3 = 8;
    v1[1] = (__int64 (__fastcall *)(__int64))(v1 - 2);
    v1 += 7;
    *v4 = 0LL;
    v5 = v2 - 57;
    *(_QWORD *)(v2 - 49) = v2 - 57;
    v2 += 136;
    *(_QWORD *)v5 = v5;
    *(_QWORD *)(v2 - 177) = 0LL;
    *(_QWORD *)(v2 - 145) = 0LL;
    *(_QWORD *)(v2 - 113) = PopFxWorkOrderWatchdog;
    *(_DWORD *)(v2 - 137) = 275;
    *(_QWORD *)(v2 - 105) = v3;
    *(_QWORD *)(v2 - 81) = 0LL;
    *(_QWORD *)(v2 - 121) = 0LL;
    *(v1 - 3) = v3;
    --v0;
  }
  while ( v0 );
  KeInitializeQueue(&PopFxSystemWorkQueue, 1u);
  PopFxCreateEmergencyWorkerThread(&PopFxSystemWorkQueue);
  *(_QWORD *)&PopPepIdleTimer.Header.Lock = 9LL;
  qword_140302F68 = (__int64)&PopPepDeviceList;
  PopPepDeviceList = (__int64)&PopPepDeviceList;
  qword_140303050 = (__int64)PopPepIdleTimeoutRoutine;
  PopPepIdleDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopPepIdleTimeoutDpcRoutine;
  PopPepIdleTimer.Header.WaitListHead.Blink = &PopPepIdleTimer.Header.WaitListHead;
  PopPepIdleTimer.Header.WaitListHead.Flink = &PopPepIdleTimer.Header.WaitListHead;
  result = 0LL;
  PopFxPlatformInterface = 0LL;
  qword_140301688 = 0LL;
  qword_140301690 = 0LL;
  PopPepDeviceListLock = 0LL;
  qword_140303058 = 0LL;
  PopPepIdleWorkItem = 0LL;
  PopPepIdleDpc.TargetInfoAsUlong = 275;
  PopPepIdleDpc.DeferredContext = 0LL;
  PopPepIdleDpc.DpcData = 0LL;
  PopPepIdleDpc.ProcessorHistory = 0LL;
  PopPepIdleTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&PopPepIdleTimer.Processor = 0LL;
  PopPepVetoMaskReadyLock = 0LL;
  return result;
}
