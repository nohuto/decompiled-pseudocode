/*
 * XREFs of PpmApplyProfile @ 0x140675A3C
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x14066FADC (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x14067477C (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x140675BC0 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x140675C18 (PpmPostProcessMediaBuffering.c)
 */

__int64 __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rax
  __int64 *v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = dword_140303E0C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  v6 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
  v8 = 2LL;
  *((_DWORD *)v5 + 7) |= 2u;
  *((_DWORD *)v4 + 7) &= ~2u;
  PpmCurrentProfile = v5;
  v9 = 0LL;
  v5[353] = v6;
  do
  {
    if ( v5 != v7 )
      v3 |= v5[174 * v2 + 5 + v9];
    if ( v4 != v7 )
      v3 |= v4[174 * v2 + 5 + v9];
    ++v9;
    --v8;
  }
  while ( v8 );
  v11 = v3 & 0x3FFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(&v11, (__int64)&v4[174 * v2 + 5], (__int64)&v5[174 * v2 + 5]);
  PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
  result = PpmLowPowerProfile;
  if ( PpmLowPowerProfile )
  {
    if ( v4 == (__int64 *)PpmLowPowerProfile )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmPostProcessMediaBuffering();
    }
  }
  return result;
}
