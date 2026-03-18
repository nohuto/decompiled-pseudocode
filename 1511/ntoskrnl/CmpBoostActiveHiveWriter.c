/*
 * XREFs of CmpBoostActiveHiveWriter @ 0x1404C5F60
 * Callers:
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405E3728 (CmpWaitOnHiveWriteQueue.c)
 * Callees:
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     CmpTraceHiveFlushBoostedActiveFlusher @ 0x1405DDE94 (CmpTraceHiveFlushBoostedActiveFlusher.c)
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
    KeSetPriorityBoost(*(_QWORD *)a2, 12LL, v3);
    CmpTraceHiveFlushBoostedActiveFlusher();
  }
}
