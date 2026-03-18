/*
 * XREFs of SmKmKeyGenGenerate @ 0x14065A5D4
 * Callers:
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SmKmKeyGenKeyDelete @ 0x14065A710 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenKeyFind @ 0x14065A7D0 (SmKmKeyGenKeyFind.c)
 *     SmKmKeyGenNewKey @ 0x14065A96C (SmKmKeyGenNewKey.c)
 */

__int64 __fastcall SmKmKeyGenGenerate(unsigned __int64 *BugCheckParameter2, void *a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  struct _PRIVILEGE_SET *v11; // rdi
  int v12; // edi

  v4 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(BugCheckParameter2, v9, (ULONG_PTR)BugCheckParameter2);
      if ( v9 )
        *(_BYTE *)(v9 + 26) |= 1u;
      v10 = SmKmKeyGenKeyFind(BugCheckParameter2, a2);
      v11 = (struct _PRIVILEGE_SET *)v10;
      if ( v10 )
        break;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      KeLeaveCriticalRegion();
      v12 = SmKmKeyGenNewKey((ULONG_PTR)BugCheckParameter2, a2);
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    if ( *(_DWORD *)(v10 + 32) == (_DWORD)v4 )
      break;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    KeLeaveCriticalRegion();
    SmKmKeyGenKeyDelete((ULONG_PTR)BugCheckParameter2, v11);
  }
  memmove(a3, *(const void **)(v10 + 24), v4);
  v12 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
