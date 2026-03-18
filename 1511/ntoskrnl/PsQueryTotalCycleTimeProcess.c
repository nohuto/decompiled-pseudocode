/*
 * XREFs of PsQueryTotalCycleTimeProcess @ 0x1403B4B54
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140014364 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x1400143A8 (PspLockProcessThreadListShared.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F14C8 (KeUpdateTotalCyclesCurrentThread.c)
 */

__int64 __fastcall PsQueryTotalCycleTimeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // r8
  __int64 v5; // rcx

  CurrentThread = KeGetCurrentThread();
  KeFlushProcessWriteBuffers(1);
  KeUpdateTotalCyclesCurrentThread((__int64)CurrentThread);
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v3 = *(_QWORD *)(a1 + 592);
  v4 = *(_QWORD **)(a1 + 1160);
  while ( v4 != (_QWORD *)(a1 + 1160) )
  {
    v5 = *(v4 - 201);
    v4 = (_QWORD *)*v4;
    v3 += v5;
  }
  PspUnlockProcessThreadListShared(a1, (__int64)CurrentThread);
  return v3;
}
