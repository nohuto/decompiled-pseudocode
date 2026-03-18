/*
 * XREFs of PnpNotifyTargetDeviceChange @ 0x14045EA84
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x14045D6DC (PnpProcessCustomDeviceEvent.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpNotifyTargetDeviceChange(GUID *Source1, PVOID Object, __int64 a3, _QWORD *a4)
{
  __int64 v7; // r9
  char v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v13; // rbx
  bool i; // zf
  int SessionIdFromPDO; // r14d
  unsigned __int8 v16; // si
  signed __int32 v17; // eax
  struct _KTHREAD *CurrentThread; // rax
  int *v19; // rdx
  int v20; // esi
  __int64 v21; // r9
  struct _KTHREAD *v22; // rdx
  __int16 v23; // cx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int8 v27; // r14
  unsigned __int8 v28; // bl
  signed __int32 v29; // eax
  GUID v31; // xmm0
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int8 v37; // r14
  int v38; // esi
  __int64 v39; // r14
  unsigned __int8 v40; // r15
  signed __int32 v41; // eax
  struct _KTHREAD *v42; // rax
  __int64 v43; // r9
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned __int8 v48; // r15
  __int64 v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-58h] BYREF
  int v51; // [rsp+24h] [rbp-54h]
  PVOID Objecta; // [rsp+28h] [rbp-50h]
  __int64 v53; // [rsp+30h] [rbp-48h]
  _QWORD *v54; // [rsp+38h] [rbp-40h]
  __int64 v55; // [rsp+40h] [rbp-38h]
  int v56; // [rsp+48h] [rbp-30h] BYREF
  GUID v57; // [rsp+4Ch] [rbp-2Ch]
  __int64 v58; // [rsp+60h] [rbp-18h]

  v51 = -1;
  v54 = a4;
  Objecta = Object;
  ObfReferenceObject(Object);
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  if ( a3 )
  {
    *(_WORD *)a3 = 1;
  }
  else
  {
    v31 = *Source1;
    v56 = 2097153;
    v57 = v31;
  }
  v10 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, v7);
  v11 = v10;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  qword_14034B2A8 = (__int64)KeGetCurrentThread();
  dword_14034B2D0 = CurrentIrql;
  if ( Source1 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED
    || RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
  {
    v13 = *(_QWORD *)(v9 + 480);
    v8 = 1;
  }
  else
  {
    v13 = *(_QWORD *)(v9 + 472);
  }
  v53 = v9 + 472;
  for ( i = v13 == v9 + 472; ; i = v13 == v53 )
  {
    if ( i )
    {
      v50 = 0;
      goto LABEL_32;
    }
    v55 = v13;
    if ( *(_DWORD *)(v13 + 20) == *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
    {
      SessionIdFromPDO = v51;
    }
    else
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
      v51 = SessionIdFromPDO;
    }
    ++*(_WORD *)(v13 + 56);
    qword_14034B2A8 = 0LL;
    v16 = dword_14034B2D0;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, v17);
    __writecr8(v16);
    KeAbPostRelease((ULONG_PTR)&PnpTargetDeviceNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 72), 1u);
    if ( (SessionIdFromPDO == -1 || *(_DWORD *)(v13 + 20) == SessionIdFromPDO) && !*(_BYTE *)(v13 + 58) )
      break;
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 72));
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
LABEL_24:
    v25 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, v21);
    v26 = v25;
    v27 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v25);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    qword_14034B2A8 = (__int64)KeGetCurrentThread();
    dword_14034B2D0 = v27;
    if ( v8 )
      v13 = *(_QWORD *)(v13 + 8);
    else
      v13 = *(_QWORD *)v13;
    PnpDereferenceNotify(v55);
  }
  if ( a3 )
  {
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(v13 + 80);
    v19 = (int *)a3;
  }
  else
  {
    v58 = *(_QWORD *)(v13 + 80);
    v19 = &v56;
  }
  v20 = PnpNotifyDriverCallback(v13, (__int64)v19, &v50);
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 72));
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v24 = v50;
  if ( v20 < 0 )
    v24 = 0;
  v50 = v24;
  if ( v24 >= 0
    || Source1 != &GUID_TARGET_DEVICE_QUERY_REMOVE
    && RtlCompareMemory(Source1, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) != 16 )
  {
    goto LABEL_24;
  }
  if ( v54 )
    *v54 = *(_QWORD *)(v13 + 48);
  v34 = v13;
  v57 = GUID_TARGET_DEVICE_REMOVE_CANCELLED;
  v35 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, v21);
  v36 = v35;
  v37 = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v35);
  if ( v36 )
    *(_BYTE *)(v36 + 26) |= 1u;
  qword_14034B2A8 = (__int64)KeGetCurrentThread();
  dword_14034B2D0 = v37;
  do
  {
    v38 = -1;
    v39 = v13;
    if ( *(_DWORD *)(v13 + 20) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
      v38 = IopGetSessionIdFromPDO((struct _DEVICE_OBJECT *)Objecta);
    ++*(_WORD *)(v13 + 56);
    v40 = dword_14034B2D0;
    qword_14034B2A8 = 0LL;
    v41 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 1, 0);
    if ( v41 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, v41);
    __writecr8(v40);
    KeAbPostRelease((ULONG_PTR)&PnpTargetDeviceNotifyLock);
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 72), 1u);
    if ( (v38 == -1 || *(_DWORD *)(v13 + 20) == v38) && !*(_BYTE *)(v13 + 58) )
    {
      v58 = *(_QWORD *)(v13 + 80);
      PnpNotifyDriverCallback(v13, (__int64)&v56, 0LL);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 72));
    v44 = KeGetCurrentThread();
    v45 = v44->KernelApcDisable + 1;
    v44->KernelApcDisable = v45;
    if ( !v45
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
      && !v44->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v46 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, v43);
    v47 = v46;
    v48 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v46);
    if ( v47 )
      *(_BYTE *)(v47 + 26) |= 1u;
    v49 = v13;
    qword_14034B2A8 = (__int64)KeGetCurrentThread();
    dword_14034B2D0 = v48;
    v13 = *(_QWORD *)(v13 + 8);
    PnpDereferenceNotify(v49);
    if ( v39 == v34 )
      PnpDereferenceNotify(v34);
  }
  while ( v13 != v53 );
LABEL_32:
  v28 = dword_14034B2D0;
  qword_14034B2A8 = 0LL;
  v29 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 1, 0);
  if ( v29 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, v29);
  __writecr8(v28);
  KeAbPostRelease((ULONG_PTR)&PnpTargetDeviceNotifyLock);
  ObfDereferenceObject(Objecta);
  return v50;
}
