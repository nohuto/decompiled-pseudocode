/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x1403E8DC0
 * Callers:
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x140117780 (PspSendJobNotification.c)
 *     PspLockRootJobFromProcess @ 0x1403E95DC (PspLockRootJobFromProcess.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 */

__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockRootJobFromProcess(a1, CurrentThread, &v9, &v8);
  for ( i = v9; i; i = *(_QWORD *)(i + 1064) )
  {
    PspLockJobConditionally(i, &v8);
    if ( *(_QWORD *)(i + 456) && ((1 << a2) & *(_DWORD *)(i + 884)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    PspUnlockJobConditionally(i, &v8);
  }
  return PspUnlockJob(v8, CurrentThread);
}
