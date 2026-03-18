/*
 * XREFs of EtwpStopTrace @ 0x1404CA4D8
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404CC16C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     EtwpEventWriteTemplateSession @ 0x140663A90 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  unsigned int *v8; // rbx
  __int64 v9; // rdi
  void *v10; // r14
  __int64 SiloDriverState; // rbp
  __int64 v12; // r15
  __int64 v13; // rcx
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, &P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v8 = (unsigned int *)P;
      if ( a2 )
        goto LABEL_6;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        EtwpReleaseLoggerContext(0LL, (unsigned int *)P, 1);
        LoggerInfoFromContext = -1073741811;
      }
      else
      {
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
        if ( LoggerInfoFromContext >= 0 )
        {
LABEL_6:
          v9 = *v8;
          if ( (v8[3] & 0x400) != 0 )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v8);
            EtwpReleaseLoggerContext(0LL, v8, 1);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v8);
              EtwpFreeLoggerContext((char *)v8);
            }
          }
          else
          {
            v10 = (void *)*((_QWORD *)v8 + 6);
            ObReferenceObjectByPointer(v10, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
            KeResetEvent((PRKEVENT)(v8 + 118));
            SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
            v12 = (unsigned int)v9;
            if ( ExAcquireRundownProtectionCacheAwareEx(
                   *(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v9 + 400),
                   1u) )
            {
              LoggerInfoFromContext = EtwpStopLoggerInstance((unsigned __int64)v8);
              if ( LoggerInfoFromContext < 0 )
                ExReleaseRundownProtectionCacheAwareEx(
                  *(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v12 + 400),
                  1u);
            }
            else
            {
              LoggerInfoFromContext = -2147483611;
            }
            EtwpReleaseLoggerContext(SiloDriverState, v8, 1);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( (v8[14] & 0x80000000) == 0 )
              {
                while ( KeWaitForSingleObject(v8 + 118, Executive, 0, 0, &Timeout) == 258 )
                  ;
              }
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v8);
              if ( LoggerInfoFromContext >= 0 )
              {
                LoggerInfoFromContext = v8[14];
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                  EtwpEventWriteTemplateSession(v13, &ETW_EVENT_STOP_TRACE, v8);
              }
              ExReleaseRundownProtectionCacheAwareEx(
                *(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v12 + 400),
                1u);
            }
            PsDereferenceMonitorContextServerSilo(SiloDriverState);
            if ( LoggerInfoFromContext >= 0 )
              KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
            ObfDereferenceObject(v10);
          }
          goto LABEL_20;
        }
        EtwpReleaseLoggerContext(0LL, v8, 1);
      }
    }
LABEL_20:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
