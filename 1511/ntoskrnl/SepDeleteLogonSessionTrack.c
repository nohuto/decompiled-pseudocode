/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x1404F4570
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x1404F4548 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406542BC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14065458C (SepRmDeleteLogonSessionWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsEqualCurrentServerSilo @ 0x140079760 (PsEqualCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400D52A0 (SepDeleteSessionLowboxEntries.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x14049B8E4 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14049B9AC (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x1404F464C (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x140653B34 (SepDeleteLogonSessionSidValues.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rbp
  __int64 v3; // r8
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  struct _EX_RUNDOWN_REF *i; // rbx
  unsigned __int64 Count; // rcx
  unsigned int v12; // ebx
  void *Ptr; // rax
  void *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rcx

  v2 = 0LL;
  v3 = *a1 & 0xF;
  v6 = (struct _EX_RUNDOWN_REF **)(SepLogonSessions + 8 * v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( !i )
    {
      v12 = -1073741729;
      goto LABEL_26;
    }
    if ( PsEqualCurrentServerSilo(i[20].Count) && *a1 == LODWORD(i[1].Count) && a1[1] == HIDWORD(i[1].Ptr) )
      break;
    v6 = (struct _EX_RUNDOWN_REF **)i;
  }
  if ( a2 )
  {
    LODWORD(i[4].Count) |= 0x10u;
    ObRevokeHandles(&i[16]);
    ExReleaseResourceLite(v8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, (_QWORD *)i[20].Count);
      ObfDereferenceDeviceMap(v2);
    }
    v14 = i[20].Ptr;
    if ( v14 )
      ObfDereferenceObject(v14);
    v15 = i[8].Ptr;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries(v16);
    return 0LL;
  }
  v12 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
