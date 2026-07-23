/*
 * XREFs of EtwpGetTrackingLockSlotForThread @ 0x140227D40
 * Callers:
 *     PerfLogExecutiveResourceAcquire @ 0x140227E70 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceRelease @ 0x140228024 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x140228218 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x14022832C (PerfLogExecutiveResourceWait.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

signed __int64 __fastcall EtwpGetTrackingLockSlotForThread(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 result; // rax
  signed __int64 Thread; // rbx
  int v7; // esi
  PVOID PoolWithTag; // rax
  signed __int64 v9; // rdi
  signed __int64 v10; // rax
  int v11; // ecx
  int v12; // edx

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    return 0LL;
  Thread = (signed __int64)CurrentThread[1].WaitBlock[0].Thread;
  v7 = EtwpEthreadSyncTrackingSequence;
  if ( !Thread )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x200uLL, 0x72546552u);
    v9 = (signed __int64)PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x200uLL);
    Thread = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread, v9, 0LL);
    if ( !Thread )
    {
      *(_QWORD *)(v9 + 16) = a1;
      result = v9;
      *(_DWORD *)(v9 + 28) = a2;
      *(_DWORD *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 40) = v7;
      return result;
    }
    ExFreePoolWithTag((PVOID)v9, 0);
  }
  v10 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(Thread + 28);
    if ( v12 == a2 && *(_QWORD *)(Thread + 16) == a1 && *(_DWORD *)(Thread + 40) == v7 )
      return Thread;
    if ( !v10 )
    {
      if ( v12 )
      {
        if ( *(_DWORD *)(Thread + 40) < v7 )
        {
          v10 = Thread;
LABEL_19:
          Thread = v10;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = a1;
            *(_DWORD *)(v10 + 28) = a2;
            *(_QWORD *)(v10 + 32) = 0LL;
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = 0LL;
            *(_DWORD *)(v10 + 24) = 0;
            *(_DWORD *)(v10 + 40) = v7;
            *(_DWORD *)(v10 + 44) = 0;
          }
          return Thread;
        }
      }
      else
      {
        v10 = Thread;
      }
    }
    Thread += 64LL;
    if ( (unsigned int)++v11 >= 8 )
      goto LABEL_19;
  }
}
