/*
 * XREFs of SmcStoreDelete @ 0x14069A8B0
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x140697AC0 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x140697C18 (SmcProcessStoreDeleteRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmStoreDelete @ 0x1406971A0 (SmStoreDelete.c)
 *     SmcCacheDereference @ 0x140699FE8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14069A1EC (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14069AA58 (SmcStoreEntryFind.c)
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
  _BYTE *v13; // rax
  _BYTE *v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  struct _KTHREAD *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rdi

  v5 = a2;
  v7 = 0LL;
  v8.Count = SmcCacheReference(a1, a2).Count;
  Count = v8.Count;
  if ( v8.Count )
  {
    v11 = (unsigned __int64 *)(v8.Count + 160);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11);
    if ( v14 )
      v14[26] |= 1u;
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
      v18 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
      v19 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(v11, v18, (ULONG_PTR)v11);
      if ( v19 )
        v19[26] |= 1u;
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
