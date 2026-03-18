/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x140257FA0
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x140258134 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x1400F090C (MmQueryWorkingSetInformation.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x140213DAC (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(
        unsigned __int64 *BugCheckParameter2,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // esi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // rax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  unsigned __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v8, (ULONG_PTR)BugCheckParameter2, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a3 >= BugCheckParameter2[2] )
  {
    do
    {
      v11 = MmQueryWorkingSetInformation(&v23, &v22, &v21, &v25, &v20, &v24);
      if ( v11 < 0 )
        break;
      v12 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v13 = v12 + v25;
      if ( v12 + v25 <= v25 )
      {
        v11 = -1073741675;
        break;
      }
      v14 = v20;
      v25 += v12;
      if ( v13 > v20 )
        v14 = v13;
      v20 = v14;
      v15 = MmAdjustWorkingSetSize(v13, v14, 0, 1);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = BugCheckParameter2[2];
        if ( v16 + v12 > v16 )
          BugCheckParameter2[2] = v16 + v12;
        v11 = 0;
        break;
      }
    }
    while ( v15 == -1073741748 );
  }
  else
  {
    v11 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v11;
}
