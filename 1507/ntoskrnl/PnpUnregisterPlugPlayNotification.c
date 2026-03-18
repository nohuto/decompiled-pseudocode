/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x140138BC0
 * Callers:
 *     IoUnregisterPlugPlayNotificationEx @ 0x14056054C (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x140563DE8 (IoUnregisterPlugPlayNotification.c)
 *     PopCleanCoolingExtension @ 0x1406B202C (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x1406BAE04 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  char v7; // r12
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v12; // di
  signed __int32 v13; // eax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // di
  signed __int32 v19; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // r9
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int8 v27; // bp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdi
  unsigned __int8 v31; // bp
  PVOID *v32; // rdi
  _QWORD *v33; // r15
  PVOID *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rbp
  unsigned __int8 v37; // r12
  int v38; // eax
  PVOID *v39; // rdx
  PVOID **v40; // rax
  unsigned __int8 v41; // bp
  signed __int32 v42; // eax
  unsigned __int8 v43; // di
  signed __int32 v44; // eax
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  char v47; // [rsp+50h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 64);
  v47 = 0;
  v7 = 0;
  v8 = KeAbPreAcquire((ULONG_PTR)&PnpNotificationInProgressLock, 0LL, 0LL, a4);
  v10 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpNotificationInProgressLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpNotificationInProgressLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_140349348 = (__int64)KeGetCurrentThread();
  dword_140349370 = CurrentIrql;
  if ( PnpNotificationInProgress )
  {
    v28 = KeAbPreAcquire((ULONG_PTR)&PnpDeferredRegistrationLock, 0LL, 0LL, v9);
    v30 = v28;
    v31 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpDeferredRegistrationLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeferredRegistrationLock, v28);
    if ( v30 )
      *(_BYTE *)(v30 + 26) |= 1u;
    v32 = (PVOID *)PnpDeferredRegistrationList;
    qword_14034B328 = (__int64)KeGetCurrentThread();
    dword_14034B350 = v31;
    if ( PnpDeferredRegistrationList != &PnpDeferredRegistrationList )
    {
      do
      {
        v33 = v32 + 2;
        v34 = v32;
        if ( v32[2] == (PVOID)a1 )
        {
          v47 = 1;
          v7 = 1;
          if ( v4 )
          {
            v35 = KeAbPreAcquire(v4, 0LL, 0LL, v29);
            v36 = v35;
            v37 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
              ExpAcquireFastMutexContended(v4, v35);
            if ( v36 )
              *(_BYTE *)(v36 + 26) |= 1u;
            *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
            v38 = v37;
            v7 = 1;
            *(_DWORD *)(v4 + 48) = v38;
          }
          v39 = (PVOID *)*v32;
          v32 = (PVOID *)*v32;
          v40 = (PVOID **)v34[1];
          if ( *((PVOID **)*v34 + 1) != v34 || *v40 != v34 )
            __fastfail(3u);
          *v40 = v39;
          v39[1] = v40;
          PnpDereferenceNotify(*v33);
          if ( v4 )
          {
            v41 = *(_BYTE *)(v4 + 48);
            *(_QWORD *)(v4 + 8) = 0LL;
            v42 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
            if ( v42 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v42);
            __writecr8(v41);
            KeAbPostRelease(v4);
          }
          ExFreePoolWithTag(v34, 0x37706E50u);
        }
        else
        {
          v32 = (PVOID *)*v32;
          v7 = v47;
        }
      }
      while ( v32 != &PnpDeferredRegistrationList );
    }
    v43 = dword_14034B350;
    qword_14034B328 = 0LL;
    v44 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeferredRegistrationLock, 1, 0);
    if ( v44 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeferredRegistrationLock, v44);
    __writecr8(v43);
    KeAbPostRelease((ULONG_PTR)&PnpDeferredRegistrationLock);
  }
  v12 = dword_140349370;
  qword_140349348 = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpNotificationInProgressLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpNotificationInProgressLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  }
  else if ( v4 )
  {
    v15 = KeAbPreAcquire(v4, 0LL, 0LL, v14);
    v16 = v15;
    v17 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
      ExpAcquireFastMutexContended(v4, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v4 + 48) = v17;
  }
  if ( !*(_BYTE *)(a1 + 58) || v7 )
  {
    *(_BYTE *)(a1 + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( !v24
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
        && !v23->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v4 )
      {
        v25 = KeAbPreAcquire(v4, 0LL, 0LL, v22);
        v26 = v25;
        v27 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
          ExpAcquireFastMutexContended(v4, v25);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
        *(_DWORD *)(v4 + 48) = v27;
      }
    }
    PnpDereferenceNotify(a1);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
    v45 = KeGetCurrentThread();
    v46 = v45->KernelApcDisable + 1;
    v45->KernelApcDisable = v46;
    if ( !v46
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
      && !v45->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  if ( v4 )
  {
    v18 = *(_BYTE *)(v4 + 48);
    *(_QWORD *)(v4 + 8) = 0LL;
    v19 = _InterlockedCompareExchange((volatile signed __int32 *)v4, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v4, v19);
    __writecr8(v18);
    KeAbPostRelease(v4);
  }
  return 0LL;
}
