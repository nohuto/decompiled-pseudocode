/*
 * XREFs of RtlpNewSecurityObject @ 0x18005E688
 * Callers:
 *     RtlNewSecurityObject @ 0x18005D1A0 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18005E330 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008B430 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x180003344 (RtlpValidTrustSubjectContext.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSidDominates @ 0x18005DA90 (RtlSidDominates.c)
 *     RtlpApplyAclToObject @ 0x18005DB84 (RtlpApplyAclToObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005DC30 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18005FDD0 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180060370 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x180061000 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800614F4 (RtlpGetDefaultsSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x180061E30 (RtlCreateSecurityDescriptor.c)
 *     RtlpOwnerAcesPresent @ 0x180061EE0 (RtlpOwnerAcesPresent.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlpComputeMergedAcl @ 0x18008BA0C (RtlpComputeMergedAcl.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A50C0 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A5900 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7550 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800D83C4 (RtlpCreateServerAcl.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9,
        __int64 a10)
{
  void *v11; // rbx
  void *v12; // rdi
  NTSTATUS result; // eax
  ULONG v14; // eax
  unsigned __int8 v15; // r11
  char v16; // r11
  __int64 v17; // r10
  _BYTE *v18; // rcx
  unsigned __int16 v19; // r8
  __int16 v20; // dx
  __int64 v21; // rax
  _BYTE *v22; // rcx
  NTSTATUS v23; // ebx
  _BYTE *v24; // rdi
  PVOID v25; // rsi
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  unsigned int v29; // r9d
  ULONG v30; // edi
  bool v31; // bl
  __int16 v32; // cx
  unsigned int v33; // eax
  int v34; // r10d
  int v35; // r8d
  int v36; // eax
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // eax
  unsigned __int16 v42; // dx
  int v43; // eax
  int v44; // r9d
  int v45; // r10d
  __int64 v46; // rdx
  __int16 v47; // cx
  int v48; // edx
  __int64 v49; // rcx
  int v50; // eax
  ACL *v51; // rcx
  _BYTE *v52; // rax
  char *AceByType; // rbx
  __int64 v54; // r8
  int v55; // r9d
  void *v56; // rdx
  ACL *v57; // rcx
  _DWORD *v58; // rax
  ACCESS_MASK v59; // edi
  ACCESS_MASK v60; // edi
  ACL *v61; // rcx
  ACCESS_MASK *v62; // rax
  char v63; // cl
  PSID v64; // rdx
  ACL *v65; // rdi
  int v66; // r10d
  __int64 v67; // rcx
  int v68; // eax
  PVOID v69; // rdx
  __int16 v70; // di
  int v71; // r9d
  void *v72; // rbx
  char *v73; // rax
  char *v74; // rax
  int v75; // eax
  __int16 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  int v80; // edx
  __int16 v81; // cx
  _BYTE *v82; // rax
  int v83; // edx
  HANDLE v84; // r9
  GENERIC_MAPPING *v85; // rsi
  char *v86; // rdx
  HANDLE v87; // rdx
  bool v88; // al
  ULONG v89; // esi
  bool v90; // zf
  HANDLE v91; // rsi
  char v92; // bl
  unsigned __int8 *v93; // rsi
  PVOID v94; // rdi
  int v95; // r9d
  ACCESS_MASK v96; // r9d
  unsigned __int32 v97; // r8d
  __int16 v98; // bx
  unsigned int v99; // esi
  unsigned int v100; // ecx
  _DWORD *Heap; // rax
  _DWORD *v102; // rdx
  char *v103; // rbx
  unsigned __int16 *v104; // rdi
  __int64 v105; // rcx
  unsigned __int16 *v106; // rdi
  __int64 v107; // rcx
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdi
  int v111; // eax
  char *v112; // rbx
  __int64 v113; // rdi
  int ReturnLength; // [rsp+20h] [rbp-F0h]
  int ReturnLengtha; // [rsp+20h] [rbp-F0h]
  int ReturnLengthb; // [rsp+20h] [rbp-F0h]
  int ReturnLengthc; // [rsp+20h] [rbp-F0h]
  int AccessMask; // [rsp+28h] [rbp-E8h]
  NTSTATUS ServerAcl; // [rsp+90h] [rbp-80h] BYREF
  __int16 v120; // [rsp+94h] [rbp-7Ch] BYREF
  char v121; // [rsp+96h] [rbp-7Ah]
  __int16 v122; // [rsp+97h] [rbp-79h]
  ULONG Index; // [rsp+9Ch] [rbp-74h] BYREF
  BOOLEAN Result; // [rsp+A0h] [rbp-70h] BYREF
  char v125; // [rsp+A1h] [rbp-6Fh]
  int v126; // [rsp+A4h] [rbp-6Ch]
  __int64 v127; // [rsp+A8h] [rbp-68h] BYREF
  PVOID Src; // [rsp+B0h] [rbp-60h]
  char v129; // [rsp+B8h] [rbp-58h] BYREF
  char v130; // [rsp+B9h] [rbp-57h]
  char v131; // [rsp+BAh] [rbp-56h]
  char v132; // [rsp+BBh] [rbp-55h]
  char v133; // [rsp+BCh] [rbp-54h]
  BOOLEAN Dominates[3]; // [rsp+BDh] [rbp-53h] BYREF
  unsigned int v135; // [rsp+C0h] [rbp-50h] BYREF
  NTSTATUS AccessStatus; // [rsp+C4h] [rbp-4Ch] BYREF
  PVOID v137; // [rsp+C8h] [rbp-48h] BYREF
  char v138; // [rsp+D0h] [rbp-40h] BYREF
  int v139; // [rsp+D4h] [rbp-3Ch] BYREF
  __int64 v140; // [rsp+D8h] [rbp-38h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+E0h] [rbp-30h]
  void *v142; // [rsp+E8h] [rbp-28h]
  PVOID v143; // [rsp+F0h] [rbp-20h] BYREF
  unsigned int v144; // [rsp+F8h] [rbp-18h]
  void *v145; // [rsp+100h] [rbp-10h]
  int v146[2]; // [rsp+108h] [rbp-8h]
  PVOID v147; // [rsp+110h] [rbp+0h] BYREF
  ULONG v148; // [rsp+118h] [rbp+8h] BYREF
  __int64 v149; // [rsp+120h] [rbp+10h]
  __int64 v150; // [rsp+128h] [rbp+18h]
  PGENERIC_MAPPING GenericMapping; // [rsp+130h] [rbp+20h]
  __int64 v152; // [rsp+138h] [rbp+28h]
  PSID Sid; // [rsp+140h] [rbp+30h]
  int v154; // [rsp+148h] [rbp+38h] BYREF
  int v155; // [rsp+14Ch] [rbp+3Ch]
  ACCESS_MASK GrantedAccess; // [rsp+150h] [rbp+40h] BYREF
  _DWORD *v157; // [rsp+158h] [rbp+48h]
  NTSTATUS v158; // [rsp+160h] [rbp+50h] BYREF
  ULONG PrivilegeSetLength; // [rsp+164h] [rbp+54h] BYREF
  __int64 v160; // [rsp+168h] [rbp+58h]
  PVOID HeapHandle; // [rsp+170h] [rbp+60h]
  PVOID v162; // [rsp+178h] [rbp+68h] BYREF
  PVOID BaseAddress; // [rsp+180h] [rbp+70h] BYREF
  PVOID v164; // [rsp+188h] [rbp+78h] BYREF
  PSID ProcessTrustLabelSid; // [rsp+190h] [rbp+80h]
  ACCESS_MASK *v166; // [rsp+198h] [rbp+88h]
  PSID Sid1; // [rsp+1A0h] [rbp+90h]
  PVOID v168; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 v169; // [rsp+1B0h] [rbp+A0h]
  PVOID v170; // [rsp+1B8h] [rbp+A8h] BYREF
  PVOID v171; // [rsp+1C0h] [rbp+B0h] BYREF
  PVOID v172; // [rsp+1C8h] [rbp+B8h] BYREF
  PVOID v173; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v174; // [rsp+1D8h] [rbp+C8h]
  HANDLE NewTokenHandle; // [rsp+1E0h] [rbp+D0h] BYREF
  PVOID v176; // [rsp+1E8h] [rbp+D8h]
  PVOID v177; // [rsp+1F0h] [rbp+E0h] BYREF
  void *v178; // [rsp+1F8h] [rbp+E8h] BYREF
  __int64 v179; // [rsp+200h] [rbp+F0h]
  ACL *v180; // [rsp+208h] [rbp+F8h]
  _QWORD *v181; // [rsp+210h] [rbp+100h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+218h] [rbp+108h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+248h] [rbp+138h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+270h] [rbp+160h] BYREF
  _DWORD v185[2]; // [rsp+288h] [rbp+178h] BYREF
  __int16 v186; // [rsp+290h] [rbp+180h]
  char TokenInformation[24]; // [rsp+298h] [rbp+188h] BYREF
  unsigned int v188; // [rsp+2B0h] [rbp+1A0h]
  int v189; // [rsp+2B4h] [rbp+1A4h]
  ACL Acl; // [rsp+2D0h] [rbp+1C0h] BYREF
  ACL v191; // [rsp+330h] [rbp+220h] BYREF

  GenericMapping = a9;
  v169 = a10;
  v181 = a3;
  BaseAddress = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v146 = a1;
  v180 = &v191;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v160 = a4;
  ExistingTokenHandle = TokenHandle;
  v179 = 0LL;
  v137 = 0LL;
  v147 = 0LL;
  v131 = 0;
  v132 = 0;
  v135 = 0;
  v143 = 0LL;
  v164 = 0LL;
  v122 = 0;
  v125 = 0;
  v120 = 0;
  v138 = 0;
  LOBYTE(v140) = 0;
  LOBYTE(v127) = 0;
  LOBYTE(v155) = 0;
  v129 = 0;
  Sid1 = 0LL;
  ProcessTrustLabelSid = 0LL;
  v150 = 0LL;
  v152 = 0LL;
  v149 = 0LL;
  v157 = 0LL;
  v154 = 0;
  v166 = 0LL;
  Sid = 0LL;
  v162 = 0LL;
  v178 = 0LL;
  Dominates[0] = 1;
  v168 = 0LL;
  v130 = 0;
  LOBYTE(v144) = 1;
  v174 = 0LL;
  v176 = 0LL;
  v170 = 0LL;
  v177 = 0LL;
  v172 = 0LL;
  v171 = 0LL;
  v173 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &v148);
    if ( result < 0 )
      return result;
    v144 = v188;
    if ( v188 == 2 && v189 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v133 = 1;
  }
  else
  {
    v133 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v14 = *((unsigned __int16 *)a2 + 1);
  v15 = v14;
  LOBYTE(v14) = (v14 & 0x40) != 0;
  v16 = v15 >> 7;
  v148 = v14;
  v121 = v16;
  if ( ExistingTokenHandle || v16 )
  {
    result = RtlpGetDefaultsSubjectContext(
               ExistingTokenHandle,
               (ULONG)&v170,
               (__int64)&v171,
               (__int64)&v177,
               (__int64)&v172,
               (ULONG)&v173);
    LODWORD(v18) = 0;
    if ( result < 0 )
      return result;
    v11 = *(void **)v174;
    v12 = *(void **)v176;
    v149 = *(_QWORD *)v170;
    Sid1 = *(PSID *)v177;
    ProcessTrustLabelSid = *(PSID *)v172;
    if ( v171 )
      v150 = *(_QWORD *)v171;
    else
      v150 = 0LL;
    v16 = v121;
    if ( v173 )
    {
      v17 = *(_QWORD *)v173;
      v152 = *(_QWORD *)v173;
    }
    else
    {
      v17 = 0LL;
      v152 = 0LL;
    }
  }
  else
  {
    v17 = 0LL;
    LODWORD(v18) = 0;
  }
  v19 = *((_WORD *)a2 + 1);
  v20 = v19 & 0x8000;
  if ( (v19 & 0x8000u) == 0 )
  {
    v18 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_29;
    v18 = &a2[*((unsigned int *)a2 + 1)];
  }
  v142 = v18;
  if ( v18 )
  {
    v125 = 1;
LABEL_25:
    v21 = *(_QWORD *)v146;
    goto LABEL_26;
  }
LABEL_29:
  if ( (a7 & 0x20) != 0 )
  {
    v21 = *(_QWORD *)v146;
    if ( !*(_QWORD *)v146 )
    {
LABEL_31:
      v23 = -1073741734;
      goto LABEL_32;
    }
    if ( *(__int16 *)(*(_QWORD *)v146 + 2LL) >= 0 )
    {
      v26 = *(void **)(*(_QWORD *)v146 + 8LL);
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)v146 + 4LL) == (_DWORD)v18 )
        goto LABEL_31;
      v26 = (void *)(*(_QWORD *)v146 + *(unsigned int *)(*(_QWORD *)v146 + 4LL));
    }
    v142 = v26;
    v125 = 1;
    if ( v26 )
    {
LABEL_26:
      if ( v20 )
      {
        if ( !*((_DWORD *)a2 + 2) )
          goto LABEL_70;
        v22 = &a2[*((unsigned int *)a2 + 2)];
      }
      else
      {
        v22 = (_BYTE *)*((_QWORD *)a2 + 2);
      }
      v145 = v22;
      if ( v22 )
      {
LABEL_80:
        v29 = v19;
        AccessStatus = a7 & 4;
        v30 = a7 & 2;
        Index = v30;
        v31 = v30 != 0;
        v32 = v19 & 0x10;
        v33 = (unsigned __int8)v19;
        v34 = v32 != 0 ? 4 : 0;
        v35 = (v19 >> 1) & 0x1000;
        v36 = (v33 >> 2) & 8;
        v37 = (v29 >> 1) & 0x400;
        if ( v32 == (_WORD)v179 )
          goto LABEL_81;
        if ( !v20 )
        {
          v38 = *((_QWORD *)a2 + 3);
          goto LABEL_86;
        }
        if ( !*((_DWORD *)a2 + 3) )
LABEL_81:
          LODWORD(v38) = 0;
        else
          LODWORD(v38) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_86:
        if ( *(_QWORD *)v146 && (*(_BYTE *)(*(_QWORD *)v146 + 2LL) & 0x10) != 0 )
        {
          v30 = Index;
          if ( *(__int16 *)(*(_QWORD *)v146 + 2LL) >= 0 )
          {
            v39 = *(_QWORD *)(*(_QWORD *)v146 + 24LL);
            goto LABEL_93;
          }
          if ( *(_DWORD *)(*(_QWORD *)v146 + 12LL) )
          {
            LODWORD(v39) = v146[0] + *(_DWORD *)(*(_QWORD *)v146 + 12LL);
            goto LABEL_93;
          }
        }
        LODWORD(v39) = 0;
LABEL_93:
        v40 = v37 | v35;
        LOBYTE(v37) = a6;
        LOBYTE(ReturnLength) = v31;
        v41 = RtlpInheritAcl(
                v39,
                v38,
                v34 | v36 | (unsigned int)v40,
                v37,
                ReturnLength,
                (a7 & 4) != 0,
                (int)v142,
                (__int64)v145,
                v150,
                v152,
                GenericMapping,
                2,
                v160,
                a5,
                (__int64)&v137,
                (__int64)&v120,
                &v139);
        ServerAcl = v41;
        v23 = v41;
        if ( v41 >= 0 )
        {
          HIBYTE(v122) = 1;
          v126 = (4 * (v139 & 4)) | (4 * (v139 & 8)) | (2 * (v139 & 0x400)) | (2 * (v139 & 0x1000)) | 0x8010;
LABEL_95:
          v24 = v137;
          Src = v137;
LABEL_96:
          v42 = *((_WORD *)a2 + 1);
          v43 = ((unsigned __int8)v42 >> 2) & 8;
          v44 = (v42 >> 1) & 0x400;
          v45 = (v42 & 0x10) != 0 ? 4 : 0;
          if ( (v42 & 0x10) == (_WORD)v179 )
            goto LABEL_97;
          if ( (v42 & 0x8000u) == 0 )
          {
            v46 = *((_QWORD *)a2 + 3);
            goto LABEL_114;
          }
          if ( !*((_DWORD *)a2 + 3) )
LABEL_97:
            LODWORD(v46) = 0;
          else
            LODWORD(v46) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
LABEL_114:
          if ( *(_QWORD *)v146 && (*(_BYTE *)(*(_QWORD *)v146 + 2LL) & 0x10) != 0 )
          {
            v24 = Src;
            if ( *(__int16 *)(*(_QWORD *)v146 + 2LL) >= 0 )
            {
              v49 = *(_QWORD *)(*(_QWORD *)v146 + 24LL);
              goto LABEL_121;
            }
            if ( *(_DWORD *)(*(_QWORD *)v146 + 12LL) )
            {
              LODWORD(v49) = v146[0] + *(_DWORD *)(*(_QWORD *)v146 + 12LL);
              goto LABEL_121;
            }
          }
          LODWORD(v49) = 0;
LABEL_121:
          LOBYTE(v44) = a6;
          LOBYTE(ReturnLengtha) = Index != 0;
          v50 = RtlpInheritAcl(
                  v49,
                  v46,
                  v45 & 0xFFFFEFFF | v43 & 0xFFFFEFFF | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400,
                  v44,
                  ReturnLengtha,
                  AccessStatus != 0,
                  (int)v142,
                  (__int64)v145,
                  v150,
                  v152,
                  GenericMapping,
                  2,
                  v160,
                  a5,
                  (__int64)&v147,
                  (__int64)&v138,
                  &v154);
          ServerAcl = v50;
          v23 = v50;
          if ( v50 >= 0 )
          {
            v131 = 1;
LABEL_123:
            Index = 0;
            while ( 1 )
            {
              if ( (a2[2] & 0x10) == 0 )
                goto LABEL_125;
              if ( (*((_WORD *)a2 + 1) & 0x8000) == 0 )
              {
                v51 = (ACL *)*((_QWORD *)a2 + 3);
                goto LABEL_139;
              }
              if ( *((_DWORD *)a2 + 3) )
                v51 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
              else
LABEL_125:
                v51 = 0LL;
LABEL_139:
              AceByType = (char *)RtlFindAceByType(v51, 0x14u, &Index);
              v56 = AceByType + 8;
              if ( !AceByType )
                v56 = 0LL;
              if ( v56 && !RtlpValidTrustSubjectContext(ProcessTrustLabelSid, v56, v54, &ServerAcl) )
              {
                v23 = -1073741790;
                goto LABEL_146;
              }
              ++Index;
              if ( !AceByType )
              {
                if ( (a7 & 0x800) != 0 )
                {
                  Index = 0;
                  while ( (a2[2] & 0x10) != 0 )
                  {
                    if ( *((__int16 *)a2 + 1) >= 0 )
                    {
                      v57 = (ACL *)*((_QWORD *)a2 + 3);
                    }
                    else
                    {
                      if ( !*((_DWORD *)a2 + 3) )
                        break;
                      v57 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
                    }
LABEL_155:
                    v58 = RtlFindAceByType(v57, 0x14u, &Index);
                    ++Index;
                    if ( !v58 )
                    {
                      if ( !ProcessTrustLabelSid )
                        goto LABEL_171;
                      if ( !v169 )
                      {
                        v23 = -1073741811;
                        goto LABEL_146;
                      }
                      v59 = *(_DWORD *)(v169 + 4);
                      Index = 0;
LABEL_167:
                      ServerAcl = RtlCreateAcl(&Acl, 0x58u, 2u);
                      v23 = ServerAcl;
                      if ( ServerAcl >= 0 )
                      {
                        ServerAcl = RtlAddProcessTrustLabelAce(&Acl, 2u, Index, ProcessTrustLabelSid, 0x14u, v59);
                        v23 = ServerAcl;
                        if ( ServerAcl >= 0 )
                        {
                          ServerAcl = RtlpComputeMergedAcl(
                                        (int)v147,
                                        ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8u,
                                        (int)&Acl,
                                        4,
                                        (__int64)v142,
                                        (__int64)v145,
                                        (__int64)GenericMapping,
                                        2,
                                        (__int64)&v168,
                                        (__int64)&v139);
                          v23 = ServerAcl;
                          if ( ServerAcl >= 0 )
                          {
                            v130 = 1;
                            goto LABEL_172;
                          }
                        }
                      }
                      goto LABEL_162;
                    }
                    if ( (*((_BYTE *)v58 + 1) & 8) == 0 )
                    {
                      v59 = v58[1];
                      Index = *((unsigned __int8 *)v58 + 1);
                      ProcessTrustLabelSid = v58 + 2;
                      if ( !v169 || (v59 & *(_DWORD *)(v169 + 4)) != v59 || v58 == (_DWORD *)-8LL )
                      {
                        v23 = -1073741811;
                        goto LABEL_161;
                      }
                      goto LABEL_167;
                    }
                  }
                  v57 = 0LL;
                  goto LABEL_155;
                }
LABEL_171:
                v168 = v147;
LABEL_172:
                v60 = (a7 & 0x100) != 0;
                if ( (a7 & 0x200) != 0 )
                  v60 |= 2u;
                if ( (a7 & 0x400) != 0 )
                  v60 |= 4u;
                if ( v60 )
                {
                  v62 = v166;
                  v63 = (char)v166;
                  v64 = v166;
                }
                else
                {
                  if ( (a2[2] & 0x10) == 0 )
                    goto LABEL_178;
                  if ( *((__int16 *)a2 + 1) >= 0 )
                  {
                    v61 = (ACL *)*((_QWORD *)a2 + 3);
                  }
                  else if ( *((_DWORD *)a2 + 3) )
                  {
                    v61 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
                  }
                  else
                  {
LABEL_178:
                    v61 = 0LL;
                  }
                  v62 = (ACCESS_MASK *)RtlFindAceByType(v61, 0x11u, 0LL);
                  v166 = v62;
                  if ( v62 )
                  {
                    v63 = *((_BYTE *)v62 + 1);
                    v64 = v62 + 2;
                    v60 = v62[1];
                    Sid = v62 + 2;
                    HIBYTE(v120) = v63;
                    if ( v63 == 8 || (v63 & 0x10) != 0 )
                    {
                      v62 = 0LL;
                      v64 = 0LL;
                      v63 = 0;
                      v166 = 0LL;
                      Sid = 0LL;
                      v60 = 0;
                      HIBYTE(v120) = 0;
                    }
                  }
                  else
                  {
                    v63 = 0;
                    v64 = 0LL;
                  }
                }
                if ( (v63 & 8) != 0 && *((_DWORD *)Sid1 + 2) < 0x2000u )
                {
                  v23 = -1073740730;
                  goto LABEL_161;
                }
                if ( v60 )
                {
LABEL_196:
                  if ( !v62 )
                  {
                    if ( !ExistingTokenHandle )
                    {
                      v23 = -1073741700;
                      goto LABEL_161;
                    }
                    v64 = Sid1;
                    Sid = Sid1;
                    HIBYTE(v120) = 0;
                  }
                }
                else if ( Sid1 && *((_DWORD *)Sid1 + 2) < 0x2000u )
                {
                  v60 = 1;
                  goto LABEL_196;
                }
                if ( v64 )
                {
                  ServerAcl = RtlCreateAcl(&v191, 0x80u, 2u);
                  v23 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_162;
                  ServerAcl = RtlAddMandatoryAce(&v191, 2u, HIBYTE(v120), Sid, 0x11u, v60);
                  v23 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_162;
                  v65 = &v191;
                }
                else
                {
                  v65 = 0LL;
                  v180 = 0LL;
                }
                if ( (a7 & 0x700) != 0 )
                {
                  v66 = 4;
                }
                else if ( v166 || !v65 )
                {
                  v66 = ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 4 | ((unsigned __int8)*((_WORD *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x1400;
                }
                else
                {
                  v66 = 0;
                }
                if ( !*(_QWORD *)v146 || (*(_BYTE *)(*(_QWORD *)v146 + 2LL) & 0x10) == 0 )
                  goto LABEL_217;
                if ( *(__int16 *)(*(_QWORD *)v146 + 2LL) >= 0 )
                {
                  v67 = *(_QWORD *)(*(_QWORD *)v146 + 24LL);
                }
                else
                {
                  if ( *(_DWORD *)(*(_QWORD *)v146 + 12LL) )
                  {
                    LODWORD(v67) = v146[0] + *(_DWORD *)(*(_QWORD *)v146 + 12LL);
                    goto LABEL_218;
                  }
LABEL_217:
                  LODWORD(v67) = 0;
                }
LABEL_218:
                LOBYTE(v55) = a6;
                LOBYTE(ReturnLengthb) = 1;
                v68 = RtlpInheritAcl(
                        v67,
                        (int)v65,
                        v66,
                        v55,
                        ReturnLengthb,
                        0,
                        (int)v142,
                        (__int64)v145,
                        v150,
                        v152,
                        GenericMapping,
                        3,
                        v160,
                        a5,
                        (__int64)&v162,
                        (__int64)&v140,
                        &v139);
                ServerAcl = v68;
                v23 = v68;
                if ( v68 == -2147483637 )
                {
                  v69 = v65;
                  v70 = 0;
                  v139 = 0;
                }
                else
                {
                  if ( v68 < 0 )
                    goto LABEL_162;
                  v69 = v162;
                  v70 = v139;
                }
                v162 = v69;
                v23 = RtlpCombineAcls(
                        (_DWORD)Src,
                        (_DWORD)v69,
                        (_DWORD)v147,
                        (_DWORD)v147,
                        (__int64)v168,
                        (__int64)&v178,
                        (__int64)&v135);
                ServerAcl = v23;
                v154 = ((v126 & 0x2000) << 17) | v135;
                if ( v162 && v162 != v180 )
                  RtlFreeHeap(HeapHandle, 0, v162);
                if ( v23 < 0 )
                  goto LABEL_162;
                v72 = v178;
                if ( v178 )
                {
                  if ( HIBYTE(v122) && Src )
                    RtlFreeHeap(HeapHandle, 0, Src);
                  Src = v72;
                  v137 = v72;
                  v132 = 1;
                  v126 |= (4 * (v70 & 4)) | (4 * (v70 & 8)) | (2 * (v70 & 0x400)) | (2 * (v70 & 0x1000)) | 0x10;
                }
                v24 = Src;
                Index = a7 & 8;
                if ( (a7 & 8) == 0 )
                {
                  v73 = (char *)RtlFindAceByType((PACL)Src, 0x11u, 0LL);
                  v74 = v73 ? v73 + 8 : (char *)Sid;
                  if ( v74 )
                  {
                    if ( !ExistingTokenHandle )
                      goto LABEL_237;
                    ServerAcl = RtlSidDominates(Sid1, v74, Dominates);
                    v23 = ServerAcl;
                    if ( ServerAcl < 0 )
                      goto LABEL_34;
                    v75 = (unsigned __int8)v155;
                    if ( !Dominates[0] )
                      v75 = 1;
                    v155 = v75;
                  }
                }
                v76 = *((_WORD *)a2 + 1);
                v135 = a7 & 1;
                if ( (v76 & 4) != 0 )
                {
                  if ( v76 < 0 )
                  {
                    if ( !*((_DWORD *)a2 + 4) )
                      goto LABEL_243;
                    LODWORD(v77) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
                  }
                  else
                  {
                    v77 = *((_QWORD *)a2 + 4);
                  }
                }
                else
                {
LABEL_243:
                  LODWORD(v77) = 0;
                }
                if ( !*(_QWORD *)v146 || (*(_BYTE *)(*(_QWORD *)v146 + 2LL) & 4) == 0 )
                  goto LABEL_254;
                if ( (*(_WORD *)(*(_QWORD *)v146 + 2LL) & 0x8000) != 0 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)v146 + 16LL) )
                  {
                    LODWORD(v78) = v146[0] + *(_DWORD *)(*(_QWORD *)v146 + 16LL);
                    goto LABEL_255;
                  }
LABEL_254:
                  LODWORD(v78) = 0;
                }
                else
                {
                  v78 = *(_QWORD *)(*(_QWORD *)v146 + 32LL);
                }
LABEL_255:
                LOBYTE(ReturnLengthc) = (a7 & 1) != 0;
                LOBYTE(v71) = a6;
                v79 = RtlpInheritAcl(
                        v78,
                        v77,
                        v76 & 0x140C,
                        v71,
                        ReturnLengthc,
                        AccessStatus != 0,
                        (int)v142,
                        (__int64)v145,
                        v150,
                        v152,
                        GenericMapping,
                        1,
                        v160,
                        a5,
                        (__int64)&v143,
                        (__int64)&v127,
                        &v139);
                ServerAcl = v79;
                v23 = v79;
                if ( v79 >= 0 )
                {
                  LOBYTE(v122) = 1;
                  v126 |= v139 & 0x1408 | 4;
                  goto LABEL_271;
                }
                if ( v79 != -2147483637 )
                  goto LABEL_162;
                v80 = v126;
                if ( v135 )
                {
                  v80 = v126 | 0x400;
                  v126 |= 0x400u;
                }
                v81 = *((_WORD *)a2 + 1);
                if ( (v81 & 0xC) == 0xC )
                {
                  if ( (v81 & 4) == 0 )
                    goto LABEL_262;
                  if ( v81 >= 0 )
                  {
                    v82 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_267:
                    v143 = v82;
                  }
                  else
                  {
                    if ( *((_DWORD *)a2 + 4) )
                    {
                      v82 = &a2[*((unsigned int *)a2 + 4)];
                      goto LABEL_267;
                    }
LABEL_262:
                    v143 = 0LL;
                  }
                  v126 = v81 & 0x1000 | 4 | v80;
                  v83 = 1;
                  LOBYTE(v127) = 1;
                }
                else
                {
                  if ( v149 )
                  {
                    v143 = (PVOID)v149;
                    v126 = v80 | 4;
                  }
LABEL_271:
                  v83 = 1;
                }
                v84 = ExistingTokenHandle;
                if ( (a7 & 0x1000) == 0 && v133 && ExistingTokenHandle && *(_QWORD *)v146 )
                {
                  v85 = GenericMapping;
                  LOBYTE(AccessMask) = a6;
                  GrantedAccess = 0;
                  AccessStatus = 0;
                  ServerAcl = RtlpNewSecurityObject(
                                v146[0],
                                0,
                                (int)&BaseAddress,
                                v160,
                                a5,
                                AccessMask,
                                a7 | 1u,
                                ExistingTokenHandle,
                                (__int64)GenericMapping,
                                v169);
                  v23 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_162;
                  if ( (*((_BYTE *)BaseAddress + 2) & 4) != 0 )
                  {
                    if ( *((__int16 *)BaseAddress + 1) >= 0 )
                    {
                      v86 = (char *)*((_QWORD *)BaseAddress + 4);
                    }
                    else
                    {
                      if ( !*((_DWORD *)BaseAddress + 4) )
                        goto LABEL_278;
                      v86 = (char *)BaseAddress + *((unsigned int *)BaseAddress + 4);
                    }
                  }
                  else
                  {
LABEL_278:
                    v86 = 0LL;
                  }
                  if ( !(unsigned __int8)RtlpOwnerAcesPresent(16LL, v86) )
                    goto LABEL_292;
                  NewTokenHandle = 0LL;
                  PrivilegeSetLength = 20;
                  if ( (_BYTE)v144 != 1 )
                    goto LABEL_287;
                  v186 = 1;
                  v185[1] = 2;
                  ObjectAttributes.SecurityQualityOfService = v185;
                  v185[0] = 12;
                  ObjectAttributes.Length = 48;
                  memset(&ObjectAttributes.RootDirectory, 0, 20);
                  ObjectAttributes.SecurityDescriptor = 0LL;
                  ServerAcl = NtDuplicateToken(
                                ExistingTokenHandle,
                                8u,
                                &ObjectAttributes,
                                0,
                                TokenImpersonation,
                                &NewTokenHandle);
                  v23 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_162;
                  v87 = NewTokenHandle;
                  if ( !NewTokenHandle )
LABEL_287:
                    v87 = ExistingTokenHandle;
                  ServerAcl = ZwAccessCheck(
                                BaseAddress,
                                v87,
                                0x40000u,
                                v85,
                                &PrivilegeSet,
                                &PrivilegeSetLength,
                                &GrantedAccess,
                                &AccessStatus);
                  v23 = ServerAcl;
                  if ( NewTokenHandle )
                    NtClose(NewTokenHandle);
                  if ( v23 >= 0 )
                  {
                    v23 = AccessStatus;
                    ServerAcl = AccessStatus;
                    if ( AccessStatus >= 0 )
                    {
LABEL_292:
                      v84 = ExistingTokenHandle;
                      goto LABEL_293;
                    }
                  }
LABEL_162:
                  v24 = Src;
                  goto LABEL_34;
                }
LABEL_293:
                if ( v135 && !v143 )
                  v126 |= 0x1000u;
                v88 = !v154 || (v154 & 0xB0) != v154;
                v89 = Index;
                if ( !(_BYTE)v120 || Index || !v88 )
                  goto LABEL_307;
                if ( !v84 )
                  goto LABEL_237;
                PrivilegeSet.PrivilegeCount = 1;
                PrivilegeSet.Control = 1;
                v149 = 8LL;
                PrivilegeSet.Privilege[0].Luid = (_LUID)8LL;
                PrivilegeSet.Privilege[0].Attributes = 0;
                ServerAcl = ZwPrivilegeCheck(v84, &PrivilegeSet, &Result);
                v23 = ServerAcl;
                if ( ServerAcl < 0 )
                  goto LABEL_162;
                if ( !Result )
                  goto LABEL_306;
LABEL_307:
                if ( !(_BYTE)v155 )
                {
                  v91 = ExistingTokenHandle;
                  goto LABEL_314;
                }
                v90 = v89 == 0;
                v91 = ExistingTokenHandle;
                if ( v90 )
                {
                  if ( ExistingTokenHandle )
                  {
                    v149 = 32LL;
                    PrivilegeSet.PrivilegeCount = 1;
                    PrivilegeSet.Control = 1;
                    PrivilegeSet.Privilege[0].Luid = (_LUID)32LL;
                    PrivilegeSet.Privilege[0].Attributes = 0;
                    ServerAcl = ZwPrivilegeCheck(ExistingTokenHandle, &PrivilegeSet, &Result);
                    v23 = ServerAcl;
                    if ( ServerAcl < 0 )
                      goto LABEL_162;
                    if ( !Result )
                    {
LABEL_306:
                      v23 = -1073741727;
                      goto LABEL_146;
                    }
                    goto LABEL_314;
                  }
LABEL_237:
                  v23 = -1073741700;
LABEL_146:
                  ServerAcl = v23;
                  goto LABEL_34;
                }
LABEL_314:
                if ( !v125 || (a7 & 0x10) != 0 )
                {
                  v92 = v121;
                  v93 = (unsigned __int8 *)v142;
                }
                else
                {
                  if ( !v91 )
                    goto LABEL_237;
                  v92 = v121;
                  v93 = (unsigned __int8 *)v142;
                  if ( !RtlpValidOwnerSubjectContext(ExistingTokenHandle, v142, v121, &v158) )
                  {
                    v23 = v158;
                    goto LABEL_146;
                  }
                }
                if ( (_BYTE)v127 && v92 )
                {
                  v94 = v143;
                  LOBYTE(v83) = v148;
                  ServerAcl = RtlpCreateServerAcl((_DWORD)v143, v83, v150, (unsigned int)&v164, (__int64)&v129);
                  v23 = ServerAcl;
                  if ( ServerAcl < 0 )
                    goto LABEL_162;
                  if ( (_BYTE)v122 && v94 )
                    RtlFreeHeap(HeapHandle, 0, v94);
                  v143 = v164;
                  v164 = 0LL;
                }
                v95 = 4 * v93[1] + 11;
                PrivilegeSetLength = 4 * v93[1] + 8;
                v96 = v95 & 0xFFFFFFFC;
                GrantedAccess = v96;
                if ( v145 )
                {
                  AccessStatus = 4 * *((unsigned __int8 *)v145 + 1) + 8;
                  v97 = (AccessStatus + 3) & 0xFFFFFFFC;
                }
                else
                {
                  AccessStatus = 0;
                  v97 = 0;
                }
                v98 = v126;
                v135 = v97;
                v148 = v126 & 0x10;
                if ( (v126 & 0x10) != 0 && Src )
                  v99 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
                else
                  v99 = 0;
                v158 = v126 & 4;
                if ( (v126 & 4) != 0 && v143 )
                  v100 = (*((unsigned __int16 *)v143 + 1) + 3) & 0xFFFFFFFC;
                else
                  v100 = 0;
                v144 = v100;
                Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v96 + v99 + v100 + 20 + v97);
                v157 = Heap;
                v102 = Heap;
                if ( Heap )
                {
                  *(_QWORD *)Heap = 0LL;
                  *((_QWORD *)Heap + 1) = 0LL;
                  Heap[4] = 0;
                  *((_WORD *)Heap + 1) |= v98;
                  v103 = (char *)(Heap + 5);
                  *(_BYTE *)Heap = 1;
                  if ( v148 )
                  {
                    v104 = (unsigned __int16 *)Src;
                    if ( Src )
                    {
                      memmove(v103, Src, *((unsigned __int16 *)Src + 1));
                      if ( !HIBYTE(v122) )
                        RtlpApplyAclToObject((__int64)v103, GenericMapping);
                      v102 = v157;
                      v157[3] = (_DWORD)v103 - (_DWORD)v157;
                      v105 = v104[1];
                      if ( v99 > (unsigned int)v105 )
                      {
                        memset(&v103[v105], 0, v99 - (unsigned int)v105);
                        v102 = v157;
                      }
                      v103 += v99;
                    }
                    else
                    {
                      Heap[3] = 0;
                    }
                  }
                  if ( v158 )
                  {
                    v106 = (unsigned __int16 *)v143;
                    if ( v143 )
                    {
                      memmove(v103, v143, *((unsigned __int16 *)v143 + 1));
                      if ( !(_BYTE)v122 )
                        RtlpApplyAclToObject((__int64)v103, GenericMapping);
                      v157[4] = (_DWORD)v103 - (_DWORD)v157;
                      v107 = v106[1];
                      v108 = v144;
                      if ( v144 > (unsigned int)v107 )
                        memset(&v103[v107], 0, v144 - (unsigned int)v107);
                      v103 += v108;
                    }
                    else
                    {
                      v102[4] = 0;
                    }
                  }
                  v109 = PrivilegeSetLength;
                  memmove(v103, v142, PrivilegeSetLength);
                  v110 = GrantedAccess;
                  if ( GrantedAccess > (unsigned int)v109 )
                    memset(&v103[v109], 0, GrantedAccess - (unsigned int)v109);
                  v111 = (_DWORD)v103 - (_DWORD)v157;
                  v112 = &v103[v110];
                  v157[1] = v111;
                  if ( v145 )
                  {
                    v113 = (unsigned int)AccessStatus;
                    memmove(v112, v145, (unsigned int)AccessStatus);
                    if ( v135 > (unsigned int)v113 )
                      memset(&v112[v113], 0, v135 - (unsigned int)v113);
                    v157[2] = (_DWORD)v112 - (_DWORD)v157;
                  }
                  v23 = 0;
                }
                else
                {
                  v23 = -1073741801;
                }
LABEL_161:
                ServerAcl = v23;
                goto LABEL_162;
              }
            }
          }
          if ( v50 != -2147483637 )
            goto LABEL_34;
          if ( (a2[2] & 0x30) != 0x30 )
            goto LABEL_123;
          if ( (a2[2] & 0x10) == 0 )
          {
LABEL_129:
            v147 = 0LL;
            goto LABEL_123;
          }
          if ( (*((_WORD *)a2 + 1) & 0x8000) != 0 )
          {
            if ( !*((_DWORD *)a2 + 3) )
              goto LABEL_129;
            v52 = &a2[*((unsigned int *)a2 + 3)];
          }
          else
          {
            v52 = (_BYTE *)*((_QWORD *)a2 + 3);
          }
          v147 = v52;
          goto LABEL_123;
        }
        if ( v41 != -2147483637 )
          goto LABEL_33;
        v47 = *((_WORD *)a2 + 1);
        v48 = 0x8000;
        if ( v30 )
          v48 = 34816;
        v126 = v48;
        if ( (v47 & 0x30) != 0x30 )
          goto LABEL_95;
        if ( (v47 & 0x10) == 0 )
          goto LABEL_103;
        if ( v47 < 0 )
        {
          if ( !*((_DWORD *)a2 + 3) )
          {
LABEL_103:
            v24 = 0LL;
            Src = 0LL;
            v137 = 0LL;
LABEL_109:
            LOBYTE(v120) = 1;
            v126 = v47 & 0x2000 | 0x10 | v48;
            goto LABEL_96;
          }
          v24 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v24 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        v137 = v24;
        Src = v24;
        goto LABEL_109;
      }
LABEL_70:
      if ( (a7 & 0x40) != 0 )
      {
        if ( !v21 )
        {
LABEL_72:
          v23 = -1073741733;
          ServerAcl = -1073741733;
          goto LABEL_33;
        }
        if ( *(__int16 *)(v21 + 2) >= 0 )
        {
          v28 = *(void **)(v21 + 16);
        }
        else
        {
          if ( !*(_DWORD *)(v21 + 8) )
            goto LABEL_72;
          v28 = (void *)(v21 + *(unsigned int *)(v21 + 8));
        }
      }
      else
      {
        v28 = v12;
        if ( v16 )
          v28 = (void *)v17;
      }
      v145 = v28;
      if ( !v28 )
        goto LABEL_72;
      goto LABEL_80;
    }
    goto LABEL_31;
  }
  v27 = v11;
  if ( v16 )
    v27 = (void *)v150;
  v142 = v27;
  if ( v27 )
    goto LABEL_25;
  v23 = -1073741700;
LABEL_32:
  ServerAcl = v23;
LABEL_33:
  v24 = v137;
LABEL_34:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v24 = v137;
    v23 = ServerAcl;
  }
  if ( v129 && v164 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v164);
    v24 = v137;
    v23 = ServerAcl;
  }
  v25 = HeapHandle;
  RtlFreeHeap(HeapHandle, 0, v174);
  RtlFreeHeap(v25, 0, v177);
  RtlFreeHeap(v25, 0, v172);
  RtlFreeHeap(v25, 0, v176);
  RtlFreeHeap(v25, 0, v170);
  if ( v171 )
    RtlFreeHeap(v25, 0, v171);
  if ( v173 )
    RtlFreeHeap(v25, 0, v173);
  if ( (HIBYTE(v122) || v132) && v24 )
    RtlFreeHeap(v25, 0, v24);
  if ( v131 && v147 )
    RtlFreeHeap(v25, 0, v147);
  if ( v168 && v130 )
    RtlFreeHeap(v25, 0, v168);
  if ( (_BYTE)v122 )
  {
    if ( v143 )
      RtlFreeHeap(v25, 0, v143);
  }
  *v181 = v157;
  return v23;
}
