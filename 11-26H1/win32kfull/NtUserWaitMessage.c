/*
 * XREFs of NtUserWaitMessage @ 0x14005C0C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x14005C134 (ClientWaitMessageExMPH.c)
 */

__int64 NtUserWaitMessage()
{
  __int64 v0; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx

  EnterCrit(0LL, 0LL);
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v0);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  if ( *(int *)(CurrentThreadWin32Thread[60] + 28LL) > 0 )
    v2 = ClientWaitMessageExMPH(15615LL, 0LL);
  else
    v2 = xxxSleepThread2(0x3CFFu, 0, 1, 0, 0);
  v4 = v2;
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
