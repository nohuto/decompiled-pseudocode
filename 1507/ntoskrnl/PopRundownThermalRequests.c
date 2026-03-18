/*
 * XREFs of PopRundownThermalRequests @ 0x1406B2D44
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1405C64A0 (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopRundownThermalRequests(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 i; // rdi
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
      if ( *(_BYTE *)(v11 + 64) )
      {
        v12 = KeGetCurrentThread();
        v13 = (signed __int64 *)(v11 + 32);
        --v12->KernelApcDisable;
        v14 = KeAbPreAcquire(v11 + 32, 0LL, 0LL, v7);
        v16 = v14;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 32), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 32), v14, v11 + 32, v15);
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        *(_QWORD *)(v11 + 40) = KeGetCurrentThread();
        PopDiagTraceCoolingExtension(v11, &POP_ETW_EVENT_COOLING_EXTENSION_RUNDOWN);
        for ( i = *(_QWORD *)(v11 + 16); i != v11 + 16; i = *(_QWORD *)i )
        {
          if ( *(_BYTE *)(i + 18) )
            PopDiagTraceThermalRequest(i, &POP_ETW_EVENT_THERMAL_REQUEST_RUNDOWN);
        }
        if ( *(_QWORD *)(v11 + 40) )
          *(_QWORD *)(v11 + 40) = 0LL;
        _m_prefetchw(v13);
        v19 = *v13;
        v20 = *v13 - 16;
        if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v20 = 0LL;
        if ( (v19 & 2) != 0 || (v21 = *v13, v21 != _InterlockedCompareExchange64(v13, v20, v19)) )
          ExfReleasePushLock((_QWORD *)(v11 + 32), v17);
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
