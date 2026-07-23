/*
 * XREFs of SepDuplicateToken @ 0x140477C00
 * Callers:
 *     SepGetAnonymousToken @ 0x140003988 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x1400EF4FC (SepLinkLogonSessions.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x140479434 (SeCopyClientToken.c)
 *     SepSetLogonSessionToken @ 0x1404BD6B4 (SepSetLogonSessionToken.c)
 *     SeGetLinkedToken @ 0x1406536C8 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1406537B0 (SeGetLogonSessionToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlSidHashInitialize @ 0x14009E1C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x14009E7DC (SepReferenceLuidToIndexEntry.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepReferenceLogonSession @ 0x1403C245C (SepReferenceLogonSession.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x140479564 (SepDuplicateSid.c)
 *     SepMakeTokenEffectiveOnly @ 0x140479784 (SepMakeTokenEffectiveOnly.c)
 *     SepModifyTokenPolicyCounter @ 0x14064DAF8 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140653C30 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 *     SepDuplicateTokenClaims @ 0x140656318 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rsi
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // r14
  int v16; // edi
  _BYTE *v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v19; // rdi
  unsigned int v20; // eax
  __int64 *v21; // r13
  __int128 v22; // xmm0
  _QWORD *v23; // r12
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  PSID_AND_ATTRIBUTES *v29; // r15
  char *v30; // r14
  _SID_AND_ATTRIBUTES *v31; // rcx
  int i; // eax
  __int64 v33; // rax
  PSID_AND_ATTRIBUTES *v34; // r13
  ULONG *v35; // rcx
  _SID_AND_ATTRIBUTES *v36; // rax
  ULONG j; // ecx
  __int64 v38; // rax
  unsigned int v39; // ecx
  size_t v40; // r12
  char *v41; // r14
  __int64 v42; // rax
  char *v43; // r14
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  void *v48; // rcx
  void *v49; // rbp
  PVOID *v50; // r14
  __int64 v51; // [rsp+20h] [rbp-A8h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  void *v53; // [rsp+58h] [rbp-70h]
  ULONG *v54; // [rsp+60h] [rbp-68h]
  _QWORD *v55; // [rsp+68h] [rbp-60h]
  PVOID *v56; // [rsp+70h] [rbp-58h]
  PSID_AND_ATTRIBUTES *v57; // [rsp+78h] [rbp-50h]
  _QWORD *v58; // [rsp+80h] [rbp-48h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+88h] [rbp-40h]
  _QWORD *v60; // [rsp+90h] [rbp-38h]
  ULONG *v61; // [rsp+98h] [rbp-30h]

  if ( a4 == 2 && a5 > 3 )
    return 3221225637LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v14 = PoolWithTag + 2;
  v14[1] = v14;
  *v14 = v14;
  v13[6] = 0;
  *((_QWORD *)v13 + 5) = v13 + 8;
  *((_QWORD *)v13 + 4) = v13 + 8;
  v15 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v15 )
  {
    ExFreePoolWithTag(v13, 0);
    return 3221225626LL;
  }
  v16 = ObCreateObjectEx(
          a6,
          SeTokenObjectType,
          a2,
          a6,
          v51,
          *(_DWORD *)(a1 + 132) + 1152,
          *(_DWORD *)(a1 + 136),
          *(_DWORD *)(a1 + 132) + 1152,
          &Object,
          0LL);
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v16;
  }
  v17 = Object;
  *((_QWORD *)Object + 2) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  v17[204] = 0;
  *((_DWORD *)v17 + 48) = a4;
  *((_DWORD *)v17 + 49) = a5;
  *((_QWORD *)v17 + 6) = v15;
  ExInitializeResourceLite(v15);
  *((_QWORD *)v17 + 3) = *(_QWORD *)(a1 + 24);
  *(_OWORD *)v17 = *(_OWORD *)a1;
  *((_DWORD *)v17 + 35) = 0;
  *((_QWORD *)v17 + 4) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)v17 + 5) = *(_QWORD *)(a1 + 40);
  *((_QWORD *)v17 + 28) = *(_QWORD *)(a1 + 224);
  *((_QWORD *)v17 + 140) = 0LL;
  *((_QWORD *)v17 + 141) = 0LL;
  *((_DWORD *)v17 + 30) = 0;
  *((_QWORD *)v17 + 143) = 0LL;
  *((_QWORD *)v17 + 137) = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v19 = (char *)Object;
  *((_QWORD *)Object + 7) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)v19 + 34) = *(_DWORD *)(a1 + 136);
  *((_DWORD *)v19 + 36) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)v19 + 32) = *(_DWORD *)(a1 + 128);
  *((_DWORD *)v19 + 33) = *(_DWORD *)(a1 + 132);
  v20 = *(_DWORD *)(a1 + 200) & 0xFFFFFBDF;
  v54 = (ULONG *)(v19 + 128);
  *((_DWORD *)v19 + 50) = v20;
  SepSetTokenSessionById((_DWORD)v19, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
  v21 = (__int64 *)(v19 + 776);
  *(_OWORD *)(v19 + 88) = *(_OWORD *)(a1 + 88);
  *((_QWORD *)v19 + 13) = *(_QWORD *)(a1 + 104);
  *((_DWORD *)v19 + 28) = *(_DWORD *)(a1 + 112);
  *((_WORD *)v19 + 58) = *(_WORD *)(a1 + 116);
  v19[118] = *(_BYTE *)(a1 + 118);
  *((_DWORD *)v19 + 52) = *(_DWORD *)(a1 + 208);
  *((_DWORD *)v19 + 53) = *(_DWORD *)(a1 + 212);
  v22 = *(_OWORD *)(a1 + 64);
  v55 = v19 + 1080;
  *((_OWORD *)v19 + 4) = v22;
  *((_QWORD *)v19 + 10) = *(_QWORD *)(a1 + 80);
  *((_QWORD *)v19 + 97) = v13;
  *((_QWORD *)v19 + 135) = 0LL;
  *((_QWORD *)v19 + 136) = 0LL;
  v58 = v19 + 1088;
  *((_QWORD *)v19 + 99) = 0LL;
  v57 = (PSID_AND_ATTRIBUTES *)(v19 + 792);
  *((_QWORD *)v19 + 98) = 0LL;
  v61 = (ULONG *)(v19 + 800);
  *((_DWORD *)v19 + 200) = 0;
  SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v19 + 808);
  memset(v19 + 808, 0, 0x110uLL);
  *((_QWORD *)v19 + 22) = 0LL;
  v60 = v19 + 176;
  *((_QWORD *)v19 + 138) = 0LL;
  *((_QWORD *)v19 + 139) = 0LL;
  v23 = v19 + 1136;
  *((_QWORD *)v19 + 142) = 0LL;
  v24 = v19[118] == 2;
  v56 = (PVOID *)(v19 + 1104);
  if ( v24 )
    SepModifyTokenPolicyCounter(v19 + 88, 1LL);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v25 = *(_QWORD *)(a1 + 216);
    *((_QWORD *)v19 + 27) = v25;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24)) <= 1 )
      __fastfail(0xEu);
    v19 = (char *)Object;
    v26 = 0;
LABEL_18:
    v27 = *(_QWORD *)(a1 + 1136);
    if ( v27 )
      SepReferenceLuidToIndexEntry(v27);
    *v23 = *(_QWORD *)(a1 + 1136);
    v28 = *(_DWORD **)(a1 + 776);
    if ( *v28 )
    {
      v26 = AuthzBasepDuplicateSecurityAttributes((__int64)v28, *v21, a7);
      if ( v26 < 0 )
        goto LABEL_25;
    }
    memmove(v19 + 1152, (const void *)(a1 + 1152), *(unsigned int *)(a1 + 132));
    v29 = (PSID_AND_ATTRIBUTES *)(v19 + 152);
    v30 = &v19[-a1];
    if ( SepTokenSidSharingEnabled )
    {
      *v29 = (PSID_AND_ATTRIBUTES)&v30[*(_QWORD *)(a1 + 152)];
      v26 = SepDuplicateTokenUserAndGroups(a1, v19);
      if ( v26 < 0 )
      {
        *v29 = 0LL;
        goto LABEL_25;
      }
    }
    else
    {
      *((_DWORD *)v19 + 31) = *(_DWORD *)(a1 + 124);
      v31 = (_SID_AND_ATTRIBUTES *)&v30[*(_QWORD *)(a1 + 152)];
      *v29 = v31;
      for ( i = *((_DWORD *)v19 + 31); i; --i )
      {
        v31->Sid = (char *)v31->Sid + (unsigned __int64)v30;
        ++v31;
      }
    }
    v33 = *(_QWORD *)(a1 + 160);
    v34 = (PSID_AND_ATTRIBUTES *)(v19 + 160);
    *((_QWORD *)v19 + 20) = v33;
    if ( v33 )
    {
      v35 = v54;
      v36 = (_SID_AND_ATTRIBUTES *)&v30[v33];
      *v34 = v36;
      for ( j = *v35; j; --j )
      {
        v36->Sid = (char *)v36->Sid + (unsigned __int64)v30;
        ++v36;
      }
    }
    v38 = *(_QWORD *)(a1 + 184);
    v39 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
    if ( v38 )
      v39 += *(unsigned __int16 *)(v38 + 2);
    v40 = v39;
    v41 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x64546553u);
    *v60 = v41;
    if ( !v41 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v19);
      return 3221225626LL;
    }
    memmove(v41, *(const void **)(a1 + 176), v40);
    v42 = *(_QWORD *)(a1 + 184);
    v43 = &v41[-*(_QWORD *)(a1 + 176)];
    *((_QWORD *)v19 + 23) = v42;
    if ( v42 )
      *((_QWORD *)v19 + 23) = &v43[v42];
    *((_QWORD *)v19 + 21) = &v43[*(_QWORD *)(a1 + 168)];
    v44 = *(unsigned int *)(a1 + 800);
    if ( (_DWORD)v44 )
      v26 = SepSetTokenCapabilities(v19, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v44);
    if ( v26 < 0 )
      goto LABEL_25;
    v45 = *(_QWORD *)(a1 + 784);
    if ( v45 )
      v26 = SepSetTokenPackage(v19, v45);
    if ( v26 < 0 )
      goto LABEL_25;
    v46 = *(_QWORD *)(a1 + 1080);
    if ( v46 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24)) <= 1 )
        __fastfail(0xEu);
      v19 = (char *)Object;
      *v55 = *(_QWORD *)(a1 + 1080);
    }
    v47 = *(_QWORD *)(a1 + 1088);
    if ( v47 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v47 + 24)) <= 1 )
        __fastfail(0xEu);
      v19 = (char *)Object;
      *v58 = *(_QWORD *)(a1 + 1088);
    }
    if ( *(_QWORD *)(a1 + 1096) )
    {
      v26 = SepDuplicateTokenClaims(a1, v19);
      if ( v26 < 0 )
        goto LABEL_25;
    }
    v48 = *(void **)(a1 + 1104);
    v49 = 0LL;
    v26 = 0;
    v53 = 0LL;
    if ( v48 )
    {
      v26 = SepDuplicateSid(v48);
      if ( v26 < 0 )
        goto LABEL_25;
      v49 = v53;
    }
    v50 = v56;
    if ( *v56 )
    {
      ExFreePoolWithTag(*v56, 0);
      *v50 = 0LL;
    }
    *v50 = v49;
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
    if ( a3 )
      SepMakeTokenEffectiveOnly(v19);
    RtlSidHashInitialize(*v29, *((_DWORD *)v19 + 31), (PSID_AND_ATTRIBUTES_HASH)(v19 + 232));
    RtlSidHashInitialize(*v34, *v54, (PSID_AND_ATTRIBUTES_HASH)(v19 + 504));
    if ( *v57 )
      RtlSidHashInitialize(*v57, *v61, SidAttrHash);
    *a8 = v19;
    return (unsigned int)v26;
  }
  v26 = SepReferenceLogonSession(a1 + 24, (__int64)(v19 + 216));
  if ( v26 >= 0 )
    goto LABEL_18;
  *((_DWORD *)v19 + 50) |= 0x20u;
  *((_QWORD *)v19 + 27) = 0LL;
LABEL_25:
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v19);
  return (unsigned int)v26;
}
