/*
 * XREFs of EtwpFlushTrace @ 0x140495818
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContext @ 0x14048E8C0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14048E998 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpCCSwapStop @ 0x1404D2660 (EtwpCCSwapStop.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A4518 (EtwpEventWriteTemplateSession.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 */

__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  ACCESS_MASK v3; // esi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  UNICODE_STRING v17; // xmm0
  int v18; // eax
  char *v19; // rdx
  int v20; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  v22 = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = 128;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, v5, &v22);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_16:
      RtlFreeAnsiString(&UnicodeString);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
      return (unsigned int)LoggerInfoFromContext;
    }
    v9 = v22;
    v10 = *(_DWORD *)(v22 + 12);
    if ( (v10 & 0x40000) != 0 )
    {
      LoggerInfoFromContext = -1073741637;
    }
    else
    {
      if ( (v10 & 0x100) != 0 )
        v3 = 160;
      if ( *(_QWORD *)(v22 + 800) )
        v3 |= 0x40u;
      v11 = *(_DWORD *)(v22 + 12) & 0x400;
      if ( v11 )
      {
        if ( !*(_QWORD *)(a2 + 136) || !*(_WORD *)(a2 + 128) )
        {
          LoggerInfoFromContext = -1073741809;
          goto LABEL_15;
        }
        v3 |= 0x40u;
      }
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v3, v22);
      if ( LoggerInfoFromContext >= 0 )
      {
        if ( !v11 )
        {
          v12 = EtwpSynchronizeWithLogger(v9, 4u);
LABEL_12:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v9);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v9);
          }
          goto LABEL_15;
        }
        LoggerInfoFromContext = EtwpCaptureString((unsigned __int16 *)(a2 + 128), &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v17 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v9 + 184) = v17;
          _InterlockedOr((volatile signed __int32 *)(v9 + 820), 1u);
          v18 = *(_DWORD *)(v9 + 12);
          v9 = v22;
          if ( (v18 & 0x2000000) != 0 )
          {
            v19 = (char *)&EtwpGroupMasks + 32 * *(unsigned __int8 *)(v22 + 818);
            if ( v19 )
            {
              v20 = *((_DWORD *)v19 + 1);
              if ( (v20 & 4) != 0 && (v20 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v22 + 200), 0LL);
            }
          }
          v12 = EtwpBufferingModeFlush(v9);
          goto LABEL_12;
        }
      }
    }
LABEL_15:
    EtwpReleaseLoggerContext((unsigned int *)v9, 1);
    goto LABEL_16;
  }
  return result;
}
