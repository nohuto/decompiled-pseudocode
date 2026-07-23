/*
 * XREFs of SepFilterToken @ 0x140479EC4
 * Callers:
 *     NtFilterToken @ 0x14047BC68 (NtFilterToken.c)
 *     SeFilterToken @ 0x14068D030 (SeFilterToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x14000E790 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepDuplicateLogonSessionReference @ 0x140080A84 (SepDuplicateLogonSessionReference.c)
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlUIntAdd @ 0x1400C1B78 (RtlUIntAdd.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeIsSystemContext @ 0x14021A3D8 (SeIsSystemContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySidAndAttributesArray @ 0x14040DD10 (RtlCopySidAndAttributesArray.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     SepSetTokenTrust @ 0x140412DBC (SepSetTokenTrust.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14046D184 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140474EDC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     RtlIsPackageSid @ 0x140479C40 (RtlIsPackageSid.c)
 *     RtlIsCapabilitySid @ 0x14047B0A8 (RtlIsCapabilitySid.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047B964 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x14047BBDC (SepSidInSidAndAttributes.c)
 *     SepSetLogonSessionToken @ 0x14047C0CC (SepSetLogonSessionToken.c)
 *     SepModifyTokenPolicyCounter @ 0x14068D360 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x140693098 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x140693194 (SepSetTokenSessionById.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x140695D6C (SepDuplicateTokenClaims.c)
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
        UINT uAddend,
        _QWORD *a11)
{
  PVOID *v13; // r14
  unsigned int v15; // esi
  PSID *v16; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rsi
  _QWORD *v19; // rax
  PVOID *v20; // rcx
  struct _ERESOURCE *v21; // r15
  int v22; // ebx
  _QWORD *v23; // rbx
  _QWORD *v24; // rdx
  PVOID v25; // r15
  UINT v26; // eax
  ULONG v27; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v29; // rbx
  _DWORD *v30; // rcx
  __int64 v31; // rdx
  _DWORD *v32; // r14
  unsigned int v33; // eax
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // rcx
  __int64 v39; // rdx
  _KPROCESS *Process; // rcx
  PACCESS_TOKEN v41; // rbx
  _SID_AND_ATTRIBUTES *v42; // r14
  int v43; // eax
  unsigned int v44; // eax
  _SID_AND_ATTRIBUTES **v45; // r13
  unsigned int v46; // r12d
  _SID_AND_ATTRIBUTES *v47; // r12
  __int64 v48; // r8
  ULONG v49; // r8d
  NTSTATUS v50; // eax
  unsigned int v51; // r13d
  _SID_AND_ATTRIBUTES *v52; // r14
  PSID *v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // ecx
  size_t v57; // r14
  char *v58; // r12
  char v59; // al
  _DWORD *v60; // rcx
  PSID_AND_ATTRIBUTES *v61; // r13
  unsigned int v62; // r14d
  ULONG v63; // r9d
  unsigned __int8 *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rbx
  int v71; // ecx
  KPROCESSOR_MODE v72; // di
  struct _KTHREAD *v73; // rax
  PERESOURCE *PrimaryToken; // rbx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  int v78; // edx
  PSID SidArea; // [rsp+28h] [rbp-D9h]
  UINT puResult[2]; // [rsp+58h] [rbp-A9h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A1h] BYREF
  UINT v82[2]; // [rsp+68h] [rbp-99h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-91h] BYREF
  __int64 v84; // [rsp+78h] [rbp-89h]
  PSID_AND_ATTRIBUTES *v85; // [rsp+80h] [rbp-81h]
  _DWORD *v86; // [rsp+88h] [rbp-79h]
  _QWORD *v87; // [rsp+90h] [rbp-71h]
  _QWORD *v88; // [rsp+98h] [rbp-69h]
  _QWORD *v89; // [rsp+A0h] [rbp-61h]
  PSID_AND_ATTRIBUTES *v90; // [rsp+A8h] [rbp-59h]
  PSID_AND_ATTRIBUTES *v91; // [rsp+B0h] [rbp-51h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+B8h] [rbp-49h]
  ULONG *v93; // [rsp+C0h] [rbp-41h]
  struct _SECURITY_SUBJECT_CONTEXT v94; // [rsp+C8h] [rbp-39h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-19h] BYREF

  v13 = 0LL;
  v82[1] = 0;
  memset(&v94, 0, sizeof(v94));
  BYTE1(v82[0]) = KeGetCurrentThread()->PreviousMode;
  LODWORD(v84) = a3 & 8;
  if ( (a3 & 8) != 0 && (*(_DWORD *)(a1 + 200) & 0x58) != 0 )
    return 3221225485LL;
  v15 = 0;
  if ( a8 )
  {
    v16 = a9;
    while ( !RtlIsPackageSid(*v16) && !RtlIsCapabilitySid(*v16) )
    {
      ++v15;
      v16 += 2;
      if ( v15 >= a8 )
        goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0;
  v19 = PoolWithTag + 2;
  v19[1] = v19;
  *v19 = v19;
  v18[6] = 0;
  *((_QWORD *)v18 + 5) = v18 + 8;
  *((_QWORD *)v18 + 4) = v18 + 8;
  if ( SeTokenLeakTracking )
  {
    v13 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
    if ( !v13 )
    {
      v20 = (PVOID *)v18;
      goto LABEL_14;
    }
  }
  v21 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( !v21 )
  {
    ExFreePoolWithTag(v18, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v20 = v13;
LABEL_14:
    ExFreePoolWithTag(v20, 0);
    return 3221225626LL;
  }
  v22 = RtlUIntAdd(*(_DWORD *)(a1 + 132), uAddend, puResult);
  if ( v22 >= 0 )
  {
    v22 = RtlUIntAdd(puResult[0], 4u, puResult);
    if ( v22 >= 0 )
    {
      v22 = RtlUIntAdd(0x488u, puResult[0], &v82[1]);
      if ( v22 >= 0 )
      {
        v22 = ObCreateObject(a2, SeTokenObjectType, 0LL, a2, 0, v82[1], *(_DWORD *)(a1 + 136), v82[1], &Object);
        if ( v22 >= 0 )
        {
          v23 = Object;
          *((_QWORD *)Object + 6) = v21;
          ExInitializeResourceLite(v21);
          v24 = Object;
          v23[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v25 = Object;
          v24[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          *((_BYTE *)v25 + 204) = 0;
          *((_QWORD *)v25 + 3) = *(_QWORD *)(a1 + 24);
          v26 = puResult[0];
          *(_OWORD *)v25 = *(_OWORD *)a1;
          *((_DWORD *)v25 + 35) = 0;
          *((_DWORD *)v25 + 32) = 0;
          *((_DWORD *)v25 + 33) = v26;
          *((_QWORD *)v25 + 4) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)v25 + 48) = *(_DWORD *)(a1 + 192);
          *((_DWORD *)v25 + 49) = *(_DWORD *)(a1 + 196);
          *((_QWORD *)v25 + 5) = *(_QWORD *)(a1 + 40);
          *((_QWORD *)v25 + 28) = *(_QWORD *)(a1 + 224);
          *((_QWORD *)v25 + 140) = 0LL;
          *((_QWORD *)v25 + 141) = 0LL;
          *((_QWORD *)v25 + 137) = 0LL;
          *((_QWORD *)v25 + 143) = v13;
          *((_DWORD *)v25 + 30) = 0;
          *((_QWORD *)v25 + 144) = 0LL;
          if ( SeTokenLeakTracking )
          {
            v27 = RtlWalkFrameChain(v13 + 5, 0x1Eu, 0);
            if ( KeGetCurrentIrql() < 2u )
              RtlWalkFrameChain((PVOID *)(*((_QWORD *)v25 + 143) + 40LL + 8LL * v27), 30 - v27, 1u);
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
          v29 = (char *)Object;
          v30 = Object;
          SidArea = 0LL;
          *((_DWORD *)Object + 34) = *(_DWORD *)(a1 + 136);
          v30[36] = *(_DWORD *)(a1 + 144);
          SepSetTokenSessionById((_DWORD)v30, *(_DWORD *)(a1 + 120), 0, 0LL);
          v32 = v29 + 200;
          v33 = *(_DWORD *)(a1 + 200) & 0xFFFFFBD7;
          v86 = v29 + 200;
          *((_DWORD *)v29 + 50) = v33;
          *(_OWORD *)(v29 + 88) = *(_OWORD *)(a1 + 88);
          *(_OWORD *)(v29 + 104) = *(_OWORD *)(a1 + 104);
          *((_DWORD *)v29 + 52) = *(_DWORD *)(a1 + 208);
          *((_DWORD *)v29 + 53) = *(_DWORD *)(a1 + 212);
          *((_OWORD *)v29 + 4) = *(_OWORD *)(a1 + 64);
          *((_QWORD *)v29 + 10) = *(_QWORD *)(a1 + 80);
          *((_QWORD *)v29 + 97) = v18;
          if ( v29[119] == 2 )
          {
            LOBYTE(v31) = 1;
            SepModifyTokenPolicyCounter(v29 + 88, v31);
          }
          *((_QWORD *)v29 + 135) = 0LL;
          v88 = v29 + 1080;
          *((_QWORD *)v29 + 136) = 0LL;
          v89 = v29 + 1088;
          *((_QWORD *)v29 + 99) = 0LL;
          v91 = (PSID_AND_ATTRIBUTES *)(v29 + 792);
          *((_QWORD *)v29 + 98) = 0LL;
          v93 = (ULONG *)(v29 + 800);
          *((_DWORD *)v29 + 200) = 0;
          SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v29 + 808);
          memset(v29 + 808, 0, 0x110uLL);
          *((_QWORD *)v29 + 22) = 0LL;
          *((_QWORD *)v29 + 138) = 0LL;
          *((_QWORD *)v29 + 139) = 0LL;
          *((_QWORD *)v29 + 142) = 0LL;
          v87 = v29 + 176;
          v34 = SepDuplicateLogonSessionReference((__int64)v29, a1);
          if ( v34 < 0 )
            goto LABEL_28;
          SepRefDerefLuidToIndexEntryIfNecessary(a1, 0);
          *((_QWORD *)v29 + 142) = *(_QWORD *)(a1 + 1136);
          v38 = *(_DWORD **)(a1 + 776);
          if ( *v38 )
          {
            v34 = AuthzBasepDuplicateSecurityAttributes((__int64)v38, *((_QWORD *)v29 + 97), 0);
            if ( v34 < 0 )
              goto LABEL_28;
          }
          if ( *(_QWORD *)(a1 + 1096) )
          {
            v34 = SepDuplicateTokenClaims(a1, v29);
            if ( v34 < 0 )
              goto LABEL_28;
          }
          if ( SeTokenLeakTracking )
          {
            **((_QWORD **)v25 + 143) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            *(_QWORD *)(*((_QWORD *)v25 + 143) + 8LL) = KeGetCurrentThread()[1].KernelStack;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 32LL) = 15;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL) = 0;
            *(_DWORD *)(*((_QWORD *)v25 + 143) + 284LL) = 0;
            v39 = *((_QWORD *)v25 + 143);
            v29 = (char *)Object;
            Process = KeGetCurrentThread()->ApcState.Process;
            *(_QWORD *)(v39 + 16) = Process[1].ActiveProcessors.Bitmap[12];
            *(_DWORD *)(v39 + 24) = Process[1].ActiveProcessors.Bitmap[13];
            *(_WORD *)(v39 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
            *(_BYTE *)(v39 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
            SepAddTokenLogonSession();
          }
          if ( (a3 & 2) != 0 )
          {
            v41 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
            if ( (int)SeIsSystemContext(v41, v82) >= 0 && LOBYTE(v82[0]) )
              *v32 |= 0x40u;
            ObfDereferenceObject(v41);
            v29 = (char *)Object;
          }
          v42 = (_SID_AND_ATTRIBUTES *)(v29 + 1160);
          v43 = ((_BYTE)v29 - 120) & 7;
          if ( (((_BYTE)v29 - 120) & 7) != 0 )
          {
            v42 = (_SID_AND_ATTRIBUTES *)((char *)v42 + (unsigned int)(8 - v43));
            puResult[0] -= 8 - v43;
          }
          v44 = *(_DWORD *)(a1 + 128);
          v45 = (_SID_AND_ATTRIBUTES **)(v29 + 152);
          v46 = a8;
          v90 = (PSID_AND_ATTRIBUTES *)(v29 + 152);
          if ( v44 > a8 )
            v46 = v44;
          v47 = &v42[*(_DWORD *)(a1 + 124) + v46];
          *v45 = v42;
          RemainingSidArea = v47;
          if ( SepTokenSidSharingEnabled )
          {
            v34 = SepDuplicateTokenUserAndGroups(a1, v29);
            if ( v34 < 0 )
            {
              *v45 = 0LL;
              goto LABEL_28;
            }
          }
          else
          {
            v49 = puResult[0];
            *((_DWORD *)v29 + 31) = *(_DWORD *)(a1 + 124);
            v50 = RtlCopySidAndAttributesArray(
                    *(_DWORD *)(a1 + 124),
                    *(PSID_AND_ATTRIBUTES *)(a1 + 152),
                    v49,
                    v42,
                    v47,
                    &RemainingSidArea,
                    puResult);
            v47 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
            v34 = v50;
          }
          v51 = 0;
          v52 = (_SID_AND_ATTRIBUTES *)((char *)v42 + (unsigned int)(16 * *(_DWORD *)(a1 + 124)));
          v85 = (PSID_AND_ATTRIBUTES *)(v29 + 160);
          *((_QWORD *)v29 + 20) = v52;
          if ( a8 )
          {
            v53 = a9;
            do
            {
              v54 = *(unsigned int *)(a1 + 128);
              if ( !(_DWORD)v54
                || (unsigned __int8)SepSidInSidAndAttributes(*(_QWORD *)(a1 + 160), v54, v48, *v53, SidArea) )
              {
                v34 = RtlCopySidAndAttributesArray(
                        1u,
                        (PSID_AND_ATTRIBUTES)&a9[2 * v51],
                        puResult[0],
                        v52,
                        v47,
                        &RemainingSidArea,
                        puResult);
                v47 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
                ++v52;
                (*v85)[(*((_DWORD *)v25 + 32))++].Attributes = 7;
              }
              ++v51;
              v53 += 2;
            }
            while ( v51 < a8 );
            v29 = (char *)Object;
          }
          v55 = *(_QWORD *)(a1 + 184);
          v56 = 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 8;
          if ( v55 )
            v56 += *(unsigned __int16 *)(v55 + 2);
          v57 = v56;
          v58 = (char *)ExAllocatePoolWithTag(PagedPool, v56, 0x64546553u);
          *v87 = v58;
          if ( v58 )
          {
            if ( !*(_DWORD *)(a1 + 128) || *((_DWORD *)v25 + 32) )
            {
              v59 = 0;
              v60 = v86;
              v61 = v85;
              if ( *((_DWORD *)v25 + 32) )
              {
                *v86 |= 0x810u;
                v59 = 1;
              }
              else
              {
                *v85 = 0LL;
              }
              if ( (_DWORD)v84 )
              {
                *v60 |= 0x18u;
                v59 = 1;
              }
              if ( v59 )
                SepSetLogonSessionToken(a1, 0LL);
              memmove(v58, *(const void **)(a1 + 176), v57);
              if ( *(_QWORD *)(a1 + 184) )
                *((_QWORD *)v29 + 23) = &v58[*(_DWORD *)(a1 + 184) - *(_DWORD *)(a1 + 176)];
              else
                *((_QWORD *)v29 + 23) = 0LL;
              v62 = *(_DWORD *)(a1 + 168) - *(_DWORD *)(a1 + 176);
              v63 = *(_DWORD *)(a1 + 800);
              if ( v63 )
                v34 = SepSetTokenCapabilities((__int64)v29, *(void **)(a1 + 784), *(void **)(a1 + 792), v63);
              if ( v34 >= 0 )
              {
                v64 = *(unsigned __int8 **)(a1 + 784);
                if ( v64 )
                  v34 = SepSetTokenPackage((__int64)v29, v64);
                if ( v34 >= 0 )
                {
                  v65 = *(_QWORD *)(a1 + 1080);
                  if ( v65 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v65 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v29 = (char *)Object;
                    *v88 = *(_QWORD *)(a1 + 1080);
                  }
                  v66 = *(_QWORD *)(a1 + 1088);
                  if ( v66 )
                  {
                    if ( _InterlockedIncrement64((volatile signed __int64 *)(v66 + 24)) <= 1 )
                      __fastfail(0xEu);
                    v29 = (char *)Object;
                    *v89 = *(_QWORD *)(a1 + 1088);
                  }
                  v34 = SepSetTokenTrust((__int64)v29, *(void **)(a1 + 1104));
                  if ( v34 >= 0 )
                  {
                    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v67, v68, v69);
                    v70 = (char *)Object;
                    v71 = (int)Object;
                    *((_QWORD *)Object + 21) = &v58[v62];
                    SepRemoveDisabledGroupsAndPrivileges(v71, a3, a4, a5, a6, a7);
                    RtlSidHashInitialize(*v90, *((_DWORD *)v70 + 31), (PSID_AND_ATTRIBUTES_HASH)(v70 + 232));
                    RtlSidHashInitialize(*v61, *((_DWORD *)v25 + 32), (PSID_AND_ATTRIBUTES_HASH)(v70 + 504));
                    SeCaptureSubjectContext(&SubjectContext);
                    v72 = BYTE1(v82[0]);
                    v94.PrimaryToken = SubjectContext.PrimaryToken;
                    if ( RtlIsSandboxedToken(&SubjectContext, SBYTE1(v82[0])) && RtlIsSandboxedToken(&v94, v72) )
                    {
                      v73 = KeGetCurrentThread();
                      --v73->KernelApcDisable;
                      PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                      ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                      v34 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken, (_BYTE *)v82 + 2);
                      ExReleaseResourceLite(PrimaryToken[6]);
                      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v75, v76, v77);
                      if ( v34 < 0 || !BYTE2(v82[0]) )
                      {
                        ObfDereferenceObject(Object);
                        SeReleaseSubjectContext(&SubjectContext);
                        return (unsigned int)v34;
                      }
                      v70 = (char *)Object;
                    }
                    SeReleaseSubjectContext(&SubjectContext);
                    if ( *v91 )
                      RtlSidHashInitialize(*v91, *v93, SidAttrHash);
                    if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 15 )
                    {
                      if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
                      {
                        *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                        v78 = *(_DWORD *)(*((_QWORD *)v25 + 143) + 280LL);
                        if ( v78 >= SepTokenLeakBreakCount )
                        {
                          DbgPrint("\nToken number 0x%x = 0x%p\n", v78, Object);
                          __debugbreak();
                        }
                      }
                      v70 = (char *)Object;
                    }
                    *a11 = v70;
                    return (unsigned int)v34;
                  }
                }
              }
            }
            else
            {
              v34 = -1073741811;
            }
          }
          else
          {
            v34 = -1073741670;
          }
LABEL_28:
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
          ObfDereferenceObject(Object);
          return (unsigned int)v34;
        }
      }
    }
  }
  ExFreePoolWithTag(v21, 0);
  ExFreePoolWithTag(v18, 0);
  if ( SeTokenLeakTracking )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v22;
}
