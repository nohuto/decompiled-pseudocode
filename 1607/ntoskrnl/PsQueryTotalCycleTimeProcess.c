/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x1404A5B98
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140095498 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x1400954DC (PspLockProcessThreadListShared.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x14009559C (KeUpdateTotalCyclesCurrentThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // rcx

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread, a2);
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v5 = *(_QWORD *)(a1 + 592);
  v6 = *(_QWORD **)(a1 + 1160);
  while ( v6 != (_QWORD *)(a1 + 1160) )
  {
    v7 = *(v6 - 202);
    v6 = (_QWORD *)*v6;
    v5 += v7;
  }
  PspUnlockProcessThreadListShared(a1, (__int64)CurrentThread);
  return v5;
}
