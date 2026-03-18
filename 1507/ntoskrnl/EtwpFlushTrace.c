/*
 * XREFs of EtwpFlushTrace @ 0x14054D090
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14040EE8C (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCCSwapStop @ 0x14054B224 (EtwpCCSwapStop.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1)
{
  ACCESS_MASK v2; // esi
  __int64 result; // rax
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v7; // rdi
  int v8; // ebp
  int v9; // ebp
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  UNICODE_STRING v16; // xmm0
  int v17; // eax
  char *v18; // rdx
  int v19; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v2 = 128;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a1);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(v4, &v21);
  if ( LoggerInfoFromContext >= 0 )
  {
    v7 = v21;
    v8 = *(_DWORD *)(v21 + 12);
    if ( (v8 & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      if ( (v8 & 0x100) != 0 )
        v2 = 160;
      if ( *(_QWORD *)(v21 + 816) )
        v2 |= 0x40u;
      v9 = *(_DWORD *)(v21 + 12) & 0x400;
      if ( v9 )
      {
        if ( !*(_QWORD *)(a1 + 136) || !*(_WORD *)(a1 + 128) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_15;
        }
        v2 |= 0x40u;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v2, v21);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v9 )
        {
          v10 = EtwpSynchronizeWithLogger(v7, 4LL);
LABEL_12:
          LoggerInfoFromContext = v10;
          if ( v10 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v7, v11, v12);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v7);
          }
          goto LABEL_15;
        }
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a1 + 128), &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v16 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v7 + 200) = v16;
          _InterlockedOr((volatile signed __int32 *)(v7 + 836), 1u);
          v17 = *(_DWORD *)(v7 + 12);
          v7 = v21;
          if ( (v17 & 0x2000000) != 0 )
          {
            v18 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v21 + 834);
            if ( v18 )
            {
              v19 = *((_DWORD *)v18 + 1);
              if ( (v19 & 4) != 0 && (v19 & 0x100) != 0 )
                EtwpCCSwapStop(*(_DWORD *)(v21 + 216), 0);
            }
          }
          v10 = EtwpBufferingModeFlush(v7);
          goto LABEL_12;
        }
      }
    }
LABEL_15:
    EtwpReleaseLoggerContext((unsigned int *)v7, 1);
  }
  RtlFreeAnsiString(&UnicodeString);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)LoggerInfoFromContext;
}
