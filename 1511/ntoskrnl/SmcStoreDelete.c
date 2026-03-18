/*
 * XREFs of SmcStoreDelete @ 0x1406594B0
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x140658728 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x14065887C (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmStoreDelete @ 0x140657E1C (SmStoreDelete.c)
 *     SmcCacheDereference @ 0x140658B10 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x140658D24 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x140659658 (SmcStoreEntryFind.c)
 */

__int64 __fastcall SmcStoreDelete(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v5; // r15
  struct _PRIVILEGE_SET *v7; // rbp
  struct _EX_RUNDOWN_REF v8; // rax
  unsigned __int64 Count; // r14
  unsigned int v10; // edi
  unsigned __int64 *v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi

  v5 = a2;
  v7 = 0LL;
  v8.Count = SmcCacheReference(a1, a2).Count;
  Count = v8.Count;
  if ( v8.Count )
  {
    v11 = (unsigned __int64 *)(v8.Count + 160);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = (_DWORD *)SmcStoreEntryFind(Count, a3, a4);
    v16 = v15;
    if ( v15 )
    {
      v15[1] |= 4u;
      *v15 = -1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v16 + 2);
      _InterlockedExchange64((volatile __int64 *)v16 + 2, 1LL);
      SmStoreDelete(a4, a3);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      v18 = KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0LL);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v18, (ULONG_PTR)v11);
      if ( v19 )
        *(_BYTE *)(v19 + 26) |= 1u;
      v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)v16 + 1);
      *((_QWORD *)v16 + 1) = 0LL;
      v16[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
    SmcCacheDereference(a1, v5);
    if ( v7 )
      MiDeleteSubsection(v7);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
