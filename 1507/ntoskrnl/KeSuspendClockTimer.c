/*
 * XREFs of KeSuspendClockTimer @ 0x14014D9D8
 * Callers:
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
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
    off_140321A48();
    CurrentPrcb->PendingTickFlags &= ~1u;
  }
  result = 0LL;
  if ( CurrentPrcb->Number == v1 )
  {
    ++dword_1403390E8;
    KiClockActive = 0;
  }
  if ( CurrentPrcb->ClockOwner )
    CurrentPrcb->ClockOwner = 0;
  return result;
}
