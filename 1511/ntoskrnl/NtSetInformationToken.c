/*
 * XREFs of NtSetInformationToken @ 0x1403C45C8
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140004E94 (SepLocateTokenIntegrity.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400059B0 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x1400ECDB8 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x1400EF4FC (SepLinkLogonSessions.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepAppendDefaultDacl @ 0x1403BDE04 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1403BDE60 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x1403BDEA4 (SepExpandDynamic.c)
 *     SeReleaseAcl @ 0x1403C1B10 (SeReleaseAcl.c)
 *     SeCaptureAcl @ 0x1403C2594 (SeCaptureAcl.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1403C334C (SeReleaseLuidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1403C3EF8 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepShouldSetDelinkFlags @ 0x1403C456C (SepShouldSetDelinkFlags.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SeSetMandatoryPolicyToken @ 0x1403C52F8 (SeSetMandatoryPolicyToken.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1403C5388 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1403C9368 (SepDereferenceLowBoxHandlesEntry.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeSetVirtualizationToken @ 0x140452458 (SeSetVirtualizationToken.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x14046C40C (SeReleaseSid.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     SepIdAssignableAsOwner @ 0x1404AC960 (SepIdAssignableAsOwner.c)
 *     SepStopReferencingLogonSession @ 0x1404BD780 (SepStopReferencingLogonSession.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetPrivateNameSpaceToken @ 0x14064D970 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14064DA38 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14064DAA0 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14064DAF8 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1406518F8 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x140651D9C (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x140651E68 (SepIdAssignableAsGroup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // edi
  char PreviousMode; // r15
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rsi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  int v21; // eax
  __int32 v22; // ebx
  __int32 v23; // ebx
  __int32 v24; // ebx
  __int32 v25; // ebx
  ULONG v26; // ebx
  NTSTATUS v27; // ebx
  void *v28; // rcx
  int v29; // ebx
  int v30; // ebx
  struct _KTHREAD *v31; // rax
  PVOID v32; // rsi
  char v33; // bl
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  struct _KTHREAD *v37; // rax
  struct _ERESOURCE *v38; // rcx
  int v39; // ebx
  PVOID v40; // rsi
  bool v41; // r12
  struct _KTHREAD *v42; // rax
  PERESOURCE *v43; // r13
  _DWORD *v44; // rbx
  PVOID v45; // rbx
  void *v46; // r13
  unsigned __int16 *v47; // rbx
  int v48; // edx
  UCHAR v49; // cl
  ULONG v50; // r12d
  struct _KTHREAD *v51; // rax
  _QWORD *v52; // rbx
  PSID *TokenIntegrity; // rax
  PSID *v54; // rsi
  PSID v55; // r13
  UCHAR v56; // cl
  ULONG v57; // eax
  unsigned __int8 v58; // al
  struct _KTHREAD *v59; // rax
  PERESOURCE *v60; // rbx
  _QWORD *v61; // rdx
  char *v62; // rcx
  struct _KTHREAD *v63; // rax
  PERESOURCE *v64; // rsi
  PVOID v65; // rbx
  unsigned int v66; // edx
  __int64 v67; // r8
  __int64 v68; // r9
  char *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r14
  void *v72; // rcx
  void *v73; // rcx
  ULONG v74; // ebx
  struct _KTHREAD *v75; // rax
  PVOID v76; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID v78; // rbx
  _QWORD *v79; // rdx
  struct _KTHREAD *v80; // rax
  struct _KTHREAD *v81; // rax
  _QWORD *v82; // r8
  char *v83; // rbx
  _OWORD *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  struct _KTHREAD *v87; // rax
  PERESOURCE *v88; // rsi
  _QWORD *v89; // rbx
  __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // rdx
  unsigned int v93; // esi
  struct _KTHREAD *v94; // rax
  __int64 v95; // rbx
  char v96; // al
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // rdx
  ULONG v101; // ebx
  signed __int32 v102[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v105; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  char v107; // [rsp+58h] [rbp-C0h]
  NTSTATUS v108; // [rsp+5Ch] [rbp-BCh]
  char v109; // [rsp+60h] [rbp-B8h]
  unsigned int v110[3]; // [rsp+64h] [rbp-B4h] BYREF
  __int64 v112; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+80h] [rbp-98h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v115; // [rsp+90h] [rbp-88h] BYREF
  ULONG v116; // [rsp+98h] [rbp-80h]
  unsigned int v117; // [rsp+9Ch] [rbp-7Ch] BYREF
  ULONG v118; // [rsp+A0h] [rbp-78h] BYREF
  PVOID v119; // [rsp+A8h] [rbp-70h] BYREF
  ULONG v120; // [rsp+B0h] [rbp-68h]
  PVOID P; // [rsp+B8h] [rbp-60h] BYREF
  PERESOURCE *v122; // [rsp+C0h] [rbp-58h]
  __int64 v123; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v124; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v125; // [rsp+D8h] [rbp-40h]
  ULONG v126; // [rsp+E0h] [rbp-38h]
  ULONG v127; // [rsp+E4h] [rbp-34h]
  ULONG v128; // [rsp+E8h] [rbp-30h]
  void *v129; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v107 = 0;
  v117 = 0;
  v119 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v109 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > MmUserProbeAddress
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  if ( (unsigned int)TokenInformationClass > TokenPrivateNameSpace )
    return -1073741821;
  v10 = 0x4800F8B5070LL;
  if ( !_bittest64(&v10, TokenInformationClass) )
    return -1073741821;
  v11 = 128;
  if ( TokenInformationClass == TokenSessionId )
  {
    v11 = 384;
  }
  else if ( TokenInformationClass == TokenLinkedToken )
  {
    v11 = 136;
  }
  result = ObReferenceObjectByHandle(TokenHandle, v11, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v15 = Token;
  *(_QWORD *)&v110[1] = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass > TokenLinkedToken )
    {
      v16 = TokenInformationClass - 23;
      if ( !v16 )
      {
        if ( TokenInformationLength != 4 )
          goto LABEL_171;
        v116 = *(_DWORD *)TokenInformation;
        if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
          goto LABEL_135;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v78 = Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v102, 0);
        v79 = Token;
        if ( v116 )
          *((_DWORD *)Token + 50) |= 0x200u;
        else
          *((_DWORD *)Token + 50) &= ~0x200u;
LABEL_122:
        v79[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        _InterlockedOr(v102, 0);
        v38 = (struct _ERESOURCE *)*((_QWORD *)v78 + 6);
        goto LABEL_45;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( TokenInformationLength == 4 )
        {
          v126 = *(_DWORD *)TokenInformation;
          SeSetVirtualizationToken(Token);
          v27 = 0;
          goto LABEL_34;
        }
        goto LABEL_171;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            if ( TokenInformationLength == 4 )
            {
              v118 = *(_DWORD *)TokenInformation;
              if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              {
                if ( v15[204] )
                {
                  v27 = -1073741525;
                  goto LABEL_34;
                }
                v21 = SeSetMandatoryPolicyToken(v15, &v118);
                goto LABEL_33;
              }
LABEL_135:
              v27 = -1073741727;
              goto LABEL_34;
            }
LABEL_171:
            v27 = -1073741820;
            goto LABEL_34;
          }
          v39 = v20 - 12;
          if ( !v39 )
          {
            if ( !TokenInformation || TokenInformationLength < 0x10 )
              goto LABEL_171;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_135;
            v21 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, PreviousMode, &P);
            v108 = v21;
            if ( v21 >= 0 )
            {
              v40 = P;
              v41 = SepShouldSetDelinkFlags(*((_DWORD **)P + 1), *(_QWORD *)P) != 0;
              v42 = KeGetCurrentThread();
              --v42->KernelApcDisable;
              v43 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v102, 0);
              v44 = Token;
              v108 = AuthzBasepSetSecurityAttributesToken(*((_QWORD *)Token + 97), *((_DWORD **)v40 + 1), *(_QWORD *)P);
              if ( v108 >= 0 && v41 )
                v44[50] |= 0x20000u;
              *((_QWORD *)v44 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v102, 0);
              ExReleaseResourceLite(v43[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              if ( PreviousMode )
              {
                ExFreePoolWithTag(*((PVOID *)v40 + 1), 0);
                v45 = P;
                if ( *(_QWORD *)P )
                  SepFreeCapturedTokenSecurityAttributesInformation(*(_QWORD *)P);
                ExFreePoolWithTag(v45, 0);
              }
              v27 = v108;
              goto LABEL_46;
            }
LABEL_33:
            v27 = v21;
LABEL_34:
            v28 = v15;
LABEL_35:
            ObfDereferenceObject(v28);
            return v27;
          }
          if ( v39 == 3 )
          {
            if ( TokenInformationLength != 4 )
              goto LABEL_171;
            v101 = *(_DWORD *)TokenInformation;
            v127 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_135;
            v21 = SeSetPrivateNameSpaceToken(v15, v101);
            goto LABEL_33;
          }
          return -1073741811;
        }
        if ( TokenInformationLength != 4 )
          goto LABEL_171;
        v120 = *(_DWORD *)TokenInformation;
        if ( v120 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          goto LABEL_135;
        v80 = KeGetCurrentThread();
        --v80->KernelApcDisable;
        v78 = Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v102, 0);
        v79 = Token;
        if ( v120 )
          *((_DWORD *)Token + 50) |= 0x1000u;
        else
          *((_DWORD *)Token + 50) &= ~0x1000u;
        goto LABEL_122;
      }
      if ( TokenInformationLength < 0x10 )
        goto LABEL_171;
      v21 = SeCaptureSidAndAttributesArray(
              TokenInformation,
              0,
              (int)HandleInformation,
              v105,
              (__int64)&v123,
              (__int64)&v124);
      v108 = v21;
      if ( v21 < 0 )
        goto LABEL_33;
      v46 = (void *)v123;
      v47 = *(unsigned __int16 **)v123;
      v48 = *(_DWORD *)(*(_QWORD *)v123 + 2LL) - *(_DWORD *)(SeUntrustedMandatorySid + 2);
      if ( !v48 )
        v48 = v47[3] - *(unsigned __int16 *)(SeUntrustedMandatorySid + 6);
      if ( !v48 )
      {
        v49 = *RtlSubAuthorityCountSid(*(PSID *)v123);
        if ( !v49 )
        {
          v50 = 0;
LABEL_67:
          v51 = KeGetCurrentThread();
          --v51->KernelApcDisable;
          v122 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v102, 0);
          v52 = Token;
          TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
          v54 = TokenIntegrity;
          if ( TokenIntegrity )
          {
            v55 = *TokenIntegrity;
            v56 = *RtlSubAuthorityCountSid(*TokenIntegrity);
            if ( v56 )
              v57 = *RtlSubAuthoritySid(v55, (unsigned int)v56 - 1);
            else
              v57 = 0;
            if ( v50 <= v57 )
            {
LABEL_71:
              v58 = *((_BYTE *)*v54 + 1);
              if ( v58 )
              {
                *RtlSubAuthoritySid(*v54, (unsigned int)v58 - 1) = v50;
                if ( v50 < 0x3000 )
                {
                  v52[9] &= 0xFFFFFFFEDFE9F97BuLL;
                  v52[10] &= 0xFFFFFFFEDFE9F97BuLL;
                }
                if ( v50 < 0x2000 )
                {
                  v52[9] &= 0x202800000uLL;
                  v52[10] &= 0x202800000uLL;
                  *((_DWORD *)v52 + 50) &= ~0x2000u;
                }
                else
                {
                  if ( (v52[25] & 0x4000) != 0 )
                  {
                    SepRemoveAceFromTokenDefaultDacl((__int64)v52, (_WORD *)v52[98]);
                    *((_DWORD *)v52 + 50) &= ~0x4000u;
                    v72 = (void *)v52[98];
                    if ( v72 )
                    {
                      ExFreePoolWithTag(v72, 0);
                      v52[98] = 0LL;
                    }
                    v73 = (void *)v52[99];
                    if ( v73 )
                    {
                      ExFreePoolWithTag(v73, 0);
                      v52[99] = 0LL;
                      *((_DWORD *)v52 + 200) = 0;
                      memset(v52 + 101, 0, 0x110uLL);
                    }
                    if ( v52[135] )
                    {
                      SepDereferenceLowBoxNumberEntry(*((unsigned int *)v52 + 30));
                      v52[135] = 0LL;
                    }
                    if ( v52[136] )
                    {
                      SepDereferenceLowBoxHandlesEntry(v52[27]);
                      v52[136] = 0LL;
                    }
                  }
                  *((_DWORD *)v52 + 50) |= 0x2000u;
                }
                v52[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                v27 = 0;
              }
              else
              {
                v27 = -1073741811;
              }
              goto LABEL_78;
            }
            if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            {
              if ( !*((_BYTE *)v52 + 204) )
                goto LABEL_71;
              v27 = -1073741525;
            }
            else
            {
              v27 = -1073741727;
            }
          }
          else
          {
            v27 = -1073740730;
          }
LABEL_78:
          _InterlockedOr(v102, 0);
          ExReleaseResourceLite(v122[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          SeReleaseLuidAndAttributesArray((void *)v123, PreviousMode);
          return v27;
        }
        v50 = *RtlSubAuthoritySid(v47, (unsigned int)v49 - 1);
        if ( v50 <= 0x4000 )
          goto LABEL_67;
      }
      ObfDereferenceObject(v15);
      SeReleaseLuidAndAttributesArray(v46, PreviousMode);
      return -1073740730;
    }
    if ( TokenInformationClass == TokenLinkedToken )
    {
      if ( TokenInformationLength != 8 )
        goto LABEL_171;
      v129 = *(void **)TokenInformation;
      v21 = SepLinkLogonSessions((__int64)Token, v129, PreviousMode);
      goto LABEL_33;
    }
    v22 = TokenInformationClass - 4;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 6;
          if ( !v25 )
          {
            if ( TokenInformationLength == 4 )
            {
              v26 = *(_DWORD *)TokenInformation;
              HIDWORD(v124) = *(_DWORD *)TokenInformation;
              if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                goto LABEL_135;
              v21 = SeSetSessionIdToken(v15, v26);
              goto LABEL_33;
            }
LABEL_158:
            ObfDereferenceObject(Token);
            return -1073741820;
          }
          v29 = v25 - 2;
          if ( !v29 )
          {
            if ( TokenInformationLength != 4 )
              goto LABEL_171;
            v74 = *(_DWORD *)TokenInformation;
            v128 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_135;
            if ( v74 )
            {
              v27 = -1073741811;
              goto LABEL_34;
            }
            v75 = KeGetCurrentThread();
            --v75->KernelApcDisable;
            v76 = Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v102, 0);
            v15 = Token;
            if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
            {
              v27 = SepStopReferencingLogonSession(Token);
              v108 = v27;
              if ( v27 < 0 )
                goto LABEL_34;
            }
            _InterlockedOr(v102, 0);
            v38 = (struct _ERESOURCE *)*((_QWORD *)v76 + 6);
            goto LABEL_45;
          }
          v30 = v29 - 2;
          if ( v30 )
          {
            if ( v30 != 1 )
              return -1073741811;
            if ( TokenInformationLength != 8 )
              goto LABEL_171;
            v125 = *(_QWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_135;
            v59 = KeGetCurrentThread();
            --v59->KernelApcDisable;
            v60 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v102, 0);
            v61 = Token;
            if ( !*((_QWORD *)Token + 28) )
              *((_QWORD *)Token + 28) = v125;
            v61[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v102, 0);
            ExReleaseResourceLite(v60[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v27 = 0;
LABEL_46:
            v15 = Token;
            goto LABEL_34;
          }
          v115 = 0LL;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_135;
          v31 = KeGetCurrentThread();
          --v31->KernelApcDisable;
          v32 = Token;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
          v33 = *((_BYTE *)v32 + 118);
          ExReleaseResourceLite(*((PERESOURCE *)v32 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v33 )
          {
            v27 = -1073741811;
            goto LABEL_46;
          }
          if ( !TokenInformation )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
            _InterlockedOr(v102, 0);
            *((_BYTE *)v32 + 118) = 1;
            *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v102, 0);
            v38 = (struct _ERESOURCE *)*((_QWORD *)v32 + 6);
LABEL_45:
            ExReleaseResourceLite(v38);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v27 = 0;
            goto LABEL_46;
          }
          LOBYTE(v34) = PreviousMode;
          v27 = SepCaptureAuditPolicy(
                  (_DWORD)TokenInformation,
                  v34,
                  v35,
                  v36,
                  (_DWORD)Object,
                  (_DWORD)HandleInformation,
                  (__int64)&v115);
          v108 = v27;
          if ( v27 < 0 )
            goto LABEL_46;
          v81 = KeGetCurrentThread();
          --v81->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)v32 + 6), 1u);
          _InterlockedOr(v102, 0);
          *((_BYTE *)v32 + 118) = 2;
          v82 = Token;
          v83 = (char *)Token + 88;
          v84 = v115;
          *(_OWORD *)((char *)Token + 88) = *v115;
          *((_QWORD *)v83 + 2) = *((_QWORD *)v84 + 2);
          *((_DWORD *)v83 + 6) = *((_DWORD *)v84 + 6);
          *((_WORD *)v83 + 14) = *((_WORD *)v84 + 14);
          v82[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v102, 0);
          ExReleaseResourceLite(*((PERESOURCE *)v32 + 6));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LOBYTE(v85) = 1;
          SepModifyTokenPolicyCounter(v83, v85);
          ObfDereferenceObject(Token);
          LOBYTE(v86) = PreviousMode;
          SepReleaseAuditPolicy(v115, v86);
          return 0;
        }
        if ( TokenInformationLength < 8 )
          goto LABEL_158;
        v62 = *(char **)TokenInformation;
        v112 = (__int64)v62;
        if ( v62 )
        {
          v27 = SeCaptureAcl(v62, PreviousMode, v13, v14, PagedPool, (int)HandleInformation, (PVOID *)&v112, v110);
          v108 = v27;
        }
        else
        {
          v110[0] = 0;
          v27 = 0;
          v108 = 0;
        }
        if ( v27 < 0 )
          goto LABEL_34;
        v63 = KeGetCurrentThread();
        --v63->KernelApcDisable;
        v64 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v102, 0);
        v65 = Token;
        v66 = v110[0] + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
        v110[0] = v66;
        if ( v66 > *((_DWORD *)Token + 34) )
        {
          _InterlockedOr(v102, 0);
          ExReleaseResourceLite(v64[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          if ( v112 )
            SeReleaseAcl((void *)v112, PreviousMode);
          return -1073741671;
        }
        else
        {
          v108 = SepExpandDynamic((__int64)Token, v66);
          if ( v108 >= 0 )
          {
            v69 = (char *)*((_QWORD *)v65 + 23);
            if ( !v69
              || (v108 = SeCaptureAcl(v69, 0, v67, v68, PagedPool, (int)HandleInformation, &v119, &v117), v108 >= 0) )
            {
              SepFreeDefaultDacl((__int64)v65);
              v71 = v112;
              if ( v112 )
                SepAppendDefaultDacl((__int64)v65, (unsigned __int16 *)v112);
              SeTokenDefaultDaclChangedAuditAlarm(v70, v65, TokenHandle, v119, v71);
              *((_QWORD *)v65 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v102, 0);
              ExReleaseResourceLite(v64[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              ObfDereferenceObject(Token);
              if ( v112 )
                SeReleaseAcl((void *)v112, PreviousMode);
              if ( v119 )
                ExFreePoolWithTag(v119, 0);
              return 0;
            }
          }
          _InterlockedOr(v102, 0);
          ExReleaseResourceLite(v64[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Token);
          if ( v112 )
            SeReleaseAcl((void *)v112, PreviousMode);
          return v108;
        }
      }
      else
      {
        if ( TokenInformationLength < 8 )
          goto LABEL_158;
        v113 = *(_QWORD *)TokenInformation;
        v27 = SeCaptureSid((void *)v113, (int)Object, 1, (__int64)&v113);
        v108 = v27;
        v28 = v15;
        if ( v27 < 0 )
          goto LABEL_35;
        if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v113) )
        {
          v110[0] = 4 * *(unsigned __int8 *)(v113 + 1) + 8;
          v87 = KeGetCurrentThread();
          --v87->KernelApcDisable;
          v88 = (PERESOURCE *)Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v102, 0);
          v89 = Token;
          v90 = *((_QWORD *)Token + 23);
          if ( v90 )
            v110[0] += *(unsigned __int16 *)(v90 + 2);
          if ( v110[0] <= *((_DWORD *)Token + 34) )
          {
            v108 = SepExpandDynamic((__int64)Token, v110[0]);
            if ( v108 >= 0 )
            {
              SepFreePrimaryGroup(v89);
              SepAppendPrimaryGroup(v89, v113);
              v89[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v102, 0);
              ExReleaseResourceLite(v88[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            }
            else
            {
              _InterlockedOr(v102, 0);
              ExReleaseResourceLite(v88[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v8 = v108;
            }
          }
          else
          {
            _InterlockedOr(v102, 0);
            ExReleaseResourceLite(v88[6]);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = -1073741671;
          }
          v15 = Token;
        }
        else
        {
          v8 = -1073741733;
        }
        ObfDereferenceObject(v15);
        LOBYTE(v91) = 1;
        LOBYTE(v92) = PreviousMode;
        SeReleaseSid(v113, v92, v91);
        return v8;
      }
    }
    else
    {
      if ( TokenInformationLength < 8 )
        goto LABEL_158;
      Sid1 = *(PSID *)TokenInformation;
      v27 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
      v108 = v27;
      if ( v27 < 0 )
        goto LABEL_34;
      v93 = 0;
      v94 = KeGetCurrentThread();
      --v94->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v102, 0);
      v95 = *(_QWORD *)&v110[1];
      while ( v93 < *(_DWORD *)(v95 + 124) )
      {
        if ( RtlEqualSid(Sid1, *(PSID *)(*(_QWORD *)(v95 + 152) + 16LL * v93)) )
        {
          if ( (unsigned __int8)SepIdAssignableAsOwner(v95, v93) )
          {
            *(_DWORD *)(v95 + 144) = v93;
            v96 = 1;
            v107 = 1;
            v108 = 0;
          }
          else
          {
            v108 = -1073741734;
            v96 = v107;
          }
          if ( v96 )
          {
            v122 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
            *(_QWORD *)(v95 + 56) = v122;
          }
          _InterlockedOr(v102, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v110[1] + 48LL));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(*(PVOID *)&v110[1]);
          LOBYTE(v97) = 1;
          LOBYTE(v98) = PreviousMode;
          SeReleaseSid(Sid1, v98, v97);
          return v108;
        }
        ++v93;
      }
      if ( v107 )
        *(_QWORD *)(v95 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v102, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v110[1] + 48LL));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(*(PVOID *)&v110[1]);
      LOBYTE(v99) = 1;
      LOBYTE(v100) = PreviousMode;
      SeReleaseSid(Sid1, v100, v99);
      return -1073741734;
    }
  }
  return result;
}
