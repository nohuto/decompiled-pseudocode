/*
 * XREFs of NtSetInformationToken @ 0x1404786A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SepLocateTokenIntegrity @ 0x140012AEC (SepLocateTokenIntegrity.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140080AD4 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepLinkLogonSessions @ 0x140080B10 (SepLinkLogonSessions.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     SeReleaseAcl @ 0x140478688 (SeReleaseAcl.c)
 *     SeSetSessionIdToken @ 0x14047991C (SeSetSessionIdToken.c)
 *     SeSetMandatoryPolicyToken @ 0x140479A2C (SeSetMandatoryPolicyToken.c)
 *     SeCaptureAcl @ 0x140479ABC (SeCaptureAcl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAppendDefaultDacl @ 0x140479D44 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140479DA0 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140479DE4 (SepExpandDynamic.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047B0EC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepShouldSetDelinkFlags @ 0x14047B184 (SepShouldSetDelinkFlags.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047B1E0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepStopReferencingLogonSession @ 0x14047B878 (SepStopReferencingLogonSession.c)
 *     SeSetVirtualizationToken @ 0x1404CB060 (SeSetVirtualizationToken.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x14051AD98 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepIdAssignableAsOwner @ 0x14051B014 (SepIdAssignableAsOwner.c)
 *     SeSetPrivateNameSpaceToken @ 0x14068D1D8 (SeSetPrivateNameSpaceToken.c)
 *     SepAppendPrimaryGroup @ 0x14068D2A0 (SepAppendPrimaryGroup.c)
 *     SepFreePrimaryGroup @ 0x14068D308 (SepFreePrimaryGroup.c)
 *     SepModifyTokenPolicyCounter @ 0x14068D360 (SepModifyTokenPolicyCounter.c)
 *     SepCaptureAuditPolicy @ 0x140690C64 (SepCaptureAuditPolicy.c)
 *     SepReleaseAuditPolicy @ 0x140691160 (SepReleaseAuditPolicy.c)
 *     SepIdAssignableAsGroup @ 0x14069122C (SepIdAssignableAsGroup.c)
 *     SepRemoveTokenLogonSession @ 0x140693AF8 (SepRemoveTokenLogonSession.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  int v21; // ebx
  struct _KTHREAD *v22; // rax
  PERESOURCE *v23; // rbx
  _QWORD *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  NTSTATUS v28; // ebx
  struct _KTHREAD *v29; // rax
  PVOID v30; // rsi
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edx
  int v36; // r8d
  int v37; // r9d
  struct _KTHREAD *v38; // rax
  struct _ERESOURCE *v39; // rcx
  struct _KTHREAD *v40; // rax
  _QWORD *v41; // r8
  char *v42; // rbx
  _OWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rdx
  ULONG v49; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  ULONG v55; // ebx
  int v56; // eax
  void *v57; // rcx
  struct _KTHREAD *v58; // rax
  PERESOURCE *v59; // rsi
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  void *v74; // rcx
  struct _KTHREAD *v75; // rax
  PERESOURCE *v76; // rsi
  _QWORD *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned int v88; // esi
  struct _KTHREAD *v89; // rax
  __int64 v90; // rbx
  char v91; // al
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  __int32 v98; // ebx
  __int32 v99; // ebx
  __int32 v100; // ebx
  __int32 v101; // ebx
  int v102; // ebx
  int v103; // ebx
  ULONG v104; // ebx
  __int64 v105; // rdx
  PVOID v106; // rsi
  bool v107; // r12
  struct _KTHREAD *v108; // rax
  PERESOURCE *v109; // r13
  _DWORD *v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  PVOID v114; // rbx
  struct _KTHREAD *v115; // rax
  PVOID v116; // rbx
  _QWORD *v117; // rdx
  void *v118; // r13
  _WORD *v119; // rbx
  UCHAR v120; // cl
  ULONG v121; // r12d
  struct _KTHREAD *v122; // rax
  _DWORD *v123; // rbx
  PSID *TokenIntegrity; // rax
  PSID v125; // r13
  UCHAR v126; // si
  ULONG v127; // eax
  ULONG v128; // eax
  unsigned __int8 v129; // al
  void *v130; // rcx
  void *v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // r9
  struct _KTHREAD *v136; // rax
  signed __int32 v137[8]; // [rsp+0h] [rbp-118h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-F8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F0h]
  __int64 v140; // [rsp+30h] [rbp-E8h]
  PVOID Token; // [rsp+50h] [rbp-C8h] BYREF
  char v142; // [rsp+58h] [rbp-C0h]
  NTSTATUS v143; // [rsp+5Ch] [rbp-BCh]
  char v144; // [rsp+60h] [rbp-B8h]
  _DWORD v145[3]; // [rsp+64h] [rbp-B4h] BYREF
  __int64 v147; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v148; // [rsp+80h] [rbp-98h] BYREF
  PSID Sid1; // [rsp+88h] [rbp-90h] BYREF
  _OWORD *v150; // [rsp+90h] [rbp-88h] BYREF
  int v151; // [rsp+98h] [rbp-80h] BYREF
  ULONG v152; // [rsp+9Ch] [rbp-7Ch] BYREF
  ULONG v153; // [rsp+A0h] [rbp-78h]
  ULONG v154; // [rsp+A4h] [rbp-74h]
  PVOID P; // [rsp+A8h] [rbp-70h] BYREF
  PVOID v156; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v157; // [rsp+B8h] [rbp-60h] BYREF
  PERESOURCE *v158; // [rsp+C0h] [rbp-58h]
  ULONG v159; // [rsp+C8h] [rbp-50h]
  ULONG v160; // [rsp+CCh] [rbp-4Ch]
  ULONG v161; // [rsp+D0h] [rbp-48h]
  __int64 v162; // [rsp+D4h] [rbp-44h] BYREF
  __int64 v163; // [rsp+E0h] [rbp-38h]
  PSID *v164; // [rsp+E8h] [rbp-30h]
  void *v165; // [rsp+F0h] [rbp-28h]

  v8 = 0;
  v142 = 0;
  v151 = 0;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v144 = PreviousMode;
  if ( PreviousMode && TokenInformationLength )
  {
    if ( ((unsigned __int8)TokenInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)TokenInformation + TokenInformationLength > 0x7FFFFFFF0000LL
      || (char *)TokenInformation + TokenInformationLength < TokenInformation )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
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
  *(_QWORD *)&v145[1] = Token;
  if ( result >= 0 )
  {
    if ( TokenInformationClass <= TokenLinkedToken )
    {
      if ( TokenInformationClass != TokenLinkedToken )
      {
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
                if ( !v20 )
                {
                  if ( TokenInformationLength != 4 )
                    goto LABEL_107;
                  v49 = *(_DWORD *)TokenInformation;
                  v159 = *(_DWORD *)TokenInformation;
                  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                    goto LABEL_49;
                  if ( v49 )
                  {
                    v28 = -1073741811;
LABEL_90:
                    v74 = v15;
                    goto LABEL_91;
                  }
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  v51 = Token;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                  _InterlockedOr(v137, 0);
                  v15 = Token;
                  if ( (*((_DWORD *)Token + 50) & 0x20) == 0 )
                  {
                    if ( SeTokenLeakTracking )
                      SepRemoveTokenLogonSession(Token);
                    v28 = SepStopReferencingLogonSession(v15);
                    v143 = v28;
                    if ( v28 < 0 )
                      goto LABEL_90;
                  }
                  _InterlockedOr(v137, 0);
                  v39 = (struct _ERESOURCE *)*((_QWORD *)v51 + 6);
                  goto LABEL_45;
                }
                v21 = v20 - 2;
                if ( v21 )
                {
                  if ( v21 == 1 )
                  {
                    if ( TokenInformationLength == 8 )
                    {
                      v163 = *(_QWORD *)TokenInformation;
                      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                      {
                        v22 = KeGetCurrentThread();
                        --v22->KernelApcDisable;
                        v23 = (PERESOURCE *)Token;
                        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
                        _InterlockedOr(v137, 0);
                        v24 = Token;
                        if ( !*((_QWORD *)Token + 28) )
                          *((_QWORD *)Token + 28) = v163;
                        v24[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                        _InterlockedOr(v137, 0);
                        ExReleaseResourceLite(v23[6]);
                        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
                        v28 = 0;
                        goto LABEL_46;
                      }
LABEL_49:
                      v28 = -1073741727;
                      goto LABEL_90;
                    }
LABEL_107:
                    v28 = -1073741820;
                    goto LABEL_90;
                  }
                  return -1073741811;
                }
                v150 = 0LL;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_49;
                v29 = KeGetCurrentThread();
                --v29->KernelApcDisable;
                v30 = Token;
                ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
                v31 = *((_BYTE *)v30 + 119);
                ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v32, v33, v34);
                if ( v31 )
                {
                  v28 = -1073741811;
LABEL_46:
                  v15 = Token;
                  goto LABEL_90;
                }
                if ( !TokenInformation )
                {
                  v38 = KeGetCurrentThread();
                  --v38->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
                  _InterlockedOr(v137, 0);
                  *((_BYTE *)v30 + 119) = 1;
                  *((_QWORD *)Token + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v137, 0);
                  v39 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
LABEL_45:
                  ExReleaseResourceLite(v39);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v52, v53, v54);
                  v28 = 0;
                  goto LABEL_46;
                }
                LOBYTE(v35) = PreviousMode;
                v28 = SepCaptureAuditPolicy(
                        (_DWORD)TokenInformation,
                        v35,
                        v36,
                        v37,
                        (_DWORD)Object,
                        (_DWORD)HandleInformation,
                        (__int64)&v150);
                v143 = v28;
                if ( v28 < 0 )
                  goto LABEL_46;
                v40 = KeGetCurrentThread();
                --v40->KernelApcDisable;
                ExAcquireResourceExclusiveLite(*((PERESOURCE *)v30 + 6), 1u);
                _InterlockedOr(v137, 0);
                *((_BYTE *)v30 + 119) = 2;
                v41 = Token;
                v42 = (char *)Token + 88;
                v43 = v150;
                *(_OWORD *)((char *)Token + 88) = *v150;
                *((_QWORD *)v42 + 2) = *((_QWORD *)v43 + 2);
                *((_DWORD *)v42 + 6) = *((_DWORD *)v43 + 6);
                *((_WORD *)v42 + 14) = *((_WORD *)v43 + 14);
                v42[30] = *((_BYTE *)v43 + 30);
                v41[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                _InterlockedOr(v137, 0);
                ExReleaseResourceLite(*((PERESOURCE *)v30 + 6));
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v44, v45, v46);
                LOBYTE(v47) = 1;
                SepModifyTokenPolicyCounter(v42, v47);
                ObfDereferenceObject(Token);
                LOBYTE(v48) = PreviousMode;
                SepReleaseAuditPolicy(v150, v48);
                return 0;
              }
              if ( TokenInformationLength == 4 )
              {
                v55 = *(_DWORD *)TokenInformation;
                v160 = *(_DWORD *)TokenInformation;
                if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
                  goto LABEL_49;
                v56 = SeSetSessionIdToken(v15, v55);
                goto LABEL_51;
              }
LABEL_88:
              ObfDereferenceObject(Token);
              return -1073741820;
            }
            if ( TokenInformationLength < 8 )
              goto LABEL_88;
            v57 = *(void **)TokenInformation;
            v147 = (__int64)v57;
            if ( v57 )
            {
              v28 = SeCaptureAcl(v57, PagedPool, (int)HandleInformation, (__int64)&v147, (__int64)v145);
              v143 = v28;
            }
            else
            {
              v145[0] = 0;
              v28 = 0;
              v143 = 0;
            }
            if ( v28 < 0 )
              goto LABEL_90;
            v58 = KeGetCurrentThread();
            --v58->KernelApcDisable;
            v59 = (PERESOURCE *)Token;
            ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
            _InterlockedOr(v137, 0);
            v60 = Token;
            v61 = v145[0] + 8 + 4 * (unsigned int)*(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL);
            v145[0] = v61;
            if ( (unsigned int)v61 <= *((_DWORD *)Token + 34) )
            {
              v143 = SepExpandDynamic(Token, v61);
              if ( v143 >= 0 )
              {
                v68 = (void *)v60[23];
                if ( !v68
                  || (v143 = SeCaptureAcl(v68, PagedPool, (int)HandleInformation, (__int64)&P, (__int64)&v151), v143 >= 0) )
                {
                  SepFreeDefaultDacl(v60);
                  v70 = v147;
                  if ( v147 )
                    SepAppendDefaultDacl(v60, v147);
                  SeTokenDefaultDaclChangedAuditAlarm(v69, v60, TokenHandle, P, v70);
                  v60[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v137, 0);
                  ExReleaseResourceLite(v59[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v71, v72, v73);
                  ObfDereferenceObject(Token);
                  if ( v147 )
                    SeReleaseAcl((void *)v147, PreviousMode);
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  return 0;
                }
              }
              _InterlockedOr(v137, 0);
              ExReleaseResourceLite(v59[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v65, v66, v67);
              ObfDereferenceObject(Token);
              if ( v147 )
                SeReleaseAcl((void *)v147, PreviousMode);
              return v143;
            }
            else
            {
              _InterlockedOr(v137, 0);
              ExReleaseResourceLite(v59[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v62, v63, v64);
              ObfDereferenceObject(Token);
              if ( v147 )
                SeReleaseAcl((void *)v147, PreviousMode);
              return -1073741671;
            }
          }
          else
          {
            if ( TokenInformationLength < 8 )
              goto LABEL_88;
            v148 = *(_QWORD *)TokenInformation;
            v28 = SeCaptureSid((_BYTE *)v148, PreviousMode, v13, v14, (int)Object, 1, (PSID *)&v148);
            v143 = v28;
            v74 = v15;
            if ( v28 < 0 )
            {
LABEL_91:
              ObfDereferenceObject(v74);
              return v28;
            }
            if ( (unsigned __int8)SepIdAssignableAsGroup(v15, v148) )
            {
              v145[0] = 4 * *(unsigned __int8 *)(v148 + 1) + 8;
              v75 = KeGetCurrentThread();
              --v75->KernelApcDisable;
              v76 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v137, 0);
              v77 = Token;
              v78 = *((_QWORD *)Token + 23);
              if ( v78 )
                v145[0] += *(unsigned __int16 *)(v78 + 2);
              if ( v145[0] <= *((_DWORD *)Token + 34) )
              {
                v143 = SepExpandDynamic(Token, v145[0]);
                if ( v143 >= 0 )
                {
                  SepFreePrimaryGroup(v77);
                  SepAppendPrimaryGroup(v77, v148);
                  v77[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
                  _InterlockedOr(v137, 0);
                  ExReleaseResourceLite(v76[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v85, v86, v87);
                }
                else
                {
                  _InterlockedOr(v137, 0);
                  ExReleaseResourceLite(v76[6]);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v82, v83, v84);
                  v8 = v143;
                }
              }
              else
              {
                _InterlockedOr(v137, 0);
                ExReleaseResourceLite(v76[6]);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v79, v80, v81);
                v8 = -1073741671;
              }
              v15 = Token;
            }
            else
            {
              v8 = -1073741733;
            }
            ObfDereferenceObject(v15);
            SeReleaseSid((void *)v148, PreviousMode, 1);
            return v8;
          }
        }
        else
        {
          if ( TokenInformationLength < 8 )
            goto LABEL_88;
          Sid1 = *(PSID *)TokenInformation;
          v28 = SeCaptureSid(Sid1, PreviousMode, v13, v14, (int)Object, 1, &Sid1);
          v143 = v28;
          if ( v28 < 0 )
            goto LABEL_90;
          v88 = 0;
          v89 = KeGetCurrentThread();
          --v89->KernelApcDisable;
          ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
          _InterlockedOr(v137, 0);
          v90 = *(_QWORD *)&v145[1];
          while ( v88 < *(_DWORD *)(v90 + 124) )
          {
            if ( RtlEqualSid(Sid1, *(PSID *)(*(_QWORD *)(v90 + 152) + 16LL * v88)) )
            {
              if ( (unsigned __int8)SepIdAssignableAsOwner(v90, v88) )
              {
                *(_DWORD *)(v90 + 144) = v88;
                v91 = 1;
                v142 = 1;
                v143 = 0;
              }
              else
              {
                v143 = -1073741734;
                v91 = v142;
              }
              if ( v91 )
              {
                v158 = (PERESOURCE *)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
                *(_QWORD *)(v90 + 56) = v158;
              }
              _InterlockedOr(v137, 0);
              ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v145[1] + 48LL));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v92, v93, v94);
              ObfDereferenceObject(*(PVOID *)&v145[1]);
              SeReleaseSid(Sid1, PreviousMode, 1);
              return v143;
            }
            ++v88;
          }
          if ( v142 )
            *(_QWORD *)(v90 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          _InterlockedOr(v137, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v145[1] + 48LL));
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v95, v96, v97);
          ObfDereferenceObject(*(PVOID *)&v145[1]);
          SeReleaseSid(Sid1, PreviousMode, 1);
          return -1073741734;
        }
      }
      if ( TokenInformationLength != 8 )
        goto LABEL_107;
      v165 = *(void **)TokenInformation;
      v56 = SepLinkLogonSessions((__int64)Token, v165, PreviousMode);
LABEL_51:
      v28 = v56;
      goto LABEL_90;
    }
    v98 = TokenInformationClass - 23;
    if ( !v98 )
    {
      if ( TokenInformationLength != 4 )
        goto LABEL_107;
      v154 = *(_DWORD *)TokenInformation;
      if ( !SeSinglePrivilegeCheck(SeCreateTokenPrivilege, PreviousMode) )
        goto LABEL_49;
      v136 = KeGetCurrentThread();
      --v136->KernelApcDisable;
      v116 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v137, 0);
      v117 = Token;
      if ( v154 )
        *((_DWORD *)Token + 50) |= 0x200u;
      else
        *((_DWORD *)Token + 50) &= ~0x200u;
      goto LABEL_191;
    }
    v99 = v98 - 1;
    if ( !v99 )
    {
      if ( TokenInformationLength == 4 )
      {
        HIDWORD(v162) = *(_DWORD *)TokenInformation;
        SeSetVirtualizationToken(Token, HIDWORD(v162));
        v28 = 0;
        goto LABEL_90;
      }
      goto LABEL_107;
    }
    v100 = v99 - 1;
    if ( v100 )
    {
      v101 = v100 - 1;
      if ( v101 )
      {
        v102 = v101 - 1;
        if ( v102 )
        {
          v103 = v102 - 12;
          if ( v103 )
          {
            if ( v103 != 3 )
              return -1073741811;
            if ( TokenInformationLength != 4 )
              goto LABEL_107;
            v104 = *(_DWORD *)TokenInformation;
            v161 = *(_DWORD *)TokenInformation;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_49;
            v56 = SeSetPrivateNameSpaceToken(v15, v104);
          }
          else
          {
            if ( !TokenInformation || TokenInformationLength < 0x10 )
              goto LABEL_107;
            if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
              goto LABEL_49;
            LOBYTE(v105) = PreviousMode;
            v56 = SepCaptureTokenSecurityAttributesAndOperationsInformation(TokenInformation, v105, &v156);
            v143 = v56;
            if ( v56 >= 0 )
            {
              v106 = v156;
              v107 = (unsigned __int8)SepShouldSetDelinkFlags(*((_QWORD *)v156 + 1), *(_QWORD *)v156) != 0;
              v108 = KeGetCurrentThread();
              --v108->KernelApcDisable;
              v109 = (PERESOURCE *)Token;
              ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
              _InterlockedOr(v137, 0);
              v110 = Token;
              v143 = AuthzBasepSetSecurityAttributesToken(
                       *((_QWORD *)Token + 97),
                       *((_DWORD **)v106 + 1),
                       *(_QWORD *)v156);
              if ( v143 >= 0 && v107 )
                v110[50] |= 0x20000u;
              *((_QWORD *)v110 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
              _InterlockedOr(v137, 0);
              ExReleaseResourceLite(v109[6]);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v111, v112, v113);
              if ( PreviousMode )
              {
                ExFreePoolWithTag(*((PVOID *)v106 + 1), 0);
                v114 = v156;
                if ( *(_QWORD *)v156 )
                  SepFreeCapturedTokenSecurityAttributesInformation();
                ExFreePoolWithTag(v114, 0);
              }
              v28 = v143;
              goto LABEL_46;
            }
          }
        }
        else
        {
          if ( TokenInformationLength != 4 )
            goto LABEL_107;
          v152 = *(_DWORD *)TokenInformation;
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
            goto LABEL_49;
          if ( v15[204] )
          {
            v28 = -1073741525;
            goto LABEL_90;
          }
          v56 = SeSetMandatoryPolicyToken(v15, &v152);
        }
        goto LABEL_51;
      }
      if ( TokenInformationLength != 4 )
        goto LABEL_107;
      v153 = *(_DWORD *)TokenInformation;
      if ( v153 && !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
        goto LABEL_49;
      v115 = KeGetCurrentThread();
      --v115->KernelApcDisable;
      v116 = Token;
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
      _InterlockedOr(v137, 0);
      v117 = Token;
      if ( v153 )
        *((_DWORD *)Token + 50) |= 0x1000u;
      else
        *((_DWORD *)Token + 50) &= ~0x1000u;
LABEL_191:
      v117[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v137, 0);
      v39 = (struct _ERESOURCE *)*((_QWORD *)v116 + 6);
      goto LABEL_45;
    }
    if ( TokenInformationLength < 0x10 )
      goto LABEL_107;
    v56 = SeCaptureSidAndAttributesArray(
            (char *)TokenInformation,
            1u,
            PreviousMode,
            0LL,
            0,
            (int)HandleInformation,
            v140,
            (void **)&v157,
            (unsigned int *)&v162);
    v143 = v56;
    if ( v56 < 0 )
      goto LABEL_51;
    v118 = (void *)v157;
    v119 = *(_WORD **)v157;
    if ( *(_DWORD *)(*(_QWORD *)v157 + 2LL) == *(_DWORD *)(SeUntrustedMandatorySid + 2)
      && v119[3] == *(_WORD *)(SeUntrustedMandatorySid + 6) )
    {
      v120 = *RtlSubAuthorityCountSid(*(PSID *)v157);
      if ( !v120 )
      {
        v121 = 0;
        goto LABEL_150;
      }
      v121 = *RtlSubAuthoritySid(v119, (unsigned int)v120 - 1);
      if ( v121 <= 0x4000 )
      {
LABEL_150:
        v122 = KeGetCurrentThread();
        --v122->KernelApcDisable;
        v158 = (PERESOURCE *)Token;
        ExAcquireResourceExclusiveLite(*((PERESOURCE *)Token + 6), 1u);
        _InterlockedOr(v137, 0);
        v123 = Token;
        TokenIntegrity = (PSID *)SepLocateTokenIntegrity((__int64)Token);
        v164 = TokenIntegrity;
        if ( !TokenIntegrity )
        {
          v28 = -1073740730;
LABEL_182:
          _InterlockedOr(v137, 0);
          ExReleaseResourceLite(v158[6]);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v133, v134, v135);
          ObfDereferenceObject(Token);
          SeReleaseLuidAndAttributesArray((void *)v157, PreviousMode);
          return v28;
        }
        v125 = *TokenIntegrity;
        v126 = *RtlSubAuthorityCountSid(*TokenIntegrity);
        if ( v126 )
          v127 = *RtlSubAuthoritySid(v125, (unsigned int)v126 - 1);
        else
          v127 = 0;
        if ( v121 <= v127 )
        {
          if ( v126 )
            v128 = *RtlSubAuthoritySid(v125, (unsigned int)v126 - 1);
          else
            v128 = 0;
          if ( v121 < v128 )
            v123[50] &= ~0x1000u;
        }
        else
        {
          if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
          {
            v28 = -1073741727;
            goto LABEL_182;
          }
          if ( *((_BYTE *)v123 + 204) )
          {
            v28 = -1073741525;
            goto LABEL_182;
          }
        }
        v129 = *((_BYTE *)*v164 + 1);
        if ( v129 )
        {
          *RtlSubAuthoritySid(*v164, (unsigned int)v129 - 1) = v121;
          if ( v121 < 0x3000 )
          {
            *((_QWORD *)v123 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
            *((_QWORD *)v123 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
          }
          if ( v121 >= 0x2000 )
          {
            if ( (v123[50] & 0x4000) != 0 )
            {
              SepRemoveAceFromTokenDefaultDacl((__int64)v123, *((_WORD **)v123 + 98));
              v123[50] &= ~0x4000u;
              v130 = (void *)*((_QWORD *)v123 + 98);
              if ( v130 )
              {
                ExFreePoolWithTag(v130, 0);
                *((_QWORD *)v123 + 98) = 0LL;
              }
              v131 = (void *)*((_QWORD *)v123 + 99);
              if ( v131 )
              {
                ExFreePoolWithTag(v131, 0);
                *((_QWORD *)v123 + 99) = 0LL;
                v123[200] = 0;
                memset(v123 + 202, 0, 0x110uLL);
              }
              v132 = *((_QWORD *)v123 + 135);
              if ( v132 )
              {
                SepDereferenceLowBoxNumberEntry((unsigned int)v123[30], v132);
                *((_QWORD *)v123 + 135) = 0LL;
              }
              if ( *((_QWORD *)v123 + 136) )
              {
                SepDereferenceLowBoxHandlesEntry(*((_QWORD *)v123 + 27));
                *((_QWORD *)v123 + 136) = 0LL;
              }
            }
            v123[50] |= 0x2000u;
          }
          else
          {
            *((_QWORD *)v123 + 9) &= 0x202800000uLL;
            *((_QWORD *)v123 + 10) &= 0x202800000uLL;
            v123[50] &= ~0x2000u;
          }
          *((_QWORD *)v123 + 7) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
          v28 = 0;
        }
        else
        {
          v28 = -1073741811;
        }
        goto LABEL_182;
      }
    }
    ObfDereferenceObject(v15);
    SeReleaseLuidAndAttributesArray(v118, PreviousMode);
    return -1073740730;
  }
  return result;
}
