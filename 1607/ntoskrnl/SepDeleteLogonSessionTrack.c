/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x140533094
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14053306C (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x14068CAF4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693740 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x140693B20 (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400AFF8C (SepDeleteSessionLowboxEntries.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x140422458 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1404E5328 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1404E53E4 (SepDeleteLogonSessionClaims.c)
 *     ObRevokeHandles @ 0x140533174 (ObRevokeHandles.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepDeleteLogonSessionSidValues @ 0x140692EB8 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v5; // r8
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  struct _EX_RUNDOWN_REF *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 Count; // rcx
  unsigned int v15; // ebx
  void *Ptr; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rcx
  void *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9

  v2 = 0LL;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (struct _EX_RUNDOWN_REF **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( i[20].Count == PsGetCurrentServerSilo() && *a1 == LODWORD(i[1].Count) && a1[1] == HIDWORD(i[1].Ptr) )
      break;
    v6 = (struct _EX_RUNDOWN_REF **)i;
  }
  if ( a2 )
  {
    LODWORD(i[4].Count) |= 0x10u;
    ObRevokeHandles(&i[16]);
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    return 0LL;
  }
  Count = i[3].Count;
  if ( !Count || (i[4].Count & 8) == 0 && Count == 1 )
  {
    *v6 = (struct _EX_RUNDOWN_REF *)i->Count;
    Ptr = i[5].Ptr;
    if ( Ptr )
    {
      i[5].Count = 0LL;
      v2 = Ptr;
    }
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, i[20].Count);
      ObfDereferenceDeviceMap(v2);
    }
    v20 = i[20].Ptr;
    if ( v20 )
      ObfDereferenceObjectWithTag(v20, 0x734C6553u);
    v21 = i[8].Ptr;
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
  return v15;
}
