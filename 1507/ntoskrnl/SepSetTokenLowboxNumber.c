/*
 * XREFs of SepSetTokenLowboxNumber @ 0x140411728
 * Callers:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x140250784 (SepGetTokenSessionMapEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x14056C2F0 (SepInitializeLowBoxNumberTable.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  char v5; // r12
  char v6; // r13
  int LowBoxNumberEntry; // esi
  char *v8; // r15
  struct _KTHREAD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rsi
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v19; // rax
  volatile signed __int32 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  volatile signed __int64 *v23; // rdi
  __int64 v24; // r14
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // rdi
  __int64 v29; // r9
  int TokenSessionMapEntry; // eax
  __int64 v31; // r9
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  struct _KTHREAD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // rdi
  __int16 v38; // ax
  struct _KTHREAD *v39; // rcx
  __int16 v40; // ax
  __int16 v41; // ax
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp+58h] BYREF
  __int64 v45; // [rsp+98h] [rbp+60h] BYREF

  v4 = *(unsigned int *)(a1 + 120);
  BugCheckParameter2 = 0LL;
  v45 = 0LL;
  v5 = 0;
  v6 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v4 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v28 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v28, (ULONG_PTR)&LowboxSessionMapLock, v29);
    if ( v28 )
      *(_BYTE *)(v28 + 26) |= 1u;
    v5 = 1;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(v4, 0, &BugCheckParameter2);
    LowBoxNumberEntry = TokenSessionMapEntry;
    if ( TokenSessionMapEntry < 0 )
    {
      if ( TokenSessionMapEntry == -1073741275 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
        KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
        v32 = KeGetCurrentThread();
        v33 = v32->KernelApcDisable + 1;
        v32->KernelApcDisable = v33;
        if ( !v33
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
          && !v32->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        v35 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL, v31);
        v13 = _interlockedbittestandset64((volatile signed __int32 *)&LowboxSessionMapLock, 0LL);
        v37 = v35;
        if ( v13 )
          ExfAcquirePushLockExclusiveEx(&LowboxSessionMapLock, v35, (ULONG_PTR)&LowboxSessionMapLock, v36);
        if ( v37 )
          *(_BYTE *)(v37 + 26) |= 1u;
        v6 = 1;
        v5 = 0;
        LowBoxNumberEntry = SepGetTokenSessionMapEntry(v4, 1, &BugCheckParameter2);
      }
      if ( LowBoxNumberEntry < 0 )
        goto LABEL_14;
    }
    v8 = (char *)BugCheckParameter2;
  }
  else
  {
    v8 = (char *)&g_SessionLowboxArray + 40 * v4;
    BugCheckParameter2 = (ULONG_PTR)v8;
  }
  if ( !v8[32] )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (volatile signed __int32 *)BugCheckParameter2;
    v21 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v13 = _interlockedbittestandset64(v20, 0LL);
    v23 = (volatile signed __int64 *)BugCheckParameter2;
    v24 = v21;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v21, BugCheckParameter2, v22);
    if ( v24 )
    {
      *(_BYTE *)(v24 + 26) |= 1u;
      v23 = (volatile signed __int64 *)BugCheckParameter2;
    }
    if ( !v8[32] )
      LowBoxNumberEntry = SepInitializeLowBoxNumberTable(v23);
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( !LowBoxNumberEntry )
  {
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    v10 = (volatile signed __int32 *)BugCheckParameter2;
    v11 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v13 = _interlockedbittestandset64(v10, 0LL);
    v14 = (volatile signed __int64 *)BugCheckParameter2;
    v15 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v11, BugCheckParameter2, v12);
    if ( v15 )
    {
      *(_BYTE *)(v15 + 26) |= 1u;
      v14 = (volatile signed __int64 *)BugCheckParameter2;
    }
    LowBoxNumberEntry = SepGetLowBoxNumberEntry(v14, a2, &v45);
    if ( LowBoxNumberEntry )
    {
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v16 = KeGetCurrentThread();
      v38 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v38;
      if ( !v38 )
        goto LABEL_13;
    }
    else
    {
      *(_QWORD *)(a1 + 1080) = v45;
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( !v17 )
      {
LABEL_13:
        if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
          && !v16->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
    }
  }
LABEL_14:
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&LowboxSessionMapLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    v39 = KeGetCurrentThread();
    v40 = v39->KernelApcDisable + 1;
    v39->KernelApcDisable = v40;
    if ( !v40 )
      goto LABEL_61;
  }
  else if ( v5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    v39 = KeGetCurrentThread();
    v41 = v39->KernelApcDisable + 1;
    v39->KernelApcDisable = v41;
    if ( !v41 )
    {
LABEL_61:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v39->ApcState.ApcListHead[0].Flink != &v39->152
        && !v39->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return (unsigned int)LowBoxNumberEntry;
}
