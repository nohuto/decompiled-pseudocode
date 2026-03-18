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
  __int64 v93; // rcx
  __int16 v94; // cx
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned __int8 *AceByType; // rax
  __int64 v98; // r8
  void *v99; // rsi
  unsigned __int8 *v100; // rdi
  __int16 v101; // ax
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned __int8 *v104; // rax
  int v105; // ebx
  _QWORD *v106; // rsi
  ULONG v107; // edx
  int v108; // ebx
  __int16 v109; // ax
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int8 *v112; // rax
  unsigned __int8 *v113; // rdi
  unsigned __int8 *v114; // rcx
  unsigned __int8 v115; // al
  void *v116; // r9
  ACL *v117; // rcx
  int v118; // ecx
  __int16 v119; // ax
  __int64 v120; // rax
  _BYTE *v121; // rdi
  ACE_HEADER v122; // eax
  int v123; // esi
  ACL *v124; // rax
  PVOID v125; // rbx
  __int16 v126; // si
  ACL *v127; // rdi
  unsigned __int8 *v128; // rax
  char *v129; // rax
  int v130; // eax
  _QWORD *v131; // rdx
  __int16 v132; // cx
  char *v133; // rdi
  __int64 v134; // rax
  __int16 v135; // ax
  __int64 v136; // rax
  _BYTE *v137; // rsi
  char v138; // bl
  char *v139; // r8
  ACE_HEADER v140; // eax
  int v141; // ebx
  ACL *v142; // rax
  NTSTATUS v143; // esi
  ACE_HEADER v144; // edi
  int v145; // edi
  __int16 v146; // cx
  __int64 v147; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v148; // rdx
  __int16 v149; // cx
  char *v150; // rdx
  __int64 v151; // rcx
  char v152; // al
  char v153; // di
  bool v154; // al
  unsigned int v155; // esi
  BOOLEAN v156; // di
  __int64 *v157; // rsi
  BOOLEAN v158; // di
  unsigned __int8 v159; // di
  PVOID v160; // rbx
  unsigned __int16 *v161; // rdi
  int v162; // edx
  unsigned int v163; // edx
  unsigned int v164; // ecx
  unsigned int v165; // ebx
  unsigned int v166; // esi
  _DWORD *v167; // rax
  _DWORD *v168; // rdx
  char *v169; // rdi
  int v170; // eax
  __int64 v171; // rcx
  unsigned __int16 *v172; // rbx
  __int64 v173; // rcx
  __int64 v174; // rsi
  __int64 v175; // rbx
  int v176; // eax
  char *v177; // rdi
  __int64 v178; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  PSID LabelSid; // [rsp+28h] [rbp-E8h]
  __int16 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v184; // [rsp+92h] [rbp-7Eh]
  PVOID v185; // [rsp+98h] [rbp-78h]
  unsigned __int8 v186; // [rsp+A0h] [rbp-70h]
  struct _ACE v187; // [rsp+A4h] [rbp-6Ch] BYREF
  char v188; // [rsp+ACh] [rbp-64h]
  char v189; // [rsp+ADh] [rbp-63h]
  bool v190; // [rsp+AEh] [rbp-62h] BYREF
  char v191; // [rsp+AFh] [rbp-61h]
  int v192; // [rsp+B0h] [rbp-60h] BYREF
  char v193; // [rsp+B4h] [rbp-5Ch] BYREF
  char v194; // [rsp+B5h] [rbp-5Bh]
  int v195; // [rsp+B8h] [rbp-58h] BYREF
  NTSTATUS AccessStatus; // [rsp+BCh] [rbp-54h] BYREF
  void *v197; // [rsp+C0h] [rbp-50h]
  PVOID P; // [rsp+C8h] [rbp-48h]
  unsigned int v199; // [rsp+D0h] [rbp-40h] BYREF
  void *v200; // [rsp+D8h] [rbp-38h]
  __int64 v201; // [rsp+E0h] [rbp-30h] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+E8h] [rbp-28h]
  struct _ACE v203; // [rsp+F0h] [rbp-20h] BYREF
  void *v204; // [rsp+F8h] [rbp-18h]
  unsigned int v205; // [rsp+100h] [rbp-10h] BYREF
  void *v206; // [rsp+108h] [rbp-8h]
  _QWORD *v207; // [rsp+110h] [rbp+0h]
  PVOID v208; // [rsp+118h] [rbp+8h]
  __int64 v209; // [rsp+120h] [rbp+10h]
  ACCESS_MASK GrantedAccess[2]; // [rsp+128h] [rbp+18h] BYREF
  struct _ACE v211; // [rsp+130h] [rbp+20h] BYREF
  char *v212; // [rsp+138h] [rbp+28h]
  size_t Size; // [rsp+140h] [rbp+30h] BYREF
  __int64 v214; // [rsp+148h] [rbp+38h]
  PVOID v215; // [rsp+150h] [rbp+40h]
  PGENERIC_MAPPING GenericMapping; // [rsp+158h] [rbp+48h]
  void *Src; // [rsp+160h] [rbp+50h]
  int v218; // [rsp+168h] [rbp+58h]
  _DWORD *v219; // [rsp+170h] [rbp+60h]
  int v220; // [rsp+178h] [rbp+68h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+180h] [rbp+70h] BYREF
  struct _ACE v222; // [rsp+188h] [rbp+78h] BYREF
  ULONG MandatoryFlags[2]; // [rsp+190h] [rbp+80h]
  __int64 v224; // [rsp+198h] [rbp+88h]
  PVOID v225; // [rsp+1A0h] [rbp+90h] BYREF
  unsigned __int8 *v226; // [rsp+1A8h] [rbp+98h]
  PVOID v227; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v228; // [rsp+1B8h] [rbp+A8h]
  PVOID v229; // [rsp+1C0h] [rbp+B0h]
  ACL *v230; // [rsp+1C8h] [rbp+B8h] BYREF
  _QWORD *v231; // [rsp+1D0h] [rbp+C0h]
  _QWORD v232[5]; // [rsp+1D8h] [rbp+C8h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+200h] [rbp+F0h] BYREF
  ACL v234[16]; // [rsp+220h] [rbp+110h] BYREF
  ACL Acl; // [rsp+2A0h] [rbp+190h] BYREF

  v10 = a8;
  v11 = a2;
  GenericMapping = a9;
  v12 = 0LL;
  v13 = 0LL;
  v228 = a10;
  v231 = a3;
  v14 = a1;
  v215 = v234;
  v224 = a4;
  v15 = 0LL;
  v207 = a2;
  v214 = a1;
  v16 = 0LL;
  P = 0LL;
  v208 = 0LL;
  v187.AccessMask = 0;
  v199 = 0;
  v185 = 0LL;
  v227 = 0LL;
  v189 = 0;
  AccessMode = 256;
  v190 = 0;
  LOBYTE(v220) = 0;
  v193 = 0;
  Src = 0LL;
  v197 = 0LL;
  v209 = 0LL;
  v206 = 0LL;
  v212 = 0LL;
  v219 = 0LL;
  LODWORD(Size) = 0;
  v226 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v230 = 0LL;
  SecurityDescriptor = 0LL;
  v225 = 0LL;
  v17 = a7;
  SubjectSecurityContext = a8;
  v186 = 0;
  v192 = 0x10000;
  v229 = 0LL;
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v194 = 1;
  }
  else
  {
    v194 = 0;
    v11 = v232;
    v232[0] = 1LL;
    memset(&v232[1], 0, 32);
    v207 = v232;
  }
  v18 = *((unsigned __int16 *)v11 + 1);
  v19 = (unsigned __int8)v18 >> 7;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v184 = v19;
  v218 = v18;
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
  v204 = *(void **)(ClientToken + 184);
  v206 = *(void **)(*((_QWORD *)PrimaryToken + 19) + 16 * v25);
  TokenIntegrity = (void **)SepLocateTokenIntegrity(ClientToken);
  if ( TokenIntegrity )
    v29 = *TokenIntegrity;
  else
    v29 = (void *)SepDefaultMandatorySid;
  v197 = v29;
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
  if ( v204 )
    v35 = *((unsigned __int16 *)v204 + 1);
  else
    v35 = 0;
  PoolWithTag = ExAllocatePoolWithTag(
                  PagedPool,
                  v32
                + v33
                + v34
                + 24
                + v35
                + 4 * (*((unsigned __int8 *)v197 + 1) + *((unsigned __int8 *)v206 + 1) + *((unsigned __int8 *)Src + 1)),
                  0x64536553u);
  v229 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SeUnlockSubjectContext(SubjectSecurityContext);
    return 3221225626LL;
  }
  v200 = PoolWithTag;
  memmove(PoolWithTag, Src, 4 * *((unsigned __int8 *)Src + 1) + 8);
  v37 = *((unsigned __int8 *)v197 + 1);
  Src = (char *)v229 + 4 * *((unsigned __int8 *)Src + 1) + 8;
  memmove(Src, v197, 4 * v37 + 8);
  v38 = (char *)Src + 4 * *((unsigned __int8 *)v197 + 1) + 8;
  v212 = v38;
  if ( v31 )
  {
    v39 = v31[1];
    v197 = v38;
    memmove(v38, v31, 4 * v39 + 8);
    v38 = &v212[4 * v31[1] + 8];
    v212 = v38;
  }
  else
  {
    v197 = 0LL;
  }
  if ( v23 )
  {
    v40 = v23[1];
    v209 = (__int64)v38;
    memmove(v38, v23, 4 * v40 + 8);
    v41 = v23[1];
    v12 = v209;
    v38 = &v212[4 * v41 + 8];
    v212 = v38;
  }
  else
  {
    v12 = 0LL;
  }
  v209 = (__int64)v38;
  memmove(v38, v206, 4 * *((unsigned __int8 *)v206 + 1) + 8);
  v42 = &v212[4 * *((unsigned __int8 *)v206 + 1) + 8];
  v212 = v42;
  if ( v26 )
  {
    v43 = v26[1];
    v206 = v42;
    memmove(v42, v26, 4 * v43 + 8);
    v42 += 4 * v26[1] + 8;
    v212 = v42;
  }
  else
  {
    v206 = 0LL;
  }
  if ( v204 )
    memmove(v42, v204, *((unsigned __int16 *)v204 + 1));
  else
    v212 = 0LL;
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
  v16 = v200;
  v11 = v207;
  v14 = v214;
  v15 = v206;
  v13 = v209;
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
  v204 = v52;
  if ( v52 )
  {
    v53 = v184;
    v189 = 1;
    goto LABEL_56;
  }
LABEL_59:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741734;
LABEL_421:
      v160 = v185;
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
    v204 = v58;
    v189 = 1;
    if ( !v58 )
      goto LABEL_67;
    v53 = v184;
  }
  else
  {
    v59 = v16;
    v53 = v184;
    if ( v184 )
      v59 = (void *)v13;
    v204 = v59;
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
    v200 = v55;
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
  v200 = v61;
  if ( !v61 )
    goto LABEL_85;
LABEL_86:
  AccessStatus = v17 & 4;
  v191 = AccessStatus != 0;
  v211.Header = (ACE_HEADER)(v17 & 2);
  v188 = *(_DWORD *)&v211.Header != 0;
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
  if ( !v214 )
    goto LABEL_100;
  v68 = *(_WORD *)(v214 + 2);
  if ( (v68 & 0x10) == 0 )
    goto LABEL_100;
  if ( v68 >= 0 )
  {
    v70 = *(_BYTE **)(v214 + 24);
    goto LABEL_101;
  }
  v69 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v69 )
  {
LABEL_100:
    v70 = 0LL;
    goto LABEL_101;
  }
  v70 = (_BYTE *)(v214 + v69);
LABEL_101:
  v195 = v65 | v62 | v63 | v64;
  if ( v195 || v70 )
  {
    v71 = (ACE_HEADER)200;
    v72 = 0;
    v187.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v73 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v71, 0x63416553u);
      P = v73;
      if ( !v73 )
        goto LABEL_420;
      LOBYTE(AceType) = v188;
      ServerAcl = RtlpInheritAcl2(
                    v70,
                    v66,
                    v195,
                    a6,
                    AceType,
                    v191,
                    (__int64)v204,
                    (__int64)v200,
                    v209,
                    (__int64)v206,
                    GenericMapping,
                    2,
                    v224,
                    a5,
                    &v187,
                    v73,
                    &AccessMode,
                    (int *)&v201);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v187.Header )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
LABEL_112:
        if ( ServerAcl >= 0 )
        {
          v74 = v207;
          LOBYTE(v187.AccessMask) = 1;
          Header = v211.Header;
          v76 = (ACE_HEADER)((4 * (v201 & 4)) | (4 * (v201 & 8)) | (2 * (v201 & 0x400)) | (2 * (v201 & 0x1000)) | 0x8010);
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
      v71 = v187.Header;
      v66 = *(unsigned __int8 **)GrantedAccess;
    }
  }
  LOBYTE(AccessMode) = 0;
  P = 0LL;
  LODWORD(v201) = *(_DWORD *)&v211.Header != 0 ? 0x400 : 0;
LABEL_115:
  v74 = v207;
  Header = v211.Header;
  v77 = (ACE_HEADER)0x8000;
  v78 = *((_WORD *)v207 + 1);
  if ( v211.Header )
    v77 = (ACE_HEADER)34816;
  v187.Header = v77;
  if ( (v78 & 0x30) == 0x30 )
  {
    if ( (v78 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_126;
    }
    if ( v78 < 0 )
    {
      v79 = *((unsigned int *)v207 + 3);
      if ( !(_DWORD)v79 )
      {
        P = 0LL;
        goto LABEL_126;
      }
      v80 = (char *)v207 + v79;
    }
    else
    {
      v80 = (char *)v207[3];
    }
    P = v80;
LABEL_126:
    LOBYTE(AccessMode) = 1;
    v76 = (ACE_HEADER)(v78 & 0x2000 | 0x10 | *(_DWORD *)&v77);
LABEL_127:
    v187.Header = v76;
  }
  v188 = AccessStatus != 0;
  v81 = Header == 0;
  v82 = *((unsigned __int16 *)v74 + 1);
  v191 = !v81;
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
  if ( !v214 )
    goto LABEL_142;
  v85 = *(_WORD *)(v214 + 2);
  if ( (v85 & 0x10) == 0 )
    goto LABEL_142;
  if ( (v85 & 0x8000) == 0 )
  {
    v87 = *(_BYTE **)(v214 + 24);
    goto LABEL_143;
  }
  v86 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v86 )
  {
LABEL_142:
    v87 = 0LL;
    goto LABEL_143;
  }
  v87 = (_BYTE *)(v214 + v86);
LABEL_143:
  v88 = ((v82 & 0x10) != 0 ? 4 : 0) | ((unsigned __int8)v82 >> 2) & 8 | (v82 >> 1) & 0x400;
  v195 = v88;
  if ( v88 || v87 )
  {
    v89 = (ACE_HEADER)200;
    v90 = 0;
    v203.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v91 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v89, 0x63416553u);
      v208 = v91;
      if ( !v91 )
        goto LABEL_420;
      LOBYTE(AceType) = v191;
      ServerAcl = RtlpInheritAcl2(
                    v87,
                    *(unsigned __int8 **)GrantedAccess,
                    v88,
                    a6,
                    AceType,
                    v188,
                    (__int64)v204,
                    (__int64)v200,
                    v209,
                    (__int64)v206,
                    GenericMapping,
                    2,
                    v224,
                    a5,
                    &v203,
                    v91,
                    &v190,
                    (int *)&Size);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v203.Header )
        {
          ExFreePoolWithTag(v208, 0);
          v208 = 0LL;
        }
LABEL_154:
        v195 = ServerAcl;
        if ( ServerAcl >= 0 )
        {
          v74 = v207;
          HIBYTE(v192) = 1;
          goto LABEL_156;
        }
        if ( ServerAcl == -2147483637 )
        {
          v74 = v207;
          goto LABEL_161;
        }
        goto LABEL_421;
      }
      ExFreePoolWithTag(v208, 0);
      v208 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_154;
      if ( (unsigned int)++v90 >= 2 )
        goto LABEL_154;
      v89 = v203.Header;
      LOWORD(v88) = v195;
    }
  }
  v208 = 0LL;
  v195 = -2147483637;
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
          v208 = (char *)v74 + v95;
        else
          v208 = 0LL;
      }
      else
      {
        v208 = (PVOID)v74[3];
      }
    }
    else
    {
      v208 = 0LL;
    }
  }
LABEL_156:
  v205 = 0;
  do
  {
    v92 = *((_WORD *)v74 + 1);
    if ( (v92 & 0x10) != 0 )
    {
      if ( v92 < 0 )
      {
        v96 = *((unsigned int *)v74 + 3);
        if ( (_DWORD)v96 )
          v93 = (__int64)v74 + v96;
        else
          v93 = 0LL;
      }
      else
      {
        v93 = v74[3];
      }
    }
    else
    {
      v93 = 0LL;
    }
    AceByType = RtlFindAceByType(v93, 20, &v205);
    v99 = v197;
    v100 = AceByType;
    if ( AceByType
      && AceByType != (unsigned __int8 *)-8LL
      && !RtlpValidTrustSubjectContext((__int64)v197, (__int64)(AceByType + 8), v98, &v195) )
    {
      goto LABEL_344;
    }
    ++v205;
  }
  while ( v100 );
  v203.Header = (ACE_HEADER)4;
  if ( (a7 & 0x800) != 0 )
  {
    v205 = 0;
    while ( 1 )
    {
      v101 = *((_WORD *)v74 + 1);
      if ( (v101 & 0x10) != 0 )
      {
        if ( v101 >= 0 )
        {
          v102 = v74[3];
        }
        else
        {
          v103 = *((unsigned int *)v74 + 3);
          v102 = (_DWORD)v103 ? (__int64)v74 + v103 : 0LL;
        }
      }
      else
      {
        v102 = 0LL;
      }
      v104 = RtlFindAceByType(v102, 20, &v205);
      ++v205;
      if ( !v104 )
        break;
      if ( (v104[1] & 8) == 0 )
      {
        v105 = *((_DWORD *)v104 + 1);
        v197 = v104 + 8;
        if ( !v228 || (v105 & *(_DWORD *)(v228 + 4)) != v105 || v104 == (unsigned __int8 *)-8LL )
        {
          ServerAcl = -1073741811;
          goto LABEL_421;
        }
        goto LABEL_197;
      }
    }
    if ( !v99 )
      goto LABEL_201;
    if ( !v228 )
    {
      ServerAcl = -1073741811;
      goto LABEL_421;
    }
    v105 = *(_DWORD *)(v228 + 4);
LABEL_197:
    ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 20, v105);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v106 = v207;
    ServerAcl = RtlpComputeMergedAcl(
                  (int)v208,
                  ((unsigned __int8)*((_WORD *)v207 + 1) >> 2) & 4 | (*((unsigned __int16 *)v207 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)v207 + 1) >> 2) & 8u,
                  (int)&Acl,
                  4,
                  (__int64)v204,
                  (__int64)v200,
                  (__int64)GenericMapping,
                  2,
                  (__int64)&v225,
                  (__int64)&v201);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    LOBYTE(v192) = 1;
  }
  else
  {
LABEL_201:
    v106 = v207;
    v225 = v208;
  }
  v107 = 0;
  v108 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v108 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v108 |= 4u;
  if ( v108 )
  {
    v113 = 0LL;
LABEL_219:
    v115 = 0;
    goto LABEL_220;
  }
  v109 = *((_WORD *)v106 + 1);
  if ( (v109 & 0x10) != 0 )
  {
    if ( v109 >= 0 )
    {
      v110 = v106[3];
    }
    else
    {
      v111 = *((unsigned int *)v106 + 3);
      if ( (_DWORD)v111 )
        v110 = (__int64)v106 + v111;
      else
        v110 = 0LL;
    }
  }
  else
  {
    v110 = 0LL;
  }
  v112 = RtlFindAceByType(v110, 17, 0LL);
  v226 = v112;
  v113 = v112;
  if ( !v112 )
    goto LABEL_219;
  v108 = *((_DWORD *)v112 + 1);
  v114 = v112 + 8;
  v115 = v112[1];
  *(_QWORD *)MandatoryFlags = v114;
  v186 = v115;
  if ( v115 == 8 || (v115 & 0x10) != 0 )
  {
    v107 = 0;
    v115 = 0;
    v226 = 0LL;
    v186 = 0;
    v113 = 0LL;
    *(_QWORD *)MandatoryFlags = 0LL;
    v108 = 0;
  }
LABEL_220:
  if ( (v115 & 8) != 0 && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    ServerAcl = -1073740730;
    goto LABEL_421;
  }
  if ( !v108 )
  {
    if ( !Src || *RtlSubAuthoritySid(Src, 0) >= 0x2000 )
      goto LABEL_231;
    v108 = 1;
  }
  if ( !v113 )
  {
    if ( !SubjectSecurityContext )
    {
      ServerAcl = -1073741700;
      goto LABEL_421;
    }
    v116 = Src;
    LOBYTE(v107) = 0;
    *(_QWORD *)MandatoryFlags = Src;
    goto LABEL_232;
  }
LABEL_231:
  v107 = v186;
  v116 = *(void **)MandatoryFlags;
LABEL_232:
  if ( v116 )
  {
    LODWORD(LabelSid) = v108;
    memset(v234, 0, sizeof(v234));
    v234[0] = (ACL)8388610LL;
    ServerAcl = RtlAddMandatoryAce(v234, v107, (unsigned __int8)v107, (ULONG)v116, AceType, LabelSid);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v117 = v234;
  }
  else
  {
    v117 = 0LL;
    v215 = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v118 = 4;
  }
  else
  {
    if ( v226 || !v117 )
      v118 = ((unsigned __int8)*((_WORD *)v106 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)v106 + 1) >> 2) & 8 | (*((unsigned __int16 *)v106 + 1) >> 1) & 0x1400;
    else
      v118 = 0;
    v203.Header = (ACE_HEADER)v118;
  }
  if ( !v214 )
    goto LABEL_249;
  v119 = *(_WORD *)(v214 + 2);
  if ( (v119 & 0x10) == 0 )
    goto LABEL_249;
  if ( v119 >= 0 )
  {
    v121 = *(_BYTE **)(v214 + 24);
    goto LABEL_250;
  }
  v120 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v120 )
  {
LABEL_249:
    v121 = 0LL;
    goto LABEL_250;
  }
  v121 = (_BYTE *)(v214 + v120);
LABEL_250:
  v197 = v121;
  if ( v118 || v121 )
  {
    v122 = (ACE_HEADER)200;
    v123 = 0;
    v222.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v124 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v122, 0x63416553u);
      v125 = v124;
      if ( !v124 )
        break;
      LOBYTE(AceType) = 1;
      ServerAcl = RtlpInheritAcl2(
                    v121,
                    (unsigned __int8 *)v215,
                    *(__int16 *)&v203.Header.AceType,
                    a6,
                    AceType,
                    0,
                    (__int64)v204,
                    (__int64)v200,
                    v209,
                    (__int64)v206,
                    GenericMapping,
                    3,
                    v224,
                    a5,
                    &v222,
                    v124,
                    (_BYTE *)&v187.AccessMask + 3,
                    (int *)&v201);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v222.Header )
        {
          ExFreePoolWithTag(v125, 0);
          v125 = 0LL;
        }
LABEL_260:
        if ( ServerAcl == -2147483637 )
          goto LABEL_261;
        if ( ServerAcl >= 0 )
        {
          v126 = v201;
          goto LABEL_264;
        }
        goto LABEL_421;
      }
      ExFreePoolWithTag(v125, 0);
      v125 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_260;
      if ( (unsigned int)++v123 >= 2 )
        goto LABEL_260;
      v122 = v222.Header;
      v121 = v197;
    }
LABEL_420:
    ServerAcl = -1073741801;
    goto LABEL_421;
  }
LABEL_261:
  v125 = v215;
  v126 = 0;
  LODWORD(v201) = 0;
LABEL_264:
  ServerAcl = RtlpCombineAcls(
                (unsigned __int8 *)P,
                (unsigned __int8 *)v125,
                (unsigned __int8 *)v208,
                (unsigned __int8 *)v208,
                (unsigned __int8 *)v225,
                &v230,
                &v199);
  v195 = ((*(_WORD *)&v187.Header.AceType & 0x2000) << 17) | v199;
  if ( v125 && v125 != v215 )
    ExFreePoolWithTag(v125, 0);
  if ( ServerAcl < 0 )
    goto LABEL_421;
  v127 = v230;
  if ( v230 )
  {
    if ( LOBYTE(v187.AccessMask) && P )
      ExFreePoolWithTag(P, 0);
    P = v127;
    BYTE1(v192) = 1;
    *(_DWORD *)&v187.Header |= (4 * (v126 & 4)) | (4 * (v126 & 8)) | (2 * (v126 & 0x400)) | (2 * (v126 & 0x1000)) | 0x10;
  }
  else
  {
    v127 = (ACL *)P;
  }
  v199 = a7 & 8;
  if ( (a7 & 8) == 0 )
  {
    v128 = RtlFindAceByType((__int64)v127, 17, 0LL);
    v129 = v128 ? (char *)(v128 + 8) : *(char **)MandatoryFlags;
    if ( v129 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_421;
      }
      ServerAcl = RtlSidDominates((char *)Src, v129, (bool *)&v192 + 2);
      if ( ServerAcl < 0 )
        goto LABEL_421;
      v130 = (unsigned __int8)v220;
      if ( !BYTE2(v192) )
        v130 = 1;
      v220 = v130;
    }
  }
  v131 = v207;
  HIBYTE(v187.AccessMask) = AccessStatus != 0;
  AccessStatus = a7 & 1;
  v190 = AccessStatus != 0;
  v132 = *((_WORD *)v207 + 1);
  if ( (v132 & 4) == 0 )
  {
    v133 = 0LL;
    v215 = 0LL;
    goto LABEL_293;
  }
  if ( v132 < 0 )
  {
    v134 = *((unsigned int *)v207 + 4);
    if ( !(_DWORD)v134 )
    {
      v133 = 0LL;
      v215 = 0LL;
      goto LABEL_293;
    }
    v133 = (char *)v207 + v134;
  }
  else
  {
    v133 = (char *)v207[4];
  }
  v215 = v133;
LABEL_293:
  if ( !v214 )
    goto LABEL_299;
  v135 = *(_WORD *)(v214 + 2);
  if ( (v135 & 4) == 0 )
    goto LABEL_299;
  if ( (v135 & 0x8000) == 0 )
  {
    v137 = *(_BYTE **)(v214 + 32);
    goto LABEL_300;
  }
  v136 = *(unsigned int *)(v214 + 16);
  if ( !(_DWORD)v136 )
  {
LABEL_299:
    v137 = 0LL;
    goto LABEL_300;
  }
  v137 = (_BYTE *)(v214 + v136);
LABEL_300:
  LODWORD(Size) = v132 & 0x140C;
  if ( (v132 & 0x140C) != 0 || v137 )
  {
    v140 = (ACE_HEADER)200;
    v141 = 0;
    v211.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v142 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v140, 0x63416553u);
      v185 = v142;
      if ( !v142 )
      {
        ServerAcl = -1073741801;
        v160 = 0LL;
        goto LABEL_422;
      }
      LOBYTE(AceTypea) = v190;
      ServerAcl = RtlpInheritAcl2(
                    v137,
                    (unsigned __int8 *)v133,
                    Size,
                    a6,
                    AceTypea,
                    SHIBYTE(v187.AccessMask),
                    (__int64)v204,
                    (__int64)v200,
                    v209,
                    (__int64)v206,
                    GenericMapping,
                    1,
                    v224,
                    a5,
                    &v211,
                    v142,
                    (_BYTE *)&v187.AccessMask + 2,
                    (int *)&v201);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v185, 0);
      v185 = 0LL;
      v139 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_312;
      if ( (unsigned int)++v141 >= 2 )
        goto LABEL_312;
      v140 = v211.Header;
      v133 = (char *)v215;
    }
    if ( v211.Header )
    {
      v139 = (char *)v185;
    }
    else
    {
      ExFreePoolWithTag(v185, 0);
      v139 = 0LL;
      v185 = 0LL;
    }
LABEL_312:
    if ( ServerAcl >= 0 )
    {
      v138 = BYTE2(v187.AccessMask);
      v143 = AccessStatus;
      v144 = (ACE_HEADER)(v201 & 0x1408 | 4 | *(_DWORD *)&v187.Header);
      BYTE1(v187.AccessMask) = 1;
      goto LABEL_329;
    }
    if ( ServerAcl == -2147483637 )
    {
      v138 = BYTE2(v187.AccessMask);
      v131 = v207;
      goto LABEL_316;
    }
    goto LABEL_421;
  }
  v138 = 0;
  v185 = 0LL;
  v139 = 0LL;
LABEL_316:
  v143 = AccessStatus;
  v145 = (int)v187.Header;
  if ( AccessStatus )
  {
    v145 = *(_DWORD *)&v187.Header | 0x400;
    *(_DWORD *)&v187.Header |= 0x400u;
  }
  v146 = *((_WORD *)v131 + 1);
  if ( (v146 & 0xC) == 0xC )
  {
    if ( (v146 & 4) != 0 )
    {
      if ( v146 >= 0 )
      {
        v139 = (char *)v131[4];
      }
      else
      {
        v147 = *((unsigned int *)v131 + 4);
        if ( (_DWORD)v147 )
          v139 = (char *)v131 + v147;
        else
          v139 = 0LL;
      }
    }
    else
    {
      v139 = 0LL;
    }
    v185 = v139;
    v138 = 1;
    v144 = (ACE_HEADER)(v146 & 0x1000 | 4 | v145);
  }
  else
  {
    if ( !v212 )
      goto LABEL_330;
    v139 = v212;
    v185 = v212;
    v144 = (ACE_HEADER)(v145 | 4);
  }
LABEL_329:
  v187.Header = v144;
LABEL_330:
  v148 = SubjectSecurityContext;
  if ( (a7 & 0x1000) == 0 && v194 && SubjectSecurityContext && v214 )
  {
    GrantedAccess[0] = 0;
    AccessStatus = 0;
    ServerAcl = RtlpNewSecurityObject(
                  v214,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v224,
                  a5,
                  a6,
                  a7 | 1u,
                  (__int64)SubjectSecurityContext,
                  (__int64)GenericMapping,
                  v228);
    if ( ServerAcl < 0 )
      goto LABEL_421;
    v149 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v149 & 4) != 0 )
    {
      if ( v149 >= 0 )
      {
        v150 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v151 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v151 )
          v150 = (char *)SecurityDescriptor + v151;
        else
          v150 = 0LL;
      }
    }
    else
    {
      v150 = 0LL;
    }
    v152 = RtlpOwnerAcesPresent(0x10u, (__int64)v150);
    v153 = HIBYTE(AccessMode);
    v148 = SubjectSecurityContext;
    if ( v152 )
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
      v139 = (char *)v185;
      v148 = SubjectSecurityContext;
    }
    else
    {
      v139 = (char *)v185;
    }
  }
  else
  {
    v153 = HIBYTE(AccessMode);
  }
  if ( v143 && !v139 )
    *(_DWORD *)&v187.Header |= 0x1000u;
  v154 = !v195 || (v195 & 0xB0) != v195;
  if ( v153 != 1 )
    goto LABEL_381;
  v155 = v199;
  if ( (_BYTE)AccessMode && !v199 && v154 )
  {
    if ( !v148 )
    {
      ServerAcl = -1073741700;
      goto LABEL_421;
    }
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v156 = SePrivilegeCheck(&RequiredPrivileges, v148, 1);
    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)SubjectSecurityContext, &RequiredPrivileges.PrivilegeCount, v156);
    if ( !v156 )
    {
      ServerAcl = -1073741727;
      goto LABEL_421;
    }
  }
  if ( (_BYTE)v220 )
  {
    v81 = v155 == 0;
    v157 = (__int64 *)SubjectSecurityContext;
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
      v158 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
      SePrivilegedServiceAuditAlarm(0LL, v157, &RequiredPrivileges.PrivilegeCount, v158);
      if ( !v158 )
      {
        ServerAcl = -1073741727;
        goto LABEL_421;
      }
    }
  }
  else
  {
    v157 = (__int64 *)SubjectSecurityContext;
  }
  v159 = v184;
  if ( v189 && (a7 & 0x10) == 0 && !(unsigned __int8)SepValidOwnerSubjectContext(v157, v204, v184) )
  {
    ServerAcl = -1073741734;
    goto LABEL_421;
  }
  if ( !v138 || !v159 )
  {
LABEL_381:
    v161 = (unsigned __int16 *)v185;
    goto LABEL_382;
  }
  v160 = v185;
  ServerAcl = RtlpCreateServerAcl((_DWORD)v185, (unsigned __int8)v218, v209, (unsigned int)&v227, (__int64)&v193);
  if ( ServerAcl >= 0 )
  {
    if ( BYTE1(v187.AccessMask) && v160 )
      ExFreePoolWithTag(v160, 0);
    v161 = (unsigned __int16 *)v227;
    v185 = v227;
    v227 = 0LL;
LABEL_382:
    v162 = 4 * *((unsigned __int8 *)v204 + 1) + 11;
    LODWORD(Size) = 4 * *((unsigned __int8 *)v204 + 1) + 8;
    v163 = v162 & 0xFFFFFFFC;
    v195 = v163;
    if ( v200 )
    {
      AccessStatus = 4 * *((unsigned __int8 *)v200 + 1) + 8;
      v164 = (AccessStatus + 3) & 0xFFFFFFFC;
    }
    else
    {
      AccessStatus = 0;
      v164 = 0;
    }
    v199 = v164;
    v218 = v187.Header.AceType & 0x10;
    if ( (v187.Header.AceType & 0x10) != 0 && P )
      v165 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
    else
      v165 = 0;
    GrantedAccess[0] = v187.Header.AceType & 4;
    if ( (v187.Header.AceType & 4) != 0 && v161 )
      v166 = (v161[1] + 3) & 0xFFFFFFFC;
    else
      v166 = 0;
    v167 = ExAllocatePoolWithTag(PagedPool, v164 + v166 + v165 + v163 + 20, 0x64536553u);
    v219 = v167;
    v168 = v167;
    if ( !v167 )
    {
      ServerAcl = -1073741670;
      goto LABEL_421;
    }
    v169 = (char *)(v167 + 5);
    *(_QWORD *)v167 = 0LL;
    *((_QWORD *)v167 + 1) = 0LL;
    v167[4] = 0;
    *((_WORD *)v167 + 1) |= *(_WORD *)&v187.Header.AceType;
    v81 = v218 == 0;
    *(_BYTE *)v167 = 1;
    if ( !v81 )
    {
      v170 = (int)P;
      if ( !P )
      {
        v168[3] = 0;
        goto LABEL_403;
      }
      memmove(v169, P, *((unsigned __int16 *)P + 1));
      if ( !LOBYTE(v187.AccessMask) )
        RtlpApplyAclToObject((__int64)v169, GenericMapping);
      v168 = v219;
      v219[3] = (_DWORD)v169 - (_DWORD)v219;
      v171 = *((unsigned __int16 *)P + 1);
      if ( v165 > (unsigned int)v171 )
      {
        memset(&v169[v171], 0, v165 - (unsigned int)v171);
        v168 = v219;
      }
      v169 += v165;
    }
    v170 = 0;
LABEL_403:
    if ( GrantedAccess[0] )
    {
      v172 = (unsigned __int16 *)v185;
      if ( v185 )
      {
        memmove(v169, v185, *((unsigned __int16 *)v185 + 1));
        if ( !BYTE1(v187.AccessMask) )
          RtlpApplyAclToObject((__int64)v169, GenericMapping);
        v219[4] = (_DWORD)v169 - (_DWORD)v219;
        v173 = v172[1];
        if ( v166 > (unsigned int)v173 )
          memset(&v169[v173], 0, v166 - (unsigned int)v173);
        v169 += v166;
      }
      else
      {
        v168[4] = v170;
      }
    }
    v174 = (unsigned int)Size;
    memmove(v169, v204, (unsigned int)Size);
    v175 = (unsigned int)v195;
    if ( v195 > (unsigned int)v174 )
      memset(&v169[v174], 0, (unsigned int)(v195 - v174));
    v176 = (_DWORD)v169 - (_DWORD)v219;
    v177 = &v169[v175];
    v219[1] = v176;
    if ( v200 )
    {
      v178 = (unsigned int)AccessStatus;
      memmove(v177, v200, (unsigned int)AccessStatus);
      if ( v199 > (unsigned int)v178 )
        memset(&v177[v178], 0, v199 - (unsigned int)v178);
      v219[2] = (_DWORD)v177 - (_DWORD)v219;
    }
    ServerAcl = 0;
    goto LABEL_421;
  }
LABEL_422:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( v193 && v227 )
    ExFreePoolWithTag(v227, 0);
  if ( v229 )
    ExFreePoolWithTag(v229, 0);
  if ( (LOBYTE(v187.AccessMask) || BYTE1(v192)) && P )
    ExFreePoolWithTag(P, 0);
  if ( HIBYTE(v192) && v208 )
    ExFreePoolWithTag(v208, 0);
  if ( v225 && (_BYTE)v192 )
    ExFreePoolWithTag(v225, 0);
  if ( BYTE1(v187.AccessMask) )
  {
    if ( v160 )
      ExFreePoolWithTag(v160, 0);
  }
  *v231 = v219;
  return (unsigned int)ServerAcl;
}
