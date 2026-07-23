/*
 * XREFs of EtwpKsrCallback @ 0x1406A9EBC
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExBlockOnAddressPushLock @ 0x14009DC4C (ExBlockOnAddressPushLock.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9D74 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebp
  unsigned int i; // esi
  __int64 v5; // rax
  unsigned int *v6; // rdi
  __int64 v7; // r14
  char v8; // r15
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = (int)Argument1;
  if ( (unsigned int)Argument1 <= 1 )
  {
    EtwpKsrPrepared = (_DWORD)Argument1 == 0;
    for ( i = 0; i < 0x40; ++i )
    {
      v5 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, i, 0);
      v6 = (unsigned int *)v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v5 + 896);
        v8 = 0;
        if ( v7 )
        {
          v8 = 1;
          KeWaitForSingleObject((PVOID)(v5 + 632), Executive, 0, 0, 0LL);
          if ( v3 )
          {
            EtwpCancelMemoryPreservation((__int64)v6);
          }
          else if ( *(_BYTE *)(v7 + 32) )
          {
            EtwpPreserveLogger(v6);
          }
        }
        EtwpReleaseLoggerContext(v6, v8);
      }
    }
  }
  else if ( (_DWORD)Argument1 == 2 )
  {
    while ( 1 )
    {
      LOBYTE(v9) = EtwpLoggerSaveInProgress;
      if ( !EtwpLoggerSaveInProgress )
        break;
      ExBlockOnAddressPushLock((__int64)&EtwpLoggerSaveEvent, &EtwpLoggerSaveInProgress, &v9, 1uLL, 0LL);
    }
  }
}
