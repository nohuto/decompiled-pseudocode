/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x14056899C
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140568974 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x1406D6438 (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepDeleteSessionLowboxEntries @ 0x140117340 (SepDeleteSessionLowboxEntries.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x14052E61C (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14052E728 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x140568AAC (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x1406D59E0 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  __int64 v2; // r8
  void *v5; // rsi
  __int64 *v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  __int64 i; // rbx
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax

  v2 = *a1 & 0xF;
  v5 = 0LL;
  v6 = (__int64 *)(SepLogonSessions + 8 * v2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v2 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_QWORD *)i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v8);
      v29 = KeGetCurrentThread();
      v30 = v29->KernelApcDisable + 1;
      v29->KernelApcDisable = v30;
      if ( !v30
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
        && !v29->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225567LL;
    }
    if ( PsEqualCurrentServerSilo(*(_QWORD *)(i + 160)) && *a1 == *(_DWORD *)(i + 8) && a1[1] == *(_DWORD *)(i + 12) )
      break;
    v6 = (__int64 *)i;
  }
  if ( a2 )
  {
    *(_DWORD *)(i + 32) |= 0x10u;
    ObRevokeHandles(i + 128);
    ExReleaseResourceLite(v8);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(i + 32) & 8) == 0 && *(_QWORD *)(i + 24) == 1LL || !*(_QWORD *)(i + 24) )
  {
    *v6 = *(_QWORD *)i;
    if ( *(_QWORD *)(i + 40) )
    {
      v5 = *(void **)(i + 40);
      *(_QWORD *)(i + 40) = 0LL;
    }
    ExReleaseResourceLite(v8);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v5 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *(_QWORD **)(i + 160));
      ObfDereferenceDeviceMap(v5, v17, v18, v19);
    }
    v20 = *(void **)(i + 160);
    if ( v20 )
      PspDereferenceSiloObject(v20);
    v21 = *(void **)(i + 64);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 128, v22, v23, v24);
    ExFreePoolWithTag((PVOID)i, 0);
    SepDeleteSessionLowboxEntries(v26, v25, v27, v28);
    return 0LL;
  }
  ExReleaseResourceLite(v8);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225732LL;
}
