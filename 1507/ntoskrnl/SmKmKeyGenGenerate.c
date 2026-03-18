/*
 * XREFs of SmKmKeyGenGenerate @ 0x1406DCD18
 * Callers:
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x1406DCEF0 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x1406DCFF4 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x1406DD190 (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(unsigned __int64 *BugCheckParameter2, void *a2, void *a3, __int64 a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  struct _PRIVILEGE_SET *v12; // rdi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v15; // edi
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax

  v4 = (unsigned int)a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(BugCheckParameter2, v9, (ULONG_PTR)BugCheckParameter2, v10);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v11 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v12 = (struct _PRIVILEGE_SET *)v11;
      if ( v11 )
        break;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      v13 = KeGetCurrentThread();
      v14 = v13->KernelApcDisable + 1;
      v13->KernelApcDisable = v14;
      if ( !v14
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
        && !v13->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v15 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2);
      if ( v15 < 0 )
        return (unsigned int)v15;
    }
    if ( *(_DWORD *)(v11 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v12);
  }
  memmove(a3, *(const void **)(v11 + 24), v4);
  v15 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v15;
}
