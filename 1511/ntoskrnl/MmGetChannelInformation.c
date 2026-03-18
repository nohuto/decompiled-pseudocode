/*
 * XREFs of MmGetChannelInformation @ 0x140518364
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14051820C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x14066B0B8 (ExpQueryChannelInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetNodeChannelPageCounts @ 0x14012ED70 (MiGetNodeChannelPageCounts.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned int a1, _QWORD *a2, SIZE_T *a3)
{
  __int64 v4; // rsi
  SIZE_T v5; // rdx
  unsigned int v6; // ebp
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // r14d
  char *v12; // rdi
  _QWORD *v13; // r12
  __int64 v14; // rax
  unsigned int v16; // ecx
  unsigned __int8 *v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  signed __int64 *v20; // [rsp+40h] [rbp-58h]
  struct _KTHREAD *v21; // [rsp+48h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp+20h] BYREF

  if ( a1 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  v4 = qword_1402FFD68 + 1336LL * a1;
  v5 = 40LL * (unsigned int)MmNumberOfChannels;
  *a3 = v5;
  v6 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x68506D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v9 = (signed __int64 *)(v4 + 1304);
  v20 = (signed __int64 *)(v4 + 1304);
  v10 = KeAbPreAcquire(v4 + 1304, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1304), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v4 + 1304), v10, v4 + 1304);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = MmNumberOfChannels;
  if ( MmNumberOfChannels )
  {
    v12 = PoolWithTag + 4;
    v13 = (_QWORD *)(v4 + 1184);
    do
    {
      *((_DWORD *)v12 - 1) = v6;
      if ( (*(_DWORD *)(v4 + 1296) & 1) != 0 )
      {
        v16 = 0;
        v17 = (unsigned __int8 *)(v4 + 1313);
        while ( *v17 != v6 )
        {
          ++v16;
          ++v17;
          if ( v16 >= v11 )
            goto LABEL_11;
        }
        *(_DWORD *)v12 = v16;
      }
      else
      {
        *(_DWORD *)v12 = -1;
      }
LABEL_11:
      *(_QWORD *)(v12 + 4) = *v13;
      MiGetNodeChannelPageCounts(a1, v6++, &v23, &v18, &v19);
      v14 = v23;
      ++v13;
      *(_QWORD *)(v12 + 20) = v18;
      *(_QWORD *)(v12 + 28) = v19;
      *(_QWORD *)(v12 + 12) = v14;
      v12 += 40;
    }
    while ( v6 < v11 );
    v9 = v20;
    CurrentThread = v21;
  }
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  *a2 = PoolWithTag;
  return 0LL;
}
