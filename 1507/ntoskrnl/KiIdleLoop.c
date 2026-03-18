/*
 * XREFs of KiIdleLoop @ 0x140186810
 * Callers:
 *     KiSystemStartup @ 0x1403EB010 (KiSystemStartup.c)
 * Callees:
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     PoIdle @ 0x1400A7600 (PoIdle.c)
 *     KiIdleSchedule @ 0x14010FB70 (KiIdleSchedule.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 */

void __noreturn KiIdleLoop()
{
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *IdleThread; // rdi
  unsigned int v2; // esi
  _KTHREAD *NextThread; // rsi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  retaddr = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  while ( 1 )
  {
    while ( 1 )
    {
      if ( HvlEnableIdleYield )
        _mm_pause();
      _enable();
      _disable();
      if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
        KiRetireDpcList((__int64)CurrentPrcb);
      if ( CurrentPrcb->QuantumEnd )
      {
        CurrentPrcb->QuantumEnd = 0;
        _enable();
        KiQuantumEnd();
        _disable();
      }
      _InterlockedOr8((volatile signed __int8 *)&CurrentPrcb->IdleHalt, 1u);
      if ( !CurrentPrcb->NextThread )
        break;
      CurrentPrcb->IdleHalt = 0;
      _enable();
      IdleThread = CurrentPrcb->IdleThread;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        v2 = 0;
        do
        {
          if ( (++v2 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            HvlNotifyLongSpinWait(v2);
          _mm_pause();
        }
        while ( (CurrentPrcb->PrcbLock & 1) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      if ( NextThread != IdleThread )
      {
        _disable();
        ++CurrentPrcb->NestingLevel;
        v4 = __rdtsc();
        v5 = (((unsigned __int64)HIDWORD(v4) << 32) | (unsigned int)v4) - CurrentPrcb->StartCycles;
        IdleThread->CycleTime += v5;
        CurrentPrcb->StartCycles += v5;
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        goto LABEL_21;
      }
      CurrentPrcb->PrcbLock = 0LL;
    }
    if ( CurrentPrcb->IdleSchedule )
    {
      CurrentPrcb->IdleHalt = 0;
      _enable();
      if ( KiIdleSchedule((__int64)CurrentPrcb) )
      {
LABEL_21:
        CurrentPrcb->InterruptRequest |= (CurrentPrcb->DpcRequestSummary & 0x2F) != 0;
        SwapContext(1LL);
      }
    }
    else
    {
      if ( (CurrentPrcb->DpcRequestSummary & 0x3F) == 0 )
      {
        __writecr8(0LL);
        PoIdle((ULONG_PTR)CurrentPrcb);
        _enable();
        __writecr8(2uLL);
      }
      CurrentPrcb->IdleHalt = 0;
    }
  }
}
