/*
 * XREFs of KeSwitchFrozenProcessor @ 0x1401D7C58
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2AAC (KdpSendWaitContinue.c)
 * Callees:
 *     KiSetDebuggerOwner @ 0x1400832A0 (KiSetDebuggerOwner.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KiCheckStall @ 0x1401D7CF4 (KiCheckStall.c)
 */

__int64 __fastcall KeSwitchFrozenProcessor(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rdx

  v1 = a1;
  if ( a1 < KeQueryActiveProcessorCountEx(0xFFFFu) && !PoAllProcIntrDisabled )
  {
    _mm_lfence();
    v2 = KiProcessorBlock[v1];
    if ( ((*(_DWORD *)(v2 + 11528) - 2) & 0xFFFFFFFD) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiSetDebuggerOwner(v2);
      if ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
        return 3LL;
      if ( (CurrentPrcb->IpiFrozen & 0xF) != 4 )
        return 0LL;
      KeQueryPerformanceCounter(0LL);
      while ( CurrentPrcb != (struct _KPRCB *)KiDebuggerOwner )
      {
        LOBYTE(v5) = 1;
        KiCheckStall(CurrentPrcb, v5);
      }
    }
  }
  return 2LL;
}
