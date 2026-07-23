/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x14047C198
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1405FBDF0 (CmpTraceHiveFlushBoostedActiveFlusher.c)
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
