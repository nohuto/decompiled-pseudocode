/*
 * XREFs of EtwpStopTrace @ 0x140493C50
 * Callers:
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1406A5048 (EtwWmitraceWorker.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006B90 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x14007F760 (ObReferenceObjectByPointer.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048DA8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContext @ 0x14048DE30 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14048DF08 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490208 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 *     EtwpEventWriteTemplateSession @ 0x1406A43E0 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, _DWORD *a2, char a3)
{
  __int64 result; // rax
  __int16 v7; // dx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KEVENT *v13; // rbx
  __int64 Lock; // rdi
  void *v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v7;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, (__int64)a2, (__int64 *)&P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v13 = (struct _KEVENT *)P;
      if ( a3 )
        goto LABEL_6;
      if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
      {
        EtwpReleaseLoggerContext((unsigned int *)P, 1);
        LoggerInfoFromContext = -1073741811;
      }
      else
      {
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
        if ( LoggerInfoFromContext >= 0 )
        {
LABEL_6:
          Lock = (unsigned int)v13->Header.Lock;
          if ( (HIDWORD(v13->Header.WaitListHead.Flink) & 0x400) != 0 )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v13);
            EtwpReleaseLoggerContext((unsigned int *)v13, 1);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v13);
              EtwpFreeLoggerContext((char *)v13);
            }
          }
          else
          {
            v15 = *(void **)&v13[2].Header.Lock;
            ObReferenceObjectByPointer(v15, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
            KeResetEvent(v13 + 19);
            v16 = (unsigned int)Lock;
            if ( ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * Lock + 400), 1u) )
            {
              LoggerInfoFromContext = EtwpStopLoggerInstance((__int64)v13);
              if ( LoggerInfoFromContext < 0 )
                ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v16 + 400), 1u);
            }
            else
            {
              LoggerInfoFromContext = -2147483611;
            }
            EtwpReleaseLoggerContext((unsigned int *)v13, 1);
            if ( LoggerInfoFromContext >= 0 )
            {
              if ( SLODWORD(v13[2].Header.WaitListHead.Flink) >= 0 )
              {
                while ( KeWaitForSingleObject(&v13[19], Executive, 0, 0, &Timeout) == 258 )
                  ;
              }
              LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, (__int64)v13);
              if ( LoggerInfoFromContext >= 0 )
              {
                LoggerInfoFromContext = (int)v13[2].Header.WaitListHead.Flink;
                if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                  EtwpEventWriteTemplateSession(v17, &ETW_EVENT_STOP_TRACE, v13);
              }
              ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 8 * v16 + 400), 1u);
              if ( LoggerInfoFromContext >= 0 )
                KeWaitForSingleObject(v15, Executive, 0, 0, 0LL);
            }
            ObfDereferenceObject(v15);
          }
          goto LABEL_19;
        }
        EtwpReleaseLoggerContext((unsigned int *)v13, 1);
      }
    }
LABEL_19:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v11, v12);
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
