/*
 * XREFs of EtwpLogger @ 0x14048FBA8
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140009D20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140009D40 (PsAttachSiloToCurrentThread.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14005A2E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     EtwpResetFlushTimer @ 0x140085624 (EtwpResetFlushTimer.c)
 *     EtwpRequestFlushTimer @ 0x140085ADC (EtwpRequestFlushTimer.c)
 *     KeSetActualBasePriorityThread @ 0x1400D2840 (KeSetActualBasePriorityThread.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x1403E2710 (EtwpEventWriteTemplateSessionEnd.c)
 *     EtwpAdjustFreeBuffers @ 0x1404901C0 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14049030C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14049043C (EtwpRealtimeUpdateConsumers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140492464 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140493B1C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 *     EtwpCreateLogFile @ 0x140494518 (EtwpCreateLogFile.c)
 *     EtwpRealtimeSaveState @ 0x1404F1370 (EtwpRealtimeSaveState.c)
 *     EtwpFlushActiveBuffers @ 0x140510490 (EtwpFlushActiveBuffers.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406A41B8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A43E0 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpLogger(__int64 *StartContext)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  ULONG v3; // ecx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r15d
  int Logfile; // edi
  int i; // eax
  NTSTATUS v10; // edi
  __int64 v11; // rdx
  bool v12; // si
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  int v17; // ebp
  int v18; // ecx
  int v19; // r8d
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+80h] [rbp+8h]

  v1 = StartContext[1];
  *(_QWORD *)(v1 + 48) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*StartContext);
  v21 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0xFu);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  Object[1] = (PVOID)(v1 + 504);
  Object[0] = (PVOID)(v1 + 480);
  if ( !*(_DWORD *)(v1 + 320) )
    goto LABEL_24;
  do
  {
    v3 = 1;
    if ( *(_DWORD *)(v1 + 208) )
      v3 = 2;
    v4 = 0;
    if ( KeWaitForMultipleObjects(v3, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*(_DWORD *)(v1 + 820) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(v1 + 820), 0xAu);
      KeResetEvent((PRKEVENT)(v1 + 480));
      v4 = 1;
    }
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 4u);
    EtwpAdjustFreeBuffers(v1);
    v7 = *(_DWORD *)(v1 + 820) & 4;
    if ( v7 )
    {
      if ( *(_DWORD *)(v1 + 208) )
        EtwpResetFlushTimer(v1, 1);
      v4 = 1;
    }
    if ( (*(_DWORD *)(v1 + 816) & 4) == 0 )
    {
      EtwpFlushActiveBuffers(v1, v4);
      continue;
    }
    if ( (*(_DWORD *)(v1 + 820) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFF7F);
      v5 = *(_QWORD *)(v1 + 800);
      if ( v5 )
      {
        LOBYTE(v6) = 1;
        EtwpFinalizeHeader(v1, v5, v6);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 816), 8u);
    else
      _InterlockedAnd((volatile signed __int32 *)(v1 + 816), 0xFFFFFFF7);
    if ( (*(_DWORD *)(v1 + 816) & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 )
        goto LABEL_55;
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 820) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 820) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFF7);
      *(_DWORD *)(v1 + 56) = 0;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( (*(_DWORD *)(v1 + 820) & 3) != 0 )
    {
      v12 = 1;
      if ( (*(_DWORD *)(v1 + 820) & 2) != 0 )
        v12 = *(_QWORD *)(v1 + 800) == 0LL;
      LOBYTE(v5) = 1;
      v13 = EtwpCreateLogFile(v1, v5);
      *(_DWORD *)(v1 + 56) = v13;
      Logfile = v13;
      if ( v13 < 0 )
      {
        v17 = *(_DWORD *)(v1 + 12);
        if ( (v17 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v18,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v19,
              v1 + 136,
              v1 + 152,
              Logfile,
              v17);
        }
      }
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      if ( Logfile < 0 && v12 )
        goto LABEL_55;
    }
    Logfile = EtwpFlushActiveBuffers(v1, v4);
    if ( (*(_DWORD *)(v1 + 820) & 1) != 0 && Logfile >= 0 && !v4 )
      Logfile = EtwpFlushActiveBuffers(v1, 1LL);
    if ( v7 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 820), 0xFFFFFFFB);
      *(_DWORD *)(v1 + 56) = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( Logfile < 0 )
    {
LABEL_55:
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
        EtwpEventWriteTemplateSessionEnd(
          v1 + 152,
          v14,
          v15,
          (unsigned __int16 *)(v1 + 136),
          (unsigned __int16 *)(v1 + 152),
          Logfile,
          *(_DWORD *)(v1 + 12),
          *(_DWORD *)(v1 + 60));
      *(_DWORD *)(v1 + 56) = Logfile;
      EtwpStopLoggerInstance(v1);
    }
  }
  while ( *(_DWORD *)(v1 + 320) );
  v2 = v21;
LABEL_24:
  for ( i = EtwpFlushActiveBuffers(v1, 1LL); ; i = EtwpFlushActiveBuffers(v1, 1LL) )
  {
    v10 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*(_DWORD *)(v1 + 816) & 8) == 0 || (v10 = 0, *(_QWORD *)(v1 + 360)) )
        v10 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject((PVOID)(v1 + 480), Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v11 = *(_QWORD *)(v1 + 800);
  if ( v11 )
  {
    EtwpFinalizeHeader(v1, v11, 0LL);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 56) = v10;
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  if ( v10 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v16, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v10);
}
