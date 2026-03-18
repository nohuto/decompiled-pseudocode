/*
 * XREFs of EtwpAdjustTraceBuffers @ 0x140016700
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x14025FE64 (EtwpRemoveBufferFromGlobalList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

PSLIST_ENTRY EtwpAdjustTraceBuffers()
{
  unsigned __int8 CurrentIrql; // r12
  unsigned int i; // r14d
  void *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // ecx
  bool v6; // zf
  int v7; // eax
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD **v11; // rcx
  _QWORD *v12; // rbp
  _QWORD *v13; // rbp
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  PSLIST_ENTRY result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = 0;
  for ( i = 0; i < 0x40; ++i )
  {
    v2 = 0LL;
    v3 = EtwpAcquireLoggerContextByLoggerId(i, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 12) & 0x400) == 0 )
      {
        v5 = *(_DWORD *)(v3 + 244);
        v6 = (*(_DWORD *)(v3 + 12) & 0x10000000) == 0;
        v7 = 1;
        if ( v6 )
          v7 = KeNumberProcessors_0;
        if ( v5 > *(_DWORD *)(v4 + 240) && v5 > 2 * v7 )
        {
          v8 = (volatile signed __int32 *)(v4 + 712);
          if ( *(_DWORD *)(v4 + 316) == 1 )
          {
            v9 = KeAbPreAcquire(v4 + 712);
            v10 = v9;
            if ( _interlockedbittestandset64(v8, 0LL) )
              ExfAcquirePushLockExclusiveEx(v4 + 712, v9, v4 + 712);
            if ( v10 )
              *(_BYTE *)(v10 + 26) |= 1u;
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v4 + 712);
            }
            else if ( _interlockedbittestandset64(v8, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v4 + 712);
            }
          }
          v11 = *(_QWORD ***)(v4 + 64);
          v12 = 0LL;
          if ( v11 != *(_QWORD ***)(v4 + 72) )
          {
            v13 = *v11;
            *v11 = (_QWORD *)**v11;
            if ( v13 == *(_QWORD **)(v4 + 72) )
              *(_QWORD *)(v4 + 72) = *(_QWORD *)(v4 + 64);
            v12 = v13 - 4;
            if ( v12 )
              v2 = (void *)EtwpRemoveBufferFromGlobalList(v4, v12);
          }
          if ( *(_DWORD *)(v4 + 316) == 1 )
          {
            _m_prefetchw((const void *)v8);
            v14 = *(_QWORD *)v8;
            v15 = *(_QWORD *)v8 - 16LL;
            if ( (*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v15 = 0LL;
            if ( (v14 & 2) != 0
              || (v16 = *(_QWORD *)v8, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v15, v14)) )
            {
              ExfReleasePushLock(v4 + 712);
            }
            KeAbPostRelease(v4 + 712);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v4 + 712, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
            __writecr8(CurrentIrql);
          }
          if ( v12 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v4 + 244));
            _InterlockedExchangeAdd(&dword_140327804[*(_DWORD *)(v4 + 316) & 1], -*(_DWORD *)(v4 + 4));
            ExFreePoolWithTag(v12, 0);
            if ( v2 )
              ExFreePoolWithTag(v2, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(v4, 0LL);
    }
  }
  result = (PSLIST_ENTRY)(unsigned int)dword_1403565B4;
  if ( dword_1403565B4 > 2 * dword_1403565B0 * (int)KeNumberProcessors_0 )
  {
    do
    {
      result = RtlpInterlockedPopEntrySList(&EtwpStackLookAsideList);
      if ( !result )
        break;
      ExFreePoolWithTag(result, 0);
      result = (PSLIST_ENTRY)(unsigned int)dword_1403565B0;
    }
    while ( _InterlockedDecrement(&dword_1403565B4) > 2 * dword_1403565B0 * (int)KeNumberProcessors_0 );
  }
  _InterlockedExchange(&EtwpBufferAdjustmentActive, 0);
  return result;
}
