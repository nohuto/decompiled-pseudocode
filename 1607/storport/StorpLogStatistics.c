/*
 * XREFs of StorpLogStatistics @ 0x1C003D964
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0041DA0 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00022A8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleasePortData @ 0x1C000D1DC (RaidReleasePortData.c)
 *     RaidGetPortData @ 0x1C000D1F0 (RaidGetPortData.c)
 *     StorpLogPerAdapterStatistics @ 0x1C003CC34 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPerUnitStatistics @ 0x1C003D150 (StorpLogPerUnitStatistics.c)
 */

void __fastcall StorpLogStatistics(char a1)
{
  bool v2; // r12
  char *PortData; // rax
  char *v4; // rbp
  _QWORD *v5; // r13
  _QWORD *i; // rdi
  KSPIN_LOCK *v7; // r14
  KSPIN_LOCK *v8; // rsi
  __int64 *j; // r14
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v11; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  bool v13; // [rsp+B0h] [rbp+8h]
  bool v14; // [rsp+B8h] [rbp+10h]

  v2 = (a1 & 3) != 0;
  v14 = v2;
  v13 = (a1 & 0x3C) != 0;
  PortData = RaidGetPortData();
  v4 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)PortData + 3, &LockHandle);
    v5 = v4 + 8;
    for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i != v5; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v11);
      v7 = i + 4;
      v8 = (KSPIN_LOCK *)i[4];
      if ( v8 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v8 - 8)) >= 0 )
          {
            if ( v2 )
              StorpLogPerAdapterStatistics((__int64)(v8 - 8));
            if ( v13 )
            {
              KeAcquireInStackQueuedSpinLock(v8 + 6, &v10);
              for ( j = (__int64 *)v8[7]; j != (__int64 *)(v8 + 7); j = (__int64 *)*j )
                StorpLogPerUnitStatistics((__int64)(j - 6), a1);
              KeReleaseInStackQueuedSpinLock(&v10);
              v2 = v14;
              v7 = i + 4;
            }
            if ( (a1 & 0x20) != 0 )
              *((_DWORD *)v8 + 1344) = 0;
            if ( (a1 & 0x40) != 0 )
            {
              *((_DWORD *)v8 + 1346) = 0;
              *((_DWORD *)v8 + 1345) = 0;
            }
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v8[24]);
          }
          v8 = (KSPIN_LOCK *)*v8;
        }
        while ( v8 != v7 );
        v5 = v4 + 8;
      }
      KeReleaseInStackQueuedSpinLock(&v11);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}
