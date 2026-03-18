/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x14050AB34
 * Callers:
 *     PpmPerfReApplyStates @ 0x1404F8CB0 (PpmPerfReApplyStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 174LL * dword_1402DE28C;
  LOWORD(v3) = PpmAllowedActions & *a1;
  LOWORD(v7) = v3;
  if ( (v3 & 0x1000) != 0 )
  {
    LOWORD(v3) = 0;
    if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
    {
      v5 = __readmsr(0xDB0u);
      if ( BYTE5(PpmCurrentProfile[v2 + 13]) )
        v3 = v5 | 1;
      else
        v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      a2 = HIDWORD(v3);
      __writemsr(0xDB0u, v3);
    }
  }
  v7 &= ~0x1000u;
  if ( (_WORD)v7 )
  {
    v4 = (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[v2 + 7]));
    if ( v4 > KeMaximumIncrement )
    {
      v4 -= KeMaximumIncrement;
      a2 = v4 / 0x2710;
      PpmPerfTimeWindow = v4 / 0x2710;
    }
    else
    {
      PpmPerfTimeWindow = 0;
    }
    if ( !PpmPerfControlStartPolicyUpdate
      || (LODWORD(v3) = PpmPerfControlStartPolicyUpdate(v4, a2, PpmCurrentProfile), (v3 & 0x80000000) == 0LL) )
    {
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)&v7,
        0LL);
      LOWORD(v3) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(v3) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return v3;
}
