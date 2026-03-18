/*
 * XREFs of PopEsEnterSleepShutdown @ 0x140565B64
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopTraceEsState @ 0x1401480C0 (PopTraceEsState.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 */

void PopEsEnterSleepShutdown()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r9
  signed __int8 v4; // cf
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  ULONG_PTR v9; // rtt
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  bool v12[12]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+4Ch] [rbp-1Ch]

  PopCurrentPowerState(v12);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PopEsLock, v2, (ULONG_PTR)&PopEsLock, v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = 0;
  qword_14032D448 = (__int64)KeGetCurrentThread();
  v7 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( v12[1] )
    v6 = v13;
  if ( PopEsLastStateChangeTimeStamp )
    PopTraceEsState();
  PopEsAcOnline = v12[0];
  PopEsLastBatteryThreshold = dword_14032E890;
  PopEsLastUserAwaySetting = byte_14032E894;
  PopEsLastBatteryCharge = v6;
  PopEsLastStateChangeTimeStamp = 0LL;
  if ( qword_14032D448 )
    qword_14032D448 = 0LL;
  _m_prefetchw(&PopEsLock);
  v8 = PopEsLock - 16;
  if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (PopEsLock & 2) != 0
    || (v9 = PopEsLock, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v8, PopEsLock)) )
  {
    ExfReleasePushLock(&PopEsLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PopEsLock);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
