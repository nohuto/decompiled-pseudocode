/*
 * XREFs of EtwpSetSoftRestartInformation @ 0x1406AA840
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9D74 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 */

__int64 __fastcall EtwpSetSoftRestartInformation(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ebx
  UNICODE_STRING *v10; // rdi
  UNICODE_STRING *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+20h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int16 v17[4]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h]

  if ( !EtwpKsrCallbackObject || PsIsCurrentThreadInServerSilo() )
    return 3221225659LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v18 = a1 + 18;
  v17[0] = a2 - 18;
  v17[1] = a2 - 18;
  if ( (_WORD)a2 == 18 || (result = EtwpCaptureString(v17, &DestinationString), (int)result >= 0) )
  {
    v15 = *(_BYTE *)(a1 + 16);
    v5 = (unsigned __int16)*(_QWORD *)(a1 + 8);
    if ( v5 == 0xFFFF )
      v5 = (unsigned __int16)EtwpSystemLogger[0];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v5, 1);
    v8 = v7;
    if ( !v7 )
    {
      v9 = -1073741162;
      goto LABEL_33;
    }
    v9 = EtwpCheckLoggerControlAccess(0x80u, v7);
    if ( v9 >= 0 )
    {
      v10 = *(UNICODE_STRING **)(v8 + 896);
      if ( !v15 )
      {
        if ( v10 && LOBYTE(v10[2].Length) )
        {
          EtwpCancelMemoryPreservation(v8);
          RtlFreeAnsiString(v10 + 1);
          LOBYTE(v10[2].Length) = 0;
          v9 = 0;
        }
        else
        {
          v9 = -1073741054;
        }
        goto LABEL_33;
      }
      if ( !v10 )
      {
        PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4B777445u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v9 = -1073741801;
          goto LABEL_33;
        }
        memset(PoolWithTag, 0, 0x28uLL);
        *(_QWORD *)(v8 + 896) = v10;
      }
      if ( LOBYTE(v10[2].Length) )
      {
        v9 = -1073741053;
      }
      else if ( DestinationString.Length )
      {
        if ( (*(_DWORD *)(v8 + 12) & 0x400) == 0 || *(_DWORD *)(v8 + 300) == 1 || (*(_DWORD *)(v8 + 4) & 0xFFF) != 0 )
        {
          v9 = -1073741637;
        }
        else
        {
          v10[1] = DestinationString;
          DestinationString.Buffer = 0LL;
          LOBYTE(v10[2].Length) = 1;
          v9 = 0;
          if ( EtwpKsrPrepared )
          {
            v9 = EtwpPreserveLogger(v8);
            if ( v9 < 0 )
            {
              LOBYTE(v10[2].Length) = 0;
              RtlFreeAnsiString(v10 + 1);
            }
          }
        }
      }
      else
      {
        v9 = -1073741672;
      }
    }
LABEL_33:
    if ( v8 )
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    RtlFreeAnsiString(&DestinationString);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    return (unsigned int)v9;
  }
  return result;
}
