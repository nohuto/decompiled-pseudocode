/*
 * XREFs of PpmProfileAcDcUpdate @ 0x1406BDEAC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 */

void PpmProfileAcDcUpdate()
{
  __int64 v0; // rsi
  __int64 v1; // rbx
  BOOL v2; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_14032E84C;
  v1 = 0LL;
  v2 = dword_14032E84C == 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v5, (ULONG_PTR)&PpmIdlePolicyLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = 2LL;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  v9 = PpmCurrentProfile + 5;
  do
  {
    v10 = *v9 | v9[174];
    ++v9;
    v1 |= v10;
    --v8;
  }
  while ( v8 );
  v11 = v1 & 0x3FFD8030FC0LL;
  PpmCompareAndApplyPolicySettings(
    &v11,
    (char **)&PpmCurrentProfile[174 * v2 + 5],
    (__int64)&PpmCurrentProfile[174 * v0 + 5]);
}
