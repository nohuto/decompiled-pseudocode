/*
 * XREFs of KeRemoveQueueApc @ 0x140128588
 * Callers:
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 * Callees:
 *     KiRemoveQueueApc @ 0x140128614 (KiRemoveQueueApc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // ebx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( *(_QWORD *)(v2 + 64) );
  }
  result = KiRemoveQueueApc(a1);
  *(_QWORD *)(v2 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return result;
}
