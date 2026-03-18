/*
 * XREFs of MmGetChannelInformation @ 0x14058A52C
 * Callers:
 *     ExpQueryNumaAvailableMemory @ 0x14058A3D4 (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryChannelInformation @ 0x1406EE700 (ExpQueryChannelInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MiGetNodeChannelPageCounts @ 0x14015BFC4 (MiGetNodeChannelPageCounts.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmGetChannelInformation(unsigned int a1, _QWORD *a2, SIZE_T *a3)
{
  __int64 v4; // rsi
  SIZE_T v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // r9
  char *v8; // r13
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // rdi
  __int64 v11; // r9
  unsigned int v12; // r12d
  char *v13; // rdi
  _QWORD *v14; // rbp
  __int64 v15; // rax
  __int16 v16; // ax
  unsigned int v18; // ecx
  unsigned __int8 *v19; // rdx
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  struct _KTHREAD *v22; // [rsp+40h] [rbp-58h]
  char *PoolWithTag; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp+20h] BYREF

  if ( a1 >= (unsigned __int16)KeNumberNodes )
    return 3221225711LL;
  v4 = qword_140353D28 + 1336LL * a1;
  v5 = 40LL * (unsigned int)MmNumberOfChannels;
  *a3 = v5;
  v6 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x68506D4Du);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  v22 = CurrentThread;
  --CurrentThread->SpecialApcDisable;
  v10 = KeAbPreAcquire(v4 + 1304, 0LL, 0LL, v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1304), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(v4 + 1304), v10, v4 + 1304, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v12 = MmNumberOfChannels;
  if ( MmNumberOfChannels )
  {
    v13 = v8 + 4;
    v14 = (_QWORD *)(v4 + 1184);
    do
    {
      *((_DWORD *)v13 - 1) = v6;
      if ( (*(_DWORD *)(v4 + 1296) & 1) != 0 )
      {
        v18 = 0;
        v19 = (unsigned __int8 *)(v4 + 1313);
        while ( *v19 != v6 )
        {
          ++v18;
          ++v19;
          if ( v18 >= v12 )
            goto LABEL_11;
        }
        *(_DWORD *)v13 = v18;
      }
      else
      {
        *(_DWORD *)v13 = -1;
      }
LABEL_11:
      *(_QWORD *)(v13 + 4) = *v14;
      MiGetNodeChannelPageCounts(a1, v6++, &v25, &v20, &v21);
      v15 = v25;
      ++v14;
      *(_QWORD *)(v13 + 20) = v20;
      *(_QWORD *)(v13 + 28) = v21;
      *(_QWORD *)(v13 + 12) = v15;
      v13 += 40;
    }
    while ( v6 < v12 );
    CurrentThread = v22;
    v8 = PoolWithTag;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1304), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v4 + 1304));
  KeAbPostRelease(v4 + 1304);
  v16 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v16;
  if ( !v16 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  *a2 = v8;
  return 0LL;
}
