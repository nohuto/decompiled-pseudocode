/*
 * XREFs of PopAssociateThermalRequest @ 0x1405C3744
 * Callers:
 *     PoCreateThermalRequest @ 0x1405C364C (PoCreateThermalRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopAcquireCoolingInterface @ 0x1405C3B58 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     PopDiagTraceCoolingExtension @ 0x1405C64A0 (PopDiagTraceCoolingExtension.c)
 *     PopCleanCoolingExtension @ 0x1406B202C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 */

__int64 __fastcall PopAssociateThermalRequest(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // rdi
  __int64 Dope; // rbp
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  signed __int64 v16; // rcx
  ULONG_PTR v17; // rtt
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  _QWORD *PoolWithTag; // rax
  int v21; // ebx
  __int64 v22; // r9
  struct _KTHREAD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 **v26; // rax
  struct _KTHREAD *v27; // rax
  unsigned __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  signed __int64 v39; // rax
  signed __int64 v40; // rcx
  __int64 v41; // rtt
  __int64 v42; // rdx
  struct _KTHREAD *v43; // rcx
  __int16 v44; // ax
  signed __int64 v45; // rcx
  ULONG_PTR v46; // rtt
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  __int64 v50; // rdx
  signed __int64 v51; // rcx
  ULONG_PTR v52; // rtt
  struct _KTHREAD *v53; // rcx
  __int16 v54; // ax

  v4 = 0LL;
  Dope = PopGetDope(a2);
  if ( !Dope )
    return (unsigned int)-1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&PopCoolingExtensionLock, 0LL, 0LL, v8);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&PopCoolingExtensionLock, 0LL);
  v14 = v10;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&PopCoolingExtensionLock, v10, (ULONG_PTR)&PopCoolingExtensionLock, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = KeGetCurrentThread();
  qword_14032E0A8 = (__int64)v15;
  if ( *(_QWORD *)(Dope + 64) )
    goto LABEL_25;
  if ( v15 )
    qword_14032E0A8 = 0LL;
  _m_prefetchw(&PopCoolingExtensionLock);
  v16 = PopCoolingExtensionLock - 16;
  if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v16 = 0LL;
  if ( (PopCoolingExtensionLock & 2) != 0
    || (v17 = PopCoolingExtensionLock,
        v17 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&PopCoolingExtensionLock,
                 v16,
                 PopCoolingExtensionLock)) )
  {
    ExfReleasePushLock(&PopCoolingExtensionLock, v11);
  }
  KeAbPostRelease((ULONG_PTR)&PopCoolingExtensionLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x6C6F4350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x90uLL);
  v4[3] = v4 + 2;
  v4[2] = v4 + 2;
  v4[5] = 0LL;
  v4[4] = 0LL;
  *((_BYTE *)v4 + 66) = 100;
  v4[6] = a2;
  v21 = PopAcquireCoolingInterface(v4);
  if ( v21 >= 0 )
  {
    *((_BYTE *)v4 + 64) = 1;
    if ( !a3 || (v21 = PopRegisterCoolingExtensionProtection(v4), v21 >= 0) )
    {
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = KeAbPreAcquire((ULONG_PTR)&PopCoolingExtensionLock, 0LL, 0LL, v22);
      v13 = _interlockedbittestandset64((volatile signed __int32 *)&PopCoolingExtensionLock, 0LL);
      v25 = v24;
      if ( v13 )
        ExfAcquirePushLockExclusiveEx(&PopCoolingExtensionLock, v24, (ULONG_PTR)&PopCoolingExtensionLock, v12);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      qword_14032E0A8 = (__int64)KeGetCurrentThread();
      if ( !*(_QWORD *)(Dope + 64) )
      {
        v26 = (__int64 **)qword_14032E0B8;
        *v4 = &PopCoolingExtensionList;
        v4[1] = v26;
        if ( *v26 != &PopCoolingExtensionList )
          __fastfail(3u);
        *v26 = v4;
        qword_14032E0B8 = (__int64)v4;
        *(_QWORD *)(Dope + 64) = v4;
        PopDiagTraceCoolingExtension(v4, &POP_ETW_EVENT_COOLING_EXTENSION_ADD);
        v4 = 0LL;
        a3 = 0;
      }
LABEL_25:
      if ( a3 && (v21 = PopRegisterCoolingExtensionProtection(*(PVOID *)(Dope + 64)), v21 < 0) )
      {
        if ( qword_14032E0A8 )
          qword_14032E0A8 = 0LL;
        _m_prefetchw(&PopCoolingExtensionLock);
        v51 = PopCoolingExtensionLock - 16;
        if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v51 = 0LL;
        if ( (PopCoolingExtensionLock & 2) != 0
          || (v52 = PopCoolingExtensionLock,
              v52 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&PopCoolingExtensionLock,
                       v51,
                       PopCoolingExtensionLock)) )
        {
          ExfReleasePushLock(&PopCoolingExtensionLock, v50);
        }
        KeAbPostRelease((ULONG_PTR)&PopCoolingExtensionLock);
        v53 = KeGetCurrentThread();
        v54 = v53->KernelApcDisable + 1;
        v53->KernelApcDisable = v54;
        if ( !v54
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v53->ApcState.ApcListHead[0].Flink != &v53->152
          && !v53->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      else
      {
        v27 = KeGetCurrentThread();
        v28 = (unsigned __int64 *)(*(_QWORD *)(Dope + 64) + 32LL);
        --v27->KernelApcDisable;
        v29 = KeAbPreAcquire((ULONG_PTR)v28, 0LL, 0LL, v12);
        v31 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
          ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28, v30);
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v28[1] = (unsigned __int64)KeGetCurrentThread();
        v32 = *(_QWORD *)(Dope + 64);
        *(_QWORD *)(a1 + 32) = v32;
        v33 = v32 + 16;
        v34 = *(_QWORD **)(v33 + 8);
        *(_QWORD *)a1 = v33;
        *(_QWORD *)(a1 + 8) = v34;
        if ( *v34 != v33 )
          __fastfail(3u);
        *v34 = a1;
        *(_QWORD *)(v33 + 8) = a1;
        *(_BYTE *)(a1 + 18) = 1;
        PopDiagTraceThermalRequest(a1, &POP_ETW_EVENT_THERMAL_REQUEST_ADD);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL) )
          PopThermalUpdateTelemetryClientCount(1, v35, v36, v37);
        v38 = *(_QWORD *)(Dope + 64);
        if ( *(_QWORD *)(v38 + 40) )
          *(_QWORD *)(v38 + 40) = 0LL;
        _m_prefetchw((const void *)(v38 + 32));
        v39 = *(_QWORD *)(v38 + 32);
        v40 = v39 - 16;
        if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v40 = 0LL;
        if ( (v39 & 2) != 0
          || (v41 = *(_QWORD *)(v38 + 32),
              v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 32), v40, v39)) )
        {
          ExfReleasePushLock((_QWORD *)(v38 + 32), v35);
        }
        KeAbPostRelease(v38 + 32);
        v43 = KeGetCurrentThread();
        v44 = v43->KernelApcDisable + 1;
        v43->KernelApcDisable = v44;
        if ( !v44
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
          && !v43->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( qword_14032E0A8 )
          qword_14032E0A8 = 0LL;
        _m_prefetchw(&PopCoolingExtensionLock);
        v45 = PopCoolingExtensionLock - 16;
        if ( (PopCoolingExtensionLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v45 = 0LL;
        if ( (PopCoolingExtensionLock & 2) != 0
          || (v46 = PopCoolingExtensionLock,
              v46 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&PopCoolingExtensionLock,
                       v45,
                       PopCoolingExtensionLock)) )
        {
          ExfReleasePushLock(&PopCoolingExtensionLock, v42);
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
        v21 = 0;
      }
    }
  }
  if ( v4 )
    PopCleanCoolingExtension(v4);
  return (unsigned int)v21;
}
