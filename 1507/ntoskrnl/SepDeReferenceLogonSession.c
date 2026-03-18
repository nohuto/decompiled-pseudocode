/*
 * XREFs of SepDeReferenceLogonSession @ 0x14052E368
 * Callers:
 *     SepLinkLogonSessions @ 0x140130B14 (SepLinkLogonSessions.c)
 *     SepStopReferencingLogonSession @ 0x14046BD78 (SepStopReferencingLogonSession.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SeShutdownServerSilo @ 0x1406D0480 (SeShutdownServerSilo.c)
 *     SepSetServerSiloToken @ 0x1406D1220 (SepSetServerSiloToken.c)
 *     SeGetLinkedToken @ 0x1406D5518 (SeGetLinkedToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepDeleteSessionLowboxEntries @ 0x140117340 (SepDeleteSessionLowboxEntries.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x14052E598 (SepInformLsaOfDeletedLogon.c)
 *     ObDestroyHandleRevocationBlock @ 0x14052E61C (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14052E728 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14052EB48 (SepInformFileSystemsOfDeletedLogon.c)
 *     SepDeleteLogonSessionSidValues @ 0x1406D59E0 (SepDeleteLogonSessionSidValues.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v6; // rsi
  _QWORD *v7; // rcx
  __int64 *i; // rbx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  void *v14; // rcx
  void *v15; // rsi
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  _QWORD *v28; // [rsp+40h] [rbp+8h]

  v3 = *a1 & 0xF;
  CurrentThread = KeGetCurrentThread();
  v28 = (_QWORD *)(SepLogonSessions + 8 * v3);
  --CurrentThread->KernelApcDisable;
  v6 = &SepRmDbLock + (v3 & 3);
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = v28;
  for ( i = (__int64 *)*v28; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v6);
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( !v27
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
        && !v26->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i[20] == a2 && *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
    v7 = i;
  }
  v9 = _InterlockedExchangeAdd64(i + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  v11 = v9 - 1;
  if ( v10 )
  {
    if ( v11 )
      __fastfail(0xEu);
    *v7 = *i;
    ExReleaseResourceLite(v6);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      SepDeReferenceLogonSession(i + 2, i[20]);
    v14 = (void *)i[6];
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      i[6] = 0LL;
    }
    v15 = (void *)i[5];
    if ( v15 )
    {
      i[5] = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObfDereferenceDeviceMap(v15, v21, v22, v23);
    }
    if ( (i[4] & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v16 = (void *)i[8];
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    SepInformLsaOfDeletedLogon(a1, i[20], i);
    SepDeleteSessionLowboxEntries(v18, v17, v19, v20);
  }
  else
  {
    ExReleaseResourceLite(v6);
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
