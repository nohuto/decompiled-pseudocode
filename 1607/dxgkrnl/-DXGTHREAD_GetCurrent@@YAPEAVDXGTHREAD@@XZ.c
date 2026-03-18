/*
 * XREFs of ?DXGTHREAD_GetCurrent@@YAPEAVDXGTHREAD@@XZ @ 0x1C00220D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DXGTHREAD *__fastcall DXGTHREAD_GetCurrent(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !CurrentThread )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v3 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v3);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( CurrentProcessSessionId )
  {
    if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v6 = *ThreadWin32Thread;
        if ( v6 )
          return *(struct DXGTHREAD **)(v6 + 80);
      }
    }
  }
  return (struct DXGTHREAD *)v2;
}
