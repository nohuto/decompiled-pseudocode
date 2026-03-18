/*
 * XREFs of SmcStoreDelete @ 0x1406DBA20
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1406DAB54 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1406DACA8 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmStoreDelete @ 0x1406DA214 (SmStoreDelete.c)
 *     SmcCacheDereference @ 0x1406DAF84 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x1406DB1DC (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x1406DBC50 (SmcStoreEntryFind.c)
 */

__int64 __fastcall SmcStoreDelete(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v5; // r15
  struct _PRIVILEGE_SET *v7; // rbp
  struct _EX_RUNDOWN_REF v8; // rax
  struct _EX_RUNDOWN_REF v9; // r9
  unsigned __int64 Count; // r14
  unsigned int v11; // esi
  unsigned __int64 *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  _DWORD *v17; // rax
  _DWORD *v18; // rsi
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbp
  struct _KTHREAD *v27; // rdx
  __int16 v28; // ax

  v5 = a2;
  v7 = 0LL;
  v8.Count = SmcCacheReference(a1, a2).Count;
  Count = v8.Count;
  if ( v8.Count )
  {
    v12 = (unsigned __int64 *)(v8.Count + 160);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v9.Count);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(v12, v14, (ULONG_PTR)v12, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    v17 = (_DWORD *)SmcStoreEntryFind(Count, a3, a4);
    v18 = v17;
    if ( v17 )
    {
      v17[1] |= 4u;
      *v17 = -1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((ULONG_PTR)v12);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
        && !v19->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 2, 1LL, 0LL);
      if ( v21 >= 2 )
        ExfWaitForRundownProtectionRelease((volatile signed __int64 *)v18 + 2, v21);
      _InterlockedExchange64((volatile __int64 *)v18 + 2, 1LL);
      SmStoreDelete(a4, a3);
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v24 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v23);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(v12, v24, (ULONG_PTR)v12, v25);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)v18 + 1);
      v18[1] &= ~4u;
      *((_QWORD *)v18 + 1) = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v12);
    KeAbPostRelease((ULONG_PTR)v12);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    SmcCacheDereference(a1, v5);
    if ( v7 )
      ExFreePoolEx(v7);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v11;
}
