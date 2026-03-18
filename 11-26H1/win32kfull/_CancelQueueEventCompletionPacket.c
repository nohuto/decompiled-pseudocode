/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1401BC9C0
 * Callers:
 *     NtUserCancelQueueEventCompletionPacket @ 0x1402B0180 (NtUserCancelQueueEventCompletionPacket.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CancelQueueEventCompletionPacket(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v2 = 0LL;
  if ( CurrentThreadWin32Thread )
    v2 = *CurrentThreadWin32Thread;
  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(v2 + 1640), 0LL) == 259 )
  {
    LOBYTE(v3) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(v2 + 1640), v3);
    KeSetEvent(*(PRKEVENT *)(v2 + 760), 1, 0);
  }
  return 1LL;
}
