/*
 * XREFs of PopThermalReadCounters @ 0x1406B7E10
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1406B7B48 (PoThermalCounterSetCallback.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     IoCancelIrp @ 0x140073FAC (IoCancelIrp.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 __fastcall PopThermalReadCounters(__int64 a1, char a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  IRP *v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *v19; // rax
  signed __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rdx
  signed __int64 v25; // rax
  signed __int64 v26; // rcx
  signed __int64 v27; // rtt
  struct _KTHREAD *v28; // rdx
  __int16 v29; // ax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  if ( (a2 & 1) == 0 || *(_BYTE *)(a1 + 360) )
    goto LABEL_20;
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64 *)(a1 + 416);
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(a1 + 416, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v8[1] = (unsigned __int64)KeGetCurrentThread();
  KeResetEvent((PRKEVENT)(a1 + 456));
  v12 = *(IRP **)(a1 + 56);
  *(_DWORD *)(a1 + 240) = 0;
  IoCancelIrp(v12);
  if ( v8[1] )
    v8[1] = 0LL;
  _m_prefetchw(v8);
  v14 = *v8;
  v15 = *v8 - 16;
  if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (v14 & 2) != 0 || (v16 = *v8, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v15, v14)) )
    ExfReleasePushLock(v8, v13);
  KeAbPostRelease((ULONG_PTR)v8);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  Object[0] = (PVOID)(a1 + 456);
  Object[1] = (PVOID)(a1 + 432);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
LABEL_20:
    v19 = KeGetCurrentThread();
    v20 = (signed __int64 *)(a1 + 416);
    --v19->KernelApcDisable;
    v21 = KeAbPreAcquire(a1 + 416, 0LL, 0LL, a4);
    v23 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 416), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 416), v21, a1 + 416, v22);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    *(_QWORD *)(a1 + 424) = KeGetCurrentThread();
    v24 = *(_DWORD *)(a1 + 256) / 0xAu;
    *a3 = v24;
    a3[1] = *(_DWORD *)(a1 + 80);
    a3[2] = *(_DWORD *)(a1 + 344);
    if ( *(_QWORD *)(a1 + 424) )
      *(_QWORD *)(a1 + 424) = 0LL;
    _m_prefetchw(v20);
    v25 = *v20;
    v26 = *v20 - 16;
    if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v26 = 0LL;
    if ( (v25 & 2) != 0 || (v27 = *v20, v27 != _InterlockedCompareExchange64(v20, v26, v25)) )
      ExfReleasePushLock((_QWORD *)(a1 + 416), v24);
    KeAbPostRelease(a1 + 416);
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
      && !v28->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v4;
}
