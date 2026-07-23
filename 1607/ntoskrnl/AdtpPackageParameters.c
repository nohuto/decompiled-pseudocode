/*
 * XREFs of AdtpPackageParameters @ 0x1401449C0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1402379CC (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14056B25C (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140144F04 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x140144F18 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x140420690 (RtlValidSid.c)
 *     AdtpEtwBuildDashString @ 0x1404D35F0 (AdtpEtwBuildDashString.c)
 *     AdtpEtwBuildString @ 0x14056B5D4 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14056B690 (AdtpBuildMessageString.c)
 *     AdtpSubstituteDriveLetter @ 0x14056B73C (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildLogonIdStrings @ 0x14056B85C (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1406D090C (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1406D0DD4 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1406D1090 (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x1406D12C8 (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x1406D137C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1406D14E0 (AdtpBuildUlongString.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1C48 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1ECC (AdtpBuildUserAccountControlString.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rbx
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r8
  unsigned int v16; // edi
  __int64 v17; // r13
  __int64 v18; // r10
  __int64 v19; // r12
  int v20; // ecx
  char v21; // di
  char v22; // bl
  UNICODE_STRING *v23; // rdx
  int v24; // eax
  unsigned __int8 *v25; // r8
  char v26; // r9
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int16 v31; // r11
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rcx
  unsigned __int16 v35; // si
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  char *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // edi
  BOOLEAN valid; // al
  __int64 v56; // rax
  int v57; // edx
  int v58; // edx
  int v59; // edx
  unsigned int v60; // eax
  __int64 v61; // rdx
  unsigned int *v62; // r10
  unsigned int v63; // edx
  unsigned int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  void *v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // r10
  unsigned __int16 *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // rax
  unsigned __int16 v74; // r11
  int v75; // ecx
  __int64 v76; // rbx
  __int16 v77; // r11
  int v78; // ecx
  __int64 v79; // rcx
  int v80; // edx
  int v81; // edx
  bool v82; // zf
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // r12
  unsigned __int16 *v86; // rdi
  int v87; // eax
  __int64 v88; // rdx
  int v89; // eax
  __int64 v90; // r8
  __int64 v91; // r12
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rdx
  int v96; // ecx
  __int64 v97; // rax
  __int64 v98; // r8
  unsigned int v99; // eax
  __int64 v100; // rdx
  unsigned __int16 *v101; // rdi
  int v102; // eax
  __int64 v103; // rbx
  unsigned int v104; // ecx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h]
  char v107; // [rsp+60h] [rbp-20h] BYREF
  __int16 v108; // [rsp+62h] [rbp-1Eh]
  int v109; // [rsp+64h] [rbp-1Ch] BYREF
  int v110; // [rsp+68h] [rbp-18h]
  unsigned int v111; // [rsp+6Ch] [rbp-14h]
  unsigned __int8 *v112; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int16 *v113; // [rsp+78h] [rbp-8h]
  char v114; // [rsp+C0h] [rbp+40h] BYREF
  int v115; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v116; // [rsp+D8h] [rbp+58h]

  v116 = a4;
  v115 = a3;
  v8 = a4;
  v9 = 0LL;
  v108 = 0;
  v10 = 0;
  v109 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_89:
    v12 = -1073741811;
    goto LABEL_34;
  }
  if ( !a2 )
    goto LABEL_89;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v111 = v13;
  v110 = 2;
  v16 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    LODWORD(v18) = 1;
    while ( 1 )
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_89;
      v19 = 32LL * v16;
      v20 = *(_DWORD *)(v19 + v14);
      if ( v20 <= 16 )
      {
        if ( v20 == 16 )
        {
          v41 = AdtpBuildStringListString(
                  *(_QWORD *)(v19 + v14 + 24),
                  a2,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v109,
                  v10 + a8);
        }
        else
        {
          if ( v20 > 8 )
          {
            v42 = v20 - 9;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  v65 = v44 - 1;
                  if ( v65 )
                  {
                    v66 = v65 - 1;
                    if ( !v66 )
                    {
                      v67 = &AdtpNullGuid;
                      if ( *(_QWORD *)(v19 + v14 + 24) )
                        v67 = *(void **)(v19 + v14 + 24);
                      v68 = 2LL * v10;
                      *(_QWORD *)(v17 + 8 * v68) = v67;
                      *(_QWORD *)(v17 + 8 * v68 + 8) = 16LL;
                      goto LABEL_49;
                    }
                    if ( (unsigned int)(v66 - 1) >= 2 )
                      goto LABEL_89;
                  }
                }
                v45 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v45) = v19 + v14 + 8;
                *(_QWORD *)(v17 + 8 * v45 + 8) = 8LL;
              }
              else
              {
LABEL_117:
                v94 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v94) = v19 + v14 + 8;
                *(_QWORD *)(v17 + 8 * v94 + 8) = 4LL;
              }
LABEL_49:
              v10 += v18;
              goto LABEL_33;
            }
            v69 = *(_DWORD *)(v19 + v14 + 16);
            if ( v69 >= v16 )
              goto LABEL_89;
            v70 = 32LL * v69;
            if ( *(_DWORD *)(v70 + v14) != 1 )
              goto LABEL_89;
            v71 = (unsigned __int16 *)(a5 + 16LL * v11);
            LODWORD(Destination) = a5 + 16 * v11;
            AdtpBuildObjectTypeStrings(
              *(_QWORD *)(v14 + 56),
              *(_QWORD *)(v70 + v14 + 24),
              *(_QWORD *)(v19 + v14 + 24),
              *(_DWORD *)(v19 + v14 + 4) / 0x18u);
            v72 = 2LL * v10;
            v73 = *((_QWORD *)v71 + 1);
            v15 = 2LL;
            v74 = v108;
            v75 = *v71 + 2;
            v9 = 0LL;
            *(_DWORD *)(v17 + 8 * v72 + 12) = 0;
            *(_QWORD *)(v17 + 8 * v72) = v73;
            LODWORD(v18) = 1;
            *(_DWORD *)(v17 + 8 * v72 + 8) = v75;
            goto LABEL_96;
          }
          switch ( v20 )
          {
            case 8:
              v62 = *(unsigned int **)(v19 + v14 + 24);
              if ( !v62 )
                goto LABEL_89;
              v63 = *v62;
              v64 = *v62 ? 12 * (v63 - 1) + 20 : 8;
              if ( *(_DWORD *)(v19 + v14 + 4) < v64 || v63 > 0x42 )
                goto LABEL_89;
              Destination = (PUNICODE_STRING)&v109;
              v41 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v19 + v14 + 24), 0LL, v17 + 16LL * v10, v8);
              break;
            case 0:
              AdtpEtwBuildDashString(v17 + 16LL * v10, 0LL);
              goto LABEL_49;
            case 1:
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v19 + v14 + 24)) )
                goto LABEL_89;
              v41 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v59, v8, (unsigned int)&v109, v10 + a8);
              break;
            case 2:
              v46 = *(_QWORD *)(v19 + v14 + 24);
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v46) )
                goto LABEL_89;
              AdtpSubstituteDriveLetter();
              v47 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v46, v116, (unsigned int)&v109, v10 + a8);
              v9 = 0LL;
              v12 = v47;
              if ( v47 < 0 )
                goto LABEL_34;
              v11 = v108;
              LODWORD(v18) = 1;
              ++v10;
              goto LABEL_53;
            case 3:
              v41 = AdtpBuildUlongString(*(_DWORD *)(v19 + v14 + 8), (__int64)&v109, v10 + a8);
              break;
            case 4:
              v53 = *(_QWORD *)(v19 + v14 + 24);
              v54 = 4 * *(unsigned __int8 *)(v53 + 1) + 8;
              if ( *(_DWORD *)(v19 + v14 + 4) < v54
                || (valid = RtlValidSid(*(PSID *)(v19 + v14 + 24)), v9 = 0LL, !valid) )
              {
                v12 = -1073741704;
                goto LABEL_34;
              }
              v11 = v108;
              LODWORD(v18) = 1;
              v15 = 2LL;
              v56 = 2LL * v10++;
              *(_QWORD *)(v17 + 8 * v56) = v53;
              *(_DWORD *)(v17 + 8 * v56 + 8) = v54;
              *(_DWORD *)(v17 + 8 * v56 + 12) = 0;
              goto LABEL_31;
            case 5:
              goto LABEL_18;
            case 6:
              v48 = 2LL * v10;
              v10 += v18;
              v49 = 4 * (unsigned __int8)byte_140747FA1 + 8;
              *(_QWORD *)(v17 + 8 * v48) = &AdtpNullSid;
              a2 = v15;
              *(_DWORD *)(v17 + 8 * v48 + 8) = v49;
              *(_DWORD *)(v17 + 8 * v48 + 12) = (_DWORD)v9;
              do
              {
                AdtpEtwBuildDashString(v17 + 16LL * v10, a2);
                v10 += v18;
                a2 = v50 - v18;
              }
              while ( a2 );
              v51 = (char *)&AdtpNullLuid;
LABEL_58:
              v52 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v52) = v51;
              *(_QWORD *)(v17 + 8 * v52 + 8) = 8LL;
              goto LABEL_49;
            case 7:
              v60 = *(_DWORD *)(v19 + v14 + 16);
              if ( v60 >= v16 )
                goto LABEL_89;
              v61 = 32LL * v60;
              if ( *(_DWORD *)(v61 + v14) != (_DWORD)v18 )
                goto LABEL_89;
              v41 = AdtpBuildAccessesString(
                      *(_QWORD *)(v14 + 56),
                      *(_QWORD *)(v61 + v14 + 24),
                      *(_DWORD *)(v19 + v14 + 8),
                      0,
                      v9,
                      v17 + 16LL * v10,
                      v8,
                      (__int64)&v109,
                      v10 + a8);
              break;
            default:
              goto LABEL_89;
          }
        }
        goto LABEL_43;
      }
      if ( v20 > 27 )
        break;
      if ( v20 == 27 )
        goto LABEL_117;
      if ( v20 == 17 )
      {
        v41 = AdtpBuildSidListString(
                *(_QWORD *)(v19 + v14 + 24),
                0,
                (unsigned int)v17 + 16 * v10,
                v8,
                (__int64)&v109,
                v10 + a8);
        goto LABEL_43;
      }
      LODWORD(a2) = v20 - 18;
      switch ( v20 )
      {
        case 18:
          v51 = &v114;
          goto LABEL_58;
        case 19:
          v89 = AdtpBuildUserAccountControlString(
                  *(_DWORD *)(v19 + v14 + 8),
                  (PUNICODE_STRING)(a5 + 16LL * (v11 + 1)),
                  a8 + v10 + 1,
                  (PUNICODE_STRING)(a5 + 16LL * (v11 + 2)),
                  a8 + v10 + 2);
          v9 = 0LL;
          v12 = v89;
          if ( v89 < 0 )
            goto LABEL_34;
          v11 = v108;
          v90 = 3LL;
          v91 = a5;
          LODWORD(v18) = 1;
          do
          {
            v92 = v11++;
            v92 *= 2LL;
            v93 = 2LL * v10++;
            LODWORD(a2) = *(unsigned __int16 *)(v91 + 8 * v92) + 2;
            *(_QWORD *)(v17 + 8 * v93) = *(_QWORD *)(v91 + 8 * v92 + 8);
            *(_QWORD *)(v17 + 8 * v93 + 8) = (unsigned int)a2;
            --v90;
          }
          while ( v90 );
          v108 = v11;
LABEL_53:
          v15 = 2LL;
          goto LABEL_32;
        case 20:
          a2 = 3LL;
          do
          {
            AdtpEtwBuildDashString(v17 + 16LL * v10, a2);
            v10 += v18;
            a2 = v88 - v18;
          }
          while ( a2 );
          goto LABEL_33;
        case 21:
          v41 = AdtpBuildMessageString(
                  *(_DWORD *)(v19 + v14 + 8),
                  0,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v109,
                  v10 + a8);
          goto LABEL_43;
      }
      v80 = v20 - 21 - v15;
      if ( !v80 )
      {
        v84 = *(_QWORD *)(v19 + v14 + 24);
        v85 = a5;
        LODWORD(Destination) = a8 + v18 + v10;
        v86 = (unsigned __int16 *)(a5 + 16LL * v11);
        v87 = AdtpBuildSockAddrString(v84, v86, v10 + a8, a5 + 16LL * (int)(v18 + v11));
        v9 = 0LL;
        v12 = v87;
        if ( v87 < 0 )
          goto LABEL_34;
        v76 = 2LL * v10;
        v15 = 2LL;
        v77 = v108;
        v78 = *v86 + 2;
        *(_QWORD *)(v17 + 8 * v76) = *((_QWORD *)v86 + 1);
        *(_DWORD *)(v17 + 8 * v76 + 8) = v78;
        LODWORD(v18) = 1;
        *(_DWORD *)(v17 + 8 * v76 + 12) = 0;
        v74 = v77 + 1;
        ++v10;
        LODWORD(a2) = *(unsigned __int16 *)(v85 + 16LL * v74) + 2;
        v79 = 2LL * v10;
        *(_QWORD *)(v17 + 8 * v79) = *(_QWORD *)(v85 + 16LL * v74 + 8);
        *(_QWORD *)(v17 + 8 * v79 + 8) = (unsigned int)a2;
LABEL_96:
        v11 = v74 + 1;
        ++v10;
        goto LABEL_30;
      }
      v81 = v80 - 1;
      if ( v81 )
      {
        v82 = v81 == (_DWORD)v15;
        goto LABEL_102;
      }
      v83 = AdtpBuildSecurityDescriptorChangeString(
              *(_DWORD *)(v19 + v14 + 8),
              *(_QWORD *)(v19 + v14 + 24),
              *(_QWORD *)(32LL * ++v16 + v14 + 24),
              v17 + 16 * (v18 + v10),
              v17 + 16LL * v10,
              v10 + a8,
              (_DWORD)DestinationString,
              v17 + 16LL * (int)(v18 + v10),
              (int)(v18 + v10) + a8,
              v8,
              (__int64)&v109);
      v9 = 0LL;
      v12 = v83;
      if ( v83 < 0 )
        goto LABEL_34;
      v11 = v108;
      v15 = 2LL;
      v10 += 2;
      LODWORD(v18) = 1;
LABEL_33:
      v16 += v18;
      v110 = v16;
      if ( v16 >= v111 )
        goto LABEL_34;
    }
    if ( v20 == 28 )
    {
      LODWORD(Destination) = (_DWORD)v9;
      v101 = (unsigned __int16 *)(a5 + 16LL * v11);
      v102 = AdtpBuildSockAddrString(*(_QWORD *)(v19 + v14 + 24), v101, v10 + a8, 0LL);
      v9 = 0LL;
      v12 = v102;
      if ( v102 < 0 )
        goto LABEL_34;
      LODWORD(v18) = 1;
      v15 = 2LL;
      v103 = 2LL * v10;
      v104 = *v101 + 2;
      ++v10;
      v11 = v108 + 1;
      *(_QWORD *)(v17 + 8 * v103) = *((_QWORD *)v101 + 1);
      *(_QWORD *)(v17 + 8 * v103 + 8) = v104;
      goto LABEL_30;
    }
    if ( v20 != 29 )
    {
      if ( v20 != 30 )
      {
        if ( v20 == 31 )
        {
          if ( *(_DWORD *)(v19 + v14 + 8) != 32 || *(UNICODE_STRING **)(v19 + v14 + 16) != v9 )
            goto LABEL_89;
          v41 = AdtpBuildSecurityDescriptorUnicodeString(
                  32,
                  *(_QWORD *)(v19 + v14 + 24),
                  0,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v109,
                  v10 + a8);
        }
        else
        {
          v57 = v20 - 31 - v15;
          if ( !v57 )
            goto LABEL_18;
          v58 = v57 - 1;
          if ( v58 )
          {
            v82 = v58 == 1;
LABEL_102:
            if ( !v82 )
              goto LABEL_89;
LABEL_18:
            LOBYTE(v115) = (_BYTE)v9;
            v114 = (char)v9;
            v107 = (char)v9;
            if ( v20 == 33 )
            {
              v21 = v18;
LABEL_20:
              v22 = (char)v9;
              v23 = v9;
            }
            else
            {
              v21 = (char)v9;
              if ( v20 != 35 )
                goto LABEL_20;
              v22 = v18;
              v23 = (UNICODE_STRING *)&v112;
            }
            DestinationString = (PUNICODE_STRING)&v107;
            v112 = (unsigned __int8 *)v9;
            v113 = (unsigned __int16 *)(a5 + 16LL * v11);
            Destination = (PUNICODE_STRING)&v114;
            v24 = AdtpBuildLogonIdStrings(v14 + 8 + v19, v23, &v115, v113);
            v12 = v24;
            if ( v22 )
            {
              v26 = v115;
              v25 = v112;
            }
            else
            {
              v25 = *(unsigned __int8 **)(v14 + 24);
              v26 = 0;
            }
            if ( v24 < 0 )
              goto LABEL_34;
            v27 = *(_DWORD *)(v19 + v14);
            if ( v27 == 5 || v27 == 35 )
            {
              if ( !v25 )
              {
                v25 = (unsigned __int8 *)&AdtpNullSid;
                v26 = 0;
              }
              v28 = 4 * v25[1] + 8;
              v29 = v17 + 16LL * v10;
              *(_DWORD *)(v29 + 12) = 0;
              *(_QWORD *)v29 = v25;
              *(_DWORD *)(v29 + 8) = v28;
              *(_BYTE *)(v10 + a8) = v26;
LABEL_28:
              ++v10;
            }
            else
            {
              if ( v21 )
              {
                v95 = *(_QWORD *)(v19 + v14 + 24);
                v96 = 4 * *(unsigned __int8 *)(v95 + 1) + 8;
                v97 = v17 + 16LL * v10;
                *(_DWORD *)(v97 + 12) = 0;
                *(_QWORD *)v97 = v95;
                *(_DWORD *)(v97 + 8) = v96;
                *(_BYTE *)(v10 + a8) = v26;
                goto LABEL_28;
              }
              if ( v26 && v25 )
                ExFreePoolWithTag(v25, 0);
            }
            v30 = a8;
            v18 = a5;
            v31 = v108;
            v32 = *((_QWORD *)v113 + 1);
            v33 = *v113 + 2;
            v34 = v17 + 16LL * v10;
            *(_DWORD *)(v34 + 12) = 0;
            *(_QWORD *)v34 = v32;
            LOBYTE(v32) = v114;
            *(_DWORD *)(v34 + 8) = v33;
            *(_BYTE *)(v10 + v30) = v32;
            v35 = v10 + 1;
            ++v31;
            v36 = v35;
            v37 = v17 + 16LL * v35;
            v38 = *(_QWORD *)(v18 + 16LL * v31 + 8);
            LODWORD(a2) = *(unsigned __int16 *)(v18 + 16LL * v31) + 2;
            *(_DWORD *)(v37 + 12) = 0;
            LODWORD(v18) = 1;
            *(_QWORD *)v37 = v38;
            ++v35;
            LOBYTE(v38) = v107;
            v11 = v31 + 1;
            *(_DWORD *)(v37 + 8) = a2;
            *(_BYTE *)(v36 + v30) = v38;
            v15 = 2LL;
            v39 = 2LL * v35;
            v9 = 0LL;
            v10 = v35 + 1;
            *(_QWORD *)(v17 + 8 * v39) = v19 + v14 + 8;
            *(_QWORD *)(v17 + 8 * v39 + 8) = 8LL;
LABEL_30:
            v108 = v11;
LABEL_31:
            v16 = v110;
LABEL_32:
            v8 = v116;
            goto LABEL_33;
          }
          v41 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v19 + v14 + 24), v17 + 16LL * v10, v10 + a8);
        }
        goto LABEL_43;
      }
      if ( *(UNICODE_STRING **)(v19 + v14 + 8) != v9 || *(UNICODE_STRING **)(v19 + v14 + 16) != v9 )
        goto LABEL_89;
    }
    v98 = *(_QWORD *)(v19 + v14 + 24);
    v99 = *(_DWORD *)(v98 + 132);
    if ( v99 >= v16 )
      goto LABEL_89;
    v100 = 32LL * v99;
    if ( *(_DWORD *)(v100 + v14) != (_DWORD)v18 )
      goto LABEL_89;
    LOBYTE(v9) = v20 == 30;
    v41 = AdtpBuildAccessReasonAuditString(
            *(_QWORD *)(v14 + 56),
            *(_QWORD *)(v100 + v14 + 24),
            v98,
            (_DWORD)v9,
            (_DWORD)Destination,
            v17 + 16LL * v10,
            v8,
            (__int64)&v109,
            v10 + a8);
LABEL_43:
    v9 = 0LL;
    v12 = v41;
    if ( v41 < 0 )
      goto LABEL_34;
    v11 = v108;
    LODWORD(v18) = 1;
    ++v10;
    v15 = 2LL;
    goto LABEL_33;
  }
LABEL_34:
  *a7 = v10;
  return v12;
}
