/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x14015F474
 * Callers:
 *     SepTokenInitialization @ 0x1407BD844 (SepTokenInitialization.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  unsigned int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // edi
  struct _KTHREAD *v17; // rdx
  __int16 v18; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&SepMandatoryObjectTypePolicyLock, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      &SepMandatoryObjectTypePolicyLock,
      v8,
      (ULONG_PTR)&SepMandatoryObjectTypePolicyLock,
      v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_11;
  v13 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v13 )
  {
    ++v12;
    v13 += 3;
    if ( v12 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_9;
  }
  v7 = 1;
LABEL_9:
  if ( v12 >= 0x20 )
  {
    v16 = -1073741823;
    goto LABEL_19;
  }
  if ( !v7 )
  {
LABEL_11:
    ++SepMandatoryObjectTypePolicyCount;
    v14 = 3LL * v12;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v14] = a1;
    SepMandatoryObjectTypePolicy[2 * v14 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v14 + 2] = 0;
  }
  v15 = 3LL * v12;
  SepMandatoryObjectTypePolicy[2 * v15 + 2] |= 1u;
  SepMandatoryObjectTypePolicy[2 * v15 + 3] = a2;
  if ( (a2 & 1) != 0 )
    SepMandatoryObjectTypePolicy[6 * v12 + 4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    SepMandatoryObjectTypePolicy[6 * v12 + 4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    SepMandatoryObjectTypePolicy[6 * v12 + 4] |= 0x400u;
  v16 = 0;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v16;
}
