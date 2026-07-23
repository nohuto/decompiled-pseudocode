/*
 * XREFs of PpmUpdateProcessorPolicy @ 0x140545A2C
 * Callers:
 *     PpmPerfReApplyStates @ 0x140531D54 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     KeInitializeAffinityEx @ 0x1400D3330 (KeInitializeAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmUpdateTargetProcessorPolicy @ 0x14020519C (PpmUpdateTargetProcessorPolicy.c)
 */

__int16 __fastcall PpmUpdateProcessorPolicy(_WORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 *v4; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // rdi
  unsigned int i; // esi
  __int64 v9; // rdx
  _DWORD v11[4]; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int16 v12[88]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = a2;
  LOWORD(v3) = PpmAllowedActions & *a1;
  v4 = &PpmCurrentProfile[174 * dword_140303D4C];
  LOWORD(v11[0]) = v3;
  if ( !a2 && (v11[0] & 0x1000) != 0 )
  {
    LOWORD(v3) = 0;
    if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
    {
      v5 = __readmsr(0xDB0u);
      if ( *((_BYTE *)v4 + 109) )
        v3 = v5 | 1;
      else
        v3 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0xDB0u, v3);
    }
  }
  v11[0] &= ~0x1000u;
  if ( LOWORD(v11[0]) )
  {
    v6 = (unsigned int)(10000 * *((_DWORD *)v4 + 15));
    PpmPerfTimeWindow = v6 <= KeMaximumIncrement ? 0 : (v6 - KeMaximumIncrement) / 0x2710;
    if ( !PpmPerfControlStartPolicyUpdate || (LODWORD(v3) = PpmPerfControlStartPolicyUpdate(), (v3 & 0x80000000) == 0LL) )
    {
      if ( v2 )
      {
        v7 = *(__int64 **)v2;
      }
      else
      {
        v2 = PpmPerfDomainHead;
        v7 = &PpmPerfDomainHead;
      }
      KeInitializeAffinityEx(v12);
      while ( (__int64 *)v2 != v7 )
      {
        KeOrAffinityEx((unsigned __int16 *)(v2 + 24), v12, v12);
        for ( i = 0; i < *(_DWORD *)(v2 + 192); ++i )
        {
          v9 = *(_QWORD *)(v2 + 200) + 96LL * i;
          if ( *(_BYTE *)(v9 + 16) )
            PpmUpdateTargetProcessorPolicy(v2, *(_QWORD *)(v9 + 8), v11, (__int64)(v4 + 5), 0LL);
        }
        v2 = *(_QWORD *)v2;
      }
      PopExecuteOnTargetProcessors(
        (__int64)&PpmPerfStatesRegistered,
        (__int64)PpmUpdateProcessorPolicyCallback,
        (__int64)v11,
        (__int64)(v4 + 5));
      LOWORD(v3) = (_WORD)PpmPerfControlCompletePolicyUpdate;
      if ( PpmPerfControlCompletePolicyUpdate )
        LOWORD(v3) = PpmPerfControlCompletePolicyUpdate();
    }
  }
  return v3;
}
