/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C00297C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0003964 (RaidRestartIoQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C000BD8C (RaidResumeAdapterQueue.c)
 *     RaidResumeUnitQueue @ 0x1C000C19C (RaidResumeUnitQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C0018684 (RaidAdapterRestartQueues.c)
 *     Template_pzqqxxtt @ 0x1C002AAA0 (Template_pzqqxxtt.c)
 *     StorPurgeEventQueue @ 0x1C002BB98 (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  int v5; // r15d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v7; // rbx
  __int64 v8; // rdx
  __int64 *i; // r12
  int v10; // eax
  unsigned int v11; // eax
  LARGE_INTEGER v12; // rax
  unsigned int LowPart; // ecx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  __int64 v17; // r8
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 Unit; // rax
  __int64 v22; // rbx
  LARGE_INTEGER v23; // [rsp+60h] [rbp-9h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v27; // [rsp+D8h] [rbp+6Fh]
  unsigned int v28; // [rsp+E0h] [rbp+77h]

  v4 = DeferredContext[8];
  v27 = 0;
  v5 = (int)SystemArgument1;
  v23.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v7 = PerformanceCounter;
    v23 = PerformanceCounter;
  }
  else
  {
    v7.QuadPart = 0LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 112), &LockHandle);
  for ( i = *(__int64 **)(v4 + 120); i != (__int64 *)(v4 + 120); i = (__int64 *)*i )
  {
    v10 = *((_DWORD *)i + 10);
    HIBYTE(v28) = HIBYTE(v10);
    if ( (BYTE2(v5) == 0xFF || BYTE2(v5) == (_BYTE)v10)
      && (BYTE1(v5) == 0xFF || BYTE1(v5) == BYTE1(v10))
      && ((_BYTE)v5 == 0xFF || (_BYTE)v5 == BYTE2(v10)) )
    {
      v11 = StorPurgeEventQueue(i[20], v8, SystemArgument2);
      v27 = v11;
    }
    else
    {
      v11 = v27;
    }
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 && v11 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v12.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v12.QuadPart <= 0 || v12.QuadPart >= v7.QuadPart )
        v14 = v12.QuadPart - v7.QuadPart;
      else
        v14 = v12.QuadPart - v7.QuadPart - 1;
      v25 = v14;
      if ( UseQPCTime )
      {
        LowPart = PerformanceFrequency.LowPart;
        v15 = 0LL;
        if ( PerformanceFrequency.QuadPart && v14 )
        {
          v16 = 1000 * (v14 % PerformanceFrequency.QuadPart);
          v17 = 10000 * (v16 / PerformanceFrequency.QuadPart + 1000 * (v14 / PerformanceFrequency.QuadPart));
          v18 = 10000 * (v16 % PerformanceFrequency.QuadPart);
          v8 = v18 % PerformanceFrequency.QuadPart;
          v15 = v18 / PerformanceFrequency.QuadPart + v17;
        }
      }
      else
      {
        v15 = v14;
      }
      v25 = v15;
      if ( (Microsoft_Windows_StorPortEnableBits & 0x4000000) != 0 )
      {
        Template_pzqqxxtt(
          LowPart,
          v8,
          v15,
          (unsigned int)RaidCompletionDpcRoutine,
          (__int64)L"RaidCompletionDpcRoutine",
          *(_DWORD *)(v4 + 56),
          v27,
          v14,
          v25,
          0,
          0);
        v7 = v23;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v5) == 0xFF || BYTE1(v5) == 0xFF || (_BYTE)v5 == 0xFF )
  {
    RaidResumeAdapterQueue(v4);
    RaidAdapterRestartQueues(v4);
  }
  else
  {
    LOBYTE(v28) = BYTE2(v5);
    BYTE1(v28) = BYTE1(v5);
    BYTE2(v28) = v5;
    Unit = RaidAdapterFindUnit(v4, v28, v19, v20);
    v22 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v22);
    }
  }
}
