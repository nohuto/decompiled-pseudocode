/*
 * XREFs of PpmContinueTimeAccumulation @ 0x1401242B4
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x140124144 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     PpmContinueActiveTimeAccumulation @ 0x14009C174 (PpmContinueActiveTimeAccumulation.c)
 *     PpmGetIdleGenerationCounter @ 0x14012E660 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmContinueTimeAccumulation(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi

  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation((__int64)a1, a2, a3);
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = ((__int64 (*)(void))PpmGetIdleGenerationCounter)();
    v6 = v4;
    if ( v4 )
    {
      LOBYTE(v5) = 1;
      LOBYTE(v4) = PpmUpdatePerformanceFeedback((__int64)a1, 0, v5, 0, 0LL);
      if ( (_BYTE)v4 )
        LOBYTE(v4) = v6 == PpmGetIdleGenerationCounter(a1);
    }
  }
  return v4;
}
