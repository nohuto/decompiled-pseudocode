/*
 * XREFs of xxxWaitMessageEx @ 0x14005C04C
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x14005C134 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, unsigned int a2, ULONG a3)
{
  unsigned int v5; // edi
  _QWORD *CurrentThreadWin32Thread; // rax

  v5 = a1;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  if ( *(int *)(CurrentThreadWin32Thread[60] + 28LL) > 0 )
    return ClientWaitMessageExMPH(v5, a2);
  else
    return xxxSleepThread2(v5, a2, 1, 0, a3);
}
