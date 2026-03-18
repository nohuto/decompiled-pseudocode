/*
 * XREFs of PopCurrentPowerState @ 0x1404E965C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PopEsEnterSleepShutdown @ 0x140565B64 (PopEsEnterSleepShutdown.c)
 *     PopEsExitSleep @ 0x140565E94 (PopEsExitSleep.c)
 *     PopCurrentPowerStatePrecise @ 0x14056C204 (PopCurrentPowerStatePrecise.c)
 *     PopEsWorker @ 0x140581C48 (PopEsWorker.c)
 *     PopEsUpdateState @ 0x14058201C (PopEsUpdateState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall PopCurrentPowerState(bool *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // r9
  struct _KTHREAD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r9
  signed __int64 v10; // rcx
  ULONG_PTR v11; // rtt
  __int64 v12; // rdx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  signed __int64 v15; // rcx
  ULONG_PTR v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  bool v19; // al

  memset(a1, 0, 0x20uLL);
  a1[7] = dword_14032E9F8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PopPolicyDeviceLock, 0LL, 0LL, v3);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopPolicyDeviceLock, v4, (ULONG_PTR)&PopPolicyDeviceLock, v5);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&PopCB, 0LL, 0LL, v5);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PopCB, v8, (ULONG_PTR)&PopCB, v9);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( dword_14032E994 )
  {
    v19 = xmmword_14032E9C0 & 1;
    a1[1] = 1;
    *a1 = v19;
    a1[2] = (xmmword_14032E9C0 & 4) != 0;
    a1[3] = (xmmword_14032E9C0 & 2) != 0;
    *((_DWORD *)a1 + 2) = xmmword_14032E9E4;
    *((_DWORD *)a1 + 3) = DWORD1(xmmword_14032E9C0);
    *((_DWORD *)a1 + 4) = HIDWORD(xmmword_14032E9C0);
    *((_DWORD *)a1 + 5) = dword_14032E9D0;
    *((_QWORD *)a1 + 3) = *(_QWORD *)((char *)&xmmword_14032E9E4 + 4);
  }
  else
  {
    *a1 = dword_14032E84C == 0;
  }
  if ( qword_14032E988 )
    qword_14032E988 = 0LL;
  _m_prefetchw(&PopCB);
  v10 = PopCB - 16;
  if ( (PopCB & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (PopCB & 2) != 0
    || (v11 = PopCB, v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopCB, v10, PopCB)) )
  {
    ExfReleasePushLock(&PopCB, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PopCB);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_14032DF48 )
    qword_14032DF48 = 0LL;
  _m_prefetchw(&PopPolicyDeviceLock);
  v15 = PopPolicyDeviceLock - 16;
  if ( (PopPolicyDeviceLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (PopPolicyDeviceLock & 2) != 0
    || (v16 = PopPolicyDeviceLock,
        v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopPolicyDeviceLock, v15, PopPolicyDeviceLock)) )
  {
    ExfReleasePushLock(&PopPolicyDeviceLock, v12);
  }
  KeAbPostRelease((ULONG_PTR)&PopPolicyDeviceLock);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
