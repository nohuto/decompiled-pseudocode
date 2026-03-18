/*
 * XREFs of EtwpFlushTrace @ 0x1404B5FCC
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404CC16C (EtwpValidateLoggerInfo.c)
 *     EtwpCaptureString @ 0x1404CC270 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpCCSwapStop @ 0x140501094 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
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
  __int64 v11; // rcx
  UNICODE_STRING v12; // xmm0
  int v13; // eax
  char *v14; // rdx
  int v15; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v2 = 128;
  UnicodeString.Buffer = 0LL;
  result = EtwpValidateLoggerInfo(a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v4, &v17);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_16:
      RtlFreeAnsiString(&UnicodeString);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v7 = v17;
    v8 = *(_DWORD *)(v17 + 12);
    if ( (v8 & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      if ( (v8 & 0x100) != 0 )
        v2 = 160;
      if ( *(_QWORD *)(v17 + 816) )
        v2 |= 0x40u;
      v9 = *(_DWORD *)(v17 + 12) & 0x400;
      if ( v9 )
      {
        if ( !*(_QWORD *)(a1 + 136) || !*(_WORD *)(a1 + 128) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_15;
        }
        v2 |= 0x40u;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v2, v17);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v9 )
        {
          v10 = EtwpSynchronizeWithLogger(v7, 4LL);
LABEL_12:
          LoggerInfoFromContext = v10;
          if ( v10 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v7);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v11, &ETW_EVENT_FLUSH_TRACE, v7);
          }
          goto LABEL_15;
        }
        LoggerInfoFromContext = EtwpCaptureString(a1 + 128, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v12 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v7 + 200) = v12;
          _InterlockedOr((volatile signed __int32 *)(v7 + 836), 1u);
          v13 = *(_DWORD *)(v7 + 12);
          v7 = v17;
          if ( (v13 & 0x2000000) != 0 )
          {
            v14 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v17 + 834);
            if ( v14 )
            {
              v15 = *((_DWORD *)v14 + 1);
              if ( (v15 & 4) != 0 && (v15 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v17 + 216), 0LL);
            }
          }
          v10 = EtwpBufferingModeFlush(v7);
          goto LABEL_12;
        }
      }
    }
LABEL_15:
    EtwpReleaseLoggerContext(0LL, (unsigned int *)v7, 1);
    goto LABEL_16;
  }
  return result;
}
