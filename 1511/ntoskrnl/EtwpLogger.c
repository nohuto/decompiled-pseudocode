/*
 * XREFs of EtwpLogger @ 0x14046AE58
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     EtwpResetFlushTimer @ 0x14009BA74 (EtwpResetFlushTimer.c)
 *     EtwpFreeWorkerContext @ 0x1400F3FC4 (EtwpFreeWorkerContext.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14046A9CC (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x14046E540 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14049D9D4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpRealtimeSaveState @ 0x1404C65B4 (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404C9F88 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140663790 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x140663C1C (EtwpEventWriteTemplateSessionEnd.c)
 */

void __fastcall EtwpLogger(void **StartContext)
{
  __int64 v1; // rbx
  void **v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r8
  ULONG v5; // ecx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  bool v14; // si
  int v15; // eax
  int v16; // ebp
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  PVOID Object[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h]

  v1 = (__int64)StartContext[1];
  v2 = StartContext;
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v3 = PsAttachSiloToCurrentThread(*StartContext);
  v24 = v3;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 15LL, v4);
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  Object[1] = (PVOID)(v1 + 520);
  Object[0] = (PVOID)(v1 + 496);
  if ( !*(_DWORD *)(v1 + 336) )
    goto LABEL_31;
  do
  {
    v5 = 1;
    if ( *(_DWORD *)(v1 + 224) )
      v5 = 2;
    v6 = 0;
    if ( KeWaitForMultipleObjects(v5, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 836) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 836), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 496));
      v6 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 4u);
    EtwpAdjustFreeBuffers(v1);
    v9 = *(_DWORD *)(v1 + 836) & 4;
    if ( v9 )
    {
      if ( *(_DWORD *)(v1 + 224) )
        EtwpResetFlushTimer(v1, 1);
      v6 = 1;
    }
    if ( (*(_DWORD *)(v1 + 832) & 4) == 0 )
    {
      EtwpFlushActiveBuffers(v1, v6);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFF7F);
      v7 = *(_QWORD *)(v1 + 816);
      if ( v7 )
      {
        LOBYTE(v8) = 1;
        EtwpFinalizeHeader(v1, v7, v8);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 832), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 832), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 832) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_59;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 360) && *(_DWORD *)(v1 + 440) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 836) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 836) & 3) != 0 )
    {
      v14 = 1;
      if ( (*(_DWORD *)(v1 + 836) & 2) != 0 )
        v14 = *(_QWORD *)(v1 + 816) == 0LL;
      LOBYTE(v7) = 1;
      v15 = EtwpCreateLogFile(v1, v7);
      *(_DWORD *)(v1 + 56) = v15;
      Logfile = v15;
      if ( v15 < 0 )
      {
        v16 = *(_DWORD *)(v1 + 12);
        if ( (v16 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v17,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v18,
              v1 + 152,
              v1 + 168,
              Logfile,
              v16);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
      if ( Logfile < 0 && v14 )
        goto LABEL_59;
    }
    Logfile = EtwpFlushActiveBuffers(v1, v6);
    if ( (*(_DWORD *)(v1 + 836) & 1) != 0 && Logfile >= 0 && !v6 )
      Logfile = EtwpFlushActiveBuffers(v1, 1LL);
    if ( v9 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 836), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_59:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        EtwpEventWriteTemplateSessionEnd(
          v1 + 168,
          v19,
          v20,
          v1 + 152,
          v1 + 168,
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 60));
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 336) );
  v2 = StartContext;
  v3 = v24;
LABEL_31:
  for ( i = EtwpFlushActiveBuffers(v1, 1LL); ; i = EtwpFlushActiveBuffers(v1, 1LL) )
  {
    v12 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 832) & 8) == 0 || (v12 = 0, *(_QWORD *)(v1 + 376)) )
        v12 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 248) <= 0 || *(_DWORD *)(v1 + 248) <= *(_DWORD *)(v1 + 244) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 496), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v13 = *(_QWORD *)(v1 + 816);
  if ( v13 )
  {
    EtwpFinalizeHeader(v1, v13, 0LL);
    ZwClose(*(HANDLE *)(v1 + 816));
    *(_QWORD *)(v1 + 816) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 376) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 376));
    *(_QWORD *)(v1 + 376) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v12;
  KeSetEvent((PRKEVENT)(v1 + 472), 0, 0);
  if ( v12 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v21, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v3);
  EtwpFreeWorkerContext(v2);
  PsTerminateSystemThread(v12);
}
