/*
 * XREFs of MmGetChannelInformation @ 0x14054C77C
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14054C624 (ExpQueryNumaAvailableMemory.c)
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 *     ExpQueryChannelInformation @ 0x1406AB888 (ExpQueryChannelInformation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     MiGetNodeChannelPageCounts @ 0x1401355E8 (MiGetNodeChannelPageCounts.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned int a1, unsigned int a2, _QWORD *a3, SIZE_T *a4)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  SIZE_T v7; // rdx
  unsigned int v8; // ebp
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r15d
  _QWORD *v13; // r14
  char *v14; // rdi
  __int64 v15; // rax
  unsigned int v17; // ecx
  unsigned __int8 *v18; // rdx
  char *PoolWithTag; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-50h] BYREF
  signed __int64 *v23; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *v24; // [rsp+58h] [rbp-40h]

  if ( a2 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  v5 = *(_QWORD *)(qword_140327038 + 8LL * a1);
  v6 = *(_QWORD *)(v5 + 48) + 2184LL * a2;
  v7 = 40LL * (unsigned int)MmNumberOfChannels;
  *a4 = v7;
  v8 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x68506D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  MiLockDynamicMemoryExclusive(v5, (__int64)CurrentThread);
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(v6 + 2144);
  v23 = (signed __int64 *)(v6 + 2144);
  v11 = KeAbPreAcquire(v6 + 2144, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 2144), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v6 + 2144), v11, v6 + 2144);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = MmNumberOfChannels;
  if ( MmNumberOfChannels )
  {
    v13 = (_QWORD *)(v6 + 2024);
    v14 = PoolWithTag + 4;
    do
    {
      *((_DWORD *)v14 - 1) = v8;
      if ( (*(_DWORD *)(v6 + 2136) & 1) != 0 )
      {
        v17 = 0;
        v18 = (unsigned __int8 *)(v6 + 2161);
        while ( *v18 != v8 )
        {
          ++v17;
          ++v18;
          if ( v17 >= v12 )
            goto LABEL_11;
        }
        *(_DWORD *)v14 = v17;
      }
      else
      {
        *(_DWORD *)v14 = -1;
      }
LABEL_11:
      *(_QWORD *)(v14 + 4) = *v13;
      MiGetNodeChannelPageCounts(v5, a2, v8++, &v20, &v21, &v22);
      v15 = v20;
      ++v13;
      *(_QWORD *)(v14 + 20) = v21;
      *(_QWORD *)(v14 + 28) = v22;
      *(_QWORD *)(v14 + 12) = v15;
      v14 += 40;
    }
    while ( v8 < v12 );
    v10 = v23;
    CurrentThread = v24;
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiUnlockDynamicMemoryExclusive(v5, (__int64)CurrentThread);
  *a3 = PoolWithTag;
  return 0LL;
}
