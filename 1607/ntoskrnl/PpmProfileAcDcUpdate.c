/*
 * XREFs of PpmProfileAcDcUpdate @ 0x140675E04
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400FBFA8 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 */

LONG PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  BOOL v2; // esi
  __int64 v3; // r8
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140303E0C;
  v1 = 0LL;
  v2 = dword_140303E0C == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  v3 = 2LL;
  v4 = PpmCurrentProfile + 5;
  do
  {
    v5 = *v4 | v4[174];
    ++v4;
    v1 |= v5;
    --v3;
  }
  while ( v3 );
  v7 = v1 & 0x3FFD8030FC0LL;
  return PpmCompareAndApplyPolicySettings(
           &v7,
           (__int64)&PpmCurrentProfile[174 * v2 + 5],
           (__int64)&PpmCurrentProfile[174 * v0 + 5]);
}
