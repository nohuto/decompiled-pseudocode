/*
 * XREFs of PspDeleteSilo @ 0x140640348
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspDeleteServerSiloGlobals @ 0x1406402E4 (PspDeleteServerSiloGlobals.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     PspSendSiloTerminationNotification @ 0x140642548 (PspSendSiloTerminationNotification.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID **v3; // rbx
  PVOID *v4; // rbx
  PVOID v5; // rcx
  void **v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *v8; // rax
  __int64 v9; // rax
  struct _ERESOURCE *v10; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
  while ( 1 )
  {
    v3 = (PVOID **)(*(_QWORD *)(a1 + 1248) + 104LL);
    if ( *v3 == (PVOID *)v3 )
      break;
    v4 = *v3;
    ObfDereferenceObject(v4[3]);
    v5 = *v4;
    v6 = (void **)v4[1];
    if ( *((PVOID **)*v4 + 1) != v4 || *v6 != v4 )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    ExFreePoolWithTag(v4, 0x6F6C6953u);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 136LL) )
  {
    PspNotifyServerSiloTermination(a1, 1LL);
    PspDeleteServerSiloGlobals(*(_QWORD **)(*(_QWORD *)(a1 + 1248) + 136LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 136LL) = 0LL;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1248) + 136LL) )
    PspSendSiloTerminationNotification(a1, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 128LL);
  if ( v7 )
  {
    v8 = KeGetCurrentThread();
    --v8->SpecialApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 1248), 1u);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1248) + 128LL) + 1248LL);
    --*(_DWORD *)(v9 + 120);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1248) + 128LL) + 1248LL));
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v10 = *(struct _ERESOURCE **)(a1 + 1248);
  ExDeleteResourceLite(v10);
  ExFreePoolWithTag(v10, 0x6F6C6953u);
  *(_QWORD *)(a1 + 1248) = 0LL;
}
