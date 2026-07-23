/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x1404BF458
 * Callers:
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     PspLockRootJobFromProcess @ 0x140465E00 (PspLockRootJobFromProcess.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 */

void __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockRootJobFromProcess(a1, (__int64)CurrentThread, &v8, &v7);
  for ( i = v8; i; i = *(_QWORD *)(i + 1056) )
  {
    PspLockJobConditionally(i, &v7);
    if ( *(_QWORD *)(i + 456) && ((1 << a2) & *(_DWORD *)(i + 876)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    PspUnlockJobConditionally(i, &v7);
  }
  PspUnlockJob(v7, (__int64)CurrentThread);
}
