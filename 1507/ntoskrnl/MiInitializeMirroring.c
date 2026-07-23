/*
 * XREFs of MiInitializeMirroring @ 0x140583560
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiAllocateMemoryListLocks @ 0x140569C3C (MiAllocateMemoryListLocks.c)
 */

__int64 __fastcall MiInitializeMirroring(EVENT_TYPE Type)
{
  unsigned int v1; // ebx
  struct _KLOCK_QUEUE_HANDLE *MemoryListLocks; // rdi
  _RTL_BITMAP_EX *PoolWithTag; // rax
  _RTL_BITMAP_EX *v5; // rsi
  _RTL_BITMAP_EX *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _RTL_BITMAP_EX *v9; // r14
  struct _KTHREAD *CurrentThread; // rbp
  _RTL_BITMAP_EX *v11; // rcx

  v1 = 0;
  if ( Type == SynchronizationEvent )
  {
    KeInitializeEvent(&stru_14034F108, SynchronizationEvent, 1u);
    stru_14034F120.Parameter = (void *)-1LL;
    stru_14034F120.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
    stru_14034F120.List.Flink = 0LL;
    if ( (dword_1403D00EC & 1) == 0 )
      return 0LL;
  }
  if ( !qword_14034F158 )
  {
    MemoryListLocks = (struct _KLOCK_QUEUE_HANDLE *)MiAllocateMemoryListLocks();
    if ( !MemoryListLocks )
      return 0LL;
    PoolWithTag = (_RTL_BITMAP_EX *)ExAllocatePoolWithTag(
                                      NonPagedPoolNx,
                                      8
                                    * (((((_BYTE)qword_14034EC10 + 1) & 0x3F) != 0)
                                     + ((unsigned __int64)(qword_14034EC10 + 1) >> 6))
                                    + 16,
                                      0x20206D4Du);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag->SizeOfBitMap = qword_14034EC10 + 1;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      v6 = (_RTL_BITMAP_EX *)ExAllocatePoolWithTag(
                               NonPagedPoolNx,
                               8
                             * (((((_BYTE)qword_14034EC10 + 1) & 0x3F) != 0)
                              + ((unsigned __int64)(qword_14034EC10 + 1) >> 6))
                             + 16,
                               0x20206D4Du);
      v9 = v6;
      if ( v6 )
      {
        v6->SizeOfBitMap = qword_14034EC10 + 1;
        v6->Buffer = &v6[1].SizeOfBitMap;
        CurrentThread = KeGetCurrentThread();
        MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread, v7, v8);
        if ( !qword_14034F158 )
        {
          qword_14034F158 = v5;
          v5 = 0LL;
          qword_14034F160 = v9;
          v9 = 0LL;
          LockHandle = MemoryListLocks;
        }
        MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
        if ( !v5 )
          return 1;
        ExFreePoolWithTag(v5, 0);
        v11 = v9;
      }
      else
      {
        v11 = v5;
      }
      ExFreePoolWithTag(v11, 0);
    }
    ExFreePoolWithTag(MemoryListLocks, 0);
  }
  return v1;
}
