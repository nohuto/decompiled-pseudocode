/*
 * XREFs of SepDuplicateToken @ 0x140435D60
 * Callers:
 *     SepGetAnonymousToken @ 0x140007CC8 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x140130B14 (SepLinkLogonSessions.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     SeCopyClientToken @ 0x1404D25E4 (SeCopyClientToken.c)
 *     SepSetLogonSessionToken @ 0x14055CA6C (SepSetLogonSessionToken.c)
 *     SeGetLinkedToken @ 0x1406D5518 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1406D5628 (SeGetLogonSessionToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140015510 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlULongAdd @ 0x1401E04A8 (RtlULongAdd.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     SepMakeTokenEffectiveOnly @ 0x14052EBC0 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x1406D115C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406D5ADC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 *     SepDuplicateTokenClaims @ 0x1406D8430 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        char a7,
        _QWORD *a8)
{
  unsigned int v8; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rsi
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // r14
  int v17; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v19; // rdi
  int *v20; // r13
  int v21; // esi
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rdx
  __int16 v24; // cx
  bool v25; // zf
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  PSID_AND_ATTRIBUTES *v28; // r15
  char *v29; // r14
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  _SID_AND_ATTRIBUTES *v32; // rcx
  int i; // eax
  __int64 v34; // rax
  PSID_AND_ATTRIBUTES *v35; // r12
  _SID_AND_ATTRIBUTES *v36; // rax
  int j; // ecx
  __int64 v38; // rax
  unsigned int v39; // ecx
  size_t v40; // r13
  char *v41; // r14
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  __int64 v44; // rax
  char *v45; // r14
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _KTHREAD *v50; // rdx
  __int16 v51; // cx
  int v52; // eax
  struct _ERESOURCE *v53; // rcx
  struct _KTHREAD *v54; // rdx
  __int16 v55; // cx
  struct _KTHREAD *v56; // rcx
  __int16 v57; // ax
  char *Object; // [rsp+50h] [rbp-78h]
  PSID_AND_ATTRIBUTES *v59; // [rsp+78h] [rbp-50h]
  ULONG pulResult; // [rsp+E8h] [rbp+20h] BYREF

  v8 = a5;
  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v15 = PoolWithTag + 2;
  v15[1] = v15;
  *v15 = v15;
  v14[6] = 0;
  *((_QWORD *)v14 + 5) = v14 + 8;
  *((_QWORD *)v14 + 4) = v14 + 8;
  v16 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v16 )
  {
    ExFreePoolWithTag(v14, 0);
    return 3221225626LL;
  }
  v17 = RtlULongAdd(0x478u, *(_DWORD *)(a1 + 132), &pulResult);
  if ( v17 < 0 || (v17 = ObCreateObjectEx(a6, (_DWORD)SeTokenObjectType, a2, a6), v17 < 0) )
  {
    ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(v16, 0);
    return (unsigned int)v17;
  }
  *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  Object[204] = 0;
  *((_DWORD *)Object + 48) = a4;
  *((_DWORD *)Object + 49) = v8;
  *((_QWORD *)Object + 6) = v16;
  ExInitializeResourceLite(v16);
  *((_QWORD *)Object + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)Object = *(_OWORD *)a1;
  *((_DWORD *)Object + 35) = 0;
  *((_QWORD *)Object + 4) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)Object + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)Object + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)Object + 140) = 0LL;
  *((_QWORD *)Object + 141) = 0LL;
  *((_DWORD *)Object + 30) = 0;
  *((_QWORD *)Object + 142) = 0LL;
  *((_QWORD *)Object + 137) = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v19 = Object;
  *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
  v20 = (int *)(Object + 128);
  *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)Object + 36) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)Object + 32) = *(_DWORD *)(a1 + 128);
  *((_DWORD *)Object + 33) = *(_DWORD *)(a1 + 132);
  *((_DWORD *)Object + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  SepSetTokenSessionById((_DWORD)Object, *(_DWORD *)(a1 + 120), 0, 0LL);
  *(_OWORD *)(Object + 88) = *(_OWORD *)(a1 + 88);
  *((_QWORD *)Object + 13) = *(_QWORD *)(a1 + 104);
  *((_DWORD *)Object + 28) = *(_DWORD *)(a1 + 112);
  *((_WORD *)Object + 58) = *(_WORD *)(a1 + 116);
  Object[118] = *(_BYTE *)(a1 + 118);
  *((_DWORD *)Object + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)Object + 53) = *(_DWORD *)(a1 + 212);
  *((_OWORD *)Object + 4) = *(_OWORD *)(a1 + 64);
  *((_QWORD *)Object + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)Object + 97) = v14;
  v21 = 0;
  *((_QWORD *)Object + 135) = 0LL;
  *((_QWORD *)Object + 136) = 0LL;
  *((_QWORD *)Object + 99) = 0LL;
  v59 = (PSID_AND_ATTRIBUTES *)(Object + 792);
  *((_QWORD *)Object + 98) = 0LL;
  *((_DWORD *)Object + 200) = 0;
  memset(Object + 808, 0, 0x110uLL);
  *((_QWORD *)Object + 22) = 0LL;
  *((_QWORD *)Object + 138) = 0LL;
  *((_QWORD *)Object + 139) = 0LL;
  if ( Object[118] == 2 )
    SepModifyTokenPolicyCounter(Object + 88, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v21 = SepReferenceLogonSession(a1 + 24, Object + 216);
    if ( v21 < 0 )
    {
      *((_DWORD *)Object + 50) |= 0x20u;
      *((_QWORD *)Object + 27) = 0LL;
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v26 = KeGetCurrentThread();
      v27 = v26->KernelApcDisable + 1;
      v26->KernelApcDisable = v27;
      if ( v27 || ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink == &v26->152 )
        goto LABEL_70;
      v25 = v26->SpecialApcDisable == 0;
      goto LABEL_68;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 216);
    *((_QWORD *)Object + 27) = v22;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24)) <= 1 )
      __fastfail(0xEu);
    v19 = Object;
  }
  if ( **(_DWORD **)(a1 + 776) )
  {
    v21 = SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
    if ( v21 < 0 )
      goto LABEL_19;
    v21 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 776), *((_QWORD *)Object + 97), a7);
    if ( v21 < 0 )
    {
      SepRefDerefLuidToIndexEntryIfNecessary(a1, 1LL);
LABEL_19:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( v24 || ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink == &v23->152 )
        goto LABEL_70;
      v25 = v23->SpecialApcDisable == 0;
LABEL_68:
      if ( v25 )
        KiCheckForKernelApcDelivery();
LABEL_70:
      ObfDereferenceObject(Object);
      return (unsigned int)v21;
    }
  }
  memmove(v19 + 1144, (const void *)(a1 + 1144), *(unsigned int *)(a1 + 132));
  v28 = (PSID_AND_ATTRIBUTES *)(v19 + 152);
  if ( SepTokenSidSharingEnabled )
  {
    v29 = &v19[-a1];
    *v28 = (PSID_AND_ATTRIBUTES)&v19[*(_QWORD *)(a1 + 152) - a1];
    v21 = SepDuplicateTokenUserAndGroups(a1, v19);
    if ( v21 < 0 )
    {
      *v28 = 0LL;
LABEL_31:
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      v30 = KeGetCurrentThread();
      v31 = v30->KernelApcDisable + 1;
      v30->KernelApcDisable = v31;
      if ( v31 || ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink == &v30->152 )
        goto LABEL_70;
      v25 = v30->SpecialApcDisable == 0;
      goto LABEL_68;
    }
  }
  else
  {
    v29 = &v19[-a1];
    *((_DWORD *)v19 + 31) = *(_DWORD *)(a1 + 124);
    v32 = (_SID_AND_ATTRIBUTES *)&v19[*(_QWORD *)(a1 + 152) - a1];
    *v28 = v32;
    for ( i = *((_DWORD *)v19 + 31); i; --i )
    {
      v32->Sid = (char *)v32->Sid + (unsigned __int64)v29;
      ++v32;
    }
  }
  v34 = *(_QWORD *)(a1 + 160);
  v35 = (PSID_AND_ATTRIBUTES *)(v19 + 160);
  *((_QWORD *)v19 + 20) = v34;
  if ( v34 )
  {
    v36 = (_SID_AND_ATTRIBUTES *)&v29[v34];
    *v35 = v36;
    for ( j = *v20; j; --j )
    {
      v36->Sid = (char *)v36->Sid + (unsigned __int64)v29;
      ++v36;
    }
  }
  v38 = *(_QWORD *)(a1 + 184);
  v39 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
  if ( v38 )
    v39 += *(unsigned __int16 *)(v38 + 2);
  v40 = v39;
  v41 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x64546553u);
  *((_QWORD *)Object + 22) = v41;
  if ( v41 )
  {
    memmove(v41, *(const void **)(a1 + 176), v40);
    v44 = *(_QWORD *)(a1 + 184);
    v45 = &v41[-*(_QWORD *)(a1 + 176)];
    *((_QWORD *)v19 + 23) = v44;
    if ( v44 )
      *((_QWORD *)v19 + 23) = &v45[v44];
    *((_QWORD *)v19 + 21) = &v45[*(_QWORD *)(a1 + 168)];
    v46 = *(unsigned int *)(a1 + 800);
    if ( (_DWORD)v46 )
      v21 = SepSetTokenCapabilities(v19, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v46);
    if ( v21 < 0 )
      goto LABEL_31;
    v47 = *(_QWORD *)(a1 + 784);
    if ( v47 )
      v21 = SepSetTokenPackage(v19, v47);
    if ( v21 < 0 )
      goto LABEL_31;
    v48 = *(_QWORD *)(a1 + 1080);
    if ( v48 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v48 + 24)) <= 1 )
        __fastfail(0xEu);
      v19 = Object;
      *((_QWORD *)Object + 135) = *(_QWORD *)(a1 + 1080);
    }
    v49 = *(_QWORD *)(a1 + 1088);
    if ( v49 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v49 + 24)) <= 1 )
        __fastfail(0xEu);
      v19 = Object;
      *((_QWORD *)Object + 136) = *(_QWORD *)(a1 + 1088);
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v21 = SepDuplicateTokenClaims(a1, v19);
      if ( v21 < 0 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
        v50 = KeGetCurrentThread();
        v51 = v50->KernelApcDisable + 1;
        v50->KernelApcDisable = v51;
        if ( v51 || ($CD287064E7C9F7953DE243E927CFCB99 *)v50->ApcState.ApcListHead[0].Flink == &v50->152 )
          goto LABEL_70;
        v25 = v50->SpecialApcDisable == 0;
        goto LABEL_68;
      }
    }
    v52 = SepSetTokenTrust(v19, *(_QWORD *)(a1 + 1104));
    v53 = *(struct _ERESOURCE **)(a1 + 48);
    v17 = v52;
    if ( v52 >= 0 )
    {
      ExReleaseResourceLite(v53);
      v56 = KeGetCurrentThread();
      v57 = v56->KernelApcDisable + 1;
      v56->KernelApcDisable = v57;
      if ( !v57
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v56->ApcState.ApcListHead[0].Flink != &v56->152
        && !v56->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( a3 )
        SepMakeTokenEffectiveOnly();
      RtlSidHashInitialize(*v28, *((_DWORD *)Object + 31), (PSID_AND_ATTRIBUTES_HASH)(Object + 232));
      RtlSidHashInitialize(*v35, *((_DWORD *)Object + 32), (PSID_AND_ATTRIBUTES_HASH)(Object + 504));
      if ( *v59 )
        RtlSidHashInitialize(*v59, *((_DWORD *)Object + 200), (PSID_AND_ATTRIBUTES_HASH)(Object + 808));
      *a8 = Object;
    }
    else
    {
      ExReleaseResourceLite(v53);
      v54 = KeGetCurrentThread();
      v55 = v54->KernelApcDisable + 1;
      v54->KernelApcDisable = v55;
      if ( !v55
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152
        && !v54->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfDereferenceObject(Object);
    }
    return (unsigned int)v17;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  v42 = KeGetCurrentThread();
  v43 = v42->KernelApcDisable + 1;
  v42->KernelApcDisable = v43;
  if ( !v43
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
    && !v42->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ObfDereferenceObject(Object);
  return 3221225626LL;
}
