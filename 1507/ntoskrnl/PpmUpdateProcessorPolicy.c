/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140582208
 * Callers:
 *     PpmPerfReApplyStates @ 0x140566064 (PpmPerfReApplyStates.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_DWORD *a1, unsigned __int64 FeatureBits)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int started; // eax
  unsigned __int64 v7; // rcx
  __int16 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 174LL * dword_14032E84C;
  if ( (*a1 & 0x1000) != 0 )
  {
    FeatureBits = KeGetCurrentPrcb()->FeatureBits;
    if ( (FeatureBits & 0x8000000000LL) != 0 )
    {
      v4 = __readmsr(0xDB0u);
      if ( BYTE5(PpmCurrentProfile[v3 + 13]) )
        v5 = v4 | 1;
      else
        v5 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
      FeatureBits = HIDWORD(v5);
      __writemsr(0xDB0u, v5);
    }
  }
  LOWORD(started) = PpmAllowedActions & *(_WORD *)a1;
  v9 = started;
  if ( (_WORD)started )
  {
    v7 = (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[v3 + 7]));
    if ( v7 <= KeMaximumIncrement )
    {
      PpmPerfTimeWindow = 0;
    }
    else
    {
      v7 -= KeMaximumIncrement;
      FeatureBits = v7 / 0x2710;
      PpmPerfTimeWindow = v7 / 0x2710;
    }
    if ( !PpmPerfControlStartPolicyUpdate
      || (started = PpmPerfControlStartPolicyUpdate(v7, FeatureBits, a1, PpmCurrentProfile), started >= 0) )
    {
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)&v9,
        0LL);
      LOWORD(started) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(started) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return started;
}
