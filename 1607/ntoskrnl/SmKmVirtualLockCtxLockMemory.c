/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x140221054
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14011E8F4 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ZwLockVirtualMemory @ 0x14015C210 (ZwLockVirtualMemory.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140220F04 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14022119C (SmKmVirtualLockCtxMemoryUnlocked.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(ULONG_PTR BugCheckParameter2, void *a2, ULONG_PTR a3)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  signed __int64 v7; // rax
  unsigned __int64 i; // rdx
  signed __int64 v9; // rtt
  NTSTATUS v10; // eax
  int v11; // edi
  unsigned __int64 v12; // rdi
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR NumberOfBytesToLock; // [rsp+60h] [rbp+18h] BYREF

  NumberOfBytesToLock = a3;
  BaseAddress = a2;
  v4 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v6, BugCheckParameter2);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    if ( !v4 )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 8);
      for ( i = v7 + NumberOfBytesToLock; i <= *(_QWORD *)(BugCheckParameter2 + 16); i = NumberOfBytesToLock + v7 )
      {
        v9 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 8), i, v7);
        if ( v9 == v7 )
        {
          v4 = 1;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    }
LABEL_13:
    v10 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToLock, 1u);
    v11 = v10;
    if ( v10 >= 0 )
      break;
    if ( v10 != -1073741663 )
      goto LABEL_20;
LABEL_15:
    v12 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    v11 = SmKmVirtualLockContextIncreaseWsMin((unsigned __int64 *)BugCheckParameter2, NumberOfBytesToLock, v12);
    if ( v11 < 0 )
      goto LABEL_23;
  }
  v4 = 0;
  v11 = 0;
LABEL_20:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
LABEL_23:
  if ( v4 )
    SmKmVirtualLockCtxMemoryUnlocked(BugCheckParameter2);
  return (unsigned int)v11;
}
