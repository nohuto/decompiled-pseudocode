/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x1401341C4
 * Callers:
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x14075B748 (SepTokenInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  char v6; // r14
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rsi
  unsigned int v10; // edx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&SepMandatoryObjectTypePolicyLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&SepMandatoryObjectTypePolicyLock, v7, (ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_11;
  v11 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v11 )
  {
    ++v10;
    v11 += 3;
    if ( v10 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_9;
  }
  v6 = 1;
LABEL_9:
  if ( v10 >= 0x20 )
  {
    v3 = -1073741823;
    goto LABEL_18;
  }
  if ( !v6 )
  {
LABEL_11:
    ++SepMandatoryObjectTypePolicyCount;
    v12 = 3LL * v10;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v12] = a1;
    SepMandatoryObjectTypePolicy[2 * v12 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v12 + 2] = 0;
  }
  v13 = 3LL * v10;
  SepMandatoryObjectTypePolicy[2 * v13 + 2] |= 1u;
  SepMandatoryObjectTypePolicy[2 * v13 + 3] = a2;
  if ( (a2 & 1) != 0 )
    SepMandatoryObjectTypePolicy[6 * v10 + 4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    SepMandatoryObjectTypePolicy[6 * v10 + 4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    SepMandatoryObjectTypePolicy[6 * v10 + 4] |= 0x400u;
LABEL_18:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
