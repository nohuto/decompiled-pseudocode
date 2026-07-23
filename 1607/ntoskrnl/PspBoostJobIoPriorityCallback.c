/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x140457500
 * Callers:
 *     <none>
 * Callees:
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // r9
  _QWORD *NextJobProcess; // rbx
  KSPIN_LOCK *i; // rdx
  __int64 NextProcessThread; // rax
  KSPIN_LOCK *v8; // rsi
  int IoPriorityThread; // eax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 860) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    while ( 1 )
    {
      NextJobProcess = PspGetNextJobProcess(a1, (__int64)CurrentThread, v10, v3);
      if ( !NextJobProcess )
        break;
      for ( i = 0LL; ; i = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(NextJobProcess, i);
        v8 = (KSPIN_LOCK *)NextProcessThread;
        if ( !NextProcessThread )
          break;
        IoPriorityThread = PsGetIoPriorityThread(NextProcessThread);
        IoBoostThreadIoPriority(v8, IoPriorityThread, 0);
      }
      v3 = NextJobProcess;
      a1 = v1;
    }
  }
  return 0LL;
}
