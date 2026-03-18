/*
 * XREFs of KeSuspendClockTimer @ 0x140118D9C
 * Callers:
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 */

__int64 KeSuspendClockTimer()
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v1; // edi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = KiClockTimerOwner;
  if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_1402D28F8();
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  result = 0LL;
  if ( CurrentPrcb->Number == v1 )
  {
    ++dword_1402E8C68;
    KiClockActive = 0;
  }
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
