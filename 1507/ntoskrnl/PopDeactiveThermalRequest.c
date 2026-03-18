/*
 * XREFs of PopDeactiveThermalRequest @ 0x1406B23F8
 * Callers:
 *     PoDeleteThermalRequest @ 0x1406B1D44 (PoDeleteThermalRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopPropogateCoolingChange @ 0x140236B60 (PopPropogateCoolingChange.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140565CEC (PopThermalUpdatePassiveTimeTracking.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1405C64A0 (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x1406B202C (PopCleanCoolingExtension.c)
 */

void __fastcall PopDeactiveThermalRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v7; // r14
  signed __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  __int64 v20; // r9
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  signed __int8 v26; // cf
  __int64 v27; // rbp
  struct _KTHREAD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rbp
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  signed __int64 v38; // rax
  signed __int64 v39; // rcx
  signed __int64 v40; // rtt
  __int64 v41; // rdx
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  signed __int64 v44; // rcx
  ULONG_PTR v45; // rtt
  __int64 v46; // r9
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  struct _KTHREAD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rdx
  signed __int64 v55; // rax
  signed __int64 v56; // rcx
  signed __int64 v57; // rtt
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  struct _KTHREAD *v60; // rax
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rsi
  signed __int64 v65; // rax
  signed __int64 v66; // rcx
  signed __int64 v67; // rtt
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  struct _KTHREAD *v71; // rcx
  __int16 v72; // ax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = (signed __int64 *)(v4 + 32);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(v4 + 32, 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 32), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 32), v9, v4 + 32, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  *(_QWORD *)(v4 + 40) = KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 18) )
  {
    if ( *(_QWORD *)(v4 + 136) )
    {
      PopThermalUpdatePassiveTimeTracking(a1 + 40, *(_BYTE *)(a1 + 16));
      PopTraceThermalRequestPassiveHistogram(a1);
      PopThermalUpdateTelemetryClientCount(0, v13, v14, v15);
    }
    PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_REMOVE);
    *(_BYTE *)(a1 + 18) = 0;
    PopPropogateCoolingChange(v4, v16);
  }
  if ( *(_QWORD *)(v4 + 40) )
    *(_QWORD *)(v4 + 40) = 0LL;
  _m_prefetchw(v8);
  v17 = *v8;
  v18 = *v8 - 16;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (v17 & 2) != 0 || (v19 = *v8, v19 != _InterlockedCompareExchange64(v8, v18, v17)) )
    ExfReleasePushLock((_QWORD *)(v4 + 32), v10);
  KeAbPostRelease(v4 + 32);
  v21 = KeGetCurrentThread();
  v22 = v21->KernelApcDisable + 1;
  v21->KernelApcDisable = v22;
  if ( !v22
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
    && !v21->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v23 = KeGetCurrentThread();
  --v23->KernelApcDisable;
  v24 = KeAbPreAcquire((ULONG_PTR)&PopCoolingExtensionLock, 0LL, 0LL, v20);
  v26 = _interlockedbittestandset64((volatile signed __int32 *)&PopCoolingExtensionLock, 0LL);
  v27 = v24;
  if ( v26 )
    ExfAcquirePushLockExclusiveEx(&PopCoolingExtensionLock, v24, (ULONG_PTR)&PopCoolingExtensionLock, v25);
  if ( v27 )
    *(_BYTE *)(v27 + 26) |= 1u;
  qword_14032E0A8 = (__int64)KeGetCurrentThread();
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v29 = KeAbPreAcquire(v4 + 32, 0LL, 0LL, v25);
  v32 = v29;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 32), v29, v4 + 32, v31);
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  *(_QWORD *)(v4 + 40) = KeGetCurrentThread();
  v33 = *(_QWORD *)a1;
  v34 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v34 != a1 )
    __fastfail(3u);
  *v34 = v33;
  *(_QWORD *)(v33 + 8) = v34;
  if ( *(_QWORD *)(v4 + 16) == v4 + 16 )
  {
    v35 = *(_QWORD *)(v4 + 48);
    if ( v35 )
    {
      *(_QWORD *)(PopGetDope(v35) + 64) = 0LL;
      if ( *(_BYTE *)(v4 + 64) )
        PopDiagTraceCoolingExtension(v4, &POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
      v36 = *(_QWORD *)v4;
      v37 = *(_QWORD **)(v4 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v37 != v4 )
        __fastfail(3u);
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *(_QWORD *)v4 = 0LL;
    }
    v7 = 1;
  }
  if ( *(_QWORD *)(v4 + 40) )
    *(_QWORD *)(v4 + 40) = 0LL;
  _m_prefetchw(v8);
  v38 = *v8;
  v39 = *v8 - 16;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v39 = 0LL;
  if ( (v38 & 2) != 0 || (v40 = *v8, v40 != _InterlockedCompareExchange64(v8, v39, v38)) )
    ExfReleasePushLock((_QWORD *)(v4 + 32), v30);
  KeAbPostRelease(v4 + 32);
  v42 = KeGetCurrentThread();
  v43 = v42->KernelApcDisable + 1;
  v42->KernelApcDisable = v43;
  if ( !v43
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
    && !v42->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_14032E0A8 )
    qword_14032E0A8 = 0LL;
  _m_prefetchw(&PopCoolingExtensionLock);
  v44 = PopCoolingExtensionLock - 16;
  if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v44 = 0LL;
  if ( (PopCoolingExtensionLock & 2) != 0
    || (v45 = PopCoolingExtensionLock,
        v45 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PopCoolingExtensionLock,
                 v44,
                 PopCoolingExtensionLock)) )
  {
    ExfReleasePushLock(&PopCoolingExtensionLock, v41);
  }
  KeAbPostRelease((ULONG_PTR)&PopCoolingExtensionLock);
  v47 = KeGetCurrentThread();
  v48 = v47->KernelApcDisable + 1;
  v47->KernelApcDisable = v48;
  if ( !v48
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
    && !v47->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v7 )
  {
    v49 = KeGetCurrentThread();
    --v49->KernelApcDisable;
    v50 = KeAbPreAcquire(v4 + 32, 0LL, 0LL, v46);
    v53 = v50;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 32), v50, v4 + 32, v52);
    if ( v53 )
      *(_BYTE *)(v53 + 26) |= 1u;
    *(_QWORD *)(v4 + 40) = KeGetCurrentThread();
    if ( *(_BYTE *)(v4 + 67) )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      *(_QWORD *)(v4 + 72) = &Event;
      if ( *(_QWORD *)(v4 + 40) )
        *(_QWORD *)(v4 + 40) = 0LL;
      _m_prefetchw(v8);
      v55 = *v8;
      v56 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v56 = 0LL;
      if ( (v55 & 2) != 0 || (v57 = *v8, v57 != _InterlockedCompareExchange64(v8, v56, v55)) )
        ExfReleasePushLock((_QWORD *)(v4 + 32), v54);
      KeAbPostRelease(v4 + 32);
      v58 = KeGetCurrentThread();
      v59 = v58->KernelApcDisable + 1;
      v58->KernelApcDisable = v59;
      if ( !v59
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
        && !v58->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v60 = KeGetCurrentThread();
      --v60->KernelApcDisable;
      v62 = KeAbPreAcquire(v4 + 32, 0LL, 0LL, v61);
      v64 = v62;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 32), v62, v4 + 32, v63);
      if ( v64 )
        *(_BYTE *)(v64 + 26) |= 1u;
      *(_QWORD *)(v4 + 40) = KeGetCurrentThread();
      *(_QWORD *)(v4 + 72) = 0LL;
    }
    if ( *(_QWORD *)(v4 + 40) )
      *(_QWORD *)(v4 + 40) = 0LL;
    _m_prefetchw(v8);
    v65 = *v8;
    v66 = *v8 - 16;
    if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v66 = 0LL;
    if ( (v65 & 2) != 0 || (v67 = *v8, v67 != _InterlockedCompareExchange64(v8, v66, v65)) )
      ExfReleasePushLock((_QWORD *)(v4 + 32), v51);
    KeAbPostRelease(v4 + 32);
    v71 = KeGetCurrentThread();
    v72 = v71->KernelApcDisable + 1;
    v71->KernelApcDisable = v72;
    if ( !v72
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v71->ApcState.ApcListHead[0].Flink != &v71->152
      && !v71->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PopCleanCoolingExtension(v4, v68, v69, v70);
  }
}
