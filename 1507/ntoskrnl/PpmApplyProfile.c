/*
 * XREFs of PpmApplyProfile @ 0x1406BD84C
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1406B75E8 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x1406BC85C (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x1406BDB64 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x1406BDBBC (PpmPostProcessMediaBuffering.c)
 */

__int64 __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 *v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  v2 = dword_14032E84C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v5);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = PpmCurrentProfile;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  v11 = PpmDefaultProfile;
  if ( a1 )
    v11 = a1;
  v12 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
  v14 = 2LL;
  *((_DWORD *)v11 + 7) |= 2u;
  *((_DWORD *)v10 + 7) &= ~2u;
  PpmCurrentProfile = v11;
  v15 = 0LL;
  v11[353] = v12;
  do
  {
    if ( v11 != v13 )
      v3 |= v11[174 * v2 + 5 + v15];
    if ( v10 != v13 )
      v3 |= v10[174 * v2 + 5 + v15];
    ++v15;
    --v14;
  }
  while ( v14 );
  v17 = v3 & 0x3FFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(&v17, (char **)&v10[174 * v2 + 5], (__int64)&v11[174 * v2 + 5]);
  PpmEventTraceProfileChange((__int64)v10, (__int64)v11);
  result = PpmLowPowerProfile;
  if ( PpmLowPowerProfile )
  {
    if ( v10 == (__int64 *)PpmLowPowerProfile )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmPostProcessMediaBuffering();
    }
  }
  return result;
}
