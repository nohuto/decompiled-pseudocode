/*
 * XREFs of PpmQueryPlatformStateResidency @ 0x140235488
 * Callers:
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmQueryPlatformStateResidency(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int *PoolWithTag; // rax
  unsigned int *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r9
  _PPM_IDLE_STATES *IdleStates; // rcx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  struct _KTHREAD *v14; // r8
  __int16 v15; // ax

  v1 = -1LL;
  v2 = a1;
  if ( PpmPlatformStates )
  {
    if ( *(_QWORD *)(PpmPlatformStates + 40) )
    {
      v3 = *(_DWORD *)PpmPlatformStates;
      if ( a1 != -1 && a1 < v3 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3 + 8, 0x694D5050u);
        v5 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 16 * v3 + 8);
          *v5 = v3;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v9 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v7);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v9, (ULONG_PTR)&PpmIdlePolicyLock, v10);
          if ( v9 )
            *(_BYTE *)(v9 + 26) |= 1u;
          IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
          if ( IdleStates
            && (*(int (__fastcall **)(void *, unsigned int *))(PpmPlatformStates + 40))(
                 IdleStates->PrepareInfo.Context,
                 v5) >= 0 )
          {
            v1 = *(_QWORD *)&v5[4 * v2 + 2];
          }
          if ( qword_14032E288 )
            qword_14032E288 = 0LL;
          _m_prefetchw(&PpmIdlePolicyLock);
          v12 = PpmIdlePolicyLock - 16;
          if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v12 = 0LL;
          if ( (PpmIdlePolicyLock & 2) != 0
            || (v13 = PpmIdlePolicyLock,
                v13 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&PpmIdlePolicyLock,
                         v12,
                         PpmIdlePolicyLock)) )
          {
            ExfReleasePushLock(&PpmIdlePolicyLock, v8);
          }
          KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
          v14 = KeGetCurrentThread();
          v15 = v14->KernelApcDisable + 1;
          v14->KernelApcDisable = v15;
          if ( !v15
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
            && !v14->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ExFreePoolWithTag(v5, 0x694D5050u);
        }
      }
    }
  }
  return v1;
}
