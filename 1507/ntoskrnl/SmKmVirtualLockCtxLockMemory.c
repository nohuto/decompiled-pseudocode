/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x140258134
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ZwLockVirtualMemory @ 0x140180F70 (ZwLockVirtualMemory.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140257FA0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402582E4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(ULONG_PTR BugCheckParameter2, void *a2, ULONG_PTR a3, __int64 a4)
{
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  __int64 v8; // r9
  signed __int64 v9; // rax
  unsigned __int64 i; // rdx
  signed __int64 v11; // rtt
  NTSTATUS v12; // eax
  int v13; // edi
  unsigned __int64 v14; // rdi
  __int64 v15; // r9
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR NumberOfBytesToLock; // [rsp+60h] [rbp+18h] BYREF

  NumberOfBytesToLock = a3;
  BaseAddress = a2;
  v5 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v7, BugCheckParameter2, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    if ( !v5 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 8);
      for ( i = v9 + NumberOfBytesToLock; i <= *(_QWORD *)(BugCheckParameter2 + 16); i = NumberOfBytesToLock + v9 )
      {
        v11 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 8), i, v9);
        if ( v11 == v9 )
        {
          v5 = 1;
          goto LABEL_13;
        }
      }
      goto LABEL_15;
    }
LABEL_13:
    v12 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToLock, 1u);
    v13 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741663 )
      goto LABEL_24;
LABEL_15:
    v14 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v13 = SmKmVirtualLockContextIncreaseWsMin((unsigned __int64 *)BugCheckParameter2, NumberOfBytesToLock, v14, v15);
    if ( v13 < 0 )
      goto LABEL_30;
  }
  v5 = 0;
  v13 = 0;
LABEL_24:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
LABEL_30:
  if ( v5 )
    SmKmVirtualLockCtxMemoryUnlocked(BugCheckParameter2);
  return (unsigned int)v13;
}
