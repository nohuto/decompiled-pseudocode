/*
 * XREFs of SleepInputIdle @ 0x1C010BCF0
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C007F06C (xxxDesktopThreadWaiter.c)
 * Callees:
 *     <none>
 */

void __fastcall SleepInputIdle(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 CurrentProcessWin32Process; // rdi
  struct _KEVENT *v5; // rcx
  __int64 v6; // rdx

  if ( (*(_DWORD *)(a1 + 440) & 0x1000) != 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL) )
      return;
    EtwTraceSleepInputIdle(0LL, a1);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 24LL);
    v5 = *(struct _KEVENT **)(v6 + 32);
    if ( v5 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(v6 + 32) = 0LL;
      return;
    }
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(a1 + 376);
  if ( !*(_QWORD *)(v3 + 296) )
    *(_QWORD *)(v3 + 296) = a1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 376) + 296LL) == a1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
    EtwTraceSleepInputIdle(0LL, a1);
    v5 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
    if ( v5 == (struct _KEVENT *)-1LL )
    {
      *(_QWORD *)(CurrentProcessWin32Process + 16) = 0LL;
      return;
    }
LABEL_11:
    if ( v5 )
      KeClearEvent(v5);
  }
}
