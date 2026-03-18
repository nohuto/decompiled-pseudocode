/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x140085490
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14008560C (EtwpQueryUsedProcessorCount.c)
 *     EtwpLockBufferList @ 0x1400EB6C0 (EtwpLockBufferList.c)
 *     EtwpUnlockBufferList @ 0x1400ED370 (EtwpUnlockBufferList.c)
 *     EtwpDequeueBuffer @ 0x1400ED754 (EtwpDequeueBuffer.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x140229014 (EtwpRemoveBufferFromGlobalList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490180 (EtwpReleaseLoggerContext.c)
 */

PSLIST_ENTRY EtwpAdjustTraceBuffers()
{
  __int64 v0; // r15
  unsigned int i; // esi
  void *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rbx
  int UsedProcessorCount; // eax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rbp
  PSLIST_ENTRY result; // rax
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v0 = EtwpHostSiloState;
  v11 = 0;
  for ( i = 0; i < 0x40; ++i )
  {
    v2 = 0LL;
    v3 = EtwpAcquireLoggerContextByLoggerId(v0, i, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(v3, *(unsigned int *)(v3 + 228));
        if ( v6 > *(_DWORD *)(v7 + 224) && v6 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v7, &v11);
          v8 = EtwpDequeueBuffer(v4, v4 + 64);
          v9 = (void *)v8;
          if ( v8 )
            v2 = (void *)EtwpRemoveBufferFromGlobalList(v4, v8);
          EtwpUnlockBufferList(v4, &v11);
          if ( v9 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 228));
            _InterlockedExchangeAdd(&dword_1402FD834[*(_DWORD *)(v4 + 300) & 1], -*(_DWORD *)(v4 + 4));
            ExFreePoolWithTag(v9, 0);
            if ( v2 )
              ExFreePoolWithTag(v2, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  result = (PSLIST_ENTRY)(unsigned int)dword_1403292D4;
  if ( dword_1403292D4 > 2 * dword_1403292D0 * (int)KeNumberProcessors_0 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)dword_1403292D0;
    }
    while ( _InterlockedDecrement(&dword_1403292D4) > 2 * dword_1403292D0 * (int)KeNumberProcessors_0 );
  }
  _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  return result;
}
