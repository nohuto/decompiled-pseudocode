/*
 * XREFs of EtwpQueryTrace @ 0x14048E7E4
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x1406A5180 (EtwWmitraceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpAcquireLoggerContext @ 0x14048E8C0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x14048E998 (EtwpValidateLoggerInfo.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwCheckSecurityLoggerAccess @ 0x1406A825C (EtwCheckSecurityLoggerAccess.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int LoggerInfoFromContext; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v14);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_11:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v9, v10);
      return (unsigned int)LoggerInfoFromContext;
    }
    v11 = v14;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v11 + 816) & 0x4000) != 0 )
      {
        LOBYTE(v12) = KeGetCurrentThread()->PreviousMode;
        LoggerInfoFromContext = EtwCheckSecurityLoggerAccess(KeGetCurrentThread()->ApcState.Process, v12);
        if ( LoggerInfoFromContext < 0 )
        {
          v13 = v14;
LABEL_10:
          LOBYTE(v12) = 1;
          EtwpReleaseLoggerContext(v13, v12);
          goto LABEL_11;
        }
        v11 = v14;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
    }
    v13 = v11;
    goto LABEL_10;
  }
  return result;
}
