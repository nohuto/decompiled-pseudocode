/*
 * XREFs of PopCoolingTelemetryWorker @ 0x14023690C
 * Callers:
 *     PopThermalTelemetryWorker @ 0x14023CB00 (PopThermalTelemetryWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopCoolingTelemetryWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  struct _KTHREAD *v10; // rax
  __int64 v11; // rsi
  struct _KTHREAD *v12; // rax
  signed __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 *i; // rdi
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  signed __int64 v24; // rcx
  ULONG_PTR v25; // rtt
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PopCoolingExtensionLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopCoolingExtensionLock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopCoolingExtensionLock, v5, (ULONG_PTR)&PopCoolingExtensionLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = KeGetCurrentThread();
  v11 = PopCoolingExtensionList;
  qword_14032E0A8 = (__int64)v10;
  if ( (__int64 *)PopCoolingExtensionList != &PopCoolingExtensionList )
  {
    do
    {
      if ( *(_BYTE *)(v11 + 64) && *(_QWORD *)(v11 + 136) )
      {
        v12 = KeGetCurrentThread();
        v13 = (signed __int64 *)(v11 + 32);
        --v12->KernelApcDisable;
        v14 = KeAbPreAcquire(v11 + 32, 0LL, 0LL, v7);
        v17 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 32), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 32), v14, v11 + 32, v16);
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        *(_QWORD *)(v11 + 40) = KeGetCurrentThread();
        for ( i = *(__int64 **)(v11 + 16); i != (__int64 *)(v11 + 16); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 18) )
          {
            LOBYTE(v15) = *((_BYTE *)i + 16);
            PopThermalUpdatePassiveTimeTracking(i + 5, v15);
            PopTraceThermalRequestPassiveHistogram(i);
          }
        }
        if ( *(_QWORD *)(v11 + 40) )
          *(_QWORD *)(v11 + 40) = 0LL;
        _m_prefetchw(v13);
        v19 = *v13;
        v20 = *v13 - 16;
        if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v20 = 0LL;
        if ( (v19 & 2) != 0 || (v21 = *v13, v21 != _InterlockedCompareExchange64(v13, v20, v19)) )
          ExfReleasePushLock((_QWORD *)(v11 + 32), v15);
        KeAbPostRelease(v11 + 32);
        v22 = KeGetCurrentThread();
        v23 = v22->KernelApcDisable + 1;
        v22->KernelApcDisable = v23;
        if ( !v23
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
          && !v22->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      v11 = *(_QWORD *)v11;
    }
    while ( (__int64 *)v11 != &PopCoolingExtensionList );
    v10 = (struct _KTHREAD *)qword_14032E0A8;
  }
  if ( v10 )
    qword_14032E0A8 = 0LL;
  _m_prefetchw(&PopCoolingExtensionLock);
  v24 = PopCoolingExtensionLock - 16;
  if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  if ( (PopCoolingExtensionLock & 2) != 0
    || (v25 = PopCoolingExtensionLock,
        v25 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PopCoolingExtensionLock,
                 v24,
                 PopCoolingExtensionLock)) )
  {
    ExfReleasePushLock(&PopCoolingExtensionLock, v6);
  }
  KeAbPostRelease((ULONG_PTR)&PopCoolingExtensionLock);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
