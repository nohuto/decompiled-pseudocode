/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C001CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGTHREAD *DXGTHREAD_GetCurrent(void)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbx
  __int64 v2; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !CurrentThread )
  {
    v2 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v2 + 24) = 92LL;
    WdLogEvent5_WdAssertion(v2);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId )
  {
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v5 = *ThreadWin32Thread;
        if ( v5 )
          return *(struct DXGTHREAD **)(v5 + 80);
      }
    }
  }
  return (struct DXGTHREAD *)v1;
}
