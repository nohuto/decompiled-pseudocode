/*
 * XREFs of EtwpQueryTrace @ 0x1404CBFCC
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     EtwWmitraceWorker @ 0x140664830 (EtwWmitraceWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContext @ 0x1404CC0A0 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1404CC16C (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpQueryTrace(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v6; // rdi
  unsigned int *v7; // rdx
  char v8; // al
  unsigned int *v9; // [rsp+38h] [rbp+10h] BYREF

  result = EtwpValidateLoggerInfo(a1);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v3, &v9);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_8:
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v6 = (__int64)v9;
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(1u, (__int64)v9);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (*(_DWORD *)(v6 + 832) & 0x4000) != 0 )
      {
        LoggerInfoFromContext = 0;
        v8 = BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next);
        if ( v8 != 49 && v8 != 97 )
          LoggerInfoFromContext = -1073741790;
        if ( LoggerInfoFromContext < 0 )
        {
          v7 = v9;
          goto LABEL_7;
        }
        v6 = (__int64)v9;
      }
      LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a1, v6);
    }
    v7 = (unsigned int *)v6;
LABEL_7:
    EtwpReleaseLoggerContext(0LL, v7, 1);
    goto LABEL_8;
  }
  return result;
}
