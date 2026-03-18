/*
 * XREFs of SleepInputIdle @ 0x140026534
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall SleepInputIdle(__int64 a1)
{
  __int64 v1; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rbx
  struct _KEVENT *v5; // rcx

  v1 = *(_QWORD *)(a1 + 456);
  if ( !*(_QWORD *)(v1 + 336) )
    *(_QWORD *)(v1 + 336) = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 456) + 336LL) == a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v4 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    EtwTraceSleepInputIdle(0LL, a1);
    v5 = *(struct _KEVENT **)(v4 + 16);
    if ( v5 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    else if ( v5 )
    {
      KeClearEvent(v5);
    }
  }
}
