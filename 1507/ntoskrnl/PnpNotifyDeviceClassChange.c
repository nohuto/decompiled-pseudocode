/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x140460F64
 * Callers:
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14045BF70 (IopGetSessionIdFromSymbolicName.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v6; // xmm1
  int SessionIdFromSymbolicName; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 *v12; // r15
  __int64 v13; // rbx
  unsigned __int8 v14; // di
  signed __int32 v15; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int8 v22; // bp
  __int64 v23; // rcx
  unsigned __int8 v24; // bl
  signed __int32 v25; // eax
  int v27; // [rsp+20h] [rbp-78h] BYREF
  int v28; // [rsp+28h] [rbp-70h] BYREF
  __int128 v29; // [rsp+2Ch] [rbp-6Ch]
  __int128 v30; // [rsp+3Ch] [rbp-5Ch]
  __int64 v31; // [rsp+50h] [rbp-48h]

  v4 = *a1;
  v6 = *(_OWORD *)a2;
  v31 = a3;
  SessionIdFromSymbolicName = -1;
  v28 = 3145729;
  v29 = v4;
  v30 = v6;
  v8 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceClassNotifyLock, 0LL, 0LL, a4);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceClassNotifyLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_14034B268 = (__int64)KeGetCurrentThread();
  dword_14034B290 = CurrentIrql;
  v12 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v13 = *v12;
  while ( (__int64 *)v13 != v12 )
  {
    if ( *(_DWORD *)(v13 + 20) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName();
    ++*(_WORD *)(v13 + 56);
    qword_14034B268 = 0LL;
    v14 = dword_14034B290;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceClassNotifyLock, v15);
    __writecr8(v14);
    KeAbPostRelease((ULONG_PTR)&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v13 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v13 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v13 + 58)
      && ((_DWORD *)(v13 + 80) == a2 || RtlCompareMemory((const void *)(v13 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v13, (__int64)&v28, &v27);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v13 + 72));
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceClassNotifyLock, 0LL, 0LL, v17);
    v21 = v20;
    v22 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceClassNotifyLock, v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v23 = v13;
    qword_14034B268 = (__int64)KeGetCurrentThread();
    dword_14034B290 = v22;
    v13 = *(_QWORD *)v13;
    PnpDereferenceNotify(v23);
  }
  v24 = dword_14034B290;
  qword_14034B268 = 0LL;
  v25 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 1, 0);
  if ( v25 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceClassNotifyLock, v25);
  __writecr8(v24);
  KeAbPostRelease((ULONG_PTR)&PnpDeviceClassNotifyLock);
  return 0LL;
}
