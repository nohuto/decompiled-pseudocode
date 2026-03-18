/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x1404DBE54
 * Callers:
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x1400AC040 (PspSendJobNotification.c)
 *     PspLockRootJobFromProcess @ 0x140466F30 (PspLockRootJobFromProcess.c)
 *     PspUnlockJobConditionally @ 0x140469924 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140469940 (PspLockJobConditionally.c)
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
