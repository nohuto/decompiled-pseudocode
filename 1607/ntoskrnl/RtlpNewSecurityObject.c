/*
 * XREFs of RtlpNewSecurityObject @ 0x14041AE00
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140012B10 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x1403FBB28 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x140012620 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x140012AEC (SepLocateTokenIntegrity.c)
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     RtlSidDominates @ 0x140076140 (RtlSidDominates.c)
 *     RtlpOwnerAcesPresent @ 0x14008D270 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x140130EE0 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041423C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x14041CB70 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x14041D040 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x14041D100 (RtlpCombineAcls.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x14041F9D0 (RtlAddMandatoryAce.c)
 *     SeUnlockSubjectContext @ 0x14044CAE0 (SeUnlockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x14051AF30 (SepValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553FF8 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x140683FDC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406843E8 (RtlpCreateServerAcl.c)
 */

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
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
  __int64 v16; // rcx
  char v17; // r11
  ACCESS_MASK v18; // edx
  unsigned __int8 v19; // al
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v21; // rax
  __int64 ClientToken; // rdi
  unsigned __int8 *v23; // rbx
  unsigned int *PrimaryToken; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rsi
  PSID *TokenIntegrity; // rax
  __int64 *v28; // r8
  PSID v29; // rax
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
  unsigned __int16 v44; // di
  __int16 v45; // dx
  __int64 v46; // rax
  char *v47; // rax
  unsigned __int8 v48; // cl
  __int64 v49; // rax
  char *v50; // rax
  NTSTATUS ServerAcl; // edi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  int v57; // r9d
  int v58; // r10d
  int v59; // r8d
  int v60; // r11d
  char *v61; // rdi
  __int64 v62; // rax
  __int16 v63; // ax
  __int64 v64; // rax
  __int64 v65; // rsi
  ACE_HEADER v66; // eax
  int v67; // ebx
  ACL *v68; // rax
  _QWORD *v69; // rbx
  ACE_HEADER Header; // edx
  int v71; // r11d
  ACE_HEADER v72; // r11d
  __int16 v73; // cx
  __int64 v74; // rax
  char *v75; // rax
  bool v76; // zf
  unsigned int v77; // edx
  __int64 v78; // rax
  char *v79; // rax
  __int16 v80; // ax
  __int64 v81; // rax
  __int64 v82; // rsi
  int v83; // edi
  unsigned int v84; // eax
  int v85; // ebx
  ACL *v86; // rax
  __int16 v87; // ax
  ACL *v88; // rcx
  __int16 v89; // cx
  __int64 v90; // rax
  __int64 v91; // rax
  char *AceByType; // rax
  __int64 v93; // r8
  PSID v94; // rsi
  char *v95; // rdi
  __int16 v96; // ax
  ACL *v97; // rcx
  __int64 v98; // rax
  _DWORD *v99; // rax
  ACCESS_MASK v100; // ebx
  ULONG v101; // esi
  _QWORD *v102; // rsi
  ACL *v103; // rcx
  ULONG v104; // edx
  int v105; // ebx
  __int16 v106; // ax
  __int64 v107; // rax
  _DWORD *v108; // rax
  _DWORD *v109; // rdi
  char *v110; // rcx
  unsigned __int8 v111; // al
  void *v112; // r9
  ACL *v113; // rcx
  int v114; // ecx
  __int16 v115; // ax
  __int64 v116; // rax
  void *v117; // rdi
  ACE_HEADER v118; // eax
  int v119; // esi
  ACL *v120; // rax
  PVOID v121; // rbx
  __int16 v122; // si
  ACL *v123; // rdi
  char *v124; // rax
  char *v125; // rax
  int v126; // eax
  _QWORD *v127; // rdx
  __int16 v128; // cx
  char *v129; // rdi
  __int64 v130; // rax
  __int16 v131; // ax
  __int64 v132; // rax
  __int64 v133; // rsi
  char v134; // bl
  char *v135; // r8
  ACE_HEADER v136; // eax
  int v137; // ebx
  ACL *v138; // rax
  NTSTATUS v139; // esi
  int v140; // edi
  int v141; // edi
  __int16 v142; // cx
  __int64 v143; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v144; // rdx
  __int16 v145; // cx
  char *v146; // rdx
  __int64 v147; // rcx
  char v148; // al
  char v149; // di
  bool v150; // al
  unsigned int v151; // esi
  BOOLEAN v152; // di
  __int64 *v153; // rsi
  BOOLEAN v154; // di
  unsigned __int8 v155; // di
  PVOID v156; // rbx
  unsigned __int16 *v157; // rdi
  int v158; // edx
  unsigned int v159; // edx
  unsigned int v160; // ecx
  unsigned int v161; // ebx
  unsigned int v162; // esi
  _DWORD *v163; // rax
  _DWORD *v164; // rdx
  char *v165; // rdi
  int v166; // eax
  __int64 v167; // rcx
  unsigned __int16 *v168; // rbx
  __int64 v169; // rcx
  __int64 v170; // rsi
  __int64 v171; // rbx
  int v172; // eax
  char *v173; // rdi
  __int64 v174; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  void *AccessMask; // [rsp+28h] [rbp-E8h]
  __int16 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v180; // [rsp+92h] [rbp-7Eh]
  PVOID v181; // [rsp+98h] [rbp-78h]
  unsigned __int8 v182; // [rsp+A0h] [rbp-70h]
  struct _ACE v183; // [rsp+A4h] [rbp-6Ch] BYREF
  char v184; // [rsp+ACh] [rbp-64h]
  char v185; // [rsp+ADh] [rbp-63h]
  __int16 v186; // [rsp+AEh] [rbp-62h] BYREF
  BOOLEAN v187; // [rsp+B0h] [rbp-60h] BYREF
  char v188; // [rsp+B1h] [rbp-5Fh]
  int v189; // [rsp+B2h] [rbp-5Eh] BYREF
  int v190; // [rsp+B8h] [rbp-58h] BYREF
  NTSTATUS AccessStatus; // [rsp+BCh] [rbp-54h] BYREF
  PVOID P; // [rsp+C0h] [rbp-50h]
  PSID ProcessTrustLabelSid; // [rsp+C8h] [rbp-48h]
  int v194; // [rsp+D0h] [rbp-40h] BYREF
  unsigned int v195; // [rsp+D4h] [rbp-3Ch] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+D8h] [rbp-38h]
  ULONG Index; // [rsp+E0h] [rbp-30h] BYREF
  _BYTE v198[12]; // [rsp+E4h] [rbp-2Ch] BYREF
  PVOID v199; // [rsp+F0h] [rbp-20h]
  void *v200; // [rsp+F8h] [rbp-18h]
  struct _ACE v201; // [rsp+100h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess[2]; // [rsp+108h] [rbp-8h] BYREF
  char *v203; // [rsp+110h] [rbp+0h]
  size_t Size; // [rsp+118h] [rbp+8h] BYREF
  void *v205; // [rsp+120h] [rbp+10h]
  _QWORD *v206; // [rsp+128h] [rbp+18h]
  __int64 v207; // [rsp+130h] [rbp+20h]
  PGENERIC_MAPPING GenericMapping; // [rsp+138h] [rbp+28h]
  void *Src; // [rsp+140h] [rbp+30h]
  PVOID v210; // [rsp+148h] [rbp+38h]
  int v211; // [rsp+150h] [rbp+40h]
  struct _ACE v212; // [rsp+154h] [rbp+44h] BYREF
  ULONG MandatoryFlags[2]; // [rsp+160h] [rbp+50h]
  __int64 v214; // [rsp+168h] [rbp+58h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+170h] [rbp+60h] BYREF
  _DWORD *v216; // [rsp+178h] [rbp+68h]
  __int64 v217; // [rsp+180h] [rbp+70h]
  _DWORD *v218; // [rsp+188h] [rbp+78h]
  PVOID v219; // [rsp+190h] [rbp+80h] BYREF
  PVOID v220; // [rsp+198h] [rbp+88h] BYREF
  __int64 v221; // [rsp+1A0h] [rbp+90h]
  PVOID v222; // [rsp+1A8h] [rbp+98h]
  PACL v223; // [rsp+1B0h] [rbp+A0h] BYREF
  _QWORD *v224; // [rsp+1B8h] [rbp+A8h]
  _QWORD v225[5]; // [rsp+1C0h] [rbp+B0h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL v227[16]; // [rsp+200h] [rbp+F0h] BYREF
  ACL Acl; // [rsp+280h] [rbp+170h] BYREF

  v10 = a8;
  v11 = a2;
  GenericMapping = a9;
  v12 = 0LL;
  v13 = 0LL;
  v221 = a10;
  v224 = a3;
  v14 = a1;
  v210 = v227;
  v217 = a4;
  v15 = 0LL;
  v206 = a2;
  v214 = a1;
  v16 = 0LL;
  P = 0LL;
  v199 = 0LL;
  v183.AccessMask = 0;
  v195 = 0;
  v181 = 0LL;
  v219 = 0LL;
  AccessMode = 256;
  v186 = 0;
  LOBYTE(v211) = 0;
  v189 = 0;
  Src = 0LL;
  ProcessTrustLabelSid = 0LL;
  v207 = 0LL;
  v205 = 0LL;
  v203 = 0LL;
  v216 = 0LL;
  LODWORD(Size) = 0;
  v218 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v223 = 0LL;
  SecurityDescriptor = 0LL;
  v220 = 0LL;
  v17 = a7;
  SubjectSecurityContext = a8;
  v182 = 0;
  v187 = 1;
  v222 = 0LL;
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v188 = 1;
  }
  else
  {
    v188 = 0;
    v11 = v225;
    v225[0] = 1LL;
    memset(&v225[1], 0, 32);
    v206 = v225;
  }
  v18 = *((unsigned __int16 *)v11 + 1);
  v19 = (unsigned __int8)v18 >> 7;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v180 = v19;
  v212.AccessMask = v18;
  if ( !a8 && !v19 )
    goto LABEL_43;
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
  v200 = *(void **)(ClientToken + 184);
  v205 = *(void **)(*((_QWORD *)PrimaryToken + 19) + 16 * v25);
  TokenIntegrity = (PSID *)SepLocateTokenIntegrity(ClientToken);
  if ( TokenIntegrity )
    v29 = *TokenIntegrity;
  else
    v29 = SepDefaultMandatorySid;
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
  if ( v200 )
    v35 = *((unsigned __int16 *)v200 + 1);
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
                 + *((unsigned __int8 *)v205 + 1)
                 + *((unsigned __int8 *)Src + 1)),
                  0x64536553u);
  v222 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SeUnlockSubjectContext(SubjectSecurityContext);
    return 3221225626LL;
  }
  *(_QWORD *)&v198[4] = PoolWithTag;
  memmove(PoolWithTag, Src, 4 * *((unsigned __int8 *)Src + 1) + 8);
  v37 = *((unsigned __int8 *)ProcessTrustLabelSid + 1);
  Src = (char *)v222 + 4 * *((unsigned __int8 *)Src + 1) + 8;
  memmove(Src, ProcessTrustLabelSid, 4 * v37 + 8);
  v38 = (char *)Src + 4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8;
  v203 = v38;
  if ( v31 )
  {
    v39 = v31[1];
    ProcessTrustLabelSid = v38;
    memmove(v38, v31, 4 * v39 + 8);
    v38 = &v203[4 * v31[1] + 8];
    v203 = v38;
  }
  else
  {
    ProcessTrustLabelSid = 0LL;
  }
  if ( v23 )
  {
    v40 = v23[1];
    v207 = (__int64)v38;
    memmove(v38, v23, 4 * v40 + 8);
    v41 = v23[1];
    v12 = v207;
    v38 = &v203[4 * v41 + 8];
    v203 = v38;
  }
  else
  {
    v12 = 0LL;
  }
  v207 = (__int64)v38;
  memmove(v38, v205, 4 * *((unsigned __int8 *)v205 + 1) + 8);
  v42 = &v203[4 * *((unsigned __int8 *)v205 + 1) + 8];
  v203 = v42;
  if ( v26 )
  {
    v43 = v26[1];
    v205 = v42;
    memmove(v42, v26, 4 * v43 + 8);
    v42 += 4 * v26[1] + 8;
    v203 = v42;
  }
  else
  {
    v205 = 0LL;
  }
  if ( v200 )
    memmove(v42, v200, *((unsigned __int16 *)v200 + 1));
  else
    v203 = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectSecurityContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
  v17 = a7;
  v13 = v207;
  v15 = v205;
  v14 = v214;
  v11 = v206;
  v16 = *(_QWORD *)&v198[4];
LABEL_43:
  v44 = *((_WORD *)v11 + 1);
  v45 = v44 & 0x8000;
  if ( (v44 & 0x8000u) == 0 )
  {
    v47 = (char *)v11[1];
  }
  else
  {
    v46 = *((unsigned int *)v11 + 1);
    if ( !(_DWORD)v46 )
      goto LABEL_52;
    v47 = (char *)v11 + v46;
  }
  *(_QWORD *)&v198[4] = v47;
  if ( v47 )
  {
    v48 = v180;
    HIBYTE(v183.AccessMask) = 1;
    goto LABEL_49;
  }
LABEL_52:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741734;
LABEL_412:
      v156 = v181;
      goto LABEL_413;
    }
    if ( *(__int16 *)(v14 + 2) >= 0 )
    {
      v53 = *(_QWORD *)(v14 + 8);
    }
    else
    {
      v52 = *(unsigned int *)(v14 + 4);
      if ( !(_DWORD)v52 )
      {
LABEL_60:
        ServerAcl = -1073741734;
        goto LABEL_412;
      }
      v53 = v14 + v52;
    }
    *(_QWORD *)&v198[4] = v53;
    HIBYTE(v183.AccessMask) = 1;
    if ( !v53 )
      goto LABEL_60;
    v48 = v180;
  }
  else
  {
    v54 = v16;
    v48 = v180;
    if ( v180 )
      v54 = v13;
    *(_QWORD *)&v198[4] = v54;
    if ( !v54 )
    {
      ServerAcl = -1073741700;
      goto LABEL_412;
    }
  }
LABEL_49:
  if ( !v45 )
  {
    v50 = (char *)v11[2];
LABEL_67:
    v200 = v50;
    if ( v50 )
      goto LABEL_79;
    goto LABEL_68;
  }
  v49 = *((unsigned int *)v11 + 2);
  if ( (_DWORD)v49 )
  {
    v50 = (char *)v11 + v49;
    goto LABEL_67;
  }
LABEL_68:
  if ( (v17 & 0x40) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741733;
      goto LABEL_412;
    }
    if ( (*(_WORD *)(v14 + 2) & 0x8000) != 0 )
    {
      v55 = *(unsigned int *)(v14 + 8);
      if ( !(_DWORD)v55 )
      {
LABEL_78:
        ServerAcl = -1073741733;
        goto LABEL_412;
      }
      v56 = (void *)(v14 + v55);
    }
    else
    {
      v56 = *(void **)(v14 + 16);
    }
  }
  else
  {
    v56 = (void *)v12;
    if ( v48 )
      v56 = v15;
  }
  v200 = v56;
  if ( !v56 )
    goto LABEL_78;
LABEL_79:
  AccessStatus = v17 & 4;
  v184 = AccessStatus != 0;
  v201.Header = (ACE_HEADER)(v17 & 2);
  v185 = *(_DWORD *)&v201.Header != 0;
  v57 = ((unsigned __int8)v44 >> 2) & 8;
  v58 = (v44 >> 1) & 0x400;
  v59 = (v44 >> 1) & 0x1000;
  v60 = (v44 & 0x10) != 0 ? 4 : 0;
  if ( (v44 & 0x10) == 0 )
  {
    LODWORD(v61) = 0;
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_87;
  }
  if ( v45 )
  {
    v62 = *((unsigned int *)v11 + 3);
    if ( !(_DWORD)v62 )
    {
      LODWORD(v61) = 0;
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_87;
    }
    v61 = (char *)v11 + v62;
  }
  else
  {
    v61 = (char *)v11[3];
  }
  *(_QWORD *)GrantedAccess = v61;
LABEL_87:
  if ( !v214 )
    goto LABEL_93;
  v63 = *(_WORD *)(v214 + 2);
  if ( (v63 & 0x10) == 0 )
    goto LABEL_93;
  if ( v63 >= 0 )
  {
    v65 = *(_QWORD *)(v214 + 24);
    goto LABEL_94;
  }
  v64 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v64 )
  {
LABEL_93:
    v65 = 0LL;
    goto LABEL_94;
  }
  v65 = v214 + v64;
LABEL_94:
  v190 = v60 | v57 | v58 | v59;
  if ( v190 || v65 )
  {
    v66 = (ACE_HEADER)200;
    v67 = 0;
    v183.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v68 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v66, 0x63416553u);
      P = v68;
      if ( !v68 )
        goto LABEL_411;
      LOBYTE(AceType) = v185;
      ServerAcl = RtlpInheritAcl2(
                    v65,
                    (int)v61,
                    v190,
                    a6,
                    AceType,
                    v184,
                    *(int *)&v198[4],
                    (__int64)v200,
                    v207,
                    (__int64)v205,
                    GenericMapping,
                    2,
                    v217,
                    a5,
                    &v183,
                    v68,
                    (__int64)&AccessMode,
                    (__int64)&v194);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v183.Header )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
LABEL_105:
        if ( ServerAcl >= 0 )
        {
          v69 = v206;
          LOBYTE(v183.AccessMask) = 1;
          Header = v201.Header;
          v71 = (4 * (v194 & 4)) | (4 * (v194 & 8)) | (2 * (v194 & 0x400)) | (2 * (v194 & 0x1000)) | 0x8010;
          goto LABEL_120;
        }
        if ( ServerAcl != -2147483637 )
          goto LABEL_412;
        goto LABEL_108;
      }
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_105;
      if ( (unsigned int)++v67 >= 2 )
        goto LABEL_105;
      v66 = v183.Header;
      LODWORD(v61) = GrantedAccess[0];
    }
  }
  LOBYTE(AccessMode) = 0;
  P = 0LL;
  v194 = *(_DWORD *)&v201.Header != 0 ? 0x400 : 0;
LABEL_108:
  v69 = v206;
  Header = v201.Header;
  v72 = (ACE_HEADER)0x8000;
  v73 = *((_WORD *)v206 + 1);
  if ( v201.Header )
    v72 = (ACE_HEADER)34816;
  v183.Header = v72;
  if ( (v73 & 0x30) == 0x30 )
  {
    if ( (v73 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_119;
    }
    if ( v73 < 0 )
    {
      v74 = *((unsigned int *)v206 + 3);
      if ( !(_DWORD)v74 )
      {
        P = 0LL;
        goto LABEL_119;
      }
      v75 = (char *)v206 + v74;
    }
    else
    {
      v75 = (char *)v206[3];
    }
    P = v75;
LABEL_119:
    LOBYTE(AccessMode) = 1;
    v71 = v73 & 0x2000 | 0x10 | *(_DWORD *)&v72;
LABEL_120:
    v183.Header = (ACE_HEADER)v71;
  }
  v185 = AccessStatus != 0;
  v76 = Header == 0;
  v77 = *((unsigned __int16 *)v69 + 1);
  v184 = !v76;
  if ( (v77 & 0x10) == 0 )
  {
    *(_QWORD *)GrantedAccess = 0LL;
    goto LABEL_129;
  }
  if ( (v77 & 0x8000) != 0 )
  {
    v78 = *((unsigned int *)v69 + 3);
    if ( !(_DWORD)v78 )
    {
      *(_QWORD *)GrantedAccess = 0LL;
      goto LABEL_129;
    }
    v79 = (char *)v69 + v78;
  }
  else
  {
    v79 = (char *)v69[3];
  }
  *(_QWORD *)GrantedAccess = v79;
LABEL_129:
  if ( !v214 )
    goto LABEL_135;
  v80 = *(_WORD *)(v214 + 2);
  if ( (v80 & 0x10) == 0 )
    goto LABEL_135;
  if ( (v80 & 0x8000) == 0 )
  {
    v82 = *(_QWORD *)(v214 + 24);
    goto LABEL_136;
  }
  v81 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v81 )
  {
LABEL_135:
    v82 = 0LL;
    goto LABEL_136;
  }
  v82 = v214 + v81;
LABEL_136:
  v83 = ((v77 & 0x10) != 0 ? 4 : 0) | ((unsigned __int8)v77 >> 2) & 8 | (v77 >> 1) & 0x400;
  v190 = v83;
  if ( v83 || v82 )
  {
    v84 = 200;
    v85 = 0;
    *(_DWORD *)v198 = 200;
    while ( 1 )
    {
      v86 = (ACL *)ExAllocatePoolWithTag(PagedPool, v84, 0x63416553u);
      v199 = v86;
      if ( !v86 )
        goto LABEL_411;
      LOBYTE(AceType) = v184;
      ServerAcl = RtlpInheritAcl2(
                    v82,
                    GrantedAccess[0],
                    v83,
                    a6,
                    AceType,
                    v185,
                    *(int *)&v198[4],
                    (__int64)v200,
                    v207,
                    (__int64)v205,
                    GenericMapping,
                    2,
                    v217,
                    a5,
                    (PACE)v198,
                    v86,
                    (__int64)&v186,
                    (__int64)&Size);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)v198 )
        {
          ExFreePoolWithTag(v199, 0);
          v199 = 0LL;
        }
LABEL_147:
        v190 = ServerAcl;
        if ( ServerAcl >= 0 )
        {
          v69 = v206;
          HIBYTE(v189) = 1;
          goto LABEL_149;
        }
        if ( ServerAcl == -2147483637 )
        {
          v69 = v206;
          goto LABEL_154;
        }
        goto LABEL_412;
      }
      ExFreePoolWithTag(v199, 0);
      v199 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_147;
      if ( (unsigned int)++v85 >= 2 )
        goto LABEL_147;
      v84 = *(_DWORD *)v198;
      v83 = v190;
    }
  }
  v199 = 0LL;
  v190 = -2147483637;
LABEL_154:
  v89 = *((_WORD *)v69 + 1);
  if ( (v89 & 0x30) == 0x30 )
  {
    if ( (v89 & 0x10) != 0 )
    {
      if ( v89 < 0 )
      {
        v90 = *((unsigned int *)v69 + 3);
        if ( (_DWORD)v90 )
          v199 = (char *)v69 + v90;
        else
          v199 = 0LL;
      }
      else
      {
        v199 = (PVOID)v69[3];
      }
    }
    else
    {
      v199 = 0LL;
    }
  }
LABEL_149:
  Index = 0;
  do
  {
    v87 = *((_WORD *)v69 + 1);
    if ( (v87 & 0x10) != 0 )
    {
      if ( v87 < 0 )
      {
        v91 = *((unsigned int *)v69 + 3);
        if ( (_DWORD)v91 )
          v88 = (ACL *)((char *)v69 + v91);
        else
          v88 = 0LL;
      }
      else
      {
        v88 = (ACL *)v69[3];
      }
    }
    else
    {
      v88 = 0LL;
    }
    AceByType = (char *)RtlFindAceByType(v88, 0x14u, &Index);
    v94 = ProcessTrustLabelSid;
    v95 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(ProcessTrustLabelSid, AceByType + 8, v93, &v190) )
    {
      goto LABEL_335;
    }
    ++Index;
  }
  while ( v95 );
  *(_DWORD *)v198 = 4;
  if ( (a7 & 0x800) != 0 )
  {
    Index = 0;
    while ( 1 )
    {
      v96 = *((_WORD *)v69 + 1);
      if ( (v96 & 0x10) != 0 )
      {
        if ( v96 >= 0 )
        {
          v97 = (ACL *)v69[3];
        }
        else
        {
          v98 = *((unsigned int *)v69 + 3);
          v97 = (_DWORD)v98 ? (ACL *)((char *)v69 + v98) : 0LL;
        }
      }
      else
      {
        v97 = 0LL;
      }
      v99 = RtlFindAceByType(v97, 0x14u, &Index);
      ++Index;
      if ( !v99 )
        break;
      if ( (*((_BYTE *)v99 + 1) & 8) == 0 )
      {
        v100 = v99[1];
        v101 = *((unsigned __int8 *)v99 + 1);
        ProcessTrustLabelSid = v99 + 2;
        if ( !v221 || (v100 & *(_DWORD *)(v221 + 4)) != v100 || v99 == (_DWORD *)-8LL )
        {
          ServerAcl = -1073741811;
          goto LABEL_412;
        }
        goto LABEL_190;
      }
    }
    if ( !v94 )
      goto LABEL_194;
    if ( !v221 )
    {
      ServerAcl = -1073741811;
      goto LABEL_412;
    }
    v100 = *(_DWORD *)(v221 + 4);
    v101 = 0;
LABEL_190:
    ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2u, v101, ProcessTrustLabelSid, 0x14u, v100);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v102 = v206;
    ServerAcl = RtlpComputeMergedAcl(
                  (int)v199,
                  ((unsigned __int8)*((_WORD *)v206 + 1) >> 2) & 4 | (*((unsigned __int16 *)v206 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)v206 + 1) >> 2) & 8u,
                  (int)&Acl,
                  4,
                  *(__int64 *)&v198[4],
                  (__int64)v200,
                  (__int64)GenericMapping,
                  2,
                  (__int64)&v220,
                  (__int64)&v194);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    BYTE2(v189) = 1;
  }
  else
  {
LABEL_194:
    v102 = v206;
    v220 = v199;
  }
  v103 = 0LL;
  v104 = 1;
  v105 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v105 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v105 |= 4u;
  if ( v105 )
  {
    v109 = 0LL;
LABEL_210:
    v111 = 0;
    goto LABEL_211;
  }
  v106 = *((_WORD *)v102 + 1);
  if ( (v106 & 0x10) != 0 )
  {
    if ( v106 >= 0 )
    {
      v103 = (ACL *)v102[3];
    }
    else
    {
      v107 = *((unsigned int *)v102 + 3);
      if ( (_DWORD)v107 )
        v103 = (ACL *)((char *)v102 + v107);
    }
  }
  v108 = RtlFindAceByType(v103, 0x11u, 0LL);
  v218 = v108;
  v109 = v108;
  if ( !v108 )
    goto LABEL_210;
  v105 = v108[1];
  v110 = (char *)(v108 + 2);
  v111 = *((_BYTE *)v108 + 1);
  *(_QWORD *)MandatoryFlags = v110;
  v182 = v111;
  if ( v111 == 8 || (v111 & 0x10) != 0 )
  {
    v111 = 0;
    v218 = 0LL;
    v182 = 0;
    v109 = 0LL;
    *(_QWORD *)MandatoryFlags = 0LL;
    v105 = 0;
  }
LABEL_211:
  if ( (v111 & 8) != 0 && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    ServerAcl = -1073740730;
    goto LABEL_412;
  }
  if ( !v105 )
  {
    if ( !Src || *RtlSubAuthoritySid(Src, 0) >= 0x2000 )
      goto LABEL_222;
    v105 = 1;
  }
  if ( !v109 )
  {
    if ( !SubjectSecurityContext )
    {
      ServerAcl = -1073741700;
      goto LABEL_412;
    }
    v112 = Src;
    LOBYTE(v104) = 0;
    *(_QWORD *)MandatoryFlags = Src;
    goto LABEL_223;
  }
LABEL_222:
  v104 = v182;
  v112 = *(void **)MandatoryFlags;
LABEL_223:
  if ( v112 )
  {
    LODWORD(AccessMask) = v105;
    memset(v227, 0, sizeof(v227));
    v227[0] = (ACL)8388610LL;
    ServerAcl = RtlAddMandatoryAce(v227, v104, (unsigned __int8)v104, (ULONG)v112, AceType, AccessMask);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v113 = v227;
  }
  else
  {
    v113 = 0LL;
    v210 = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v114 = 4;
  }
  else
  {
    if ( v218 || !v113 )
      v114 = ((unsigned __int8)*((_WORD *)v102 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)v102 + 1) >> 2) & 8 | (*((unsigned __int16 *)v102 + 1) >> 1) & 0x1400;
    else
      v114 = 0;
    *(_DWORD *)v198 = v114;
  }
  if ( !v214 )
    goto LABEL_240;
  v115 = *(_WORD *)(v214 + 2);
  if ( (v115 & 0x10) == 0 )
    goto LABEL_240;
  if ( v115 >= 0 )
  {
    v117 = *(void **)(v214 + 24);
    goto LABEL_241;
  }
  v116 = *(unsigned int *)(v214 + 12);
  if ( !(_DWORD)v116 )
  {
LABEL_240:
    v117 = 0LL;
    goto LABEL_241;
  }
  v117 = (void *)(v214 + v116);
LABEL_241:
  ProcessTrustLabelSid = v117;
  if ( v114 || v117 )
  {
    v118 = (ACE_HEADER)200;
    v119 = 0;
    v212.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v120 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v118, 0x63416553u);
      v121 = v120;
      if ( !v120 )
        break;
      LOBYTE(AceType) = 1;
      ServerAcl = RtlpInheritAcl2(
                    (int)v117,
                    (int)v210,
                    *(int *)v198,
                    a6,
                    AceType,
                    0,
                    *(int *)&v198[4],
                    (__int64)v200,
                    v207,
                    (__int64)v205,
                    GenericMapping,
                    3,
                    v217,
                    a5,
                    &v212,
                    v120,
                    (__int64)&v186 + 1,
                    (__int64)&v194);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v212.Header )
        {
          ExFreePoolWithTag(v121, 0);
          v121 = 0LL;
        }
LABEL_251:
        if ( ServerAcl == -2147483637 )
          goto LABEL_252;
        if ( ServerAcl >= 0 )
        {
          v122 = v194;
          goto LABEL_255;
        }
        goto LABEL_412;
      }
      ExFreePoolWithTag(v121, 0);
      v121 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_251;
      if ( (unsigned int)++v119 >= 2 )
        goto LABEL_251;
      v118 = v212.Header;
      LODWORD(v117) = (_DWORD)ProcessTrustLabelSid;
    }
LABEL_411:
    ServerAcl = -1073741801;
    goto LABEL_412;
  }
LABEL_252:
  v121 = v210;
  v122 = 0;
  v194 = 0;
LABEL_255:
  ServerAcl = RtlpCombineAcls(
                (_DWORD)P,
                (_DWORD)v121,
                (_DWORD)v199,
                (_DWORD)v199,
                (__int64)v220,
                (__int64)&v223,
                (__int64)&v195);
  v190 = ((*(_WORD *)&v183.Header.AceType & 0x2000) << 17) | v195;
  if ( v121 && v121 != v210 )
    ExFreePoolWithTag(v121, 0);
  if ( ServerAcl < 0 )
    goto LABEL_412;
  v123 = v223;
  if ( v223 )
  {
    if ( LOBYTE(v183.AccessMask) && P )
      ExFreePoolWithTag(P, 0);
    P = v123;
    BYTE1(v189) = 1;
    *(_DWORD *)&v183.Header |= (4 * (v122 & 4)) | (4 * (v122 & 8)) | (2 * (v122 & 0x400)) | (2 * (v122 & 0x1000)) | 0x10;
  }
  else
  {
    v123 = (ACL *)P;
  }
  v195 = a7 & 8;
  if ( (a7 & 8) == 0 )
  {
    v124 = (char *)RtlFindAceByType(v123, 0x11u, 0LL);
    v125 = v124 ? v124 + 8 : *(char **)MandatoryFlags;
    if ( v125 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_412;
      }
      ServerAcl = RtlSidDominates(Src, v125, &v187);
      if ( ServerAcl < 0 )
        goto LABEL_412;
      v126 = (unsigned __int8)v211;
      if ( !v187 )
        v126 = 1;
      v211 = v126;
    }
  }
  v127 = v206;
  HIBYTE(v186) = AccessStatus != 0;
  AccessStatus = a7 & 1;
  LOBYTE(v186) = AccessStatus != 0;
  v128 = *((_WORD *)v206 + 1);
  if ( (v128 & 4) == 0 )
  {
    LODWORD(v129) = 0;
    v210 = 0LL;
    goto LABEL_284;
  }
  if ( v128 < 0 )
  {
    v130 = *((unsigned int *)v206 + 4);
    if ( !(_DWORD)v130 )
    {
      LODWORD(v129) = 0;
      v210 = 0LL;
      goto LABEL_284;
    }
    v129 = (char *)v206 + v130;
  }
  else
  {
    v129 = (char *)v206[4];
  }
  v210 = v129;
LABEL_284:
  if ( !v214 )
    goto LABEL_290;
  v131 = *(_WORD *)(v214 + 2);
  if ( (v131 & 4) == 0 )
    goto LABEL_290;
  if ( (v131 & 0x8000) == 0 )
  {
    v133 = *(_QWORD *)(v214 + 32);
    goto LABEL_291;
  }
  v132 = *(unsigned int *)(v214 + 16);
  if ( !(_DWORD)v132 )
  {
LABEL_290:
    v133 = 0LL;
    goto LABEL_291;
  }
  v133 = v214 + v132;
LABEL_291:
  LODWORD(Size) = v128 & 0x140C;
  if ( (v128 & 0x140C) != 0 || v133 )
  {
    v136 = (ACE_HEADER)200;
    v137 = 0;
    v201.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v138 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v136, 0x63416553u);
      v181 = v138;
      if ( !v138 )
      {
        ServerAcl = -1073741801;
        v156 = 0LL;
        goto LABEL_413;
      }
      LOBYTE(AceTypea) = v186;
      ServerAcl = RtlpInheritAcl2(
                    v133,
                    (int)v129,
                    Size,
                    a6,
                    AceTypea,
                    SHIBYTE(v186),
                    *(int *)&v198[4],
                    (__int64)v200,
                    v207,
                    (__int64)v205,
                    GenericMapping,
                    1,
                    v217,
                    a5,
                    &v201,
                    v138,
                    (__int64)&v183.AccessMask + 2,
                    (__int64)&v194);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v181, 0);
      v181 = 0LL;
      v135 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_303;
      if ( (unsigned int)++v137 >= 2 )
        goto LABEL_303;
      v136 = v201.Header;
      LODWORD(v129) = (_DWORD)v210;
    }
    if ( v201.Header )
    {
      v135 = (char *)v181;
    }
    else
    {
      ExFreePoolWithTag(v181, 0);
      v135 = 0LL;
      v181 = 0LL;
    }
LABEL_303:
    if ( ServerAcl >= 0 )
    {
      v134 = BYTE2(v183.AccessMask);
      v139 = AccessStatus;
      v140 = v194 & 0x1408 | 4 | *(_DWORD *)&v183.Header;
      BYTE1(v183.AccessMask) = 1;
      goto LABEL_320;
    }
    if ( ServerAcl == -2147483637 )
    {
      v134 = BYTE2(v183.AccessMask);
      v127 = v206;
      goto LABEL_307;
    }
    goto LABEL_412;
  }
  v134 = 0;
  v181 = 0LL;
  v135 = 0LL;
LABEL_307:
  v139 = AccessStatus;
  v141 = (int)v183.Header;
  if ( AccessStatus )
  {
    v141 = *(_DWORD *)&v183.Header | 0x400;
    *(_DWORD *)&v183.Header |= 0x400u;
  }
  v142 = *((_WORD *)v127 + 1);
  if ( (v142 & 0xC) == 0xC )
  {
    if ( (v142 & 4) != 0 )
    {
      if ( v142 >= 0 )
      {
        v135 = (char *)v127[4];
      }
      else
      {
        v143 = *((unsigned int *)v127 + 4);
        if ( (_DWORD)v143 )
          v135 = (char *)v127 + v143;
        else
          v135 = 0LL;
      }
    }
    else
    {
      v135 = 0LL;
    }
    v181 = v135;
    v134 = 1;
    v140 = v142 & 0x1000 | 4 | v141;
  }
  else
  {
    if ( !v203 )
      goto LABEL_321;
    v135 = v203;
    v181 = v203;
    v140 = v141 | 4;
  }
LABEL_320:
  v183.Header = (ACE_HEADER)v140;
LABEL_321:
  v144 = SubjectSecurityContext;
  if ( (a7 & 0x1000) == 0 && v188 && SubjectSecurityContext && v214 )
  {
    GrantedAccess[0] = 0;
    AccessStatus = 0;
    ServerAcl = RtlpNewSecurityObject(
                  v214,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v217,
                  a5,
                  a6,
                  a7 | 1u,
                  (__int64)SubjectSecurityContext,
                  (__int64)GenericMapping,
                  v221);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v145 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v145 & 4) != 0 )
    {
      if ( v145 >= 0 )
      {
        v146 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v147 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v147 )
          v146 = (char *)SecurityDescriptor + v147;
        else
          v146 = 0LL;
      }
    }
    else
    {
      v146 = 0LL;
    }
    v148 = RtlpOwnerAcesPresent(0x10u, (__int64)v146);
    v149 = HIBYTE(AccessMode);
    v144 = SubjectSecurityContext;
    if ( v148 )
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
LABEL_335:
        ServerAcl = -1073741790;
        goto LABEL_412;
      }
      v135 = (char *)v181;
      v144 = SubjectSecurityContext;
    }
    else
    {
      v135 = (char *)v181;
    }
  }
  else
  {
    v149 = HIBYTE(AccessMode);
  }
  if ( v139 && !v135 )
    *(_DWORD *)&v183.Header |= 0x1000u;
  v150 = !v190 || (v190 & 0xB0) != v190;
  if ( v149 != 1 )
    goto LABEL_372;
  v151 = v195;
  if ( (_BYTE)AccessMode && !v195 && v150 )
  {
    if ( !v144 )
    {
      ServerAcl = -1073741700;
      goto LABEL_412;
    }
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v152 = SePrivilegeCheck(&RequiredPrivileges, v144, 1);
    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)SubjectSecurityContext, (int *)&RequiredPrivileges, v152);
    if ( !v152 )
    {
      ServerAcl = -1073741727;
      goto LABEL_412;
    }
  }
  if ( (_BYTE)v211 )
  {
    v76 = v151 == 0;
    v153 = (__int64 *)SubjectSecurityContext;
    if ( v76 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_412;
      }
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Luid = SeRelabelPrivilege;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      v154 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
      SePrivilegedServiceAuditAlarm(0LL, v153, (int *)&RequiredPrivileges, v154);
      if ( !v154 )
      {
        ServerAcl = -1073741727;
        goto LABEL_412;
      }
    }
  }
  else
  {
    v153 = (__int64 *)SubjectSecurityContext;
  }
  v155 = v180;
  if ( HIBYTE(v183.AccessMask)
    && (a7 & 0x10) == 0
    && !(unsigned __int8)SepValidOwnerSubjectContext(v153, *(_QWORD *)&v198[4], v180) )
  {
    ServerAcl = -1073741734;
    goto LABEL_412;
  }
  if ( !v134 || !v155 )
  {
LABEL_372:
    v157 = (unsigned __int16 *)v181;
    goto LABEL_373;
  }
  v156 = v181;
  ServerAcl = RtlpCreateServerAcl((_DWORD)v181, LOBYTE(v212.AccessMask), v207, (unsigned int)&v219, (__int64)&v189);
  if ( ServerAcl >= 0 )
  {
    if ( BYTE1(v183.AccessMask) && v156 )
      ExFreePoolWithTag(v156, 0);
    v157 = (unsigned __int16 *)v219;
    v181 = v219;
    v219 = 0LL;
LABEL_373:
    v158 = 4 * *(unsigned __int8 *)(*(_QWORD *)&v198[4] + 1LL) + 11;
    LODWORD(Size) = 4 * *(unsigned __int8 *)(*(_QWORD *)&v198[4] + 1LL) + 8;
    v159 = v158 & 0xFFFFFFFC;
    v190 = v159;
    if ( v200 )
    {
      AccessStatus = 4 * *((unsigned __int8 *)v200 + 1) + 8;
      v160 = (AccessStatus + 3) & 0xFFFFFFFC;
    }
    else
    {
      AccessStatus = 0;
      v160 = 0;
    }
    v195 = v160;
    v212.AccessMask = v183.Header.AceType & 0x10;
    if ( (v183.Header.AceType & 0x10) != 0 && P )
      v161 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
    else
      v161 = 0;
    GrantedAccess[0] = v183.Header.AceType & 4;
    if ( (v183.Header.AceType & 4) != 0 && v157 )
      v162 = (v157[1] + 3) & 0xFFFFFFFC;
    else
      v162 = 0;
    v163 = ExAllocatePoolWithTag(PagedPool, v160 + v162 + v161 + v159 + 20, 0x64536553u);
    v216 = v163;
    v164 = v163;
    if ( !v163 )
    {
      ServerAcl = -1073741670;
      goto LABEL_412;
    }
    v165 = (char *)(v163 + 5);
    *(_QWORD *)v163 = 0LL;
    *((_QWORD *)v163 + 1) = 0LL;
    v163[4] = 0;
    *((_WORD *)v163 + 1) |= *(_WORD *)&v183.Header.AceType;
    v76 = v212.AccessMask == 0;
    *(_BYTE *)v163 = 1;
    if ( !v76 )
    {
      v166 = (int)P;
      if ( !P )
      {
        v164[3] = 0;
        goto LABEL_394;
      }
      memmove(v165, P, *((unsigned __int16 *)P + 1));
      if ( !LOBYTE(v183.AccessMask) )
        RtlpApplyAclToObject(v165, GenericMapping);
      v164 = v216;
      v216[3] = (_DWORD)v165 - (_DWORD)v216;
      v167 = *((unsigned __int16 *)P + 1);
      if ( v161 > (unsigned int)v167 )
      {
        memset(&v165[v167], 0, v161 - (unsigned int)v167);
        v164 = v216;
      }
      v165 += v161;
    }
    v166 = 0;
LABEL_394:
    if ( GrantedAccess[0] )
    {
      v168 = (unsigned __int16 *)v181;
      if ( v181 )
      {
        memmove(v165, v181, *((unsigned __int16 *)v181 + 1));
        if ( !BYTE1(v183.AccessMask) )
          RtlpApplyAclToObject(v165, GenericMapping);
        v216[4] = (_DWORD)v165 - (_DWORD)v216;
        v169 = v168[1];
        if ( v162 > (unsigned int)v169 )
          memset(&v165[v169], 0, v162 - (unsigned int)v169);
        v165 += v162;
      }
      else
      {
        v164[4] = v166;
      }
    }
    v170 = (unsigned int)Size;
    memmove(v165, *(const void **)&v198[4], (unsigned int)Size);
    v171 = (unsigned int)v190;
    if ( v190 > (unsigned int)v170 )
      memset(&v165[v170], 0, (unsigned int)(v190 - v170));
    v172 = (_DWORD)v165 - (_DWORD)v216;
    v173 = &v165[v171];
    v216[1] = v172;
    if ( v200 )
    {
      v174 = (unsigned int)AccessStatus;
      memmove(v173, v200, (unsigned int)AccessStatus);
      if ( v195 > (unsigned int)v174 )
        memset(&v173[v174], 0, v195 - (unsigned int)v174);
      v216[2] = (_DWORD)v173 - (_DWORD)v216;
    }
    ServerAcl = 0;
    goto LABEL_412;
  }
LABEL_413:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( (_BYTE)v189 && v219 )
    ExFreePoolWithTag(v219, 0);
  if ( v222 )
    ExFreePoolWithTag(v222, 0);
  if ( (LOBYTE(v183.AccessMask) || BYTE1(v189)) && P )
    ExFreePoolWithTag(P, 0);
  if ( HIBYTE(v189) && v199 )
    ExFreePoolWithTag(v199, 0);
  if ( v220 && BYTE2(v189) )
    ExFreePoolWithTag(v220, 0);
  if ( BYTE1(v183.AccessMask) )
  {
    if ( v156 )
      ExFreePoolWithTag(v156, 0);
  }
  *v224 = v216;
  return (unsigned int)ServerAcl;
}
