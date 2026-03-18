/*
 * XREFs of EtwpStopTrace @ 0x14040EAB0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14040EE8C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     EtwpEventWriteTemplateSession @ 0x1406E6B70 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpStopTrace(__int64 a1, char a2)
{
  __int64 result; // rax
  __int16 v5; // dx
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  int LoggerInfoFromContext; // edi
  unsigned int *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  void *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  int v19; // eax
  __int64 v20; // rdx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp+20h] BYREF

  Timeout.QuadPart = -2000000000LL;
  P = 0LL;
  result = EtwpValidateLoggerInfo();
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  CurrentThread->KernelApcDisable += v5;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(v6, &P);
  if ( LoggerInfoFromContext >= 0 )
  {
    v10 = (unsigned int *)P;
    if ( a2 )
      goto LABEL_6;
    if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
    {
      LOBYTE(v8) = 1;
      EtwpReleaseLoggerContext(P, v8);
      LoggerInfoFromContext = -1073741811;
    }
    else
    {
      LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u);
      if ( LoggerInfoFromContext >= 0 )
      {
LABEL_6:
        v12 = *v10;
        if ( (v10[3] & 0x400) != 0 )
        {
          v19 = EtwpStopLoggerInstance(v10);
          LOBYTE(v20) = 1;
          LoggerInfoFromContext = v19;
          EtwpReleaseLoggerContext(v10, v20);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v10);
            EtwpFreeLoggerContext(v10);
          }
        }
        else
        {
          v13 = (void *)*((_QWORD *)v10 + 6);
          ObReferenceObjectByPointer(v13, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
          KeResetEvent((PRKEVENT)(v10 + 118));
          v14 = (unsigned int)v12;
          if ( ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v12], 1u) )
          {
            LoggerInfoFromContext = EtwpStopLoggerInstance(v10);
            if ( LoggerInfoFromContext < 0 )
              ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v14], 1u);
          }
          else
          {
            LoggerInfoFromContext = -2147483611;
          }
          LOBYTE(v15) = 1;
          EtwpReleaseLoggerContext(v10, v15);
          if ( LoggerInfoFromContext >= 0 )
          {
            if ( (v10[14] & 0x80000000) == 0 )
            {
              while ( KeWaitForSingleObject(v10 + 118, Executive, 0, 0, &Timeout) == 258 )
                ;
            }
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v10);
            if ( LoggerInfoFromContext >= 0 )
            {
              LoggerInfoFromContext = v10[14];
              if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
                EtwpEventWriteTemplateSession(v16, &ETW_EVENT_STOP_TRACE, v10);
            }
            ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v14], 1u);
            if ( LoggerInfoFromContext >= 0 )
              KeWaitForSingleObject(v13, Executive, 0, 0, 0LL);
          }
          ObfDereferenceObject(v13);
        }
        goto LABEL_19;
      }
      LOBYTE(v11) = 1;
      EtwpReleaseLoggerContext(v10, v11);
    }
  }
LABEL_19:
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)LoggerInfoFromContext;
}
