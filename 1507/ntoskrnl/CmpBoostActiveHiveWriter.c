/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x1404AF82C
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1406533C0 (CmpTraceHiveFlushBoostedActiveFlusher.c)
 */

__int64 __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  struct _KTHREAD *CurrentThread; // r8
  int v7; // edx

  v3 = *(_QWORD *)a2;
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 544);
    v5 = (*(_DWORD *)(v3 + 1724) >> 9) & 7;
    if ( (*(_DWORD *)(result + 772) & 0x100000) != 0 )
      v5 = 0;
    if ( v5 < 2 )
    {
      result = (__int64)KeGetCurrentThread();
      if ( v3 == result && *(_DWORD *)(v3 + 1788) )
        v5 = 2;
      if ( v5 < 2 )
      {
        CurrentThread = KeGetCurrentThread();
        v7 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v7 = 0;
        if ( v7 >= 2 )
          goto LABEL_17;
        result = (__int64)KeGetCurrentThread();
        if ( CurrentThread == (struct _KTHREAD *)result && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
          v7 = 2;
        if ( v7 >= 2 )
        {
LABEL_17:
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0);
          if ( !(_DWORD)result )
          {
            PsBoostThreadIo(*(_QWORD *)a2, 0LL);
            IoBoostThreadIoPriority(*(_QWORD *)a2, 2, 0);
            KeSetPriorityBoost(*(_QWORD *)a2, 12);
            return CmpTraceHiveFlushBoostedActiveFlusher();
          }
        }
      }
    }
  }
  return result;
}
