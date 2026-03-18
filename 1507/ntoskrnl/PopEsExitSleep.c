/*
 * XREFs of PopEsExitSleep @ 0x140565E94
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 */

void __fastcall PopEsExitSleep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // ecx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  bool v16[12]; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+2Ch] [rbp-1Ch]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopEsLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopEsLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&PopEsLock, v5, (ULONG_PTR)&PopEsLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  qword_14032D448 = (__int64)KeGetCurrentThread();
  v9 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PopCurrentPowerState(v16);
  v11 = 0;
  PopEsAcOnline = v16[0];
  if ( v16[1] )
    v11 = v17;
  PopEsLastBatteryThreshold = dword_14032E890;
  PopEsLastUserAwaySetting = byte_14032E894;
  PopEsLastStateChangeTimeStamp = v9;
  PopEsLastBatteryCharge = v11;
  if ( qword_14032D448 )
    qword_14032D448 = 0LL;
  _m_prefetchw(&PopEsLock);
  v12 = PopEsLock - 16;
  if ( (PopEsLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (PopEsLock & 2) != 0
    || (v13 = PopEsLock, v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopEsLock, v12, PopEsLock)) )
  {
    ExfReleasePushLock(&PopEsLock, v10);
  }
  KeAbPostRelease((ULONG_PTR)&PopEsLock);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
