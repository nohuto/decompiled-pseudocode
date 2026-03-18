/*
 * XREFs of NtSetInformationToken @ 0x14046BEF8
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlSubAuthorityCountSid @ 0x140044DF4 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14004563C (SepLocateTokenIntegrity.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x14012DB9C (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x140130B14 (SepLinkLogonSessions.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepAppendDefaultDacl @ 0x140411AB4 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140411B10 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140411B54 (SepExpandDynamic.c)
 *     SepStopReferencingLogonSession @ 0x14046BD78 (SepStopReferencingLogonSession.c)
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046BEE0 (SeReleaseAcl.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeSetMandatoryPolicyToken @ 0x14046D548 (SeSetMandatoryPolicyToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x140527FE0 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     SepIdAssignableAsOwner @ 0x14053E154 (SepIdAssignableAsOwner.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140547B70 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140553FE0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SeSetVirtualizationToken @ 0x140557234 (SeSetVirtualizationToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeSetPrivateNameSpaceToken @ 0x1406D0FA0 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x1406D109C (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x1406D1104 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x1406D115C (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x1406D3FF8 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x1406D44B8 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x1406D4584 (SepIdAssignableAsGroup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS v8; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  ACCESS_MASK v11; // edx
  NTSTATUS result; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // rdi
  __int32 v16; // ebx
  __int32 v17; // ebx
  __int32 v18; // ebx
  __int32 v19; // ebx
  int v20; // ebx
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  PERESOURCE *v23; // rbx
  _QWORD *v24; // rdx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  NTSTATUS v27; // ebx
  struct _KTHREAD *v28; // rax
  PVOID v29; // rdi
  char v30; // bl
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  struct _KTHREAD *v34; // rcx
  __int16 v35; // ax
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  struct _KTHREAD *v39; // rax
  _QWORD *v40; // rdx
  char *v41; // rbx
  _OWORD *v42; // rcx
  struct _KTHREAD *v43; // rdx
  __int16 v44; // ax
  __int64 v45; // rdx
  ULONG v46; // ebx
  struct _KTHREAD *v47; // rax
  PVOID v48; // r14
  struct _ERESOURCE *v49; // rcx
  __int16 v50; // ax
  ULONG v51; // ebx
  int v52; // eax
  char *v53; // rcx
  struct _KTHREAD *v54; // rax
  PERESOURCE *v55; // rdi
  PVOID v56; // rbx
  unsigned int v57; // edx
  struct _KTHREAD *v58; // rcx
  __int16 v59; // ax
  __int64 v60; // r8
  __int64 v61; // r9
  struct _KTHREAD *v62; // rcx
  __int16 v63; // ax
  char *v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rcx
  __int64 v67; // r15
  struct _KTHREAD *v68; // rcx
  __int16 v69; // ax
  void *v70; // rcx
  struct _KTHREAD *v71; // rax
  PERESOURCE *v72; // rdi
  _QWORD *v73; // rbx
  __int64 v74; // rax
  struct _KTHREAD *v75; // rcx
  __int16 v76; // ax
  struct _KTHREAD *v77; // rcx
  __int16 v78; // ax
  struct _KTHREAD *v79; // rcx
  __int16 v80; // ax
  __int64 v81; // r8
  __int64 v82; // rdx
  unsigned int v83; // edi
  struct _KTHREAD *v84; // rax
  __int64 v85; // rbx
  char v86; // al
  struct _KTHREAD *v87; // rcx
  __int16 v88; // ax
  __int64 v89; // r8
  __int64 v90; // rdx
  struct _KTHREAD *v91; // rcx
  __int16 v92; // ax
  __int64 v93; // r8
  __int64 v94; // rdx
  __int32 v95; // ebx
  __int32 v96; // ebx
  __int32 v97; // ebx
  __int32 v98; // ebx
  int v99; // ebx
  int v100; // ebx
  ULONG v101; // ebx
  __int64 v102; // rdx
  struct _KTHREAD *v103; // rax
  PERESOURCE *v104; // rdi
  PVOID *v105; // r15
  _QWORD *v106; // rbx
  struct _KTHREAD *v107; // rcx
  __int16 v108; // ax
  PVOID v109; // rbx
  struct _KTHREAD *v110; // rax
  PVOID v111; // rbx
  _QWORD *v112; // rdx
  __int64 v113; // r12
  _WORD *v114; // rbx
  UCHAR v115; // cl
  ULONG v116; // r15d
  struct _KTHREAD *v117; // rax
  PERESOURCE *v118; // rdi
  _DWORD *v119; // rbx
  PSID *TokenIntegrity; // rax
  struct _KTHREAD *v121; // rcx
  __int16 v122; // ax
  PSID v123; // r13
  UCHAR v124; // r12
  ULONG v125; // eax
  struct _KTHREAD *v126; // rcx
  __int16 v127; // ax
  struct _KTHREAD *v128; // rcx
  __int16 v129; // ax
  ULONG v130; // eax
  unsigned __int8 v131; // al
  void *v132; // rcx
  void *v133; // rcx
  __int64 v134; // rdx
  struct _KTHREAD *v135; // rcx
  __int16 v136; // ax
  struct _KTHREAD *v137; // rcx
  __int16 v138; // ax
  __int64 v139; // rdx
  __int64 v140; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v142[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v145; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  char v147; // [rsp+58h] [rbp-C0h]
  NTSTATUS v148; // [rsp+5Ch] [rbp-BCh]
  KPROCESSOR_MODE v149; // [rsp+60h] [rbp-B8h]
  unsigned int v150[3]; // [rsp+64h] [rbp-B4h] BYREF
  __int64 v152; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v153; // [rsp+80h] [rbp-98h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v155; // [rsp+90h] [rbp-88h] BYREF
  ULONG v156; // [rsp+98h] [rbp-80h]
  unsigned int v157; // [rsp+9Ch] [rbp-7Ch] BYREF
  ULONG v158; // [rsp+A0h] [rbp-78h] BYREF
  PVOID P; // [rsp+A8h] [rbp-70h] BYREF
  ULONG v160; // [rsp+B0h] [rbp-68h]
  PVOID v161; // [rsp+B8h] [rbp-60h] BYREF
  PSID *v162; // [rsp+C0h] [rbp-58h]
  __int64 v163; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v165; // [rsp+D8h] [rbp-40h]
  ULONG v166; // [rsp+E0h] [rbp-38h]
  ULONG v167; // [rsp+E4h] [rbp-34h]
  ULONG v168; // [rsp+E8h] [rbp-30h]
  void *v169; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v147 = 0;
  v157 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v149 = PreviousMode;
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
  *(_QWORD *)&v150[1] = Token;
  if ( result < 0 )
    return result;
  if ( TokenInformationClass > TokenLinkedToken )
  {
    v95 = TokenInformationClass - 23;
    if ( !v95 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_155;
      v156 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_64;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v111 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v142, 0);
      v112 = Token;
      if ( v156 )
        *((_DWORD *)Token + 50) |= 0x200u;
      else
        *((_DWORD *)Token + 50) &= ~0x200u;
      goto LABEL_260;
    }
    v96 = v95 - 1;
    if ( !v96 )
    {
      if ( TokenInformationLength == 4 )
      {
        v166 = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token, v166);
        v27 = 0;
        goto LABEL_130;
      }
      goto LABEL_155;
    }
    v97 = v96 - 1;
    if ( v97 )
    {
      v98 = v97 - 1;
      if ( v98 )
      {
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 12;
          if ( v100 )
          {
            if ( v100 != 3 )
              return -1073741811;
            if ( TokenInformationLength != 4 )
              goto LABEL_155;
            v101 = *(_DWORD *)TokenInformation;
            v167 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_64;
            v52 = SeSetPrivateNameSpaceToken(v15, v101);
          }
          else
          {
            if ( !TokenInformation || TokenInformationLength < 0x10 )
              goto LABEL_155;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_64;
            LOBYTE(v102) = PreviousMode;
            v52 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v102, &v161);
            v148 = v52;
            if ( v52 >= 0 )
            {
              v103 = KeGetCurrentThread();
              --v103->KernelApcDisable;
              v104 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v142, 0);
              v105 = (PVOID *)v161;
              v106 = Token;
              v148 = AuthzBasepSetSecurityAttributesToken(
                       *((_QWORD *)Token + 97),
                       *((_DWORD **)v161 + 1),
                       *(_QWORD *)v161);
              v106[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v142, 0);
              ExReleaseResourceLite(v104[6]);
              v107 = KeGetCurrentThread();
              v108 = v107->KernelApcDisable + 1;
              v107->KernelApcDisable = v108;
              if ( !v108
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v107->ApcState.ApcListHead[0].Flink != &v107->152
                && !v107->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              if ( PreviousMode )
              {
                ExFreePoolWithTag(v105[1], 0);
                v109 = v161;
                if ( *(_QWORD *)v161 )
                  SepFreeCapturedTokenSecurityAttributesInformation();
                ExFreePoolWithTag(v109, 0);
              }
              v27 = v148;
              goto LABEL_61;
            }
          }
        }
        else
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_155;
          v158 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_64;
          if ( v15[204] )
          {
            v27 = -1073741525;
            goto LABEL_130;
          }
          v52 = SeSetMandatoryPolicyToken(v15, &v158);
        }
LABEL_66:
        v27 = v52;
        goto LABEL_130;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_155;
      v160 = *(_DWORD *)TokenInformation;
      if ( v160 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_64;
      v110 = KeGetCurrentThread();
      --v110->KernelApcDisable;
      v111 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v142, 0);
      v112 = Token;
      if ( v160 )
        *((_DWORD *)Token + 50) |= 0x1000u;
      else
        *((_DWORD *)Token + 50) &= ~0x1000u;
LABEL_260:
      v112[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v142, 0);
      v49 = (struct _ERESOURCE *)*((_QWORD *)v111 + 6);
      goto LABEL_56;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_155;
    v52 = SeCaptureSidAndAttributesArray(
            TokenInformation,
            0,
            (int)HandleInformation,
            v145,
            (__int64)&v163,
            (__int64)&v164);
    v148 = v52;
    if ( v52 < 0 )
      goto LABEL_66;
    v113 = v163;
    v114 = *(_WORD **)v163;
    if ( *(_DWORD *)(*(_QWORD *)v163 + 2LL) == *(_DWORD *)((char *)SeUntrustedMandatorySid + 2)
      && v114[3] == *((_WORD *)SeUntrustedMandatorySid + 3) )
    {
      v115 = *RtlSubAuthorityCountSid(*(PSID *)v163);
      if ( !v115 )
      {
        v116 = 0;
        goto LABEL_199;
      }
      v116 = *RtlSubAuthoritySid(v114, (unsigned int)v115 - 1);
      if ( v116 <= 0x4000 )
      {
LABEL_199:
        v117 = KeGetCurrentThread();
        --v117->KernelApcDisable;
        v118 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v142, 0);
        v119 = Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v162 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v118[6]);
          v121 = KeGetCurrentThread();
          v122 = v121->KernelApcDisable + 1;
          v121->KernelApcDisable = v122;
          if ( !v122
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v121->ApcState.ApcListHead[0].Flink != &v121->152
            && !v121->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v27 = -1073740730;
LABEL_251:
          ObfDereferenceObject(Token);
          LOBYTE(v139) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v163, v139);
          return v27;
        }
        v123 = *TokenIntegrity;
        v124 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        if ( v124 )
          v125 = *RtlSubAuthoritySid(v123, (unsigned int)v124 - 1);
        else
          v125 = 0;
        if ( v116 <= v125 )
        {
          if ( v124 )
            v130 = *RtlSubAuthoritySid(v123, (unsigned int)v124 - 1);
          else
            v130 = 0;
          if ( v116 < v130 )
            v119[50] &= ~0x1000u;
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            _InterlockedOr(v142, 0);
            ExReleaseResourceLite(v118[6]);
            v126 = KeGetCurrentThread();
            v127 = v126->KernelApcDisable + 1;
            v126->KernelApcDisable = v127;
            if ( !v127
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v126->ApcState.ApcListHead[0].Flink != &v126->152
              && !v126->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v27 = -1073741727;
            goto LABEL_251;
          }
          if ( *((_BYTE *)v119 + 204) )
          {
            _InterlockedOr(v142, 0);
            ExReleaseResourceLite(v118[6]);
            v128 = KeGetCurrentThread();
            v129 = v128->KernelApcDisable + 1;
            v128->KernelApcDisable = v129;
            if ( !v129
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v128->ApcState.ApcListHead[0].Flink != &v128->152
              && !v128->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v27 = -1073741525;
            goto LABEL_251;
          }
        }
        v131 = *((_BYTE *)*v162 + 1);
        if ( v131 )
        {
          *RtlSubAuthoritySid(*v162, (unsigned int)v131 - 1) = v116;
          if ( v116 < 0x3000 )
          {
            *((_QWORD *)v119 + 9) &= 0xFFFFFFFEDFE9F97BuLL;
            *((_QWORD *)v119 + 10) &= 0xFFFFFFFEDFE9F97BuLL;
          }
          if ( v116 >= 0x2000 )
          {
            if ( (v119[50] & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v119, *((_WORD **)v119 + 98));
              v119[50] &= ~0x4000u;
              v132 = (void *)*((_QWORD *)v119 + 98);
              if ( v132 )
              {
                ExFreePoolWithTag(v132, 0);
                *((_QWORD *)v119 + 98) = 0LL;
              }
              v133 = (void *)*((_QWORD *)v119 + 99);
              if ( v133 )
              {
                ExFreePoolWithTag(v133, 0);
                *((_QWORD *)v119 + 99) = 0LL;
                v119[200] = 0;
                memset(v119 + 202, 0, 0x110uLL);
              }
              v134 = *((_QWORD *)v119 + 135);
              if ( v134 )
              {
                SepDereferenceLowBoxNumberEntry((unsigned int)v119[30], v134);
                *((_QWORD *)v119 + 135) = 0LL;
              }
              if ( *((_QWORD *)v119 + 136) )
              {
                SepDereferenceLowBoxHandlesEntry(*((_QWORD *)v119 + 27));
                *((_QWORD *)v119 + 136) = 0LL;
              }
            }
            v119[50] |= 0x2000u;
          }
          else
          {
            *((_QWORD *)v119 + 9) &= 0x202800000uLL;
            *((_QWORD *)v119 + 10) &= 0x202800000uLL;
            v119[50] &= ~0x2000u;
          }
          *((_QWORD *)v119 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v118[6]);
          v135 = KeGetCurrentThread();
          v136 = v135->KernelApcDisable + 1;
          v135->KernelApcDisable = v136;
          if ( !v136
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v135->ApcState.ApcListHead[0].Flink != &v135->152
            && !v135->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v27 = 0;
        }
        else
        {
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v118[6]);
          v137 = KeGetCurrentThread();
          v138 = v137->KernelApcDisable + 1;
          v137->KernelApcDisable = v138;
          if ( !v138
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v137->ApcState.ApcListHead[0].Flink != &v137->152
            && !v137->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v27 = -1073741811;
        }
        goto LABEL_251;
      }
    }
    ObfDereferenceObject(v15);
    LOBYTE(v140) = PreviousMode;
    SeReleaseLuidAndAttributesArray(v113, v140);
    return -1073740730;
  }
  if ( TokenInformationClass == TokenLinkedToken )
  {
    if ( TokenInformationLength != 8 )
      goto LABEL_155;
    v169 = *(void **)TokenInformation;
    v52 = SepLinkLogonSessions((__int64)Token, v169, PreviousMode);
    goto LABEL_66;
  }
  v16 = TokenInformationClass - 4;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 6;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            v21 = v20 - 2;
            if ( v21 )
            {
              if ( v21 == 1 )
              {
                if ( TokenInformationLength == 8 )
                {
                  v165 = *(_QWORD *)TokenInformation;
                  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  {
                    v22 = KeGetCurrentThread();
                    --v22->KernelApcDisable;
                    v23 = (PERESOURCE *)Token;
                    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                    _InterlockedOr(v142, 0);
                    v24 = Token;
                    if ( !*((_QWORD *)Token + 28) )
                      *((_QWORD *)Token + 28) = v165;
                    v24[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                    _InterlockedOr(v142, 0);
                    ExReleaseResourceLite(v23[6]);
                    v25 = KeGetCurrentThread();
                    v26 = v25->KernelApcDisable + 1;
                    v25->KernelApcDisable = v26;
                    if ( !v26
                      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
                      && !v25->SpecialApcDisable )
                    {
                      KiCheckForKernelApcDelivery();
                    }
                    v27 = 0;
                    goto LABEL_61;
                  }
LABEL_64:
                  v27 = -1073741727;
                  goto LABEL_130;
                }
LABEL_155:
                v27 = -1073741820;
                goto LABEL_130;
              }
              return -1073741811;
            }
            v155 = 0LL;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_64;
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            v29 = Token;
            ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
            v30 = *((_BYTE *)v29 + 118);
            ExReleaseResourceLite(*((PERESOURCE *)v29 + 6));
            v34 = KeGetCurrentThread();
            v35 = v34->KernelApcDisable + 1;
            v34->KernelApcDisable = v35;
            if ( !v35
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v34->ApcState.ApcListHead[0].Flink != &v34->152
              && !v34->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( v30 )
            {
              v27 = -1073741811;
LABEL_61:
              v15 = Token;
              goto LABEL_130;
            }
            if ( !TokenInformation )
            {
              v36 = KeGetCurrentThread();
              --v36->KernelApcDisable;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)v29 + 6), 1u);
              _InterlockedOr(v142, 0);
              *((_BYTE *)v29 + 118) = 1;
              *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v142, 0);
              ExReleaseResourceLite(*((PERESOURCE *)v29 + 6));
              v37 = KeGetCurrentThread();
              v38 = v37->KernelApcDisable + 1;
              v37->KernelApcDisable = v38;
              if ( !v38 )
                goto LABEL_57;
              goto LABEL_60;
            }
            LOBYTE(v31) = PreviousMode;
            v27 = SepCaptureAuditPolicy(
                    (_DWORD)TokenInformation,
                    v31,
                    v32,
                    v33,
                    (_DWORD)Object,
                    (_DWORD)HandleInformation,
                    (__int64)&v155);
            v148 = v27;
            if ( v27 < 0 )
              goto LABEL_61;
            v39 = KeGetCurrentThread();
            --v39->KernelApcDisable;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)v29 + 6), 1u);
            _InterlockedOr(v142, 0);
            *((_BYTE *)v29 + 118) = 2;
            v40 = Token;
            v41 = (char *)Token + 88;
            v42 = v155;
            *(_OWORD *)((char *)Token + 88) = *v155;
            *((_QWORD *)v41 + 2) = *((_QWORD *)v42 + 2);
            *((_DWORD *)v41 + 6) = *((_DWORD *)v42 + 6);
            *((_WORD *)v41 + 14) = *((_WORD *)v42 + 14);
            v40[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
            _InterlockedOr(v142, 0);
            ExReleaseResourceLite(*((PERESOURCE *)v29 + 6));
            v43 = KeGetCurrentThread();
            v44 = v43->KernelApcDisable + 1;
            v43->KernelApcDisable = v44;
            if ( !v44
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v43->ApcState.ApcListHead[0].Flink != &v43->152
              && !v43->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            LOBYTE(v43) = 1;
            SepModifyTokenPolicyCounter(v41, v43);
            ObfDereferenceObject(Token);
            LOBYTE(v45) = PreviousMode;
            SepReleaseAuditPolicy(v155, v45);
            return 0;
          }
          if ( TokenInformationLength != 4 )
            goto LABEL_155;
          v46 = *(_DWORD *)TokenInformation;
          v168 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_64;
          if ( v46 )
          {
            v27 = -1073741811;
LABEL_130:
            v70 = v15;
            goto LABEL_131;
          }
          v47 = KeGetCurrentThread();
          --v47->KernelApcDisable;
          v48 = Token;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v142, 0);
          v15 = Token;
          if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
          {
            v27 = SepStopReferencingLogonSession((__int64)Token);
            v148 = v27;
            if ( v27 < 0 )
              goto LABEL_130;
          }
          _InterlockedOr(v142, 0);
          v49 = (struct _ERESOURCE *)*((_QWORD *)v48 + 6);
LABEL_56:
          ExReleaseResourceLite(v49);
          v37 = KeGetCurrentThread();
          v50 = v37->KernelApcDisable + 1;
          v37->KernelApcDisable = v50;
          if ( !v50 )
          {
LABEL_57:
            if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
              && !v37->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
LABEL_60:
          v27 = 0;
          goto LABEL_61;
        }
        if ( TokenInformationLength == 4 )
        {
          v51 = *(_DWORD *)TokenInformation;
          HIDWORD(v164) = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_64;
          v52 = SeSetSessionIdToken(v15, v51);
          goto LABEL_66;
        }
LABEL_128:
        ObfDereferenceObject(Token);
        return -1073741820;
      }
      if ( TokenInformationLength < 8 )
        goto LABEL_128;
      v53 = *(char **)TokenInformation;
      v152 = (__int64)v53;
      if ( v53 )
      {
        v27 = SeCaptureAcl(v53, PreviousMode, v13, v14, PagedPool, (int)HandleInformation, (PVOID *)&v152, v150);
        v148 = v27;
      }
      else
      {
        v150[0] = 0;
        v27 = 0;
        v148 = 0;
      }
      if ( v27 < 0 )
        goto LABEL_130;
      v54 = KeGetCurrentThread();
      --v54->KernelApcDisable;
      v55 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v142, 0);
      v56 = Token;
      v57 = v150[0] + 8 + 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
      v150[0] = v57;
      if ( v57 > *((_DWORD *)Token + 34) )
      {
        _InterlockedOr(v142, 0);
        ExReleaseResourceLite(v55[6]);
        v58 = KeGetCurrentThread();
        v59 = v58->KernelApcDisable + 1;
        v58->KernelApcDisable = v59;
        if ( !v59
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v58->ApcState.ApcListHead[0].Flink != &v58->152
          && !v58->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Token);
        if ( v152 )
          SeReleaseAcl((void *)v152, PreviousMode);
        return -1073741671;
      }
      v148 = SepExpandDynamic((__int64)Token, v57);
      if ( v148 >= 0 )
      {
        v64 = (char *)*((_QWORD *)v56 + 23);
        if ( !v64 || (v148 = SeCaptureAcl(v64, 0, v60, v61, PagedPool, (int)HandleInformation, &P, &v157), v148 >= 0) )
        {
          SepFreeDefaultDacl((__int64)v56);
          v67 = v152;
          if ( v152 )
            SepAppendDefaultDacl((__int64)v56, (unsigned __int16 *)v152);
          SeTokenDefaultDaclChangedAuditAlarm(v66, v56, TokenHandle, P, v67);
          *((_QWORD *)v56 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v55[6]);
          v68 = KeGetCurrentThread();
          v69 = v68->KernelApcDisable + 1;
          v68->KernelApcDisable = v69;
          if ( !v69
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v68->ApcState.ApcListHead[0].Flink != &v68->152
            && !v68->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          ObfDereferenceObject(Token);
          if ( v152 )
            SeReleaseAcl((void *)v152, PreviousMode);
          if ( P )
            ExFreePoolWithTag(P, 0);
          return 0;
        }
        _InterlockedOr(v142, 0);
        ExReleaseResourceLite(v55[6]);
        v62 = KeGetCurrentThread();
        v65 = v62->KernelApcDisable + 1;
        v62->KernelApcDisable = v65;
        if ( v65 )
          goto LABEL_85;
      }
      else
      {
        _InterlockedOr(v142, 0);
        ExReleaseResourceLite(v55[6]);
        v62 = KeGetCurrentThread();
        v63 = v62->KernelApcDisable + 1;
        v62->KernelApcDisable = v63;
        if ( v63 )
        {
LABEL_85:
          ObfDereferenceObject(Token);
          if ( v152 )
            SeReleaseAcl((void *)v152, PreviousMode);
          return v148;
        }
      }
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v62->ApcState.ApcListHead[0].Flink != &v62->152
        && !v62->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_85;
    }
    if ( TokenInformationLength < 8 )
      goto LABEL_128;
    v153 = *(_QWORD *)TokenInformation;
    v27 = SeCaptureSid((void *)v153, (int)Object, 1, (__int64)&v153);
    v148 = v27;
    v70 = v15;
    if ( v27 < 0 )
    {
LABEL_131:
      ObfDereferenceObject(v70);
      return v27;
    }
    if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v153) )
    {
      v150[0] = 4 * *(unsigned __int8 *)(v153 + 1) + 8;
      v71 = KeGetCurrentThread();
      --v71->KernelApcDisable;
      v72 = (PERESOURCE *)Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v142, 0);
      v73 = Token;
      v74 = *((_QWORD *)Token + 23);
      if ( v74 )
        v150[0] += *(unsigned __int16 *)(v74 + 2);
      if ( v150[0] <= *((_DWORD *)Token + 34) )
      {
        v148 = SepExpandDynamic((__int64)Token, v150[0]);
        if ( v148 >= 0 )
        {
          SepFreePrimaryGroup(v73);
          SepAppendPrimaryGroup(v73, v153);
          v73[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v72[6]);
          v79 = KeGetCurrentThread();
          v80 = v79->KernelApcDisable + 1;
          v79->KernelApcDisable = v80;
          if ( !v80
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v79->ApcState.ApcListHead[0].Flink != &v79->152
            && !v79->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        else
        {
          _InterlockedOr(v142, 0);
          ExReleaseResourceLite(v72[6]);
          v77 = KeGetCurrentThread();
          v78 = v77->KernelApcDisable + 1;
          v77->KernelApcDisable = v78;
          if ( !v78
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v77->ApcState.ApcListHead[0].Flink != &v77->152
            && !v77->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v8 = v148;
        }
      }
      else
      {
        _InterlockedOr(v142, 0);
        ExReleaseResourceLite(v72[6]);
        v75 = KeGetCurrentThread();
        v76 = v75->KernelApcDisable + 1;
        v75->KernelApcDisable = v76;
        if ( !v76
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v75->ApcState.ApcListHead[0].Flink != &v75->152
          && !v75->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        v8 = -1073741671;
      }
      v15 = Token;
    }
    else
    {
      v8 = -1073741733;
    }
    ObfDereferenceObject(v15);
    LOBYTE(v81) = 1;
    LOBYTE(v82) = PreviousMode;
    SeReleaseSid(v153, v82, v81);
    return v8;
  }
  else
  {
    if ( TokenInformationLength < 8 )
      goto LABEL_128;
    Sid1 = *(PSID *)TokenInformation;
    v27 = SeCaptureSid(Sid1, (int)Object, 1, (__int64)&Sid1);
    v148 = v27;
    if ( v27 < 0 )
      goto LABEL_130;
    v83 = 0;
    v84 = KeGetCurrentThread();
    --v84->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
    _InterlockedOr(v142, 0);
    v85 = *(_QWORD *)&v150[1];
    while ( v83 < *(_DWORD *)(v85 + 124) )
    {
      if ( RtlEqualSid(Sid1, *(PSID *)(*(_QWORD *)(v85 + 152) + 16LL * v83)) )
      {
        if ( (unsigned __int8)SepIdAssignableAsOwner(v85, v83) )
        {
          *(_DWORD *)(v85 + 144) = v83;
          v86 = 1;
          v147 = 1;
          v148 = 0;
        }
        else
        {
          v148 = -1073741734;
          v86 = v147;
        }
        if ( v86 )
        {
          v162 = (PSID *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
          *(_QWORD *)(v85 + 56) = v162;
        }
        _InterlockedOr(v142, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v150[1] + 48LL));
        v87 = KeGetCurrentThread();
        v88 = v87->KernelApcDisable + 1;
        v87->KernelApcDisable = v88;
        if ( !v88
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v87->ApcState.ApcListHead[0].Flink != &v87->152
          && !v87->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(*(PVOID *)&v150[1]);
        LOBYTE(v89) = 1;
        LOBYTE(v90) = PreviousMode;
        SeReleaseSid(Sid1, v90, v89);
        return v148;
      }
      ++v83;
    }
    if ( v147 )
      *(_QWORD *)(v85 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v142, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v150[1] + 48LL));
    v91 = KeGetCurrentThread();
    v92 = v91->KernelApcDisable + 1;
    v91->KernelApcDisable = v92;
    if ( !v92
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v91->ApcState.ApcListHead[0].Flink != &v91->152
      && !v91->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ObfDereferenceObject(*(PVOID *)&v150[1]);
    LOBYTE(v93) = 1;
    LOBYTE(v94) = PreviousMode;
    SeReleaseSid(Sid1, v94, v93);
    return -1073741734;
  }
}
