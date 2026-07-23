/*
 * XREFs of PpmProfileAcDcUpdate @ 0x140675EE8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140672A94 (PpmCompareAndApplyPolicySettings.c)
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

  v0 = dword_140303D4C;
  v1 = 0LL;
  v2 = dword_140303D4C == 0;
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
