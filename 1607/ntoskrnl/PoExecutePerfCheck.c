/*
 * XREFs of PoExecutePerfCheck @ 0x1400DB200
 * Callers:
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     PpmGetIdleConstrainedMask @ 0x1401FF830 (PpmGetIdleConstrainedMask.c)
 */

void PoExecutePerfCheck()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // r8
  signed __int64 v2; // r9
  unsigned int v3; // r10d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( PpmIdleCheckIdleDurationExpiration && (unsigned __int8)PpmGetIdleConstrainedMask(0LL) )
    KiInsertQueueDpc((ULONG_PTR)&PpmCheckIdleExpirationDpc, 0LL, 0LL, 0LL, 0);
  v0 = PpmCheckLastExecutionTime;
  if ( PpmCheckLastExecutionTime )
  {
    v1 = (unsigned int)KeTimeIncrement;
    if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
      v1 = PpmCheckPeriod;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( v1 + PpmCheckLastExecutionTime <= MEMORY[0xFFFFF78000000008] )
    {
      v3 = 0;
      if ( PpmCheckLastExecutionTime != 1 )
      {
        if ( PpmCheckLastExecutionTime + v1 + KeMaximumIncrement > MEMORY[0xFFFFF78000000008] )
          v2 = v1 + PpmCheckLastExecutionTime;
        v4 = v2 - v1 - PpmCheckLastExecutionTime;
        if ( v4 >= v1 )
        {
          v3 = 64;
          v5 = v4 / v1;
          if ( (unsigned int)v5 < 0x40 )
            v3 = v5;
        }
      }
      if ( v0 == _InterlockedCompareExchange64(&PpmCheckLastExecutionTime, v2, PpmCheckLastExecutionTime) )
        KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, v3, 0LL, 0LL, 0);
    }
  }
}
