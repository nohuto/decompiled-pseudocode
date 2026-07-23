/*
 * XREFs of RtlpNewSecurityObject @ 0x140488DB0
 * Callers:
 *     SeAssignSecurityEx2 @ 0x1400455C0 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x140449E58 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x1400150CC (RtlpOwnerAcesPresent.c)
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14004563C (SepLocateTokenIntegrity.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlpValidTrustSubjectContext @ 0x1401594E4 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 *     RtlpCombineAcls @ 0x140487120 (RtlpCombineAcls.c)
 *     RtlpApplyAclToObject @ 0x140487630 (RtlpApplyAclToObject.c)
 *     RtlpInheritAcl2 @ 0x1404876F0 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x1404C90D0 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 *     SepValidOwnerSubjectContext @ 0x14053E024 (SepValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x14059509C (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x1406CA01C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406CA428 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        struct _SECURITY_SUBJECT_CONTEXT *a8,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  PSECURITY_SUBJECT_CONTEXT v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r10
  __int64 v14; // r8
  void *v15; // r9
  void *v16; // rcx
  char v17; // r11
  int v18; // edx
  unsigned __int8 v19; // al
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rax
  __int64 ClientToken; // rdi
  unsigned __int8 *v23; // rbx
  unsigned int *PrimaryToken; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rsi
  void **TokenIntegrity; // rax
  __int64 *v28; // r8
  void *v29; // rax
  __int64 TokenTrustLevel; // rax
  unsigned __int8 *v31; // rdi
  int v32; // r11d
  int v33; // r10d
  int v34; // r9d
  int v35; // edx
  PVOID PoolWithTag; // rax
  int v37; // eax
  char *v38; // r9
  int v39; // eax
  int v40; // eax
  int v41; // eax
  char *v42; // rdi
  int v43; // eax
  PSECURITY_SUBJECT_CONTEXT v44; // rdi
  struct _KTHREAD *v45; // rcx
  __int16 v46; // ax
  struct _KTHREAD *v47; // rcx
  __int16 v48; // ax
  unsigned __int16 v49; // di
  __int16 v50; // dx
  __int64 v51; // rax
  char *v52; // rax
  unsigned __int8 v53; // cl
  __int64 v54; // rax
  char *v55; // rax
  int ServerAcl; // edi
  __int64 v57; // rax
  void *v58; // rax
  void *v59; // rax
  __int64 v60; // rax
  void *v61; // rax
  int v62; // r9d
  int v63; // r10d
  int v64; // r8d
  int v65; // r11d
  unsigned __int8 *v66; // rdi
  __int64 v67; // rax
  __int16 v68; // ax
  __int64 v69; // rax
  _BYTE *v70; // rsi
  ACE_HEADER v71; // eax
  int v72; // ebx
  ACL *v73; // rax
  _QWORD *v74; // rbx
  ACE_HEADER Header; // edx
  ACE_HEADER v76; // r11d
  ACE_HEADER v77; // r11d
  __int16 v78; // cx
  __int64 v79; // rax
  char *v80; // rax
  bool v81; // zf
  unsigned int v82; // edx
  __int64 v83; // rax
  char *v84; // rax
  __int16 v85; // ax
  __int64 v86; // rax
  _BYTE *v87; // rsi
  int v88; // edi
  ACE_HEADER v89; // eax
  int v90; // ebx
  ACL *v91; // rax
  __int16 v92; // ax
  ACL *v93; // rcx
  __int16 v94; // cx
  __int64 v95; // rax
  __int64 v96; // rax
  char *AceByType; // rax
  __int64 v98; // r8
  PSID v99; // rsi
  char *v100; // rdi
  __int16 v101; // ax
  ACL *v102; // rcx
  __int64 v103; // rax
  _DWORD *v104; // rax
  ACCESS_MASK v105; // ebx
  ULONG v106; // esi
  _QWORD *v107; // rsi
  ULONG v108; // edx
  int v109; // ebx
  __int16 v110; // ax
  ACL *v111; // rcx
  __int64 v112; // rax
  _DWORD *v113; // rax
  _DWORD *v114; // rdi
  char *v115; // rcx
  unsigned __int8 v116; // al
  void *v117; // r9
  ACL *v118; // rcx
  int v119; // ecx
  __int16 v120; // ax
  __int64 v121; // rax
  _BYTE *v122; // rdi
  ACE_HEADER v123; // eax
  int v124; // esi
  ACL *v125; // rax
  PVOID v126; // rbx
  __int16 v127; // si
  ACL *v128; // rdi
  char *v129; // rax
  char *v130; // rax
  int v131; // eax
  _QWORD *v132; // rdx
  __int16 v133; // cx
  char *v134; // rdi
  __int64 v135; // rax
  __int16 v136; // ax
  __int64 v137; // rax
  _BYTE *v138; // rsi
  char v139; // bl
  char *v140; // r8
  ACE_HEADER v141; // eax
  int v142; // ebx
  ACL *v143; // rax
  NTSTATUS v144; // esi
  ACE_HEADER v145; // edi
  int v146; // edi
  __int16 v147; // cx
  __int64 v148; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v149; // rdx
  __int16 v150; // cx
  char *v151; // rdx
  __int64 v152; // rcx
  char v153; // al
  char v154; // di
  bool v155; // al
  unsigned int v156; // esi
  BOOLEAN v157; // di
  __int64 *v158; // rsi
  BOOLEAN v159; // di
  unsigned __int8 v160; // di
  PVOID v161; // rbx
  unsigned __int16 *v162; // rdi
  int v163; // edx
  unsigned int v164; // edx
  unsigned int v165; // ecx
  unsigned int v166; // ebx
  unsigned int v167; // esi
  _DWORD *v168; // rax
  _DWORD *v169; // rdx
  char *v170; // rdi
  int v171; // eax
  __int64 v172; // rcx
  unsigned __int16 *v173; // rbx
  __int64 v174; // rcx
  __int64 v175; // rsi
  __int64 v176; // rbx
  int v177; // eax
  char *v178; // rdi
  __int64 v179; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  void *AccessMask; // [rsp+28h] [rbp-E8h]
  __int16 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v185; // [rsp+92h] [rbp-7Eh]
  PVOID v186; // [rsp+98h] [rbp-78h]
  unsigned __int8 v187; // [rsp+A0h] [rbp-70h]
  struct _ACE v188; // [rsp+A4h] [rbp-6Ch] BYREF
  char v189; // [rsp+ACh] [rbp-64h]
  char v190; // [rsp+ADh] [rbp-63h]
  bool v191; // [rsp+AEh] [rbp-62h] BYREF
  char v192; // [rsp+AFh] [rbp-61h]
  int v193; // [rsp+B0h] [rbp-60h] BYREF
  char v194; // [rsp+B4h] [rbp-5Ch] BYREF
  char v195; // [rsp+B5h] [rbp-5Bh]
  int v196; // [rsp+B8h] [rbp-58h] BYREF
  NTSTATUS AccessStatus; // [rsp+BCh] [rbp-54h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+C0h] [rbp-50h]
  PVOID P; // [rsp+C8h] [rbp-48h]
  unsigned int v200; // [rsp+D0h] [rbp-40h] BYREF
  void *v201; // [rsp+D8h] [rbp-38h]
  __int64 v202; // [rsp+E0h] [rbp-30h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+E8h] [rbp-28h]
  struct _ACE v204; // [rsp+F0h] [rbp-20h] BYREF
  void *v205; // [rsp+F8h] [rbp-18h]
  ULONG Index; // [rsp+100h] [rbp-10h] BYREF
  void *v207; // [rsp+108h] [rbp-8h]
  _QWORD *v208; // [rsp+110h] [rbp+0h]
  PVOID v209; // [rsp+118h] [rbp+8h]
  __int64 v210; // [rsp+120h] [rbp+10h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+128h] [rbp+18h] BYREF
  struct _ACE v212; // [rsp+130h] [rbp+20h] BYREF
  char *v213; // [rsp+138h] [rbp+28h]
  size_t Size; // [rsp+140h] [rbp+30h] BYREF
  __int64 v215; // [rsp+148h] [rbp+38h]
  PVOID v216; // [rsp+150h] [rbp+40h]
  PGENERIC_MAPPING GenericMapping; // [rsp+158h] [rbp+48h]
  void *Src; // [rsp+160h] [rbp+50h]
  int v219; // [rsp+168h] [rbp+58h]
  _DWORD *v220; // [rsp+170h] [rbp+60h]
  int v221; // [rsp+178h] [rbp+68h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+180h] [rbp+70h] BYREF
  struct _ACE v223; // [rsp+188h] [rbp+78h] BYREF
  ULONG MandatoryFlags[2]; // [rsp+190h] [rbp+80h]
  __int64 v225; // [rsp+198h] [rbp+88h]
  PVOID v226; // [rsp+1A0h] [rbp+90h] BYREF
  _DWORD *v227; // [rsp+1A8h] [rbp+98h]
  PVOID v228; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v229; // [rsp+1B8h] [rbp+A8h]
  PVOID v230; // [rsp+1C0h] [rbp+B0h]
  PACL v231; // [rsp+1C8h] [rbp+B8h] BYREF
  _QWORD *v232; // [rsp+1D0h] [rbp+C0h]
  _QWORD v233[5]; // [rsp+1D8h] [rbp+C8h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+200h] [rbp+F0h] BYREF
  ACL v235[16]; // [rsp+220h] [rbp+110h] BYREF
  ACL Acl; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a8;
  v11 = a2;
  GenericMapping = a9;
  v12 = 0LL;
  v13 = 0LL;
  v229 = a10;
  v232 = a3;
  v14 = a1;
  v216 = v235;
  v225 = a4;
  v15 = 0LL;
  v208 = a2;
  v215 = a1;
  v16 = 0LL;
  P = 0LL;
  v209 = 0LL;
  v188.AccessMask = 0;
  v200 = 0;
  v186 = 0LL;
  v228 = 0LL;
  v190 = 0;
  AccessMode = 256;
  v191 = 0;
  LOBYTE(v221) = 0;
  v194 = 0;
  Src = 0LL;
  ProcessTrustLabelSid = 0LL;
  v210 = 0LL;
  v207 = 0LL;
  v213 = 0LL;
  v220 = 0LL;
  LODWORD(Size) = 0;
  v227 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v231 = 0LL;
  SecurityDescriptor = 0LL;
  v226 = 0LL;
  v17 = a7;
  SubjectSecurityContext = a8;
  v187 = 0;
  v193 = 0x10000;
  v230 = 0LL;
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v195 = 1;
  }
  else
  {
    v195 = 0;
    v11 = v233;
    v233[0] = 1LL;
    memset(&v233[1], 0, 32);
    v208 = v233;
  }
  v18 = *((unsigned __int16 *)v11 + 1);
  v19 = (unsigned __int8)v18 >> 7;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v185 = v19;
  v219 = v18;
  if ( !a8 && !v19 )
    goto LABEL_50;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)a8->PrimaryToken + 6), 1u);
  if ( !a8->ClientToken )
    goto LABEL_11;
  v21 = KeGetCurrentThread();
  --v21->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)a8->ClientToken + 6), 1u);
  ClientToken = (__int64)a8->ClientToken;
  if ( !a8->ClientToken )
  {
    v10 = SubjectSecurityContext;
LABEL_11:
    ClientToken = (__int64)v10->PrimaryToken;
  }
  v23 = *(unsigned __int8 **)(ClientToken + 168);
  PrimaryToken = (unsigned int *)SubjectSecurityContext->PrimaryToken;
  Src = *(void **)(*(_QWORD *)(ClientToken + 152) + 16LL * *(unsigned int *)(ClientToken + 144));
  v25 = PrimaryToken[36];
  v26 = (unsigned __int8 *)*((_QWORD *)PrimaryToken + 21);
  v205 = *(void **)(ClientToken + 184);
  v207 = *(void **)(*((_QWORD *)PrimaryToken + 19) + 16 * v25);
  TokenIntegrity = (void **)SepLocateTokenIntegrity(ClientToken);
  if ( TokenIntegrity )
    v29 = *TokenIntegrity;
  else
    v29 = (void *)SepDefaultMandatorySid;
  ProcessTrustLabelSid = v29;
  TokenTrustLevel = SepLocateTokenTrustLevel(v28);
  v31 = (unsigned __int8 *)TokenTrustLevel;
  if ( TokenTrustLevel )
    v32 = 4 * *(unsigned __int8 *)(TokenTrustLevel + 1) + 8;
  else
    v32 = 0;
  if ( v23 )
    v33 = 4 * v23[1] + 8;
  else
    v33 = 0;
  if ( v26 )
    v34 = 4 * v26[1] + 8;
  else
    v34 = 0;
  if ( v205 )
    v35 = *((unsigned __int16 *)v205 + 1);
  else
    v35 = 0;
  PoolWithTag = ExAllocatePoolWithTag(
                  PagedPool,
                  v32
                + v33
                + v34
                + 24
                + v35
                + 4
                * (*((unsigned __int8 *)ProcessTrustLabelSid + 1)
                 + *((unsigned __int8 *)v207 + 1)
                 + *((unsigned __int8 *)Src + 1)),
                  0x64536553u);
  v230 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SeUnlockSubjectContext(SubjectSecurityContext);
    return 3221225626LL;
  }
  v201 = PoolWithTag;
  memmove(PoolWithTag, Src, 4 * *((unsigned __int8 *)Src + 1) + 8);
  v37 = *((unsigned __int8 *)ProcessTrustLabelSid + 1);
  Src = (char *)v230 + 4 * *((unsigned __int8 *)Src + 1) + 8;
  memmove(Src, ProcessTrustLabelSid, 4 * v37 + 8);
  v38 = (char *)Src + 4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8;
  v213 = v38;
  if ( v31 )
  {
    v39 = v31[1];
    ProcessTrustLabelSid = v38;
    memmove(v38, v31, 4 * v39 + 8);
    v38 = &v213[4 * v31[1] + 8];
    v213 = v38;
  }
  else
  {
    ProcessTrustLabelSid = 0LL;
  }
  if ( v23 )
  {
    v40 = v23[1];
    v210 = (__int64)v38;
    memmove(v38, v23, 4 * v40 + 8);
    v41 = v23[1];
    v12 = v210;
    v38 = &v213[4 * v41 + 8];
    v213 = v38;
  }
  else
  {
    v12 = 0LL;
  }
  v210 = (__int64)v38;
  memmove(v38, v207, 4 * *((unsigned __int8 *)v207 + 1) + 8);
  v42 = &v213[4 * *((unsigned __int8 *)v207 + 1) + 8];
  v213 = v42;
  if ( v26 )
  {
    v43 = v26[1];
    v207 = v42;
    memmove(v42, v26, 4 * v43 + 8);
    v42 += 4 * v26[1] + 8;
    v213 = v42;
  }
  else
  {
    v207 = 0LL;
  }
  if ( v205 )
    memmove(v42, v205, *((unsigned __int16 *)v205 + 1));
  else
    v213 = 0LL;
  v44 = SubjectSecurityContext;
  ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
  v45 = KeGetCurrentThread();
  v46 = v45->KernelApcDisable + 1;
  v45->KernelApcDisable = v46;
  if ( !v46
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v45->ApcState.ApcListHead[0].Flink != &v45->152
    && !v45->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v44->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v44->ClientToken + 6));
    v47 = KeGetCurrentThread();
    v48 = v47->KernelApcDisable + 1;
    v47->KernelApcDisable = v48;
    if ( !v48
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v47->ApcState.ApcListHead[0].Flink != &v47->152
      && !v47->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v16 = v201;
  v11 = v208;
  v14 = v215;
  v15 = v207;
  v13 = v210;
  v17 = a7;
LABEL_50:
  v49 = *((_WORD *)v11 + 1);
  v50 = v49 & 0x8000;
  if ( (v49 & 0x8000u) == 0 )
  {
    v52 = (char *)v11[1];
  }
  else
  {
    v51 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v51 )
      goto LABEL_59;
    v52 = (char *)v11 + v51;
  }
  v205 = v52;
  if ( v52 )
  {
    v53 = v185;
    v190 = 1;
    goto LABEL_56;
  }
LABEL_59:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741734;
LABEL_421:
      v161 = v186;
      goto LABEL_422;
    }
    if ( *(__int16 *)(v14 + 2) >= 0 )
    {
      v58 = *(void **)(v14 + 8);
    }
    else
    {
      v57 = *(unsigned int *)(v14 + 4);
      if ( !(_DWORD)v57 )
      {
LABEL_67:
        ServerAcl = -1073741734;
        goto LABEL_421;
      }
      v58 = (void *)(v14 + v57);
    }
    v205 = v58;
    v190 = 1;
    if ( !v58 )
      goto LABEL_67;
    v53 = v185;
  }
  else
  {
    v59 = v16;
    v53 = v185;
    if ( v185 )
      v59 = (void *)v13;
    v205 = v59;
    if ( !v59 )
    {
      ServerAcl = -1073741700;
      goto LABEL_421;
    }
  }
LABEL_56:
  if ( !v50 )
  {
    v55 = (char *)v11[2];
LABEL_74:
    v201 = v55;
    if ( v55 )
      goto LABEL_86;
    goto LABEL_75;
  }
  v54 = *((unsigned int *)v11 + 2);
  if ( (_DWORD)v54 )
  {
    v55 = (char *)v11 + v54;
    goto LABEL_74;
  }
LABEL_75:
  if ( (v17 & 0x40) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741733;
      goto LABEL_421;
    }
    if ( (*(_WORD *)(v14 + 2) & 0x8000) != 0 )
    {
      v60 = *(unsigned int *)(v14 + 8);
      if ( !(_DWORD)v60 )
      {
LABEL_85:
        ServerAcl = -1073741733;
        goto LABEL_421;
      }
      v61 = (void *)(v14 + v60);
    }
    else
    {
      v61 = *(void **)(v14 + 16);
    }
  }
  else
  {
    v61 = (void *)v12;
    if ( v53 )
      v61 = v15;
  }
  v201 = v61;
  if ( !v61 )
    goto LABEL_85;
LABEL_86:
  AccessStatus = v17 & 4;
  v192 = AccessStatus != 0;
  v212.Header = (ACE_HEADER)(v17 & 2);
  v189 = *(_DWORD *)&v212.Header != 0;
  v62 = ((unsigned __int8)v49 >> 2) & 8;
  v63 = (v49 >> 1) & 0x400;
  v64 = (v49 >> 1) & 0x1000;
  v65 = (v49 & 0x10) != 0 ? 4 : 0;
  if ( (v49 & 0x10) == 0 )
  {
    v66 = 0LL;
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_94;
  }
  if ( v50 )
  {
    v67 = *((unsigned int *)v11 + 3);
    if ( !(_DWORD)v67 )
    {
      v66 = 0LL;
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_94;
    }
    v66 = (unsigned __int8 *)v11 + v67;
  }
  else
  {
    v66 = (unsigned __int8 *)v11[3];
  }
  *(_QWORD *)GrantedAccess = v66;
LABEL_94:
  if ( !v215 )
    goto LABEL_100;
  v68 = *(_WORD *)(v215 + 2);
  if ( (v68 & 0x10) == 0 )
    goto LABEL_100;
  if ( v68 >= 0 )
  {
    v70 = *(_BYTE **)(v215 + 24);
    goto LABEL_101;
  }
  v69 = *(unsigned int *)(v215 + 12);
  if ( !(_DWORD)v69 )
  {
LABEL_100:
    v70 = 0LL;
    goto LABEL_101;
  }
  v70 = (_BYTE *)(v215 + v69);
LABEL_101:
  v196 = v65 | v62 | v63 | v64;
  if ( v196 || v70 )
  {
    v71 = (ACE_HEADER)200;
    v72 = 0;
    v188.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v73 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v71, 0x63416553u);
      P = v73;
      if ( !v73 )
        goto LABEL_420;
      LOBYTE(AceType) = v189;
      ServerAcl = RtlpInheritAcl2(
                    v70,
                    v66,
                    v196,
                    a6,
                    AceType,
                    v192,
                    (__int64)v205,
                    (__int64)v201,
                    v210,
                    (__int64)v207,
                    GenericMapping,
                    2,
                    v225,
                    a5,
                    &v188,
                    v73,
                    &AccessMode,
                    (int *)&v202);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v188.Header )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
LABEL_112:
        if ( ServerAcl >= 0 )
        {
          v74 = v208;
          LOBYTE(v188.AccessMask) = 1;
          Header = v212.Header;
          v76 = (ACE_HEADER)((4 * (v202 & 4)) | (4 * (v202 & 8)) | (2 * (v202 & 0x400)) | (2 * (v202 & 0x1000)) | 0x8010);
          goto LABEL_127;
        }
        if ( ServerAcl != -2147483637 )
          goto LABEL_421;
        goto LABEL_115;
      }
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_112;
      if ( (unsigned int)++v72 >= 2 )
        goto LABEL_112;
      v71 = v188.Header;
      v66 = *(unsigned __int8 **)GrantedAccess;
    }
  }
  LOBYTE(AccessMode) = 0;
  P = 0LL;
  LODWORD(v202) = *(_DWORD *)&v212.Header != 0 ? 0x400 : 0;
LABEL_115:
  v74 = v208;
  Header = v212.Header;
  v77 = (ACE_HEADER)0x8000;
  v78 = *((_WORD *)v208 + 1);
  if ( v212.Header )
    v77 = (ACE_HEADER)34816;
  v188.Header = v77;
  if ( (v78 & 0x30) == 0x30 )
  {
    if ( (v78 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_126;
    }
    if ( v78 < 0 )
    {
      v79 = *((unsigned int *)v208 + 3);
      if ( !(_DWORD)v79 )
      {
        P = 0LL;
        goto LABEL_126;
      }
      v80 = (char *)v208 + v79;
    }
    else
    {
      v80 = (char *)v208[3];
    }
    P = v80;
LABEL_126:
    LOBYTE(AccessMode) = 1;
    v76 = (ACE_HEADER)(v78 & 0x2000 | 0x10 | *(_DWORD *)&v77);
LABEL_127:
    v188.Header = v76;
  }
  v189 = AccessStatus != 0;
  v81 = Header == 0;
  v82 = *((unsigned __int16 *)v74 + 1);
  v192 = !v81;
  if ( (v82 & 0x10) == 0 )
  {
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_136;
  }
  if ( (v82 & 0x8000) != 0 )
  {
    v83 = *((unsigned int *)v74 + 3);
    if ( !(_DWORD)v83 )
    {
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_136;
    }
    v84 = (char *)v74 + v83;
  }
  else
  {
    v84 = (char *)v74[3];
  }
  *(_QWORD *)GrantedAccess = v84;
LABEL_136:
  if ( !v215 )
    goto LABEL_142;
  v85 = *(_WORD *)(v215 + 2);
  if ( (v85 & 0x10) == 0 )
    goto LABEL_142;
  if ( (v85 & 0x8000) == 0 )
  {
    v87 = *(_BYTE **)(v215 + 24);
    goto LABEL_143;
  }
  v86 = *(unsigned int *)(v215 + 12);
  if ( !(_DWORD)v86 )
  {
LABEL_142:
    v87 = 0LL;
    goto LABEL_143;
  }
  v87 = (_BYTE *)(v215 + v86);
LABEL_143:
  v88 = ((v82 & 0x10) != 0 ? 4 : 0) | ((unsigned __int8)v82 >> 2) & 8 | (v82 >> 1) & 0x400;
  v196 = v88;
  if ( v88 || v87 )
  {
    v89 = (ACE_HEADER)200;
    v90 = 0;
    v204.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v91 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v89, 0x63416553u);
      v209 = v91;
      if ( !v91 )
        goto LABEL_420;
      LOBYTE(AceType) = v192;
      ServerAcl = RtlpInheritAcl2(
                    v87,
                    *(unsigned __int8 **)GrantedAccess,
                    v88,
                    a6,
                    AceType,
                    v189,
                    (__int64)v205,
                    (__int64)v201,
                    v210,
                    (__int64)v207,
                    GenericMapping,
                    2,
                    v225,
                    a5,
                    &v204,
                    v91,
                    &v191,
                    (int *)&Size);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v204.Header )
        {
          ExFreePoolWithTag(v209, 0);
          v209 = 0LL;
        }
LABEL_154:
        v196 = ServerAcl;
        if ( ServerAcl >= 0 )
        {
          v74 = v208;
          HIBYTE(v193) = 1;
          goto LABEL_156;
        }
        if ( ServerAcl == -2147483637 )
        {
          v74 = v208;
          goto LABEL_161;
        }
        goto LABEL_421;
      }
      ExFreePoolWithTag(v209, 0);
      v209 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_154;
      if ( (unsigned int)++v90 >= 2 )
        goto LABEL_154;
      v89 = v204.Header;
      LOWORD(v88) = v196;
    }
  }
  v209 = 0LL;
  v196 = -2147483637;
LABEL_161:
  v94 = *((_WORD *)v74 + 1);
  if ( (v94 & 0x30) == 0x30 )
  {
    if ( (v94 & 0x10) != 0 )
    {
      if ( v94 < 0 )
      {
        v95 = *((unsigned int *)v74 + 3);
        if ( (_DWORD)v95 )
          v209 = (char *)v74 + v95;
        else
          v209 = 0LL;
      }
      else
      {
        v209 = (PVOID)v74[3];
      }
    }
    else
    {
      v209 = 0LL;
    }
  }
LABEL_156:
  Index = 0;
  do
  {
    v92 = *((_WORD *)v74 + 1);
    if ( (v92 & 0x10) != 0 )
    {
      if ( v92 < 0 )
      {
        v96 = *((unsigned int *)v74 + 3);
        if ( (_DWORD)v96 )
          v93 = (ACL *)((char *)v74 + v96);
        else
          v93 = 0LL;
      }
      else
      {
        v93 = (ACL *)v74[3];
      }
    }
    else
    {
      v93 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v93, 0x14u, &Index);
    v99 = ProcessTrustLabelSid;
    v100 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(ProcessTrustLabelSid, AceByType + 8, v98, &v196) )
    {
      goto LABEL_344;
    }
    ++Index;
  }
  while ( v100 );
  v204.Header = (ACE_HEADER)4;
  if ( (a7 & 0x800) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      v101 = *((_WORD *)v74 + 1);
      if ( (v101 & 0x10) != 0 )
      {
        if ( v101 >= 0 )
        {
          v102 = (ACL *)v74[3];
        }
        else
        {
          v103 = *((unsigned int *)v74 + 3);
          v102 = (_DWORD)v103 ? (ACL *)((char *)v74 + v103) : 0LL;
        }
      }
      else
      {
        v102 = 0LL;
      }
      v104 = RtlFindAceByType(v102, 0x14u, &Index);
      ++Index;
      if ( !v104 )
        break;
      if ( (*((_BYTE *)v104 + 1) & 8) == 0 )
      {
        v105 = v104[1];
        v106 = *((unsigned __int8 *)v104 + 1);
        ProcessTrustLabelSid = v104 + 2;
        if ( !v229 || (v105 & *(_DWORD *)(v229 + 4)) != v105 || v104 == (_DWORD *)-8LL )
        {
          ServerAcl = -1073741811;
          goto LABEL_421;
        }
        goto LABEL_197;
      }
    }
    if ( !v99 )
      goto LABEL_201;
    if ( !v229 )
    {
      ServerAcl = -1073741811;
      goto LABEL_421;
    }
    v105 = *(_DWORD *)(v229 + 4);
    v106 = 0;
LABEL_197:
    ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2u, v106, ProcessTrustLabelSid, 0x14u, v105);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v107 = v208;
    ServerAcl = RtlpComputeMergedAcl(
                  (int)v209,
                  ((unsigned __int8)*((_WORD *)v208 + 1) >> 2) & 4 | (*((unsigned __int16 *)v208 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)v208 + 1) >> 2) & 8u,
                  (int)&Acl,
                  4,
                  (__int64)v205,
                  (__int64)v201,
                  (__int64)GenericMapping,
                  2,
                  (__int64)&v226,
                  (__int64)&v202);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    LOBYTE(v193) = 1;
  }
  else
  {
LABEL_201:
    v107 = v208;
    v226 = v209;
  }
  v108 = 0;
  v109 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v109 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v109 |= 4u;
  if ( v109 )
  {
    v114 = 0LL;
LABEL_219:
    v116 = 0;
    goto LABEL_220;
  }
  v110 = *((_WORD *)v107 + 1);
  if ( (v110 & 0x10) != 0 )
  {
    if ( v110 >= 0 )
    {
      v111 = (ACL *)v107[3];
    }
    else
    {
      v112 = *((unsigned int *)v107 + 3);
      if ( (_DWORD)v112 )
        v111 = (ACL *)((char *)v107 + v112);
      else
        v111 = 0LL;
    }
  }
  else
  {
    v111 = 0LL;
  }
  v113 = RtlFindAceByType(v111, 0x11u, 0LL);
  v227 = v113;
  v114 = v113;
  if ( !v113 )
    goto LABEL_219;
  v109 = v113[1];
  v115 = (char *)(v113 + 2);
  v116 = *((_BYTE *)v113 + 1);
  *(_QWORD *)MandatoryFlags = v115;
  v187 = v116;
  if ( v116 == 8 || (v116 & 0x10) != 0 )
  {
    v108 = 0;
    v116 = 0;
    v227 = 0LL;
    v187 = 0;
    v114 = 0LL;
    *(_QWORD *)MandatoryFlags = 0LL;
    v109 = 0;
  }
LABEL_220:
  if ( (v116 & 8) != 0 && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    ServerAcl = -1073740730;
    goto LABEL_421;
  }
  if ( !v109 )
  {
    if ( !Src || *RtlSubAuthoritySid(Src, 0) >= 0x2000 )
      goto LABEL_231;
    v109 = 1;
  }
  if ( !v114 )
  {
    if ( !SubjectSecurityContext )
    {
      ServerAcl = -1073741700;
      goto LABEL_421;
    }
    v117 = Src;
    LOBYTE(v108) = 0;
    *(_QWORD *)MandatoryFlags = Src;
    goto LABEL_232;
  }
LABEL_231:
  v108 = v187;
  v117 = *(void **)MandatoryFlags;
LABEL_232:
  if ( v117 )
  {
    LODWORD(AccessMask) = v109;
    memset(v235, 0, sizeof(v235));
    v235[0] = (ACL)8388610LL;
    ServerAcl = RtlAddMandatoryAce(v235, v108, (unsigned __int8)v108, (ULONG)v117, AceType, AccessMask);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v118 = v235;
  }
  else
  {
    v118 = 0LL;
    v216 = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v119 = 4;
  }
  else
  {
    if ( v227 || !v118 )
      v119 = ((unsigned __int8)*((_WORD *)v107 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)v107 + 1) >> 2) & 8 | (*((unsigned __int16 *)v107 + 1) >> 1) & 0x1400;
    else
      v119 = 0;
    v204.Header = (ACE_HEADER)v119;
  }
  if ( !v215 )
    goto LABEL_249;
  v120 = *(_WORD *)(v215 + 2);
  if ( (v120 & 0x10) == 0 )
    goto LABEL_249;
  if ( v120 >= 0 )
  {
    v122 = *(_BYTE **)(v215 + 24);
    goto LABEL_250;
  }
  v121 = *(unsigned int *)(v215 + 12);
  if ( !(_DWORD)v121 )
  {
LABEL_249:
    v122 = 0LL;
    goto LABEL_250;
  }
  v122 = (_BYTE *)(v215 + v121);
LABEL_250:
  ProcessTrustLabelSid = v122;
  if ( v119 || v122 )
  {
    v123 = (ACE_HEADER)200;
    v124 = 0;
    v223.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v125 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v123, 0x63416553u);
      v126 = v125;
      if ( !v125 )
        break;
      LOBYTE(AceType) = 1;
      ServerAcl = RtlpInheritAcl2(
                    v122,
                    (unsigned __int8 *)v216,
                    *(__int16 *)&v204.Header.AceType,
                    a6,
                    AceType,
                    0,
                    (__int64)v205,
                    (__int64)v201,
                    v210,
                    (__int64)v207,
                    GenericMapping,
                    3,
                    v225,
                    a5,
                    &v223,
                    v125,
                    (_BYTE *)&v188.AccessMask + 3,
                    (int *)&v202);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v223.Header )
        {
          ExFreePoolWithTag(v126, 0);
          v126 = 0LL;
        }
LABEL_260:
        if ( ServerAcl == -2147483637 )
          goto LABEL_261;
        if ( ServerAcl >= 0 )
        {
          v127 = v202;
          goto LABEL_264;
        }
        goto LABEL_421;
      }
      ExFreePoolWithTag(v126, 0);
      v126 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_260;
      if ( (unsigned int)++v124 >= 2 )
        goto LABEL_260;
      v123 = v223.Header;
      v122 = ProcessTrustLabelSid;
    }
LABEL_420:
    ServerAcl = -1073741801;
    goto LABEL_421;
  }
LABEL_261:
  v126 = v216;
  v127 = 0;
  LODWORD(v202) = 0;
LABEL_264:
  ServerAcl = RtlpCombineAcls(
                (unsigned __int8 *)P,
                (unsigned __int8 *)v126,
                (unsigned __int8 *)v209,
                (unsigned __int8 *)v209,
                (unsigned __int8 *)v226,
                &v231,
                &v200);
  v196 = ((*(_WORD *)&v188.Header.AceType & 0x2000) << 17) | v200;
  if ( v126 && v126 != v216 )
    ExFreePoolWithTag(v126, 0);
  if ( ServerAcl < 0 )
    goto LABEL_421;
  v128 = v231;
  if ( v231 )
  {
    if ( LOBYTE(v188.AccessMask) && P )
      ExFreePoolWithTag(P, 0);
    P = v128;
    BYTE1(v193) = 1;
    *(_DWORD *)&v188.Header |= (4 * (v127 & 4)) | (4 * (v127 & 8)) | (2 * (v127 & 0x400)) | (2 * (v127 & 0x1000)) | 0x10;
  }
  else
  {
    v128 = (ACL *)P;
  }
  v200 = a7 & 8;
  if ( (a7 & 8) == 0 )
  {
    v129 = (char *)RtlFindAceByType(v128, 0x11u, 0LL);
    v130 = v129 ? v129 + 8 : *(char **)MandatoryFlags;
    if ( v130 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_421;
      }
      ServerAcl = RtlSidDominates(Src, v130, (PBOOLEAN)&v193 + 2);
      if ( ServerAcl < 0 )
        goto LABEL_421;
      v131 = (unsigned __int8)v221;
      if ( !BYTE2(v193) )
        v131 = 1;
      v221 = v131;
    }
  }
  v132 = v208;
  HIBYTE(v188.AccessMask) = AccessStatus != 0;
  AccessStatus = a7 & 1;
  v191 = AccessStatus != 0;
  v133 = *((_WORD *)v208 + 1);
  if ( (v133 & 4) == 0 )
  {
    v134 = 0LL;
    v216 = 0LL;
    goto LABEL_293;
  }
  if ( v133 < 0 )
  {
    v135 = *((unsigned int *)v208 + 4);
    if ( !(_DWORD)v135 )
    {
      v134 = 0LL;
      v216 = 0LL;
      goto LABEL_293;
    }
    v134 = (char *)v208 + v135;
  }
  else
  {
    v134 = (char *)v208[4];
  }
  v216 = v134;
LABEL_293:
  if ( !v215 )
    goto LABEL_299;
  v136 = *(_WORD *)(v215 + 2);
  if ( (v136 & 4) == 0 )
    goto LABEL_299;
  if ( (v136 & 0x8000) == 0 )
  {
    v138 = *(_BYTE **)(v215 + 32);
    goto LABEL_300;
  }
  v137 = *(unsigned int *)(v215 + 16);
  if ( !(_DWORD)v137 )
  {
LABEL_299:
    v138 = 0LL;
    goto LABEL_300;
  }
  v138 = (_BYTE *)(v215 + v137);
LABEL_300:
  LODWORD(Size) = v133 & 0x140C;
  if ( (v133 & 0x140C) != 0 || v138 )
  {
    v141 = (ACE_HEADER)200;
    v142 = 0;
    v212.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v143 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v141, 0x63416553u);
      v186 = v143;
      if ( !v143 )
      {
        ServerAcl = -1073741801;
        v161 = 0LL;
        goto LABEL_422;
      }
      LOBYTE(AceTypea) = v191;
      ServerAcl = RtlpInheritAcl2(
                    v138,
                    (unsigned __int8 *)v134,
                    Size,
                    a6,
                    AceTypea,
                    SHIBYTE(v188.AccessMask),
                    (__int64)v205,
                    (__int64)v201,
                    v210,
                    (__int64)v207,
                    GenericMapping,
                    1,
                    v225,
                    a5,
                    &v212,
                    v143,
                    (_BYTE *)&v188.AccessMask + 2,
                    (int *)&v202);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v186, 0);
      v186 = 0LL;
      v140 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_312;
      if ( (unsigned int)++v142 >= 2 )
        goto LABEL_312;
      v141 = v212.Header;
      v134 = (char *)v216;
    }
    if ( v212.Header )
    {
      v140 = (char *)v186;
    }
    else
    {
      ExFreePoolWithTag(v186, 0);
      v140 = 0LL;
      v186 = 0LL;
    }
LABEL_312:
    if ( ServerAcl >= 0 )
    {
      v139 = BYTE2(v188.AccessMask);
      v144 = AccessStatus;
      v145 = (ACE_HEADER)(v202 & 0x1408 | 4 | *(_DWORD *)&v188.Header);
      BYTE1(v188.AccessMask) = 1;
      goto LABEL_329;
    }
    if ( ServerAcl == -2147483637 )
    {
      v139 = BYTE2(v188.AccessMask);
      v132 = v208;
      goto LABEL_316;
    }
    goto LABEL_421;
  }
  v139 = 0;
  v186 = 0LL;
  v140 = 0LL;
LABEL_316:
  v144 = AccessStatus;
  v146 = (int)v188.Header;
  if ( AccessStatus )
  {
    v146 = *(_DWORD *)&v188.Header | 0x400;
    *(_DWORD *)&v188.Header |= 0x400u;
  }
  v147 = *((_WORD *)v132 + 1);
  if ( (v147 & 0xC) == 0xC )
  {
    if ( (v147 & 4) != 0 )
    {
      if ( v147 >= 0 )
      {
        v140 = (char *)v132[4];
      }
      else
      {
        v148 = *((unsigned int *)v132 + 4);
        if ( (_DWORD)v148 )
          v140 = (char *)v132 + v148;
        else
          v140 = 0LL;
      }
    }
    else
    {
      v140 = 0LL;
    }
    v186 = v140;
    v139 = 1;
    v145 = (ACE_HEADER)(v147 & 0x1000 | 4 | v146);
  }
  else
  {
    if ( !v213 )
      goto LABEL_330;
    v140 = v213;
    v186 = v213;
    v145 = (ACE_HEADER)(v146 | 4);
  }
LABEL_329:
  v188.Header = v145;
LABEL_330:
  v149 = SubjectSecurityContext;
  if ( (a7 & 0x1000) == 0 && v195 && SubjectSecurityContext && v215 )
  {
    GrantedAccess[0] = 0;
    AccessStatus = 0;
    ServerAcl = RtlpNewSecurityObject(
                  v215,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v225,
                  a5,
                  a6,
                  a7 | 1u,
                  (__int64)SubjectSecurityContext,
                  (__int64)GenericMapping,
                  v229);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v150 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v150 & 4) != 0 )
    {
      if ( v150 >= 0 )
      {
        v151 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v152 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v152 )
          v151 = (char *)SecurityDescriptor + v152;
        else
          v151 = 0LL;
      }
    }
    else
    {
      v151 = 0LL;
    }
    v153 = RtlpOwnerAcesPresent(0x10u, (__int64)v151);
    v154 = HIBYTE(AccessMode);
    v149 = SubjectSecurityContext;
    if ( v153 )
    {
      if ( !SeAccessCheck(
              SecurityDescriptor,
              SubjectSecurityContext,
              0,
              0x40000u,
              0,
              0LL,
              GenericMapping,
              SHIBYTE(AccessMode),
              GrantedAccess,
              &AccessStatus) )
      {
LABEL_344:
        ServerAcl = -1073741790;
        goto LABEL_421;
      }
      v140 = (char *)v186;
      v149 = SubjectSecurityContext;
    }
    else
    {
      v140 = (char *)v186;
    }
  }
  else
  {
    v154 = HIBYTE(AccessMode);
  }
  if ( v144 && !v140 )
    *(_DWORD *)&v188.Header |= 0x1000u;
  v155 = !v196 || (v196 & 0xB0) != v196;
  if ( v154 != 1 )
    goto LABEL_381;
  v156 = v200;
  if ( (_BYTE)AccessMode && !v200 && v155 )
  {
    if ( !v149 )
    {
      ServerAcl = -1073741700;
      goto LABEL_421;
    }
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v157 = SePrivilegeCheck(&RequiredPrivileges, v149, 1);
    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)SubjectSecurityContext, &RequiredPrivileges.PrivilegeCount, v157);
    if ( !v157 )
    {
      ServerAcl = -1073741727;
      goto LABEL_421;
    }
  }
  if ( (_BYTE)v221 )
  {
    v81 = v156 == 0;
    v158 = (__int64 *)SubjectSecurityContext;
    if ( v81 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_421;
      }
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Luid = SeRelabelPrivilege;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      v159 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
      SePrivilegedServiceAuditAlarm(0LL, v158, &RequiredPrivileges.PrivilegeCount, v159);
      if ( !v159 )
      {
        ServerAcl = -1073741727;
        goto LABEL_421;
      }
    }
  }
  else
  {
    v158 = (__int64 *)SubjectSecurityContext;
  }
  v160 = v185;
  if ( v190 && (a7 & 0x10) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(v158, v205, v185) )
  {
    ServerAcl = -1073741734;
    goto LABEL_421;
  }
  if ( !v139 || !v160 )
  {
LABEL_381:
    v162 = (unsigned __int16 *)v186;
    goto LABEL_382;
  }
  v161 = v186;
  ServerAcl = RtlpCreateServerAcl((_DWORD)v186, (unsigned __int8)v219, v210, (unsigned int)&v228, (__int64)&v194);
  if ( ServerAcl >= 0 )
  {
    if ( BYTE1(v188.AccessMask) && v161 )
      ExFreePoolWithTag(v161, 0);
    v162 = (unsigned __int16 *)v228;
    v186 = v228;
    v228 = 0LL;
LABEL_382:
    v163 = 4 * *((unsigned __int8 *)v205 + 1) + 11;
    LODWORD(Size) = 4 * *((unsigned __int8 *)v205 + 1) + 8;
    v164 = v163 & 0xFFFFFFFC;
    v196 = v164;
    if ( v201 )
    {
      AccessStatus = 4 * *((unsigned __int8 *)v201 + 1) + 8;
      v165 = (AccessStatus + 3) & 0xFFFFFFFC;
    }
    else
    {
      AccessStatus = 0;
      v165 = 0;
    }
    v200 = v165;
    v219 = v188.Header.AceType & 0x10;
    if ( (v188.Header.AceType & 0x10) != 0 && P )
      v166 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
    else
      v166 = 0;
    GrantedAccess[0] = v188.Header.AceType & 4;
    if ( (v188.Header.AceType & 4) != 0 && v162 )
      v167 = (v162[1] + 3) & 0xFFFFFFFC;
    else
      v167 = 0;
    v168 = ExAllocatePoolWithTag(PagedPool, v165 + v167 + v166 + v164 + 20, 0x64536553u);
    v220 = v168;
    v169 = v168;
    if ( !v168 )
    {
      ServerAcl = -1073741670;
      goto LABEL_421;
    }
    v170 = (char *)(v168 + 5);
    *(_QWORD *)v168 = 0LL;
    *((_QWORD *)v168 + 1) = 0LL;
    v168[4] = 0;
    *((_WORD *)v168 + 1) |= *(_WORD *)&v188.Header.AceType;
    v81 = v219 == 0;
    *(_BYTE *)v168 = 1;
    if ( !v81 )
    {
      v171 = (int)P;
      if ( !P )
      {
        v169[3] = 0;
        goto LABEL_403;
      }
      memmove(v170, P, *((unsigned __int16 *)P + 1));
      if ( !LOBYTE(v188.AccessMask) )
        RtlpApplyAclToObject((__int64)v170, GenericMapping);
      v169 = v220;
      v220[3] = (_DWORD)v170 - (_DWORD)v220;
      v172 = *((unsigned __int16 *)P + 1);
      if ( v166 > (unsigned int)v172 )
      {
        memset(&v170[v172], 0, v166 - (unsigned int)v172);
        v169 = v220;
      }
      v170 += v166;
    }
    v171 = 0;
LABEL_403:
    if ( GrantedAccess[0] )
    {
      v173 = (unsigned __int16 *)v186;
      if ( v186 )
      {
        memmove(v170, v186, *((unsigned __int16 *)v186 + 1));
        if ( !BYTE1(v188.AccessMask) )
          RtlpApplyAclToObject((__int64)v170, GenericMapping);
        v220[4] = (_DWORD)v170 - (_DWORD)v220;
        v174 = v173[1];
        if ( v167 > (unsigned int)v174 )
          memset(&v170[v174], 0, v167 - (unsigned int)v174);
        v170 += v167;
      }
      else
      {
        v169[4] = v171;
      }
    }
    v175 = (unsigned int)Size;
    memmove(v170, v205, (unsigned int)Size);
    v176 = (unsigned int)v196;
    if ( v196 > (unsigned int)v175 )
      memset(&v170[v175], 0, (unsigned int)(v196 - v175));
    v177 = (_DWORD)v170 - (_DWORD)v220;
    v178 = &v170[v176];
    v220[1] = v177;
    if ( v201 )
    {
      v179 = (unsigned int)AccessStatus;
      memmove(v178, v201, (unsigned int)AccessStatus);
      if ( v200 > (unsigned int)v179 )
        memset(&v178[v179], 0, v200 - (unsigned int)v179);
      v220[2] = (_DWORD)v178 - (_DWORD)v220;
    }
    ServerAcl = 0;
    goto LABEL_421;
  }
LABEL_422:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v194 && v228 )
    ExFreePoolWithTag(v228, 0);
  if ( v230 )
    ExFreePoolWithTag(v230, 0);
  if ( (LOBYTE(v188.AccessMask) || BYTE1(v193)) && P )
    ExFreePoolWithTag(P, 0);
  if ( HIBYTE(v193) && v209 )
    ExFreePoolWithTag(v209, 0);
  if ( v226 && (_BYTE)v193 )
    ExFreePoolWithTag(v226, 0);
  if ( BYTE1(v188.AccessMask) )
  {
    if ( v161 )
      ExFreePoolWithTag(v161, 0);
  }
  *v232 = v220;
  return (unsigned int)ServerAcl;
}
