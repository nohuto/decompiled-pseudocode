/*
 * XREFs of PopOrphanCoolingExtension @ 0x1406B296C
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1406B2064 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 */

void __fastcall PopOrphanCoolingExtension(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  signed __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 i; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  __int64 v25; // rdx
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  signed __int64 v28; // rcx
  ULONG_PTR v29; // rtt
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopCoolingExtensionLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopCoolingExtensionLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopCoolingExtensionLock, v6, (ULONG_PTR)&PopCoolingExtensionLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = a1 + 4;
  qword_14032E0A8 = (__int64)KeGetCurrentThread();
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)(a1 + 4), 0LL, 0LL, v7);
  v15 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 4, v12, (ULONG_PTR)(a1 + 4), v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  a1[5] = KeGetCurrentThread();
  if ( a1[6] )
  {
    for ( i = a1[2]; (_QWORD *)i != a1 + 2; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 18) )
      {
        *(_BYTE *)(i + 18) = 0;
        if ( a1[17] )
        {
          PopThermalUpdatePassiveTimeTracking(i + 40, *(_BYTE *)(i + 16));
          PopTraceThermalRequestPassiveHistogram(i);
          PopThermalUpdateTelemetryClientCount(0, v17, v18, v19);
        }
        PopDiagTraceThermalRequest(i, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
      }
    }
    *(_QWORD *)(PopGetDope(a1[6]) + 64) = 0LL;
    v20 = *a1;
    v21 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v21 != a1 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    *a1 = 0LL;
    a1[6] = 0LL;
  }
  if ( a1[5] )
    a1[5] = 0LL;
  _m_prefetchw(v10);
  v22 = *v10;
  v23 = *v10 - 16;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0 || (v24 = *v10, v24 != _InterlockedCompareExchange64(v10, v23, v22)) )
    ExfReleasePushLock(a1 + 4, v13);
  KeAbPostRelease((ULONG_PTR)(a1 + 4));
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_14032E0A8 )
    qword_14032E0A8 = 0LL;
  _m_prefetchw(&PopCoolingExtensionLock);
  v28 = PopCoolingExtensionLock - 16;
  if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v28 = 0LL;
  if ( (PopCoolingExtensionLock & 2) != 0
    || (v29 = PopCoolingExtensionLock,
        v29 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PopCoolingExtensionLock,
                 v28,
                 PopCoolingExtensionLock)) )
  {
    ExfReleasePushLock(&PopCoolingExtensionLock, v25);
  }
  KeAbPostRelease((ULONG_PTR)&PopCoolingExtensionLock);
  v30 = KeGetCurrentThread();
  v31 = v30->KernelApcDisable + 1;
  v30->KernelApcDisable = v31;
  if ( !v31
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
    && !v30->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
