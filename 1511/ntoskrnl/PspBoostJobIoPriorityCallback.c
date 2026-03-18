/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x1404E23A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // r9
  _QWORD *NextJobProcess; // rbx
  KSPIN_LOCK *i; // rdx
  KSPIN_LOCK *NextProcessThread; // rax
  KSPIN_LOCK *v8; // rsi
  int IoPriorityThread; // eax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 868) )
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
        NextProcessThread = PsGetNextProcessThread((__int64)NextJobProcess, i);
        v8 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        IoPriorityThread = PsGetIoPriorityThread((__int64)NextProcessThread);
        IoBoostThreadIoPriority(v8, IoPriorityThread, 0);
      }
      v3 = NextJobProcess;
      a1 = v1;
    }
  }
  return 0LL;
}
