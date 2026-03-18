/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1402064E4
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KiCheckStall @ 0x1402066EC (KiCheckStall.c)
 *     KiSetDebuggerOwner @ 0x140206EA0 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(unsigned int a1)
{
  __int64 v1; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // rdx

  if ( a1 < (unsigned int)KeNumberProcessors_0 && !PoAllProcIntrDisabled )
  {
    _mm_lfence();
    v1 = KiProcessorBlock[a1];
    if ( ((*(_DWORD *)(v1 + 11528) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner(v1);
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v4) = 1;
        KiCheckStall(CurrentPrcb, v4);
      }
    }
  }
  return 2LL;
}
