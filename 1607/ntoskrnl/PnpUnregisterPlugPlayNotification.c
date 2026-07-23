/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x140111FA4
 * Callers:
 *     IoUnregisterPlugPlayNotificationEx @ 0x14052DD1C (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x14052DD24 (IoUnregisterPlugPlayNotification.c)
 *     PopCleanCoolingExtension @ 0x14066B9D4 (PopCleanCoolingExtension.c)
 *     PopPolicyDeviceTargetChange @ 0x140672F60 (PopPolicyDeviceTargetChange.c)
 *     SmKmFileInfoCleanup @ 0x140697EC4 (SmKmFileInfoCleanup.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID *v11; // rsi
  _QWORD *v12; // r15
  PVOID *v13; // r14
  PVOID *v14; // rdx
  PVOID **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v2 = *(struct _FAST_MUTEX **)(a1 + 64);
  v5 = 0;
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    ExAcquireFastMutex(&PnpDeferredRegistrationLock);
    v11 = (PVOID *)PnpDeferredRegistrationList;
    while ( v11 != &PnpDeferredRegistrationList )
    {
      v12 = v11 + 2;
      v13 = v11;
      if ( v11[2] == (PVOID)a1 )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v14 = (PVOID *)*v11;
        v11 = (PVOID *)*v11;
        v15 = (PVOID **)v13[1];
        if ( *((PVOID **)*v13 + 1) != v13 || *v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        PnpDereferenceNotify(*v12);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v13, 0x37706E50u);
      }
      else
      {
        v11 = (PVOID *)*v11;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 72), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*(_BYTE *)(a1 + 58) || v5 )
  {
    *(_BYTE *)(a1 + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    PnpDereferenceNotify(a1);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 72));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
