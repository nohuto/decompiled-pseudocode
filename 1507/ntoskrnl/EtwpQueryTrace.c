/*
 * XREFs of EtwpQueryTrace @ 0x14040ECC0
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1406E7908 (EtwWmitraceWorker.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContext @ 0x14040EDC0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14040EE8C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  char v11; // al
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  result = EtwpValidateLoggerInfo();
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LoggerInfoFromContext = EtwpAcquireLoggerContext(v3, &v12);
  if ( LoggerInfoFromContext >= 0 )
  {
    v6 = v12;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v6 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = 0;
        v11 = BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink);
        if ( v11 != 49 && v11 != 97 )
          LoggerInfoFromContext = -1073741790;
        if ( LoggerInfoFromContext < 0 )
        {
          v8 = v12;
          goto LABEL_7;
        }
        v6 = v12;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v6);
    }
    v8 = v6;
LABEL_7:
    LOBYTE(v7) = 1;
    EtwpReleaseLoggerContext(v8, v7);
  }
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)LoggerInfoFromContext;
}
