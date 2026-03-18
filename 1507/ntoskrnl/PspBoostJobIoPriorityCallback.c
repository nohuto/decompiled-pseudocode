/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x1404F5EBC
 * Callers:
 *     <none>
 * Callees:
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     PspGetNextJobProcess @ 0x1404F60B8 (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 i; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KTHREAD *j; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v8; // rbx
  int v9; // r9d
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( !*(_DWORD *)(a1 + 868) )
  {
    CurrentThread = KeGetCurrentThread();
    for ( i = PspGetNextJobProcess(a1, CurrentThread, v11, 0LL); i; i = PspGetNextJobProcess(a1, CurrentThread, v11, i) )
    {
      for ( j = 0LL; ; j = v8 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread(i, j, v4, v5);
        v8 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        v9 = (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) >> 9) & 7;
        if ( (NextProcessThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
          v9 = 0;
        if ( v9 < 2 && NextProcessThread == KeGetCurrentThread() )
        {
          if ( HIDWORD(NextProcessThread[1].Timer.TimerListEntry.Flink) )
            v9 = 2;
        }
        IoBoostThreadIoPriority((__int64)NextProcessThread, v9, 0);
      }
    }
  }
  return 0LL;
}
