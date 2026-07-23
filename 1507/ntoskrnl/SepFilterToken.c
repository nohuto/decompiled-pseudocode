/*
 * XREFs of SepFilterToken @ 0x140411C6C
 * Callers:
 *     NtFilterToken @ 0x14040F530 (NtFilterToken.c)
 *     SeFilterToken @ 0x1406D0C14 (SeFilterToken.c)
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
 *     SeIsSystemContext @ 0x14024FA24 (SeIsSystemContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14040F8F8 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SepSidInSidAndAttributes @ 0x14040FBB4 (SepSidInSidAndAttributes.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     RtlIsCapabilitySid @ 0x140413050 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x1404130F4 (RtlIsPackageSid.c)
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     SepReferenceLogonSession @ 0x14046E1E4 (SepReferenceLogonSession.c)
 *     RtlCopySidAndAttributesArray @ 0x1404709F0 (RtlCopySidAndAttributesArray.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     SepSetLogonSessionToken @ 0x14055CA6C (SepSetLogonSessionToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406D0DBC (SepNewTokenAsRestrictedAsProcessToken.c)
 *     SepModifyTokenPolicyCounter @ 0x1406D115C (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1406D5ADC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenSessionById @ 0x1406D5BD8 (SepSetTokenSessionById.c)
 *     SepDuplicateTokenClaims @ 0x1406D8430 (SepDuplicateTokenClaims.c)
 */

__int64 __fastcall SepFilterToken(
        __int128 *a1,
        char a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8,
        PSID *a9,
        ULONG ulAddend,
        _QWORD *a11)
{
  unsigned int v14; // esi
  PSID *v15; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rsi
  _QWORD *v18; // rax
  struct _ERESOURCE *v19; // r14
  NTSTATUS v20; // ebx
  int v21; // r9d
  int v22; // ecx
  struct _ERESOURCE *v23; // rcx
  _QWORD *v24; // rbx
  _QWORD *v25; // rdx
  _BYTE *v26; // rcx
  __int128 v27; // xmm0
  ULONG v28; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v30; // rbx
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  _DWORD *v33; // r12
  __int64 *v34; // r14
  __int128 v35; // xmm0
  __int64 v36; // rcx
  int v37; // esi
  struct _KTHREAD *v38; // rdx
  __int16 v39; // cx
  bool v40; // zf
  struct _KTHREAD *v41; // rdx
  __int16 v42; // cx
  struct _KTHREAD *v43; // rdx
  __int16 v44; // cx
  PACCESS_TOKEN v45; // rbx
  _SID_AND_ATTRIBUTES *v46; // rsi
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // r15d
  _SID_AND_ATTRIBUTES *v50; // r15
  int v51; // eax
  __int64 v52; // r8
  int v53; // r14d
  struct _KTHREAD *v54; // rdx
  __int16 v55; // cx
  bool v56; // zf
  ULONG v57; // r8d
  NTSTATUS v58; // eax
  _SID_AND_ATTRIBUTES *v59; // rsi
  char **v60; // r12
  unsigned int i; // ebx
  unsigned int v62; // edx
  NTSTATUS v63; // eax
  _BYTE *v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // ecx
  size_t v67; // rsi
  char *v68; // r15
  struct _KTHREAD *v69; // rcx
  __int16 v70; // ax
  _BYTE *v71; // r13
  struct _KTHREAD *v72; // rcx
  __int16 v73; // ax
  char v74; // al
  unsigned int v75; // r12d
  __int64 v76; // r9
  struct _KTHREAD *v77; // rcx
  __int16 v78; // ax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  struct _ERESOURCE *v83; // rcx
  __int16 v84; // cx
  struct _KTHREAD *v85; // rcx
  __int16 v86; // ax
  char *v87; // rbx
  PVOID v88; // rcx
  KPROCESSOR_MODE v89; // di
  struct _KTHREAD *v90; // rax
  PERESOURCE *PrimaryToken; // rbx
  struct _KTHREAD *v92; // rcx
  __int16 v93; // ax
  int SidArea; // [rsp+28h] [rbp-E0h]
  ULONG pulResult[2]; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  ULONG v97[2]; // [rsp+68h] [rbp-A0h] BYREF
  PSID RemainingSidArea; // [rsp+70h] [rbp-98h] BYREF
  PSID_AND_ATTRIBUTES *v99; // [rsp+78h] [rbp-90h]
  PSID_AND_ATTRIBUTES *v100; // [rsp+80h] [rbp-88h]
  _BYTE *v101; // [rsp+90h] [rbp-78h]
  int v102; // [rsp+98h] [rbp-70h]
  _QWORD *v103; // [rsp+A0h] [rbp-68h]
  PSID_AND_ATTRIBUTES *v104; // [rsp+A8h] [rbp-60h]
  PSID_AND_ATTRIBUTES_HASH SidAttrHash; // [rsp+B0h] [rbp-58h]
  _DWORD *v106; // [rsp+B8h] [rbp-50h]
  ULONG *v107; // [rsp+C0h] [rbp-48h]
  _QWORD *v108; // [rsp+C8h] [rbp-40h]
  _QWORD *v109; // [rsp+D0h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT v110; // [rsp+D8h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-10h] BYREF

  v97[0] = 0;
  memset(&v110, 0, sizeof(v110));
  BYTE1(pulResult[1]) = KeGetCurrentThread()->PreviousMode;
  v102 = a3 & 8;
  if ( (a3 & 8) != 0 && (*((_DWORD *)a1 + 50) & 0x58) != 0 )
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
        goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
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
  v19 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
  if ( v19 )
  {
    v20 = RtlULongAdd(*((_DWORD *)a1 + 33), ulAddend, pulResult);
    if ( v20 < 0
      || (v20 = RtlULongAdd(pulResult[0], 4u, pulResult), v20 < 0)
      || (v20 = RtlULongAdd(0x478u, pulResult[0], v97), v20 < 0) )
    {
      v23 = v19;
    }
    else
    {
      v22 = *((_DWORD *)a1 + 34);
      LOBYTE(v22) = a2;
      SidArea = v21;
      LOBYTE(v21) = a2;
      v20 = ObCreateObject(
              v22,
              (_DWORD)SeTokenObjectType,
              0,
              v21,
              SidArea,
              v97[0],
              *((_DWORD *)a1 + 34),
              v97[0],
              (__int64)&Object);
      v23 = v19;
      if ( v20 >= 0 )
      {
        v24 = Object;
        *((_QWORD *)Object + 6) = v19;
        ExInitializeResourceLite(v19);
        v25 = Object;
        v24[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        v26 = Object;
        v25[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        v26[204] = 0;
        *((_QWORD *)v26 + 3) = *((_QWORD *)a1 + 3);
        v27 = *a1;
        v28 = pulResult[0];
        v101 = v26;
        *(_OWORD *)v26 = v27;
        *((_DWORD *)v26 + 35) = 0;
        *((_DWORD *)v26 + 32) = 0;
        *((_DWORD *)v26 + 33) = v28;
        *((_QWORD *)v26 + 4) = *((_QWORD *)a1 + 2);
        *((_DWORD *)v26 + 48) = *((_DWORD *)a1 + 48);
        *((_DWORD *)v26 + 49) = *((_DWORD *)a1 + 49);
        *((_QWORD *)v26 + 5) = *((_QWORD *)a1 + 5);
        *((_QWORD *)v26 + 28) = *((_QWORD *)a1 + 28);
        *((_QWORD *)v26 + 140) = 0LL;
        *((_QWORD *)v26 + 141) = 0LL;
        *((_QWORD *)v26 + 137) = 0LL;
        *((_DWORD *)v26 + 30) = 0;
        *((_QWORD *)v26 + 142) = 0LL;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a1 + 6), 1u);
        v30 = (char *)Object;
        v31 = Object;
        *((_DWORD *)Object + 34) = *((_DWORD *)a1 + 34);
        v31[36] = *((_DWORD *)a1 + 36);
        SepSetTokenSessionById((_DWORD)v31, *((_DWORD *)a1 + 30), 0, 0, 0LL);
        v33 = v30 + 200;
        *((_DWORD *)v30 + 50) = *((_DWORD *)a1 + 50) & 0xFFFFFBD7;
        v34 = (__int64 *)(v30 + 776);
        v35 = *(__int128 *)((char *)a1 + 88);
        v106 = v30 + 200;
        v99 = (PSID_AND_ATTRIBUTES *)(v30 + 776);
        *(_OWORD *)(v30 + 88) = v35;
        *((_QWORD *)v30 + 13) = *((_QWORD *)a1 + 13);
        *((_DWORD *)v30 + 28) = *((_DWORD *)a1 + 28);
        *((_WORD *)v30 + 58) = *((_WORD *)a1 + 58);
        v30[118] = *((_BYTE *)a1 + 118);
        *((_DWORD *)v30 + 52) = *((_DWORD *)a1 + 52);
        *((_DWORD *)v30 + 53) = *((_DWORD *)a1 + 53);
        *((_OWORD *)v30 + 4) = a1[4];
        *((_QWORD *)v30 + 10) = *((_QWORD *)a1 + 10);
        *((_QWORD *)v30 + 97) = v17;
        if ( v30[118] == 2 )
        {
          LOBYTE(v32) = 1;
          SepModifyTokenPolicyCounter(v30 + 88, v32);
        }
        *((_QWORD *)v30 + 135) = 0LL;
        v103 = v30 + 1080;
        *((_QWORD *)v30 + 136) = 0LL;
        v109 = v30 + 1088;
        *((_QWORD *)v30 + 99) = 0LL;
        v104 = (PSID_AND_ATTRIBUTES *)(v30 + 792);
        *((_QWORD *)v30 + 98) = 0LL;
        v107 = (ULONG *)(v30 + 800);
        *((_DWORD *)v30 + 200) = 0;
        SidAttrHash = (PSID_AND_ATTRIBUTES_HASH)(v30 + 808);
        memset(v30 + 808, 0, 0x110uLL);
        *((_QWORD *)v30 + 22) = 0LL;
        *((_QWORD *)v30 + 138) = 0LL;
        *((_QWORD *)v30 + 139) = 0LL;
        v108 = v30 + 176;
        if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
        {
          v37 = SepReferenceLogonSession((char *)a1 + 24, v30 + 216);
          if ( v37 < 0 )
          {
            *v33 |= 0x20u;
            *((_QWORD *)v30 + 27) = 0LL;
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            v38 = KeGetCurrentThread();
            v39 = v38->KernelApcDisable + 1;
            v38->KernelApcDisable = v39;
            if ( v39 || ($CD287064E7C9F7953DE243E927CFCB99 *)v38->ApcState.ApcListHead[0].Flink == &v38->152 )
              goto LABEL_112;
            v40 = v38->SpecialApcDisable == 0;
            goto LABEL_110;
          }
          v34 = (__int64 *)v99;
        }
        else
        {
          v36 = *((_QWORD *)a1 + 27);
          *((_QWORD *)v30 + 27) = v36;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v36 + 24)) <= 1 )
            __fastfail(0xEu);
          v30 = (char *)Object;
        }
        if ( **((_DWORD **)a1 + 97) )
        {
          v37 = SepRefDerefLuidToIndexEntryIfNecessary(a1, 0LL);
          if ( v37 < 0 )
          {
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            v41 = KeGetCurrentThread();
            v42 = v41->KernelApcDisable + 1;
            v41->KernelApcDisable = v42;
            if ( v42 || ($CD287064E7C9F7953DE243E927CFCB99 *)v41->ApcState.ApcListHead[0].Flink == &v41->152 )
              goto LABEL_112;
            v40 = v41->SpecialApcDisable == 0;
            goto LABEL_110;
          }
          v37 = AuthzBasepDuplicateSecurityAttributes(*((_QWORD *)a1 + 97), *v34, 0);
          if ( v37 < 0 )
          {
            SepRefDerefLuidToIndexEntryIfNecessary(a1, 1LL);
            goto LABEL_35;
          }
        }
        if ( *((_QWORD *)a1 + 137) )
        {
          v37 = SepDuplicateTokenClaims(a1, v30);
          if ( v37 < 0 )
          {
LABEL_35:
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            v43 = KeGetCurrentThread();
            v44 = v43->KernelApcDisable + 1;
            v43->KernelApcDisable = v44;
            if ( v44 )
              goto LABEL_112;
LABEL_108:
            if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152 )
            {
              v40 = v43->SpecialApcDisable == 0;
LABEL_110:
              if ( v40 )
                KiCheckForKernelApcDelivery();
            }
LABEL_112:
            ObfDereferenceObject(Object);
            return (unsigned int)v37;
          }
        }
        if ( (a3 & 2) != 0 )
        {
          v45 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
          if ( (int)SeIsSystemContext(v45, (_BYTE *)&pulResult[1] + 2) >= 0 && BYTE2(pulResult[1]) )
            *v33 |= 0x40u;
          ObfDereferenceObject(v45);
          v30 = (char *)Object;
        }
        v46 = (_SID_AND_ATTRIBUTES *)(v30 + 1144);
        v47 = ((_BYTE)v30 + 120) & 7;
        if ( (((_BYTE)v30 + 120) & 7) != 0 )
        {
          v46 = (_SID_AND_ATTRIBUTES *)((char *)v46 + (unsigned int)(8 - v47));
          pulResult[0] -= 8 - v47;
        }
        v48 = a8;
        v49 = *((_DWORD *)a1 + 31);
        if ( *((_DWORD *)a1 + 32) > a8 )
          v48 = *((_DWORD *)a1 + 32);
        *((_QWORD *)v30 + 19) = v46;
        v50 = &v46[v48 + v49];
        v99 = (PSID_AND_ATTRIBUTES *)(v30 + 152);
        RemainingSidArea = v50;
        if ( SepTokenSidSharingEnabled )
        {
          v51 = SepDuplicateTokenUserAndGroups(a1, v30);
          v52 = 0LL;
          v53 = v51;
          if ( v51 < 0 )
          {
            *v99 = 0LL;
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            v54 = KeGetCurrentThread();
            v55 = v54->KernelApcDisable + 1;
            v54->KernelApcDisable = v55;
            if ( !v55 && ($CD287064E7C9F7953DE243E927CFCB99 *)v54->ApcState.ApcListHead[0].Flink != &v54->152 )
            {
              v56 = v54->SpecialApcDisable == 0;
              goto LABEL_53;
            }
            goto LABEL_55;
          }
        }
        else
        {
          v57 = pulResult[0];
          *((_DWORD *)v30 + 31) = *((_DWORD *)a1 + 31);
          v58 = RtlCopySidAndAttributesArray(
                  *((_DWORD *)a1 + 31),
                  *((PSID_AND_ATTRIBUTES *)a1 + 19),
                  v57,
                  v46,
                  v50,
                  &RemainingSidArea,
                  pulResult);
          v50 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
          v53 = v58;
          v52 = 0LL;
        }
        v59 = (_SID_AND_ATTRIBUTES *)((char *)v46 + (unsigned int)(16 * *((_DWORD *)a1 + 31)));
        v100 = (PSID_AND_ATTRIBUTES *)(v30 + 160);
        *((_QWORD *)v30 + 20) = v59;
        if ( a8 )
        {
          v60 = (char **)a9;
          for ( i = 0; i < a8; ++i )
          {
            v62 = *((_DWORD *)a1 + 32);
            if ( !v62 || SepSidInSidAndAttributes(*((unsigned __int8 ***)a1 + 20), v62, v52, *v60) )
            {
              v63 = RtlCopySidAndAttributesArray(
                      1u,
                      (PSID_AND_ATTRIBUTES)&a9[2 * i],
                      pulResult[0],
                      v59,
                      v50,
                      &RemainingSidArea,
                      pulResult);
              v64 = v101;
              v53 = v63;
              ++v59;
              v50 = (_SID_AND_ATTRIBUTES *)RemainingSidArea;
              (*v100)[*((unsigned int *)v101 + 32)].Attributes = 7;
              ++*((_DWORD *)v64 + 32);
            }
            v60 += 2;
          }
          v30 = (char *)Object;
          v33 = v106;
        }
        v65 = *((_QWORD *)a1 + 23);
        v66 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 21) + 1LL) + 8;
        if ( v65 )
          v66 += *(unsigned __int16 *)(v65 + 2);
        v67 = v66;
        v68 = (char *)ExAllocatePoolWithTag(PagedPool, v66, 0x64546553u);
        *v108 = v68;
        if ( !v68 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
          v69 = KeGetCurrentThread();
          v70 = v69->KernelApcDisable + 1;
          v69->KernelApcDisable = v70;
          if ( !v70
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v69->ApcState.ApcListHead[0].Flink != &v69->152
            && !v69->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v37 = -1073741670;
          goto LABEL_112;
        }
        v71 = v101;
        if ( *((_DWORD *)a1 + 32) && !*((_DWORD *)v101 + 32) )
        {
          ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
          v72 = KeGetCurrentThread();
          v73 = v72->KernelApcDisable + 1;
          v72->KernelApcDisable = v73;
          if ( !v73
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v72->ApcState.ApcListHead[0].Flink != &v72->152
            && !v72->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v37 = -1073741811;
          goto LABEL_112;
        }
        v74 = 0;
        if ( *((_DWORD *)v101 + 32) )
        {
          *v33 |= 0x810u;
          v74 = 1;
        }
        else
        {
          *v100 = 0LL;
        }
        if ( v102 )
        {
          *v33 |= 0x18u;
          v74 = 1;
        }
        if ( v74 )
          SepSetLogonSessionToken(a1, 0LL);
        memmove(v68, *((const void **)a1 + 22), v67);
        if ( *((_QWORD *)a1 + 23) )
          *((_QWORD *)v30 + 23) = &v68[*((_DWORD *)a1 + 46) - *((_DWORD *)a1 + 44)];
        else
          *((_QWORD *)v30 + 23) = 0LL;
        v75 = *((_DWORD *)a1 + 42) - *((_DWORD *)a1 + 44);
        v76 = *((unsigned int *)a1 + 200);
        if ( (_DWORD)v76 )
          v53 = SepSetTokenCapabilities(v30, *((_QWORD *)a1 + 98), *((_QWORD *)a1 + 99), v76);
        if ( v53 >= 0 )
        {
          v79 = *((_QWORD *)a1 + 98);
          if ( v79 )
            v53 = SepSetTokenPackage(v30, v79);
          if ( v53 >= 0 )
          {
            v80 = *((_QWORD *)a1 + 135);
            if ( v80 )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v80 + 24)) <= 1 )
                __fastfail(0xEu);
              v30 = (char *)Object;
              *v103 = *((_QWORD *)a1 + 135);
            }
            v81 = *((_QWORD *)a1 + 136);
            if ( v81 )
            {
              if ( _InterlockedIncrement64((volatile signed __int64 *)(v81 + 24)) <= 1 )
                __fastfail(0xEu);
              v30 = (char *)Object;
              *v109 = *((_QWORD *)a1 + 136);
            }
            v82 = SepSetTokenTrust(v30, *((_QWORD *)a1 + 138));
            v83 = (struct _ERESOURCE *)*((_QWORD *)a1 + 6);
            v37 = v82;
            if ( v82 >= 0 )
            {
              ExReleaseResourceLite(v83);
              v85 = KeGetCurrentThread();
              v86 = v85->KernelApcDisable + 1;
              v85->KernelApcDisable = v86;
              if ( !v86
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v85->ApcState.ApcListHead[0].Flink != &v85->152
                && !v85->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v87 = (char *)Object;
              v88 = Object;
              *((_QWORD *)Object + 21) = &v68[v75];
              SepRemoveDisabledGroupsAndPrivileges((__int64)v88, a3, a4, a5, a6, a7);
              RtlSidHashInitialize(*v99, *((_DWORD *)v87 + 31), (PSID_AND_ATTRIBUTES_HASH)(v87 + 232));
              RtlSidHashInitialize(*v100, *((_DWORD *)v71 + 32), (PSID_AND_ATTRIBUTES_HASH)(v87 + 504));
              SeCaptureSubjectContext(&SubjectContext);
              v89 = BYTE1(pulResult[1]);
              v110.PrimaryToken = SubjectContext.PrimaryToken;
              if ( RtlIsSandboxedToken(&SubjectContext, SBYTE1(pulResult[1])) && RtlIsSandboxedToken(&v110, v89) )
              {
                v90 = KeGetCurrentThread();
                --v90->KernelApcDisable;
                PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
                ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
                v37 = SepNewTokenAsRestrictedAsProcessToken(Object, PrimaryToken);
                ExReleaseResourceLite(PrimaryToken[6]);
                v92 = KeGetCurrentThread();
                v93 = v92->KernelApcDisable + 1;
                v92->KernelApcDisable = v93;
                if ( !v93
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)v92->ApcState.ApcListHead[0].Flink != &v92->152
                  && !v92->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
                if ( v37 < 0 || !LOBYTE(pulResult[1]) )
                {
                  ObfDereferenceObject(Object);
                  SeReleaseSubjectContext(&SubjectContext);
                  return (unsigned int)v37;
                }
                v87 = (char *)Object;
              }
              SeReleaseSubjectContext(&SubjectContext);
              if ( *v104 )
                RtlSidHashInitialize(*v104, *v107, SidAttrHash);
              *a11 = v87;
              return (unsigned int)v37;
            }
            ExReleaseResourceLite(v83);
            v43 = KeGetCurrentThread();
            v84 = v43->KernelApcDisable + 1;
            v43->KernelApcDisable = v84;
            if ( v84 )
              goto LABEL_112;
            goto LABEL_108;
          }
        }
        ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
        v77 = KeGetCurrentThread();
        v78 = v77->KernelApcDisable + 1;
        v77->KernelApcDisable = v78;
        if ( !v78 && ($CD287064E7C9F7953DE243E927CFCB99 *)v77->ApcState.ApcListHead[0].Flink != &v77->152 )
        {
          v56 = v77->SpecialApcDisable == 0;
LABEL_53:
          if ( v56 )
            KiCheckForKernelApcDelivery();
        }
LABEL_55:
        v37 = v53;
        goto LABEL_112;
      }
    }
    ExFreePoolWithTag(v23, 0);
    goto LABEL_133;
  }
  v20 = -1073741670;
LABEL_133:
  ExFreePoolWithTag(v17, 0);
  return (unsigned int)v20;
}
