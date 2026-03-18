/*
 * XREFs of KeQueryOwnerMutant @ 0x140005614
 * Callers:
 *     NtQueryMutant @ 0x140408154 (NtQueryMutant.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // edi
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (Mutant->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
  }
  OwnerThread = Mutant->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CurrentRunTime;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
}
