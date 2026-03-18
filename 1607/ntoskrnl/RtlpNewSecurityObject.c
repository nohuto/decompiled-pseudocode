/*
 * XREFs of RtlpNewSecurityObject @ 0x14041BF40
 * Callers:
 *     SeAssignSecurityEx2 @ 0x140012F90 (SeAssignSecurityEx2.c)
 *     SeAssignSecurity @ 0x1403FCC68 (SeAssignSecurity.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D6F8 (RtlSubAuthoritySid.c)
 *     RtlFindAceByType @ 0x140012AA0 (RtlFindAceByType.c)
 *     SepLocateTokenTrustLevel @ 0x140012F20 (SepLocateTokenTrustLevel.c)
 *     SepLocateTokenIntegrity @ 0x140012F6C (SepLocateTokenIntegrity.c)
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     RtlSidDominates @ 0x1400760C0 (RtlSidDominates.c)
 *     RtlpOwnerAcesPresent @ 0x14008DB10 (RtlpOwnerAcesPresent.c)
 *     RtlpValidTrustSubjectContext @ 0x140130970 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041537C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140415490 (SePrivilegeCheck.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x14041DCB0 (RtlpInheritAcl2.c)
 *     RtlpApplyAclToObject @ 0x14041E180 (RtlpApplyAclToObject.c)
 *     RtlpCombineAcls @ 0x14041E240 (RtlpCombineAcls.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x140420B10 (RtlAddMandatoryAce.c)
 *     SeUnlockSubjectContext @ 0x14044DC10 (SeUnlockSubjectContext.c)
 *     SepValidOwnerSubjectContext @ 0x1404A2B30 (SepValidOwnerSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x140553AB8 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x140683EF8 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140684304 (RtlpCreateServerAcl.c)
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
  int ServerAcl; // edi
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
  __int64 v88; // rcx
  __int16 v89; // cx
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int8 *AceByType; // rax
  __int64 v93; // r8
  void *v94; // rsi
  unsigned __int8 *v95; // rdi
  __int16 v96; // ax
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int8 *v99; // rax
  int v100; // ebx
  _QWORD *v101; // rsi
  __int64 v102; // rcx
  ULONG v103; // edx
  int v104; // ebx
  __int16 v105; // ax
  __int64 v106; // rax
  unsigned __int8 *v107; // rax
  unsigned __int8 *v108; // rdi
  unsigned __int8 *v109; // rcx
  unsigned __int8 v110; // al
  void *v111; // r9
  ACL *v112; // rcx
  int v113; // ecx
  __int16 v114; // ax
  __int64 v115; // rax
  void *v116; // rdi
  ACE_HEADER v117; // eax
  int v118; // esi
  ACL *v119; // rax
  PVOID v120; // rbx
  __int16 v121; // si
  PVOID v122; // rdi
  unsigned __int8 *v123; // rax
  char *v124; // rax
  int v125; // eax
  _QWORD *v126; // rdx
  __int16 v127; // cx
  char *v128; // rdi
  __int64 v129; // rax
  __int16 v130; // ax
  __int64 v131; // rax
  __int64 v132; // rsi
  char v133; // bl
  char *v134; // r8
  ACE_HEADER v135; // eax
  int v136; // ebx
  ACL *v137; // rax
  NTSTATUS v138; // esi
  int v139; // edi
  int v140; // edi
  __int16 v141; // cx
  __int64 v142; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v143; // rdx
  __int16 v144; // cx
  char *v145; // rdx
  __int64 v146; // rcx
  char v147; // al
  char v148; // di
  bool v149; // al
  unsigned int v150; // esi
  BOOLEAN v151; // di
  __int64 *v152; // rsi
  BOOLEAN v153; // di
  unsigned __int8 v154; // di
  PVOID v155; // rbx
  unsigned __int16 *v156; // rdi
  int v157; // edx
  unsigned int v158; // edx
  unsigned int v159; // ecx
  unsigned int v160; // ebx
  unsigned int v161; // esi
  _DWORD *v162; // rax
  _DWORD *v163; // rdx
  char *v164; // rdi
  int v165; // eax
  __int64 v166; // rcx
  unsigned __int16 *v167; // rbx
  __int64 v168; // rcx
  __int64 v169; // rsi
  __int64 v170; // rbx
  int v171; // eax
  char *v172; // rdi
  __int64 v173; // rbx
  __int64 AceType; // [rsp+20h] [rbp-F0h]
  __int64 AceTypea; // [rsp+20h] [rbp-F0h]
  PSID LabelSid; // [rsp+28h] [rbp-E8h]
  __int16 AccessMode; // [rsp+90h] [rbp-80h] BYREF
  unsigned __int8 v179; // [rsp+92h] [rbp-7Eh]
  PVOID v180; // [rsp+98h] [rbp-78h]
  unsigned __int8 v181; // [rsp+A0h] [rbp-70h]
  struct _ACE v182; // [rsp+A4h] [rbp-6Ch] BYREF
  char v183; // [rsp+ACh] [rbp-64h]
  char v184; // [rsp+ADh] [rbp-63h]
  __int16 v185; // [rsp+AEh] [rbp-62h] BYREF
  char v186; // [rsp+B0h] [rbp-60h] BYREF
  char v187; // [rsp+B1h] [rbp-5Fh]
  int v188; // [rsp+B2h] [rbp-5Eh] BYREF
  int v189; // [rsp+B8h] [rbp-58h] BYREF
  NTSTATUS AccessStatus; // [rsp+BCh] [rbp-54h] BYREF
  PVOID P; // [rsp+C0h] [rbp-50h]
  void *v192; // [rsp+C8h] [rbp-48h]
  int v193; // [rsp+D0h] [rbp-40h] BYREF
  unsigned int v194; // [rsp+D4h] [rbp-3Ch] BYREF
  PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+D8h] [rbp-38h]
  unsigned int v196; // [rsp+E0h] [rbp-30h] BYREF
  _BYTE v197[12]; // [rsp+E4h] [rbp-2Ch] BYREF
  PVOID v198; // [rsp+F0h] [rbp-20h]
  void *v199; // [rsp+F8h] [rbp-18h]
  struct _ACE v200; // [rsp+100h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess[2]; // [rsp+108h] [rbp-8h] BYREF
  char *v202; // [rsp+110h] [rbp+0h]
  size_t Size; // [rsp+118h] [rbp+8h] BYREF
  void *v204; // [rsp+120h] [rbp+10h]
  _QWORD *v205; // [rsp+128h] [rbp+18h]
  __int64 v206; // [rsp+130h] [rbp+20h]
  PGENERIC_MAPPING GenericMapping; // [rsp+138h] [rbp+28h]
  void *Src; // [rsp+140h] [rbp+30h]
  PVOID v209; // [rsp+148h] [rbp+38h]
  int v210; // [rsp+150h] [rbp+40h]
  struct _ACE v211; // [rsp+154h] [rbp+44h] BYREF
  ULONG MandatoryFlags[2]; // [rsp+160h] [rbp+50h]
  __int64 v213; // [rsp+168h] [rbp+58h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+170h] [rbp+60h] BYREF
  _DWORD *v215; // [rsp+178h] [rbp+68h]
  __int64 v216; // [rsp+180h] [rbp+70h]
  unsigned __int8 *v217; // [rsp+188h] [rbp+78h]
  PVOID v218; // [rsp+190h] [rbp+80h] BYREF
  PVOID v219; // [rsp+198h] [rbp+88h] BYREF
  __int64 v220; // [rsp+1A0h] [rbp+90h]
  PVOID v221; // [rsp+1A8h] [rbp+98h]
  void *v222; // [rsp+1B0h] [rbp+A0h] BYREF
  _QWORD *v223; // [rsp+1B8h] [rbp+A8h]
  _QWORD v224[5]; // [rsp+1C0h] [rbp+B0h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+1E8h] [rbp+D8h] BYREF
  ACL v226[16]; // [rsp+200h] [rbp+F0h] BYREF
  ACL Acl; // [rsp+280h] [rbp+170h] BYREF

  v10 = a8;
  v11 = a2;
  GenericMapping = a9;
  v12 = 0LL;
  v13 = 0LL;
  v220 = a10;
  v223 = a3;
  v14 = a1;
  v209 = v226;
  v216 = a4;
  v15 = 0LL;
  v205 = a2;
  v213 = a1;
  v16 = 0LL;
  P = 0LL;
  v198 = 0LL;
  v182.AccessMask = 0;
  v194 = 0;
  v180 = 0LL;
  v218 = 0LL;
  AccessMode = 256;
  v185 = 0;
  LOBYTE(v210) = 0;
  v188 = 0;
  Src = 0LL;
  v192 = 0LL;
  v206 = 0LL;
  v204 = 0LL;
  v202 = 0LL;
  v215 = 0LL;
  LODWORD(Size) = 0;
  v217 = 0LL;
  *(_QWORD *)MandatoryFlags = 0LL;
  v222 = 0LL;
  SecurityDescriptor = 0LL;
  v219 = 0LL;
  v17 = a7;
  SubjectSecurityContext = a8;
  v181 = 0;
  v186 = 1;
  v221 = 0LL;
  if ( (a7 & 0x2000) == 0 )
    HIBYTE(AccessMode) = KeGetCurrentThread()->PreviousMode;
  if ( a2 )
  {
    v187 = 1;
  }
  else
  {
    v187 = 0;
    v11 = v224;
    v224[0] = 1LL;
    memset(&v224[1], 0, 32);
    v205 = v224;
  }
  v18 = *((unsigned __int16 *)v11 + 1);
  v19 = (unsigned __int8)v18 >> 7;
  LOBYTE(v18) = (v18 & 0x40) != 0;
  v179 = v19;
  v211.AccessMask = v18;
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
  v199 = *(void **)(ClientToken + 184);
  v204 = *(void **)(*((_QWORD *)PrimaryToken + 19) + 16 * v25);
  TokenIntegrity = (PSID *)SepLocateTokenIntegrity(ClientToken);
  if ( TokenIntegrity )
    v29 = *TokenIntegrity;
  else
    v29 = SepDefaultMandatorySid;
  v192 = v29;
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
  if ( v199 )
    v35 = *((unsigned __int16 *)v199 + 1);
  else
    v35 = 0;
  PoolWithTag = ExAllocatePoolWithTag(
                  PagedPool,
                  v32
                + v33
                + v34
                + 24
                + v35
                + 4 * (*((unsigned __int8 *)v192 + 1) + *((unsigned __int8 *)v204 + 1) + *((unsigned __int8 *)Src + 1)),
                  0x64536553u);
  v221 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SeUnlockSubjectContext(SubjectSecurityContext);
    return 3221225626LL;
  }
  *(_QWORD *)&v197[4] = PoolWithTag;
  memmove(PoolWithTag, Src, 4 * *((unsigned __int8 *)Src + 1) + 8);
  v37 = *((unsigned __int8 *)v192 + 1);
  Src = (char *)v221 + 4 * *((unsigned __int8 *)Src + 1) + 8;
  memmove(Src, v192, 4 * v37 + 8);
  v38 = (char *)Src + 4 * *((unsigned __int8 *)v192 + 1) + 8;
  v202 = v38;
  if ( v31 )
  {
    v39 = v31[1];
    v192 = v38;
    memmove(v38, v31, 4 * v39 + 8);
    v38 = &v202[4 * v31[1] + 8];
    v202 = v38;
  }
  else
  {
    v192 = 0LL;
  }
  if ( v23 )
  {
    v40 = v23[1];
    v206 = (__int64)v38;
    memmove(v38, v23, 4 * v40 + 8);
    v41 = v23[1];
    v12 = v206;
    v38 = &v202[4 * v41 + 8];
    v202 = v38;
  }
  else
  {
    v12 = 0LL;
  }
  v206 = (__int64)v38;
  memmove(v38, v204, 4 * *((unsigned __int8 *)v204 + 1) + 8);
  v42 = &v202[4 * *((unsigned __int8 *)v204 + 1) + 8];
  v202 = v42;
  if ( v26 )
  {
    v43 = v26[1];
    v204 = v42;
    memmove(v42, v26, 4 * v43 + 8);
    v42 += 4 * v26[1] + 8;
    v202 = v42;
  }
  else
  {
    v204 = 0LL;
  }
  if ( v199 )
    memmove(v42, v199, *((unsigned __int16 *)v199 + 1));
  else
    v202 = 0LL;
  ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->PrimaryToken + 6));
  KeLeaveCriticalRegion();
  if ( SubjectSecurityContext->ClientToken )
  {
    ExReleaseResourceLite(*((PERESOURCE *)SubjectSecurityContext->ClientToken + 6));
    KeLeaveCriticalRegion();
  }
  v17 = a7;
  v13 = v206;
  v15 = v204;
  v14 = v213;
  v11 = v205;
  v16 = *(_QWORD *)&v197[4];
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
  *(_QWORD *)&v197[4] = v47;
  if ( v47 )
  {
    v48 = v179;
    HIBYTE(v182.AccessMask) = 1;
    goto LABEL_49;
  }
LABEL_52:
  if ( (v17 & 0x20) != 0 )
  {
    if ( !v14 )
    {
      ServerAcl = -1073741734;
LABEL_412:
      v155 = v180;
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
    *(_QWORD *)&v197[4] = v53;
    HIBYTE(v182.AccessMask) = 1;
    if ( !v53 )
      goto LABEL_60;
    v48 = v179;
  }
  else
  {
    v54 = v16;
    v48 = v179;
    if ( v179 )
      v54 = v13;
    *(_QWORD *)&v197[4] = v54;
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
    v199 = v50;
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
  v199 = v56;
  if ( !v56 )
    goto LABEL_78;
LABEL_79:
  AccessStatus = v17 & 4;
  v183 = AccessStatus != 0;
  v200.Header = (ACE_HEADER)(v17 & 2);
  v184 = *(_DWORD *)&v200.Header != 0;
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
  if ( !v213 )
    goto LABEL_93;
  v63 = *(_WORD *)(v213 + 2);
  if ( (v63 & 0x10) == 0 )
    goto LABEL_93;
  if ( v63 >= 0 )
  {
    v65 = *(_QWORD *)(v213 + 24);
    goto LABEL_94;
  }
  v64 = *(unsigned int *)(v213 + 12);
  if ( !(_DWORD)v64 )
  {
LABEL_93:
    v65 = 0LL;
    goto LABEL_94;
  }
  v65 = v213 + v64;
LABEL_94:
  v189 = v60 | v57 | v58 | v59;
  if ( v189 || v65 )
  {
    v66 = (ACE_HEADER)200;
    v67 = 0;
    v182.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v68 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v66, 0x63416553u);
      P = v68;
      if ( !v68 )
        goto LABEL_411;
      LOBYTE(AceType) = v184;
      ServerAcl = RtlpInheritAcl2(
                    v65,
                    (int)v61,
                    v189,
                    a6,
                    AceType,
                    v183,
                    *(int *)&v197[4],
                    (__int64)v199,
                    v206,
                    (__int64)v204,
                    GenericMapping,
                    2,
                    v216,
                    a5,
                    &v182,
                    v68,
                    (__int64)&AccessMode,
                    (__int64)&v193);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v182.Header )
        {
          ExFreePoolWithTag(P, 0);
          P = 0LL;
        }
LABEL_105:
        if ( ServerAcl >= 0 )
        {
          v69 = v205;
          LOBYTE(v182.AccessMask) = 1;
          Header = v200.Header;
          v71 = (4 * (v193 & 4)) | (4 * (v193 & 8)) | (2 * (v193 & 0x400)) | (2 * (v193 & 0x1000)) | 0x8010;
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
      v66 = v182.Header;
      LODWORD(v61) = GrantedAccess[0];
    }
  }
  LOBYTE(AccessMode) = 0;
  P = 0LL;
  v193 = *(_DWORD *)&v200.Header != 0 ? 0x400 : 0;
LABEL_108:
  v69 = v205;
  Header = v200.Header;
  v72 = (ACE_HEADER)0x8000;
  v73 = *((_WORD *)v205 + 1);
  if ( v200.Header )
    v72 = (ACE_HEADER)34816;
  v182.Header = v72;
  if ( (v73 & 0x30) == 0x30 )
  {
    if ( (v73 & 0x10) == 0 )
    {
      P = 0LL;
      goto LABEL_119;
    }
    if ( v73 < 0 )
    {
      v74 = *((unsigned int *)v205 + 3);
      if ( !(_DWORD)v74 )
      {
        P = 0LL;
        goto LABEL_119;
      }
      v75 = (char *)v205 + v74;
    }
    else
    {
      v75 = (char *)v205[3];
    }
    P = v75;
LABEL_119:
    LOBYTE(AccessMode) = 1;
    v71 = v73 & 0x2000 | 0x10 | *(_DWORD *)&v72;
LABEL_120:
    v182.Header = (ACE_HEADER)v71;
  }
  v184 = AccessStatus != 0;
  v76 = Header == 0;
  v77 = *((unsigned __int16 *)v69 + 1);
  v183 = !v76;
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
  if ( !v213 )
    goto LABEL_135;
  v80 = *(_WORD *)(v213 + 2);
  if ( (v80 & 0x10) == 0 )
    goto LABEL_135;
  if ( (v80 & 0x8000) == 0 )
  {
    v82 = *(_QWORD *)(v213 + 24);
    goto LABEL_136;
  }
  v81 = *(unsigned int *)(v213 + 12);
  if ( !(_DWORD)v81 )
  {
LABEL_135:
    v82 = 0LL;
    goto LABEL_136;
  }
  v82 = v213 + v81;
LABEL_136:
  v83 = ((v77 & 0x10) != 0 ? 4 : 0) | ((unsigned __int8)v77 >> 2) & 8 | (v77 >> 1) & 0x400;
  v189 = v83;
  if ( v83 || v82 )
  {
    v84 = 200;
    v85 = 0;
    *(_DWORD *)v197 = 200;
    while ( 1 )
    {
      v86 = (ACL *)ExAllocatePoolWithTag(PagedPool, v84, 0x63416553u);
      v198 = v86;
      if ( !v86 )
        goto LABEL_411;
      LOBYTE(AceType) = v183;
      ServerAcl = RtlpInheritAcl2(
                    v82,
                    GrantedAccess[0],
                    v83,
                    a6,
                    AceType,
                    v184,
                    *(int *)&v197[4],
                    (__int64)v199,
                    v206,
                    (__int64)v204,
                    GenericMapping,
                    2,
                    v216,
                    a5,
                    (PACE)v197,
                    v86,
                    (__int64)&v185,
                    (__int64)&Size);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)v197 )
        {
          ExFreePoolWithTag(v198, 0);
          v198 = 0LL;
        }
LABEL_147:
        v189 = ServerAcl;
        if ( ServerAcl >= 0 )
        {
          v69 = v205;
          HIBYTE(v188) = 1;
          goto LABEL_149;
        }
        if ( ServerAcl == -2147483637 )
        {
          v69 = v205;
          goto LABEL_154;
        }
        goto LABEL_412;
      }
      ExFreePoolWithTag(v198, 0);
      v198 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_147;
      if ( (unsigned int)++v85 >= 2 )
        goto LABEL_147;
      v84 = *(_DWORD *)v197;
      v83 = v189;
    }
  }
  v198 = 0LL;
  v189 = -2147483637;
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
          v198 = (char *)v69 + v90;
        else
          v198 = 0LL;
      }
      else
      {
        v198 = (PVOID)v69[3];
      }
    }
    else
    {
      v198 = 0LL;
    }
  }
LABEL_149:
  v196 = 0;
  do
  {
    v87 = *((_WORD *)v69 + 1);
    if ( (v87 & 0x10) != 0 )
    {
      if ( v87 < 0 )
      {
        v91 = *((unsigned int *)v69 + 3);
        if ( (_DWORD)v91 )
          v88 = (__int64)v69 + v91;
        else
          v88 = 0LL;
      }
      else
      {
        v88 = v69[3];
      }
    }
    else
    {
      v88 = 0LL;
    }
    AceByType = RtlFindAceByType(v88, 20, &v196);
    v94 = v192;
    v95 = AceByType;
    if ( AceByType
      && AceByType != (unsigned __int8 *)-8LL
      && !RtlpValidTrustSubjectContext((__int64)v192, (__int64)(AceByType + 8), v93, &v189) )
    {
      goto LABEL_335;
    }
    ++v196;
  }
  while ( v95 );
  *(_DWORD *)v197 = 4;
  if ( (a7 & 0x800) != 0 )
  {
    v196 = 0;
    while ( 1 )
    {
      v96 = *((_WORD *)v69 + 1);
      if ( (v96 & 0x10) != 0 )
      {
        if ( v96 >= 0 )
        {
          v97 = v69[3];
        }
        else
        {
          v98 = *((unsigned int *)v69 + 3);
          v97 = (_DWORD)v98 ? (__int64)v69 + v98 : 0LL;
        }
      }
      else
      {
        v97 = 0LL;
      }
      v99 = RtlFindAceByType(v97, 20, &v196);
      ++v196;
      if ( !v99 )
        break;
      if ( (v99[1] & 8) == 0 )
      {
        v100 = *((_DWORD *)v99 + 1);
        v192 = v99 + 8;
        if ( !v220 || (v100 & *(_DWORD *)(v220 + 4)) != v100 || v99 == (unsigned __int8 *)-8LL )
        {
          ServerAcl = -1073741811;
          goto LABEL_412;
        }
        goto LABEL_190;
      }
    }
    if ( !v94 )
      goto LABEL_194;
    if ( !v220 )
    {
      ServerAcl = -1073741811;
      goto LABEL_412;
    }
    v100 = *(_DWORD *)(v220 + 4);
LABEL_190:
    ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 20, v100);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v101 = v205;
    ServerAcl = RtlpComputeMergedAcl(
                  (int)v198,
                  ((unsigned __int8)*((_WORD *)v205 + 1) >> 2) & 4 | (*((unsigned __int16 *)v205 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)v205 + 1) >> 2) & 8u,
                  (int)&Acl,
                  4,
                  *(__int64 *)&v197[4],
                  (__int64)v199,
                  (__int64)GenericMapping,
                  2,
                  (__int64)&v219,
                  (__int64)&v193);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    BYTE2(v188) = 1;
  }
  else
  {
LABEL_194:
    v101 = v205;
    v219 = v198;
  }
  v102 = 0LL;
  v103 = 1;
  v104 = (a7 & 0x100) != 0;
  if ( (a7 & 0x200) != 0 )
    v104 |= 2u;
  if ( (a7 & 0x400) != 0 )
    v104 |= 4u;
  if ( v104 )
  {
    v108 = 0LL;
LABEL_210:
    v110 = 0;
    goto LABEL_211;
  }
  v105 = *((_WORD *)v101 + 1);
  if ( (v105 & 0x10) != 0 )
  {
    if ( v105 >= 0 )
    {
      v102 = v101[3];
    }
    else
    {
      v106 = *((unsigned int *)v101 + 3);
      if ( (_DWORD)v106 )
        v102 = (__int64)v101 + v106;
    }
  }
  v107 = RtlFindAceByType(v102, 17, 0LL);
  v217 = v107;
  v108 = v107;
  if ( !v107 )
    goto LABEL_210;
  v104 = *((_DWORD *)v107 + 1);
  v109 = v107 + 8;
  v110 = v107[1];
  *(_QWORD *)MandatoryFlags = v109;
  v181 = v110;
  if ( v110 == 8 || (v110 & 0x10) != 0 )
  {
    v110 = 0;
    v217 = 0LL;
    v181 = 0;
    v108 = 0LL;
    *(_QWORD *)MandatoryFlags = 0LL;
    v104 = 0;
  }
LABEL_211:
  if ( (v110 & 8) != 0 && *RtlSubAuthoritySid(Src, 0) < 0x2000 )
  {
    ServerAcl = -1073740730;
    goto LABEL_412;
  }
  if ( !v104 )
  {
    if ( !Src || *RtlSubAuthoritySid(Src, 0) >= 0x2000 )
      goto LABEL_222;
    v104 = 1;
  }
  if ( !v108 )
  {
    if ( !SubjectSecurityContext )
    {
      ServerAcl = -1073741700;
      goto LABEL_412;
    }
    v111 = Src;
    LOBYTE(v103) = 0;
    *(_QWORD *)MandatoryFlags = Src;
    goto LABEL_223;
  }
LABEL_222:
  v103 = v181;
  v111 = *(void **)MandatoryFlags;
LABEL_223:
  if ( v111 )
  {
    LODWORD(LabelSid) = v104;
    memset(v226, 0, sizeof(v226));
    v226[0] = (ACL)8388610LL;
    ServerAcl = RtlAddMandatoryAce(v226, v103, (unsigned __int8)v103, (ULONG)v111, AceType, LabelSid);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v112 = v226;
  }
  else
  {
    v112 = 0LL;
    v209 = 0LL;
  }
  if ( (a7 & 0x700) != 0 )
  {
    v113 = 4;
  }
  else
  {
    if ( v217 || !v112 )
      v113 = ((unsigned __int8)*((_WORD *)v101 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)v101 + 1) >> 2) & 8 | (*((unsigned __int16 *)v101 + 1) >> 1) & 0x1400;
    else
      v113 = 0;
    *(_DWORD *)v197 = v113;
  }
  if ( !v213 )
    goto LABEL_240;
  v114 = *(_WORD *)(v213 + 2);
  if ( (v114 & 0x10) == 0 )
    goto LABEL_240;
  if ( v114 >= 0 )
  {
    v116 = *(void **)(v213 + 24);
    goto LABEL_241;
  }
  v115 = *(unsigned int *)(v213 + 12);
  if ( !(_DWORD)v115 )
  {
LABEL_240:
    v116 = 0LL;
    goto LABEL_241;
  }
  v116 = (void *)(v213 + v115);
LABEL_241:
  v192 = v116;
  if ( v113 || v116 )
  {
    v117 = (ACE_HEADER)200;
    v118 = 0;
    v211.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v119 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v117, 0x63416553u);
      v120 = v119;
      if ( !v119 )
        break;
      LOBYTE(AceType) = 1;
      ServerAcl = RtlpInheritAcl2(
                    (int)v116,
                    (int)v209,
                    *(int *)v197,
                    a6,
                    AceType,
                    0,
                    *(int *)&v197[4],
                    (__int64)v199,
                    v206,
                    (__int64)v204,
                    GenericMapping,
                    3,
                    v216,
                    a5,
                    &v211,
                    v119,
                    (__int64)&v185 + 1,
                    (__int64)&v193);
      if ( ServerAcl >= 0 )
      {
        if ( !*(_DWORD *)&v211.Header )
        {
          ExFreePoolWithTag(v120, 0);
          v120 = 0LL;
        }
LABEL_251:
        if ( ServerAcl == -2147483637 )
          goto LABEL_252;
        if ( ServerAcl >= 0 )
        {
          v121 = v193;
          goto LABEL_255;
        }
        goto LABEL_412;
      }
      ExFreePoolWithTag(v120, 0);
      v120 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_251;
      if ( (unsigned int)++v118 >= 2 )
        goto LABEL_251;
      v117 = v211.Header;
      LODWORD(v116) = (_DWORD)v192;
    }
LABEL_411:
    ServerAcl = -1073741801;
    goto LABEL_412;
  }
LABEL_252:
  v120 = v209;
  v121 = 0;
  v193 = 0;
LABEL_255:
  ServerAcl = RtlpCombineAcls(
                (_DWORD)P,
                (_DWORD)v120,
                (_DWORD)v198,
                (_DWORD)v198,
                (__int64)v219,
                (__int64)&v222,
                (__int64)&v194);
  v189 = ((*(_WORD *)&v182.Header.AceType & 0x2000) << 17) | v194;
  if ( v120 && v120 != v209 )
    ExFreePoolWithTag(v120, 0);
  if ( ServerAcl < 0 )
    goto LABEL_412;
  v122 = v222;
  if ( v222 )
  {
    if ( LOBYTE(v182.AccessMask) && P )
      ExFreePoolWithTag(P, 0);
    P = v122;
    BYTE1(v188) = 1;
    *(_DWORD *)&v182.Header |= (4 * (v121 & 4)) | (4 * (v121 & 8)) | (2 * (v121 & 0x400)) | (2 * (v121 & 0x1000)) | 0x10;
  }
  else
  {
    v122 = P;
  }
  v194 = a7 & 8;
  if ( (a7 & 8) == 0 )
  {
    v123 = RtlFindAceByType((__int64)v122, 17, 0LL);
    v124 = v123 ? (char *)(v123 + 8) : *(char **)MandatoryFlags;
    if ( v124 )
    {
      if ( !SubjectSecurityContext )
      {
        ServerAcl = -1073741700;
        goto LABEL_412;
      }
      ServerAcl = RtlSidDominates((char *)Src, v124, (bool *)&v186);
      if ( ServerAcl < 0 )
        goto LABEL_412;
      v125 = (unsigned __int8)v210;
      if ( !v186 )
        v125 = 1;
      v210 = v125;
    }
  }
  v126 = v205;
  HIBYTE(v185) = AccessStatus != 0;
  AccessStatus = a7 & 1;
  LOBYTE(v185) = AccessStatus != 0;
  v127 = *((_WORD *)v205 + 1);
  if ( (v127 & 4) == 0 )
  {
    LODWORD(v128) = 0;
    v209 = 0LL;
    goto LABEL_284;
  }
  if ( v127 < 0 )
  {
    v129 = *((unsigned int *)v205 + 4);
    if ( !(_DWORD)v129 )
    {
      LODWORD(v128) = 0;
      v209 = 0LL;
      goto LABEL_284;
    }
    v128 = (char *)v205 + v129;
  }
  else
  {
    v128 = (char *)v205[4];
  }
  v209 = v128;
LABEL_284:
  if ( !v213 )
    goto LABEL_290;
  v130 = *(_WORD *)(v213 + 2);
  if ( (v130 & 4) == 0 )
    goto LABEL_290;
  if ( (v130 & 0x8000) == 0 )
  {
    v132 = *(_QWORD *)(v213 + 32);
    goto LABEL_291;
  }
  v131 = *(unsigned int *)(v213 + 16);
  if ( !(_DWORD)v131 )
  {
LABEL_290:
    v132 = 0LL;
    goto LABEL_291;
  }
  v132 = v213 + v131;
LABEL_291:
  LODWORD(Size) = v127 & 0x140C;
  if ( (v127 & 0x140C) != 0 || v132 )
  {
    v135 = (ACE_HEADER)200;
    v136 = 0;
    v200.Header = (ACE_HEADER)200;
    while ( 1 )
    {
      v137 = (ACL *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)&v135, 0x63416553u);
      v180 = v137;
      if ( !v137 )
      {
        ServerAcl = -1073741801;
        v155 = 0LL;
        goto LABEL_413;
      }
      LOBYTE(AceTypea) = v185;
      ServerAcl = RtlpInheritAcl2(
                    v132,
                    (int)v128,
                    Size,
                    a6,
                    AceTypea,
                    SHIBYTE(v185),
                    *(int *)&v197[4],
                    (__int64)v199,
                    v206,
                    (__int64)v204,
                    GenericMapping,
                    1,
                    v216,
                    a5,
                    &v200,
                    v137,
                    (__int64)&v182.AccessMask + 2,
                    (__int64)&v193);
      if ( ServerAcl >= 0 )
        break;
      ExFreePoolWithTag(v180, 0);
      v180 = 0LL;
      v134 = 0LL;
      if ( ServerAcl != -1073741789 )
        goto LABEL_303;
      if ( (unsigned int)++v136 >= 2 )
        goto LABEL_303;
      v135 = v200.Header;
      LODWORD(v128) = (_DWORD)v209;
    }
    if ( v200.Header )
    {
      v134 = (char *)v180;
    }
    else
    {
      ExFreePoolWithTag(v180, 0);
      v134 = 0LL;
      v180 = 0LL;
    }
LABEL_303:
    if ( ServerAcl >= 0 )
    {
      v133 = BYTE2(v182.AccessMask);
      v138 = AccessStatus;
      v139 = v193 & 0x1408 | 4 | *(_DWORD *)&v182.Header;
      BYTE1(v182.AccessMask) = 1;
      goto LABEL_320;
    }
    if ( ServerAcl == -2147483637 )
    {
      v133 = BYTE2(v182.AccessMask);
      v126 = v205;
      goto LABEL_307;
    }
    goto LABEL_412;
  }
  v133 = 0;
  v180 = 0LL;
  v134 = 0LL;
LABEL_307:
  v138 = AccessStatus;
  v140 = (int)v182.Header;
  if ( AccessStatus )
  {
    v140 = *(_DWORD *)&v182.Header | 0x400;
    *(_DWORD *)&v182.Header |= 0x400u;
  }
  v141 = *((_WORD *)v126 + 1);
  if ( (v141 & 0xC) == 0xC )
  {
    if ( (v141 & 4) != 0 )
    {
      if ( v141 >= 0 )
      {
        v134 = (char *)v126[4];
      }
      else
      {
        v142 = *((unsigned int *)v126 + 4);
        if ( (_DWORD)v142 )
          v134 = (char *)v126 + v142;
        else
          v134 = 0LL;
      }
    }
    else
    {
      v134 = 0LL;
    }
    v180 = v134;
    v133 = 1;
    v139 = v141 & 0x1000 | 4 | v140;
  }
  else
  {
    if ( !v202 )
      goto LABEL_321;
    v134 = v202;
    v180 = v202;
    v139 = v140 | 4;
  }
LABEL_320:
  v182.Header = (ACE_HEADER)v139;
LABEL_321:
  v143 = SubjectSecurityContext;
  if ( (a7 & 0x1000) == 0 && v187 && SubjectSecurityContext && v213 )
  {
    GrantedAccess[0] = 0;
    AccessStatus = 0;
    ServerAcl = RtlpNewSecurityObject(
                  v213,
                  0,
                  (unsigned int)&SecurityDescriptor,
                  v216,
                  a5,
                  a6,
                  a7 | 1u,
                  (__int64)SubjectSecurityContext,
                  (__int64)GenericMapping,
                  v220);
    if ( ServerAcl < 0 )
      goto LABEL_412;
    v144 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v144 & 4) != 0 )
    {
      if ( v144 >= 0 )
      {
        v145 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v146 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v146 )
          v145 = (char *)SecurityDescriptor + v146;
        else
          v145 = 0LL;
      }
    }
    else
    {
      v145 = 0LL;
    }
    v147 = RtlpOwnerAcesPresent(0x10u, (__int64)v145);
    v148 = HIBYTE(AccessMode);
    v143 = SubjectSecurityContext;
    if ( v147 )
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
      v134 = (char *)v180;
      v143 = SubjectSecurityContext;
    }
    else
    {
      v134 = (char *)v180;
    }
  }
  else
  {
    v148 = HIBYTE(AccessMode);
  }
  if ( v138 && !v134 )
    *(_DWORD *)&v182.Header |= 0x1000u;
  v149 = !v189 || (v189 & 0xB0) != v189;
  if ( v148 != 1 )
    goto LABEL_372;
  v150 = v194;
  if ( (_BYTE)AccessMode && !v194 && v149 )
  {
    if ( !v143 )
    {
      ServerAcl = -1073741700;
      goto LABEL_412;
    }
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v151 = SePrivilegeCheck(&RequiredPrivileges, v143, 1);
    SePrivilegedServiceAuditAlarm(0LL, (__int64 *)SubjectSecurityContext, (int *)&RequiredPrivileges, v151);
    if ( !v151 )
    {
      ServerAcl = -1073741727;
      goto LABEL_412;
    }
  }
  if ( (_BYTE)v210 )
  {
    v76 = v150 == 0;
    v152 = (__int64 *)SubjectSecurityContext;
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
      v153 = SePrivilegeCheck(&RequiredPrivileges, SubjectSecurityContext, 1);
      SePrivilegedServiceAuditAlarm(0LL, v152, (int *)&RequiredPrivileges, v153);
      if ( !v153 )
      {
        ServerAcl = -1073741727;
        goto LABEL_412;
      }
    }
  }
  else
  {
    v152 = (__int64 *)SubjectSecurityContext;
  }
  v154 = v179;
  if ( HIBYTE(v182.AccessMask)
    && (a7 & 0x10) == 0
    && !(unsigned __int8)SepValidOwnerSubjectContext(v152, *(_QWORD *)&v197[4], v179) )
  {
    ServerAcl = -1073741734;
    goto LABEL_412;
  }
  if ( !v133 || !v154 )
  {
LABEL_372:
    v156 = (unsigned __int16 *)v180;
    goto LABEL_373;
  }
  v155 = v180;
  ServerAcl = RtlpCreateServerAcl((_DWORD)v180, LOBYTE(v211.AccessMask), v206, (unsigned int)&v218, (__int64)&v188);
  if ( ServerAcl >= 0 )
  {
    if ( BYTE1(v182.AccessMask) && v155 )
      ExFreePoolWithTag(v155, 0);
    v156 = (unsigned __int16 *)v218;
    v180 = v218;
    v218 = 0LL;
LABEL_373:
    v157 = 4 * *(unsigned __int8 *)(*(_QWORD *)&v197[4] + 1LL) + 11;
    LODWORD(Size) = 4 * *(unsigned __int8 *)(*(_QWORD *)&v197[4] + 1LL) + 8;
    v158 = v157 & 0xFFFFFFFC;
    v189 = v158;
    if ( v199 )
    {
      AccessStatus = 4 * *((unsigned __int8 *)v199 + 1) + 8;
      v159 = (AccessStatus + 3) & 0xFFFFFFFC;
    }
    else
    {
      AccessStatus = 0;
      v159 = 0;
    }
    v194 = v159;
    v211.AccessMask = v182.Header.AceType & 0x10;
    if ( (v182.Header.AceType & 0x10) != 0 && P )
      v160 = (*((unsigned __int16 *)P + 1) + 3) & 0xFFFFFFFC;
    else
      v160 = 0;
    GrantedAccess[0] = v182.Header.AceType & 4;
    if ( (v182.Header.AceType & 4) != 0 && v156 )
      v161 = (v156[1] + 3) & 0xFFFFFFFC;
    else
      v161 = 0;
    v162 = ExAllocatePoolWithTag(PagedPool, v159 + v161 + v160 + v158 + 20, 0x64536553u);
    v215 = v162;
    v163 = v162;
    if ( !v162 )
    {
      ServerAcl = -1073741670;
      goto LABEL_412;
    }
    v164 = (char *)(v162 + 5);
    *(_QWORD *)v162 = 0LL;
    *((_QWORD *)v162 + 1) = 0LL;
    v162[4] = 0;
    *((_WORD *)v162 + 1) |= *(_WORD *)&v182.Header.AceType;
    v76 = v211.AccessMask == 0;
    *(_BYTE *)v162 = 1;
    if ( !v76 )
    {
      v165 = (int)P;
      if ( !P )
      {
        v163[3] = 0;
        goto LABEL_394;
      }
      memmove(v164, P, *((unsigned __int16 *)P + 1));
      if ( !LOBYTE(v182.AccessMask) )
        RtlpApplyAclToObject(v164, GenericMapping);
      v163 = v215;
      v215[3] = (_DWORD)v164 - (_DWORD)v215;
      v166 = *((unsigned __int16 *)P + 1);
      if ( v160 > (unsigned int)v166 )
      {
        memset(&v164[v166], 0, v160 - (unsigned int)v166);
        v163 = v215;
      }
      v164 += v160;
    }
    v165 = 0;
LABEL_394:
    if ( GrantedAccess[0] )
    {
      v167 = (unsigned __int16 *)v180;
      if ( v180 )
      {
        memmove(v164, v180, *((unsigned __int16 *)v180 + 1));
        if ( !BYTE1(v182.AccessMask) )
          RtlpApplyAclToObject(v164, GenericMapping);
        v215[4] = (_DWORD)v164 - (_DWORD)v215;
        v168 = v167[1];
        if ( v161 > (unsigned int)v168 )
          memset(&v164[v168], 0, v161 - (unsigned int)v168);
        v164 += v161;
      }
      else
      {
        v163[4] = v165;
      }
    }
    v169 = (unsigned int)Size;
    memmove(v164, *(const void **)&v197[4], (unsigned int)Size);
    v170 = (unsigned int)v189;
    if ( v189 > (unsigned int)v169 )
      memset(&v164[v169], 0, (unsigned int)(v189 - v169));
    v171 = (_DWORD)v164 - (_DWORD)v215;
    v172 = &v164[v170];
    v215[1] = v171;
    if ( v199 )
    {
      v173 = (unsigned int)AccessStatus;
      memmove(v172, v199, (unsigned int)AccessStatus);
      if ( v194 > (unsigned int)v173 )
        memset(&v172[v173], 0, v194 - (unsigned int)v173);
      v215[2] = (_DWORD)v172 - (_DWORD)v215;
    }
    ServerAcl = 0;
    goto LABEL_412;
  }
LABEL_413:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  if ( (_BYTE)v188 && v218 )
    ExFreePoolWithTag(v218, 0);
  if ( v221 )
    ExFreePoolWithTag(v221, 0);
  if ( (LOBYTE(v182.AccessMask) || BYTE1(v188)) && P )
    ExFreePoolWithTag(P, 0);
  if ( HIBYTE(v188) && v198 )
    ExFreePoolWithTag(v198, 0);
  if ( v219 && BYTE2(v188) )
    ExFreePoolWithTag(v219, 0);
  if ( BYTE1(v182.AccessMask) )
  {
    if ( v155 )
      ExFreePoolWithTag(v155, 0);
  }
  *v223 = v215;
  return (unsigned int)ServerAcl;
}
