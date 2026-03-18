/*
 * XREFs of PpmContinueTimeAccumulation @ 0x140157608
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1401574A0 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x140013B30 (PpmContinueActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400AA580 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x14015C238 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmContinueTimeAccumulation(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation((__int64)a1, a2, a3);
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = ((__int64 (*)(void))PpmGetIdleGenerationCounter)();
    v5 = v4;
    if ( v4 )
    {
      LOBYTE(v4) = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
      if ( (_BYTE)v4 )
        LOBYTE(v4) = v5 == PpmGetIdleGenerationCounter(a1);
    }
  }
  return v4;
}
