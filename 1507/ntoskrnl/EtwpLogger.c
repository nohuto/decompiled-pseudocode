/*
 * XREFs of EtwpLogger @ 0x1404A17E4
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1404A15F8 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 *     EtwpAdjustFreeBuffers @ 0x1404A2138 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404ACABC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140524868 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     EtwpRealtimeSaveState @ 0x14055CE70 (EtwpRealtimeSaveState.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1406E6870 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 *     EtwpEventWriteTemplateSessionEnd @ 0x1406E6CFC (EtwpEventWriteTemplateSessionEnd.c)
 */

void __fastcall EtwpLogger(char *StartContext)
{
  __int64 v2; // rsi
  struct _KTIMER *v3; // rdi
  ULONG v4; // ecx
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r15d
  __int64 v9; // rdx
  int Logfile; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int i; // eax
  NTSTATUS v14; // edi
  __int64 v15; // rdx
  bool v16; // si
  int v17; // eax
  int v18; // ebp
  int v19; // ecx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h]

  *((_QWORD *)StartContext + 6) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*((_QWORD *)StartContext + 114));
  v25 = v2;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 0xFu);
  KeSetEvent((PRKEVENT)(StartContext + 472), 0, 0);
  v3 = (struct _KTIMER *)(StartContext + 520);
  Object[0] = StartContext + 496;
  Object[1] = StartContext + 520;
  if ( !*((_DWORD *)StartContext + 84) )
    goto LABEL_32;
  do
  {
    v4 = 1;
    if ( *((_DWORD *)StartContext + 56) )
      v4 = 2;
    v5 = 0;
    if ( KeWaitForMultipleObjects(v4, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
    {
      if ( (*((_DWORD *)StartContext + 209) & 0x400) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)StartContext + 209, 0xAu);
      KeResetEvent((PRKEVENT)(StartContext + 496));
      v5 = 1;
    }
    if ( EtwpFileSystemReady )
      *((_DWORD *)StartContext + 208) |= 4u;
    EtwpAdjustFreeBuffers(StartContext);
    v8 = *((_DWORD *)StartContext + 209) & 4;
    if ( v8 )
    {
      if ( *((_DWORD *)StartContext + 56) && (*((_DWORD *)StartContext + 209) & 0x400) != 0 )
      {
        KeCancelTimer(v3);
        _interlockedbittestandreset((volatile signed __int32 *)StartContext + 209, 0xAu);
      }
      v5 = 1;
    }
    if ( (*((_DWORD *)StartContext + 208) & 4) != 0 )
    {
      if ( (*((_DWORD *)StartContext + 209) & 0x80u) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)StartContext + 209, 0xFFFFFF7F);
        v6 = *((_QWORD *)StartContext + 102);
        if ( v6 )
        {
          LOBYTE(v7) = 1;
          EtwpFinalizeHeader(StartContext, v6, v7);
        }
      }
      if ( (*((_DWORD *)StartContext + 3) & 0x100) != 0 )
        *((_DWORD *)StartContext + 208) |= 8u;
      else
        *((_DWORD *)StartContext + 208) &= ~8u;
      if ( (*((_DWORD *)StartContext + 208) & 8) != 0 )
      {
        Logfile = EtwpRealtimeCreateLogfile((__int64)StartContext);
        if ( Logfile < 0 )
        {
LABEL_61:
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
            EtwpEventWriteTemplateSessionEnd(
              (_DWORD)StartContext + 168,
              v21,
              v22,
              (_DWORD)StartContext + 152,
              (__int64)(StartContext + 168),
              Logfile,
              *((_DWORD *)StartContext + 3),
              *((_DWORD *)StartContext + 15));
          *((_DWORD *)StartContext + 14) = Logfile;
          EtwpStopLoggerInstance((unsigned __int64)StartContext);
LABEL_29:
          v3 = (struct _KTIMER *)(StartContext + 520);
          continue;
        }
        EtwpRealtimeUpdateConsumers((__int64)StartContext, v9, v11, v12);
        EtwpRealtimeFlushSavedBuffers(StartContext);
        if ( *((_DWORD *)StartContext + 90) && *((_DWORD *)StartContext + 110) )
          EtwpRequestFlushTimer((__int64)StartContext, 0);
      }
      if ( (*((_DWORD *)StartContext + 209) & 0x40) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)StartContext + 209, 0xFFFFFFBF);
        EtwpRealtimeNotifyConsumers(StartContext);
      }
      if ( (*((_DWORD *)StartContext + 209) & 8) != 0 )
      {
        EtwpRealtimeDisconnectAllConsumers(StartContext);
        _InterlockedAnd((volatile signed __int32 *)StartContext + 209, 0xFFFFFFF7);
        *((_DWORD *)StartContext + 14) = 0;
        KeSetEvent((PRKEVENT)(StartContext + 472), 0, 0);
      }
      if ( (*((_DWORD *)StartContext + 209) & 3) == 0 )
        goto LABEL_28;
      v16 = 1;
      if ( (*((_DWORD *)StartContext + 209) & 2) != 0 )
        v16 = *((_QWORD *)StartContext + 102) == 0LL;
      LOBYTE(v6) = 1;
      v17 = EtwpCreateLogFile(StartContext, v6);
      *((_DWORD *)StartContext + 14) = v17;
      Logfile = v17;
      if ( v17 < 0 )
      {
        v18 = *((_DWORD *)StartContext + 3);
        if ( (v18 & 8) != 0 )
        {
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              v19,
              (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
              v20,
              (_DWORD)StartContext + 152,
              (__int64)(StartContext + 168),
              Logfile,
              v18);
        }
      }
      KeSetEvent((PRKEVENT)(StartContext + 472), 0, 0);
      if ( Logfile >= 0 || !v16 )
      {
LABEL_28:
        Logfile = EtwpFlushActiveBuffers(StartContext, v5);
        if ( (*((_DWORD *)StartContext + 209) & 1) != 0 && Logfile >= 0 && !v5 )
          Logfile = EtwpFlushActiveBuffers(StartContext, 1LL);
        if ( v8 )
        {
          _InterlockedAnd((volatile signed __int32 *)StartContext + 209, 0xFFFFFFFB);
          *((_DWORD *)StartContext + 14) = Logfile;
          KeSetEvent((PRKEVENT)(StartContext + 472), 0, 0);
        }
        if ( Logfile >= 0 )
          goto LABEL_29;
      }
      goto LABEL_61;
    }
    EtwpFlushActiveBuffers(StartContext, v5);
  }
  while ( *((_DWORD *)StartContext + 84) );
  v2 = v25;
LABEL_32:
  for ( i = EtwpFlushActiveBuffers(StartContext, 1LL); ; i = EtwpFlushActiveBuffers(StartContext, 1LL) )
  {
    v14 = i;
    if ( i < 0 )
      break;
    if ( i == 259 )
    {
      if ( (*((_DWORD *)StartContext + 208) & 8) == 0 || (v14 = 0, *((_QWORD *)StartContext + 47)) )
        v14 = -1073741823;
      break;
    }
    if ( *((int *)StartContext + 62) <= 0 || *((_DWORD *)StartContext + 62) <= *((_DWORD *)StartContext + 61) )
      break;
    KeWaitForSingleObject(StartContext + 496, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  v15 = *((_QWORD *)StartContext + 102);
  if ( v15 )
  {
    EtwpFinalizeHeader(StartContext, v15, 0LL);
    ZwClose(*((HANDLE *)StartContext + 102));
    *((_QWORD *)StartContext + 102) = 0LL;
  }
  if ( *((_QWORD *)StartContext + 47) )
  {
    EtwpRealtimeSaveState(StartContext);
    ZwClose(*((HANDLE *)StartContext + 47));
    *((_QWORD *)StartContext + 47) = 0LL;
  }
  *((_DWORD *)StartContext + 14) = v14;
  KeSetEvent((PRKEVENT)(StartContext + 472), 0, 0);
  if ( v14 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v23, &ETW_EVENT_STOP_TRACE, StartContext);
  EtwpFreeLoggerContext(StartContext);
  PsDetachSiloFromCurrentThread(v2);
  PsTerminateSystemThread(v14);
}
