/*
 * XREFs of SepFilterToken @ 0x1403C11C8
 * Callers:
 *     NtFilterToken @ 0x1404BD130 (NtFilterToken.c)
 *     SeFilterToken @ 0x14064D7C8 (SeFilterToken.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlSidHashInitialize @ 0x14009E1C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateLogonSessionReference @ 0x1400F2ED8 (SepDuplicateLogonSessionReference.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeIsSystemContext @ 0x140200CB8 (SeIsSystemContext.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1403BE8B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     RtlIsPackageSid @ 0x1403C09B0 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x1403C1068 (RtlIsCapabilitySid.c)
 *     RtlCopySidAndAttributesArray @ 0x1403C1E10 (RtlCopySidAndAttributesArray.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1403C5840 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     SepSetTokenTrust @ 0x1404783E4 (SepSetTokenTrust.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1404B49E0 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x1404B4C58 (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x1404BD6B4 (SepSetLogonSessionToken.c)
 *     SepModifyTokenPolicyCounter @ 0x14064DAF8 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140653C30 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140653D2C (SepSetTokenSessionById.c)
 *     SepDuplicateTokenClaims @ 0x140656318 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepFilterToken(
        __int64 a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        unsigned int a8,
        PSID *a9,
        int a10,
        _QWORD *a11)
{
  char v11; // bl
  unsigned int v14; // esi
  PSID *v15; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // r14
  _QWORD *v18; // rax
  int v19; // r9d
  struct _ERESOURCE *v20; // r13
  int v21; // esi
  PVOID *p_Object; // rcx
  int v23; // eax
  _QWORD *v24; // rbx
  _QWORD *v25; // rdx
  _BYTE *v26; // rcx
  __int128 v27; // xmm0
  ULONG v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v30; // rbx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r13
  __int128 v34; // xmm0
  _DWORD *v35; // rcx
  PACCESS_TOKEN v36; // rbx
  _SID_AND_ATTRIBUTES *v37; // r14
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // r15d
  _SID_AND_ATTRIBUTES *SidArea; // r15
  __int64 v42; // r8
  ULONG v43; // r8d
  NTSTATUS v44; // eax
  int v45; // eax
  _SID_AND_ATTRIBUTES *v46; // r14
  PSID *v47; // r13
  unsigned int v48; // ebx
  __int64 v49; // rdx
  NTSTATUS v50; // eax
  _BYTE *v51; // rdx
  __int64 v52; // rax
  unsigned int v53; // ecx
  size_t v54; // r15
  char *v55; // r14
  _BYTE *v56; // r12
  char v57; // al
  unsigned int v58; // r15d
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  char *v63; // rbx
  int v64; // ecx
  struct _KTHREAD *v65; // rax
  PERESOURCE *PrimaryToken; // rbx
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  char v68; // [rsp+60h] [rbp-A8h] BYREF
  ULONG SidAreaSize; // [rsp+64h] [rbp-A4h] BYREF
  char PreviousMode; // [rsp+68h] [rbp-A0h]
  char v71; // [rsp+69h] [rbp-9Fh] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  PSID_AND_ATTRIBUTES *v73; // [rsp+78h] [rbp-90h]
  _BYTE *v74; // [rsp+80h] [rbp-88h]
  unsigned int v75; // [rsp+88h] [rbp-80h]
  int v76; // [rsp+8Ch] [rbp-7Ch]
  PSID_AND_ATTRIBUTES *v77; // [rsp+90h] [rbp-78h]
  _QWORD *v78; // [rsp+98h] [rbp-70h]
  PSID_AND_ATTRIBUTES *v79; // [rsp+A0h] [rbp-68h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+A8h] [rbp-60h]
  _DWORD *v81; // [rsp+B0h] [rbp-58h]
  ULONG *v82; // [rsp+B8h] [rbp-50h]
  _QWORD *v83; // [rsp+C0h] [rbp-48h]
  _QWORD *v84; // [rsp+C8h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT v85; // [rsp+D0h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-18h] BYREF

  v11 = a2;
  memset(&v85, 0, sizeof(v85));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v76 = a3 & 8;
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v14 = 0;
  if ( a8 )
  {
    v15 = a9;
    while ( !RtlIsPackageSid(*v15) && !RtlIsCapabilitySid(*v15) )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= a8 )
      {
        v11 = a2;
        goto LABEL_10;
      }
    }
    return 3221225485LL;
  }
LABEL_10:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v18 = PoolWithTag + 2;
  v18[1] = v18;
  *v18 = v18;
  v17[6] = 0;
  *((_QWORD *)v17 + 5) = v17 + 8;
  *((_QWORD *)v17 + 4) = v17 + 8;
  v20 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( v20 )
  {
    p_Object = &Object;
    v23 = *(_DWORD *)(a1 + 136);
    LOBYTE(v19) = v11;
    SidAreaSize = *(_DWORD *)(a1 + 132) + a10 + 4;
    LOBYTE(p_Object) = v11;
    v21 = ObCreateObject(
            (_DWORD)p_Object,
            (_DWORD)SeTokenObjectType,
            0,
            v19,
            0,
            SidAreaSize + 1152,
            v23,
            SidAreaSize + 1152,
            (__int64)&Object);
    if ( v21 < 0 )
    {
      ExFreePoolWithTag(v20, 0);
      goto LABEL_16;
    }
    v24 = Object;
    *((_QWORD *)Object + 6) = v20;
    ExInitializeResourceLite(v20);
    v25 = Object;
    v24[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v26 = Object;
    v25[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v26[204] = 0;
    *((_QWORD *)v26 + 3) = *(_QWORD *)(a1 + 24);
    v27 = *(_OWORD *)a1;
    v28 = SidAreaSize;
    v74 = v26;
    *(_OWORD *)v26 = v27;
    *((_DWORD *)v26 + 35) = 0;
    *((_DWORD *)v26 + 32) = 0;
    *((_DWORD *)v26 + 33) = v28;
    *((_QWORD *)v26 + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v26 + 48) = *(_DWORD *)(a1 + 192);
    *((_DWORD *)v26 + 49) = *(_DWORD *)(a1 + 196);
    *((_QWORD *)v26 + 5) = *(_QWORD *)(a1 + 40);
    *((_QWORD *)v26 + 28) = *(_QWORD *)(a1 + 224);
    *((_QWORD *)v26 + 140) = 0LL;
    *((_QWORD *)v26 + 141) = 0LL;
    *((_QWORD *)v26 + 137) = 0LL;
    *((_DWORD *)v26 + 30) = 0;
    *((_QWORD *)v26 + 143) = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
    v30 = (char *)Object;
    v31 = Object;
    *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
    v31[36] = *(_DWORD *)(a1 + 144);
    SepSetTokenSessionById((_DWORD)v31, *(_DWORD *)(a1 + 120), 0, 0, 0LL);
    v33 = v30 + 200;
    *((_DWORD *)v30 + 50) = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
    v34 = *(_OWORD *)(a1 + 88);
    v81 = v30 + 200;
    *(_OWORD *)(v30 + 88) = v34;
    *((_QWORD *)v30 + 13) = *(_QWORD *)(a1 + 104);
    *((_DWORD *)v30 + 28) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v30 + 58) = *(_WORD *)(a1 + 116);
    v30[118] = *(_BYTE *)(a1 + 118);
    *((_DWORD *)v30 + 52) = *(_DWORD *)(a1 + 208);
    *((_DWORD *)v30 + 53) = *(_DWORD *)(a1 + 212);
    *((_OWORD *)v30 + 4) = *(_OWORD *)(a1 + 64);
    *((_QWORD *)v30 + 10) = *(_QWORD *)(a1 + 80);
    *((_QWORD *)v30 + 97) = v17;
    if ( v30[118] == 2 )
    {
      LOBYTE(v32) = 1;
      SepModifyTokenPolicyCounter(v30 + 88, v32);
    }
    *((_QWORD *)v30 + 135) = 0LL;
    v78 = v30 + 1080;
    *((_QWORD *)v30 + 136) = 0LL;
    v84 = v30 + 1088;
    *((_QWORD *)v30 + 99) = 0LL;
    v79 = (PSID_AND_ATTRIBUTES *)(v30 + 792);
    *((_QWORD *)v30 + 98) = 0LL;
    v82 = (ULONG *)(v30 + 800);
    *((_DWORD *)v30 + 200) = 0;
    SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v30 + 808);
    memset(v30 + 808, 0, 0x110uLL);
    *((_QWORD *)v30 + 22) = 0LL;
    *((_QWORD *)v30 + 138) = 0LL;
    *((_QWORD *)v30 + 139) = 0LL;
    *((_QWORD *)v30 + 142) = 0LL;
    v83 = v30 + 176;
    v21 = SepDuplicateLogonSessionReference((__int64)v30, a1);
    if ( v21 >= 0 )
    {
      SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
      *((_QWORD *)v30 + 142) = *(_QWORD *)(a1 + 1136);
      v35 = *(_DWORD **)(a1 + 776);
      if ( !*v35 || (v21 = AuthzBasepDuplicateSecurityAttributes((__int64)v35, *((_QWORD *)v30 + 97), 0), v21 >= 0) )
      {
        if ( !*(_QWORD *)(a1 + 1096) || (v21 = SepDuplicateTokenClaims(a1, v30), v21 >= 0) )
        {
          if ( (a3 & 2) != 0 )
          {
            v36 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v36, &v71) >= 0 && v71 )
              *v33 |= 0x40u;
            ObfDereferenceObject(v36);
            v30 = (char *)Object;
          }
          v37 = (_SID_AND_ATTRIBUTES *)(v30 + 1152);
          v38 = ((_BYTE)v30 + 0x80) & 7;
          if ( (((_BYTE)v30 + 0x80) & 7) != 0 )
          {
            v37 = (_SID_AND_ATTRIBUTES *)((char *)v37 + (unsigned int)(8 - v38));
            SidAreaSize -= 8 - v38;
          }
          v39 = a8;
          v40 = *(_DWORD *)(a1 + 124);
          if ( *(_DWORD *)(a1 + 128) > a8 )
            v39 = *(_DWORD *)(a1 + 128);
          *((_QWORD *)v30 + 19) = v37;
          SidArea = &v37[v39 + v40];
          v77 = (PSID_AND_ATTRIBUTES *)(v30 + 152);
          RemainingSidArea = SidArea;
          if ( SepTokenSidSharingEnabled )
          {
            v21 = SepDuplicateTokenUserAndGroups(a1, v30);
            if ( v21 < 0 )
            {
              *v77 = 0LL;
              goto LABEL_20;
            }
          }
          else
          {
            v43 = SidAreaSize;
            *((_DWORD *)v30 + 31) = *(_DWORD *)(a1 + 124);
            v44 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v43,
                    v37,
                    SidArea,
                    &RemainingSidArea,
                    &SidAreaSize);
            SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v21 = v44;
          }
          v45 = *(_DWORD *)(a1 + 124);
          v75 = 0;
          v46 = (_SID_AND_ATTRIBUTES *)((char *)v37 + (unsigned int)(16 * v45));
          v73 = (PSID_AND_ATTRIBUTES *)(v30 + 160);
          *((_QWORD *)v30 + 20) = v46;
          if ( a8 )
          {
            v47 = a9;
            v48 = v75;
            do
            {
              v49 = *(unsigned int *)(a1 + 128);
              if ( !(_DWORD)v49 || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v49, v42, *v47) )
              {
                v50 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v48],
                        SidAreaSize,
                        v46,
                        SidArea,
                        &RemainingSidArea,
                        &SidAreaSize);
                v51 = v74;
                v21 = v50;
                ++v46;
                SidArea = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                (*v73)[*((unsigned int *)v74 + 32)].Attributes = 7;
                ++*((_DWORD *)v51 + 32);
              }
              ++v48;
              v47 += 2;
            }
            while ( v48 < a8 );
            v30 = (char *)Object;
            v33 = v81;
          }
          v52 = *(_QWORD *)(a1 + 184);
          v53 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v52 )
            v53 += *(unsigned __int16 *)(v52 + 2);
          v54 = v53;
          v55 = (char *)ExAllocatePoolWithTag(PagedPool, v53, 0x64546553u);
          *v83 = v55;
          if ( v55 )
          {
            v56 = v74;
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v74 + 32) )
            {
              v57 = 0;
              if ( *((_DWORD *)v74 + 32) )
              {
                *v33 |= 0x810u;
                v57 = 1;
              }
              else
              {
                *v73 = 0LL;
              }
              if ( v76 )
              {
                *v33 |= 0x18u;
                v57 = 1;
              }
              if ( v57 )
                SepSetLogonSessionToken(a1, 0LL);
              memmove(v55, *(const void **)(a1 + 176), v54);
              if ( *(_QWORD *)(a1 + 184) )
                *((_QWORD *)v30 + 23) = &v55[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
              else
                *((_QWORD *)v30 + 23) = 0LL;
              v58 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v59 = *(unsigned int *)(a1 + 800);
              if ( (_DWORD)v59 )
                v21 = SepSetTokenCapabilities(v30, *(_QWORD *)(a1 + 784), *(_QWORD *)(a1 + 792), v59);
              if ( v21 >= 0 )
              {
                v60 = *(_QWORD *)(a1 + 784);
                if ( v60 )
                  v21 = SepSetTokenPackage(v30, v60);
                if ( v21 >= 0 )
                {
                  v61 = *(_QWORD *)(a1 + 1080);
                  if ( v61 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v61 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v30 = (char *)Object;
                    *v78 = *(_QWORD *)(a1 + 1080);
                  }
                  v62 = *(_QWORD *)(a1 + 1088);
                  if ( v62 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v62 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v30 = (char *)Object;
                    *v84 = *(_QWORD *)(a1 + 1088);
                  }
                  v21 = SepSetTokenTrust(v30, *(_QWORD *)(a1 + 1104));
                  if ( v21 >= 0 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v63 = (char *)Object;
                    v64 = (int)Object;
                    *((_QWORD *)Object + 21) = &v55[v58];
                    SepRemoveDisabledGroupsAndPrivileges(v64, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v77, *((_DWORD *)v63 + 31), (PSID_AND_ATTRIBUTES_HASH)(v63 + 232));
                    RtlSidHashInitialize(*v73, *((_DWORD *)v56 + 32), (PSID_AND_ATTRIBUTES_HASH)(v63 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v85.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext)
                      && (unsigned __int8)RtlIsSandboxedToken(&v85) )
                    {
                      v65 = KeGetCurrentThread();
                      --v65->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v21 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, &v68);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                      if ( v21 < 0 || !v68 )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v21;
                      }
                      v63 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v79 )
                      RtlSidHashInitialize(*v79, *v82, SidAttrHash);
                    *a11 = v63;
                    return (unsigned int)v21;
                  }
                }
              }
            }
            else
            {
              v21 = -1073741811;
            }
          }
          else
          {
            v21 = -1073741670;
          }
        }
      }
    }
LABEL_20:
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return (unsigned int)v21;
  }
  v21 = -1073741670;
LABEL_16:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v21;
}
