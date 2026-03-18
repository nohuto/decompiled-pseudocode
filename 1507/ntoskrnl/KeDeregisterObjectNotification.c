/*
 * XREFs of KeDeregisterObjectNotification @ 0x14002DE1C
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14002DA50 (ExpShutdownWorkerFactory.c)
 *     IopCancelWaitCompletionPacket @ 0x14002DD10 (IopCancelWaitCompletionPacket.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC (ExpLeaveWorkerFactoryAwayMode.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeDeregisterObjectNotification(volatile signed __int32 *a1, __int64 *a2)
{
  char v4; // bp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // esi
  __int64 *v7; // rcx
  __int64 **v8; // rax

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*a1 & 0x80u) != 0 || _interlockedbittestandset(a1, 7u) );
  }
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v7 = (__int64 *)*a2;
    v8 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    v4 = 1;
    v7[1] = (__int64)v8;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
