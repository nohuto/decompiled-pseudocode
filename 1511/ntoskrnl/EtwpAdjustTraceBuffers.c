/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x14009BAD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x14009D374 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x14009D414 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 */

PSLIST_ENTRY EtwpAdjustTraceBuffers()
{
  __int64 SiloDriverState; // r14
  unsigned int i; // esi
  __int64 v2; // rax
  __int64 v3; // rbx
  PSLIST_ENTRY result; // rax
  int UsedProcessorCount; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  for ( i = 0; i < 0x40; ++i )
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(SiloDriverState, i, 0LL);
    v3 = v2;
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(v2, *(unsigned int *)(v2 + 244));
        if ( v6 > *(_DWORD *)(v3 + 240) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v7, &v13);
          v8 = EtwpDequeueBuffer(v3 + 64);
          v9 = (void *)v8;
          if ( v8 )
          {
            v10 = v8 + 56;
            v11 = *(_QWORD *)(v8 + 56);
            v12 = *(_QWORD **)(v8 + 64);
            if ( *(_QWORD *)(v11 + 8) != v10 || *v12 != v10 )
              __fastfail(3u);
            *v12 = v11;
            *(_QWORD *)(v11 + 8) = v12;
          }
          EtwpUnlockBufferList(v3, &v13);
          if ( v9 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v3 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v3 + 244));
            _InterlockedExchangeAdd(&dword_1402D84D4[*(_DWORD *)(v3 + 316) & 1], -*(_DWORD *)(v3 + 4));
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(SiloDriverState, v3, 0LL);
    }
  }
  PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
  result = (PSLIST_ENTRY)(unsigned int)dword_1403062B4;
  if ( dword_1403062B4 > 2 * dword_1403062B0 * (int)KeNumberProcessors_0 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)dword_1403062B0;
    }
    while ( _InterlockedDecrement(&dword_1403062B4) > 2 * dword_1403062B0 * (int)KeNumberProcessors_0 );
  }
  _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  return result;
}
