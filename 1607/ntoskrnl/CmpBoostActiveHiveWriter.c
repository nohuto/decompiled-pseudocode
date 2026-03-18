/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x14047D444
 * Callers:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1406030E0 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002D430 (PsBoostThreadIo.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x1400919AC (KeSetPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x1400E7E30 (PsGetIoPriorityThread.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1405FBD3C (CmpTraceHiveFlushBoostedActiveFlusher.c)
 */

void __fastcall CmpBoostActiveHiveWriter(__int64 a1, __int64 a2)
{
  __int64 v3; // r8

  if ( *(_QWORD *)a2
    && (int)PsGetIoPriorityThread(*(_QWORD *)a2) < 2
    && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a2 + 16), 1, 0) )
  {
    PsBoostThreadIo(*(_QWORD *)a2, 0LL);
    IoBoostThreadIoPriority(*(KSPIN_LOCK **)a2, 2, 0);
    KeSetPriorityBoost(*(_QWORD *)a2, 12, v3);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}
