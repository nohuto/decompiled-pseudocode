/*
 * XREFs of SepIsParentOfChildAppContainer @ 0x1404082B8
 * Callers:
 *     SeIsParentOfChildAppContainer @ 0x1404082B0 (SeIsParentOfChildAppContainer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x140250784 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x140408410 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x14040849C (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SepIsParentOfChildAppContainer(unsigned int a1, int a2, int a3, __int64 a4)
{
  BOOLEAN result; // al
  BOOLEAN IsParentOfChildAppContainer; // r13
  char v7; // r12
  struct _KTHREAD *v8; // rax
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  signed __int8 v12; // cf
  ULONG_PTR v13; // rdi
  __int64 v14; // rsi
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rdi
  __int64 v19; // r9
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  bool v24; // zf
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF

  result = 0;
  BugCheckParameter2 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  IsParentOfChildAppContainer = 0;
  v7 = 0;
  if ( a2 && a3 )
  {
    if ( a1 >= 5 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v18, (ULONG_PTR)&LowboxSessionMapLock, v19);
      if ( v18 )
        *(_BYTE *)(v18 + 26) |= 1u;
      v7 = 1;
      if ( (int)SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2) < 0 )
        goto LABEL_21;
    }
    else
    {
      BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (volatile signed __int32 *)BugCheckParameter2;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v12 = _interlockedbittestandset64(v9, 0LL);
    v13 = BugCheckParameter2;
    v14 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2, v11);
    if ( v14 )
    {
      *(_BYTE *)(v14 + 26) |= 1u;
      v13 = BugCheckParameter2;
    }
    if ( (int)SepFindMatchingLowBoxNumberEntries(*(PRTL_DYNAMIC_HASH_TABLE *)(v13 + 24), (__int64)&v25) < 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v22 = KeGetCurrentThread();
      v23 = v22->KernelApcDisable + 1;
      v22->KernelApcDisable = v23;
      if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      {
        v24 = v22->SpecialApcDisable == 0;
        goto LABEL_34;
      }
    }
    else
    {
      IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*(PSID *)(v26 + 32), *(PSID *)(v25 + 32));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v15 = KeGetCurrentThread();
      v16 = v15->KernelApcDisable + 1;
      v15->KernelApcDisable = v16;
      if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
      {
        v24 = v15->SpecialApcDisable == 0;
LABEL_34:
        if ( v24 )
          KiCheckForKernelApcDelivery();
      }
    }
    if ( !v7 )
      return IsParentOfChildAppContainer;
LABEL_21:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return IsParentOfChildAppContainer;
  }
  return result;
}
