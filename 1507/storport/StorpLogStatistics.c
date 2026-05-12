/*
 * XREFs of StorpLogStatistics @ 0x1C0037D0C
 * Callers:
 *     StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C0039310 (StorpTraceLoggingTelemetryTimerDpcRoutine.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0003AD8 (RaidAcquireAdapterRemoveLock.c)
 *     RaidGetPortData @ 0x1C0007AFC (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C0026958 (RaidReleasePortData.c)
 *     StorpLogPerAdapterStatistics @ 0x1C0037034 (StorpLogPerAdapterStatistics.c)
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 */

void __fastcall StorpLogStatistics(char a1)
{
  bool v1; // r14
  bool v2; // r12
  KSPIN_LOCK *PortData; // rax
  KSPIN_LOCK *v4; // rsi
  _QWORD *v5; // r15
  _QWORD *i; // rbx
  KSPIN_LOCK *v7; // rdi
  __int64 *j; // r14
  struct _KLOCK_QUEUE_HANDLE v9; // [rsp+20h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  bool v13; // [rsp+B8h] [rbp+10h]
  bool v14; // [rsp+C0h] [rbp+18h]

  v1 = (a1 & 3) != 0;
  v13 = v1;
  v2 = (a1 & 0x1C) != 0;
  v14 = v2;
  PortData = RaidGetPortData();
  v4 = PortData;
  if ( PortData )
  {
    KeAcquireInStackQueuedSpinLock(PortData + 3, &LockHandle);
    v5 = v4 + 1;
    for ( i = (_QWORD *)v4[1]; i != v5; i = (_QWORD *)*i )
    {
      KeAcquireInStackQueuedSpinLock(i + 7, &v10);
      v7 = (KSPIN_LOCK *)i[4];
      if ( v7 != i + 4 )
      {
        do
        {
          if ( (int)RaidAcquireAdapterRemoveLock((__int64)(v7 - 8)) >= 0 )
          {
            if ( v1 )
              StorpLogPerAdapterStatistics((__int64)(v7 - 8));
            if ( v2 )
            {
              KeAcquireInStackQueuedSpinLock(v7 + 6, &v9);
              for ( j = (__int64 *)v7[7]; j != (__int64 *)(v7 + 7); j = (__int64 *)*j )
                StorpLogPerUnitStatistics((__int64)(j - 6), a1);
              KeReleaseInStackQueuedSpinLock(&v9);
              v1 = v13;
              v2 = v14;
            }
            ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v7[24]);
          }
          v7 = (KSPIN_LOCK *)*v7;
        }
        while ( v7 != i + 4 );
        v5 = v4 + 1;
      }
      KeReleaseInStackQueuedSpinLock(&v10);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidReleasePortData(v4);
  }
}
