/*
 * XREFs of AdtpPackageParameters @ 0x1401643D0
 * Callers:
 *     AdtpWriteToEtw @ 0x1405A166C (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140164B44 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x140164B58 (AdtpBuildMultiSzStringListString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     AdtpEtwBuildDashString @ 0x14054FEC4 (AdtpEtwBuildDashString.c)
 *     AdtpBuildObjectTypeStrings @ 0x140585F2C (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     AdtpEtwBuildString @ 0x1405A1914 (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x1405A19B4 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildLogonIdStrings @ 0x1405A1B68 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildMessageString @ 0x1405A1DB0 (AdtpBuildMessageString.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14070C314 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x14070C7E0 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14070C8A4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x14070CCD4 (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x14070CD88 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x14070CEEC (AdtpBuildUlongString.c)
 *     AdtpBuildUserAccountControlString @ 0x14070D078 (AdtpBuildUserAccountControlString.c)
 */

__int64 __fastcall AdtpPackageParameters(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, __int64 a5)
{
  __int64 v5; // rsi
  char v6; // bl
  __int64 v7; // rdi
  unsigned __int16 v9; // r14
  int v10; // r15d
  int v11; // r11d
  unsigned int v12; // eax
  __int64 v13; // r10
  void *v14; // r8
  __int64 v15; // r12
  int v16; // ecx
  bool v17; // si
  unsigned __int8 **v18; // rdx
  int v19; // eax
  unsigned __int8 *v20; // r8
  char v21; // r9
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned __int16 v25; // r9
  __int64 v26; // rdx
  unsigned __int16 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  __int64 v31; // rax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  _DWORD *v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // r10
  __int64 v48; // rdi
  unsigned __int16 *v49; // rbx
  __int64 v50; // rax
  _QWORD *v51; // rsi
  int v52; // ecx
  int v53; // ecx
  void *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // eax
  __int64 v58; // rdx
  unsigned __int16 **v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rbx
  unsigned int v62; // esi
  __int64 v63; // rax
  int v64; // edx
  int v65; // edx
  unsigned int *v66; // r10
  unsigned int v67; // edx
  unsigned int v68; // ecx
  int v69; // edx
  int v70; // edx
  bool v71; // zf
  int v72; // ecx
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rbx
  unsigned __int16 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  unsigned __int16 v80; // r9
  __int64 v81; // r8
  __int64 v82; // rcx
  __int64 v83; // rdx
  unsigned int v84; // ecx
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rbx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-E0h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v91; // [rsp+60h] [rbp-A0h]
  char v92; // [rsp+62h] [rbp-9Eh] BYREF
  char v93; // [rsp+63h] [rbp-9Dh] BYREF
  int v94; // [rsp+64h] [rbp-9Ch] BYREF
  char v95; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v96; // [rsp+6Ch] [rbp-94h]
  __int64 v97; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v98; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v99; // [rsp+80h] [rbp-80h] BYREF
  __int64 v100; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v101; // [rsp+90h] [rbp-70h]
  unsigned __int64 v102; // [rsp+98h] [rbp-68h]
  _QWORD v103[40]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v104[2048]; // [rsp+1E0h] [rbp+E0h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a3;
  v100 = a3;
  v97 = a5;
  v91 = 0;
  memset(v104, 0, sizeof(v104));
  v101 = a4;
  v9 = 0;
  v10 = 0;
  memset(v103, 0, sizeof(v103));
  v11 = 2;
  v94 = 0;
  v12 = 2;
  v96 = 2;
  if ( *(_DWORD *)(a1 + 8) > 2u )
  {
    LODWORD(v13) = 1;
    v14 = &AdtpNullSid;
    while ( 1 )
    {
      if ( v9 >= 0x2Au || v91 >= 0xEu )
      {
LABEL_90:
        v10 = -1073741811;
        goto LABEL_37;
      }
      v15 = 32LL * v12;
      v16 = *(_DWORD *)(v15 + a1 + 24);
      if ( v16 > 16 )
        break;
      if ( v16 == 16 )
      {
        v37 = AdtpBuildStringListString(
                *(_QWORD *)(v15 + a1 + 48),
                a2,
                (unsigned int)v7 + 16 * v9,
                (unsigned int)v104,
                (__int64)&v94,
                v5 + v9);
LABEL_33:
        v10 = v37;
        if ( v37 < 0 )
          goto LABEL_37;
        LODWORD(v13) = 1;
        ++v9;
        v11 = 2;
        goto LABEL_35;
      }
      if ( v16 > 8 )
      {
        v32 = v16 - 9;
        if ( !v32 )
        {
          v46 = *(_DWORD *)(v15 + a1 + 40);
          if ( v46 >= v96 )
            goto LABEL_90;
          v47 = 32LL * v46;
          if ( *(_DWORD *)(v47 + a1 + 24) != 1 )
            goto LABEL_90;
          v48 = 2LL * v91;
          v49 = (unsigned __int16 *)&v103[v48];
          Destination = (PUNICODE_STRING)&v103[v48];
          AdtpBuildObjectTypeStrings(
            *(_QWORD *)(a1 + 80),
            *(_QWORD *)(v47 + a1 + 48),
            *(_QWORD *)(v15 + a1 + 48),
            *(_DWORD *)(v15 + a1 + 28) / 0x18u);
          v50 = v103[v48 + 1];
          v11 = 2;
          v7 = v100;
          v51 = (_QWORD *)(v100 + 16LL * v9);
          LODWORD(v13) = 1;
          ++v91;
          *v51 = v50;
          LODWORD(v50) = *v49;
          v6 = 0;
          v51[1] = (unsigned int)(v50 + 2);
          ++v9;
          goto LABEL_57;
        }
        v33 = v32 - 1;
        if ( !v33 )
          goto LABEL_40;
        v34 = v33 - 1;
        if ( v34 )
        {
          v52 = v34 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( !v53 )
            {
              v54 = &AdtpNullGuid;
              if ( *(_QWORD *)(v15 + a1 + 48) )
                v54 = *(void **)(v15 + a1 + 48);
              v55 = 2LL * v9;
              *(_QWORD *)(v7 + 8 * v55) = v54;
              *(_QWORD *)(v7 + 8 * v55 + 8) = 16LL;
              goto LABEL_30;
            }
            if ( (unsigned int)(v53 - 1) >= 2 )
              goto LABEL_90;
          }
        }
        v35 = 2LL * v9;
        *(_QWORD *)(v7 + 8 * v35) = v15 + a1 + 32;
        *(_QWORD *)(v7 + 8 * v35 + 8) = 8LL;
      }
      else
      {
        if ( v16 == 8 )
        {
          v66 = *(unsigned int **)(v15 + a1 + 48);
          if ( !v66 )
            goto LABEL_90;
          v67 = *v66;
          v68 = *v66 ? 12 * (v67 - 1) + 20 : 8;
          if ( *(_DWORD *)(v15 + a1 + 28) < v68 || v67 > 0x41 )
            goto LABEL_90;
          Destination = (PUNICODE_STRING)&v94;
          v37 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v15 + a1 + 48), 0LL, v7 + 16LL * v9, v104);
          goto LABEL_33;
        }
        if ( v16 )
        {
          switch ( v16 )
          {
            case 1:
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v15 + a1 + 48)) )
                goto LABEL_90;
              v37 = AdtpEtwBuildString((unsigned int)v7 + 16 * v9, v36, (unsigned int)v104, (unsigned int)&v94, v5 + v9);
              goto LABEL_33;
            case 2:
              v40 = *(_QWORD *)(v15 + a1 + 48);
              if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v40) )
                goto LABEL_90;
              AdtpSubstituteDriveLetter();
              v37 = AdtpEtwBuildString((unsigned int)v7 + 16 * v9, v40, (unsigned int)v104, (unsigned int)&v94, v5 + v9);
              v6 = 0;
              goto LABEL_33;
            case 3:
              v37 = AdtpBuildUlongString(*(_DWORD *)(v15 + a1 + 32), (__int64)&v94, v5 + v9);
              goto LABEL_33;
            case 4:
              v61 = *(_QWORD *)(v15 + a1 + 48);
              v62 = 4 * *(unsigned __int8 *)(v61 + 1) + 8;
              if ( *(_DWORD *)(v15 + a1 + 28) < v62 || !RtlValidSid(*(PSID *)(v15 + a1 + 48)) )
              {
                v10 = -1073741704;
                goto LABEL_37;
              }
              v63 = 2LL * v9;
              *(_QWORD *)(v7 + 8 * v63) = v61;
              v6 = 0;
              *(_DWORD *)(v7 + 8 * v63 + 8) = v62;
              *(_DWORD *)(v7 + 8 * v63 + 12) = 0;
              LODWORD(v13) = 1;
              ++v9;
              v11 = 2;
LABEL_57:
              v5 = v97;
LABEL_35:
              v14 = &AdtpNullSid;
              goto LABEL_36;
            case 5:
              goto LABEL_15;
          }
          if ( v16 != 6 )
          {
            if ( v16 != 7 )
              goto LABEL_90;
            v41 = *(_DWORD *)(v15 + a1 + 40);
            if ( v41 >= v96 )
              goto LABEL_90;
            v42 = 32LL * v41;
            if ( *(_DWORD *)(v42 + a1 + 24) != (_DWORD)v13 )
              goto LABEL_90;
            v37 = AdtpBuildAccessesString(
                    *(_QWORD *)(a1 + 80),
                    *(_QWORD *)(v42 + a1 + 48),
                    *(_DWORD *)(v15 + a1 + 32),
                    0,
                    0LL,
                    v7 + 16LL * v9,
                    (__int64)v104,
                    (__int64)&v94,
                    v5 + v9);
            goto LABEL_33;
          }
          v56 = 2LL * v9;
          v9 += v13;
          v57 = 4 * (unsigned __int8)byte_14077EE71 + 8;
          *(_QWORD *)(v7 + 8 * v56) = v14;
          *(_QWORD *)(v7 + 8 * v56 + 8) = v57;
          do
          {
            AdtpEtwBuildDashString(v7 + 16LL * v9);
            v9 += v13;
            a2 = v58 - v13;
          }
          while ( a2 );
          v59 = (unsigned __int16 **)&AdtpNullLuid;
LABEL_72:
          v60 = 2LL * v9;
          *(_QWORD *)(v7 + 8 * v60) = v59;
          *(_QWORD *)(v7 + 8 * v60 + 8) = 8LL;
          goto LABEL_30;
        }
        AdtpEtwBuildDashString(v7 + 16LL * v9);
      }
LABEL_30:
      v9 += v13;
LABEL_36:
      v12 = v13 + v96;
      v96 = v12;
      if ( v12 >= *(_DWORD *)(a1 + 8) )
        goto LABEL_37;
    }
    if ( v16 > 27 )
    {
      switch ( v16 )
      {
        case 28:
          LODWORD(Destination) = 0;
          v86 = 2LL * v91;
          v10 = AdtpBuildSockAddrString(*(_QWORD *)(v15 + a1 + 48), &v103[v86], v9 + v97, 0LL);
          if ( v10 < 0 )
            goto LABEL_37;
          v87 = v103[2 * v91 + 1];
          v11 = 2;
          v88 = v7 + 16LL * v9;
          LODWORD(v13) = 1;
          ++v91;
          ++v9;
          *(_DWORD *)(v88 + 12) = 0;
          *(_QWORD *)v88 = v87;
          *(_DWORD *)(v88 + 8) = LOWORD(v103[v86]) + 2;
          v6 = 0;
          goto LABEL_57;
        case 29:
          goto LABEL_51;
        case 30:
          if ( *(_QWORD *)(v15 + a1 + 32) || *(_QWORD *)(v15 + a1 + 40) )
            goto LABEL_90;
LABEL_51:
          v43 = *(_DWORD **)(v15 + a1 + 48);
          v44 = v43[33];
          if ( v44 >= v96 )
            goto LABEL_90;
          v45 = 32LL * v44;
          if ( *(_DWORD *)(v45 + a1 + 24) != (_DWORD)v13 )
            goto LABEL_90;
          v37 = AdtpBuildAccessReasonAuditString(
                  *(_QWORD *)(a1 + 80),
                  *(_QWORD *)(v45 + a1 + 48),
                  v43,
                  v16 == 30,
                  (int)Destination,
                  v7 + 16LL * v9,
                  (__int64)v104,
                  &v94,
                  (_BYTE *)(v5 + v9));
          goto LABEL_33;
        case 31:
          if ( *(_DWORD *)(v15 + a1 + 32) != 32 || *(_QWORD *)(v15 + a1 + 40) )
            goto LABEL_90;
          v37 = AdtpBuildSecurityDescriptorUnicodeString(
                  32,
                  *(_QWORD *)(v15 + a1 + 48),
                  0,
                  (unsigned int)v7 + 16 * v9,
                  (__int64)v104,
                  (__int64)&v94,
                  v5 + v9);
          goto LABEL_33;
      }
      v64 = v16 - 31 - v11;
      if ( v64 )
      {
        v65 = v64 - 1;
        if ( !v65 )
        {
          v37 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v15 + a1 + 48), v7 + 16LL * v9, v5 + v9);
          goto LABEL_33;
        }
        v71 = v65 == 1;
        goto LABEL_96;
      }
LABEL_15:
      v95 = 0;
      v93 = 0;
      v17 = v16 == 33;
      v92 = 0;
      v98 = 0LL;
      if ( v16 == 35 )
      {
        v6 = v13;
        v18 = &v98;
      }
      else
      {
        v18 = 0LL;
      }
      v102 = 16LL * v91;
      v99 = (unsigned __int16 *)&v103[v102 / 8];
      DestinationString = (PUNICODE_STRING)&v92;
      Destination = (PUNICODE_STRING)&v93;
      v19 = AdtpBuildLogonIdStrings(a1 + 32 + v15, v18, &v95, &v103[v102 / 8]);
      v10 = v19;
      if ( v6 )
      {
        v21 = v95;
        v6 = 0;
        v20 = v98;
      }
      else
      {
        v20 = *(unsigned __int8 **)(a1 + 48);
        v6 = 0;
        v21 = 0;
      }
      if ( v19 < 0 )
        goto LABEL_37;
      v22 = *(_DWORD *)(v15 + a1 + 24);
      if ( v22 == 5 || v22 == 35 )
      {
        if ( !v20 )
        {
          v20 = (unsigned __int8 *)&AdtpNullSid;
          v21 = 0;
        }
        v5 = v97;
        v23 = 4 * v20[1] + 8;
        v24 = 2LL * v9;
        *(_QWORD *)(v7 + 8 * v24) = v20;
        *(_QWORD *)(v7 + 8 * v24 + 8) = v23;
        *(_BYTE *)(v5 + v9) = v21;
LABEL_24:
        LODWORD(v13) = 1;
        ++v9;
      }
      else
      {
        if ( v17 )
        {
          v83 = *(_QWORD *)(v15 + a1 + 48);
          v5 = v97;
          v84 = 4 * *(unsigned __int8 *)(v83 + 1) + 8;
          v85 = 2LL * v9;
          *(_QWORD *)(v7 + 8 * v85) = v83;
          *(_QWORD *)(v7 + 8 * v85 + 8) = v84;
          *(_BYTE *)(v5 + v9) = v21;
          goto LABEL_24;
        }
        if ( v21 && v20 )
          ExFreePoolWithTag(v20, 0);
        v5 = v97;
        LODWORD(v13) = 1;
      }
      v11 = 2;
      v25 = v91 + 1;
      v26 = v9;
      v27 = v9 + 1;
      v28 = v27;
      v29 = 2LL * (unsigned int)v26;
      ++v27;
      *(_QWORD *)(v7 + 8 * v29) = v103[v102 / 8 + 1];
      v30 = v99;
      *(_DWORD *)(v7 + 8 * v29 + 12) = 0;
      *(_DWORD *)(v7 + 8 * v29 + 8) = *v30 + 2;
      *(_BYTE *)(v5 + v26) = v93;
      a2 = 2LL * (unsigned int)v28;
      v91 += 2;
      *(_DWORD *)(v7 + 8 * a2 + 12) = 0;
      *(_QWORD *)(v7 + 8 * a2) = v103[2 * v25 + 1];
      *(_DWORD *)(v7 + 8 * a2 + 8) = LOWORD(v103[2 * v25]) + 2;
      *(_BYTE *)(v5 + v28) = v92;
      v31 = 2LL * v27;
      v9 = v27 + 1;
      *(_QWORD *)(v7 + 8 * v31) = v15 + a1 + 32;
      *(_QWORD *)(v7 + 8 * v31 + 8) = 8LL;
      goto LABEL_35;
    }
    if ( v16 != 27 )
    {
      if ( v16 == 17 )
      {
        v37 = AdtpBuildSidListString(
                *(_QWORD *)(v15 + a1 + 48),
                0,
                (unsigned int)v7 + 16 * v9,
                (unsigned int)v104,
                (__int64)&v94,
                v5 + v9);
        goto LABEL_33;
      }
      LODWORD(a2) = v16 - 18;
      if ( v16 != 18 )
      {
        switch ( v16 )
        {
          case 19:
            v6 = 0;
            v10 = AdtpBuildUserAccountControlString(
                    *(_DWORD *)(v15 + a1 + 32),
                    (PUNICODE_STRING)&v103[2 * v91 + 2],
                    v5 + v9 + 1,
                    (PUNICODE_STRING)&v103[2 * v91 + 4],
                    v5 + v9 + 2);
            if ( v10 < 0 )
              goto LABEL_37;
            v80 = v91;
            v81 = 3LL;
            LODWORD(v13) = 1;
            v11 = 2;
            do
            {
              v82 = v80++;
              v82 *= 2LL;
              a2 = 2LL * v9++;
              *(_QWORD *)(v7 + 8 * a2) = v103[v82 + 1];
              *(_QWORD *)(v7 + 8 * a2 + 8) = (unsigned int)LOWORD(v103[v82]) + 2;
              --v81;
            }
            while ( v81 );
            v91 = v80;
            goto LABEL_35;
          case 20:
            do
            {
              AdtpEtwBuildDashString(v7 + 16LL * v9);
              v9 += v13;
              a2 = v79 - v13;
            }
            while ( a2 );
            goto LABEL_36;
          case 21:
            v37 = AdtpBuildMessageString(
                    *(_DWORD *)(v15 + a1 + 32),
                    0,
                    (unsigned int)v7 + 16 * v9,
                    (unsigned int)v104,
                    (__int64)&v94,
                    v5 + v9);
            goto LABEL_33;
        }
        v69 = v16 - 21 - v11;
        if ( !v69 )
        {
          v73 = 2LL * v91;
          LODWORD(Destination) = v97 + v13 + v9;
          v10 = AdtpBuildSockAddrString(*(_QWORD *)(v15 + a1 + 48), &v103[v73], v9 + v97, &v103[2 * v91 + 2]);
          if ( v10 < 0 )
            goto LABEL_37;
          v74 = v103[2 * v91 + 1];
          v11 = 2;
          v75 = v7 + 16LL * v9;
          LODWORD(v13) = 1;
          v76 = v9 + 1;
          *(_DWORD *)(v75 + 12) = 0;
          v77 = 2LL * (unsigned __int16)(v91 + 1);
          *(_QWORD *)v75 = v74;
          *(_DWORD *)(v75 + 8) = LOWORD(v103[v73]) + 2;
          a2 = 2LL * v76;
          v78 = v103[2 * (unsigned __int16)(v91 + 1) + 1];
          v6 = 0;
          v91 += 2;
          *(_QWORD *)(v7 + 8 * a2) = v78;
          *(_QWORD *)(v7 + 8 * a2 + 8) = (unsigned int)LOWORD(v103[v77]) + 2;
          v9 = v76 + 1;
          goto LABEL_57;
        }
        v70 = v69 - 1;
        if ( !v70 )
        {
          v72 = *(_DWORD *)(v15 + a1 + 32);
          v10 = AdtpBuildSecurityDescriptorChangeString(
                  v72,
                  *(_QWORD *)(v15 + a1 + 48),
                  *(_QWORD *)(32LL * ++v96 + a1 + 48),
                  v7 + 16 * (v13 + v9),
                  v7 + 16LL * v9,
                  v5 + v9,
                  (_DWORD)DestinationString,
                  v7 + 16LL * (int)(v13 + v9),
                  (int)(v13 + v9) + v5,
                  (__int64)v104,
                  (__int64)&v94);
          if ( v10 < 0 )
            goto LABEL_37;
          v11 = 2;
          v9 += 2;
          LODWORD(v13) = 1;
          goto LABEL_35;
        }
        v71 = v70 == v11;
LABEL_96:
        if ( !v71 )
          goto LABEL_90;
        goto LABEL_15;
      }
      v59 = &v99;
      goto LABEL_72;
    }
LABEL_40:
    v39 = 2LL * v9;
    *(_QWORD *)(v7 + 8 * v39) = v15 + a1 + 32;
    *(_QWORD *)(v7 + 8 * v39 + 8) = 4LL;
    goto LABEL_30;
  }
LABEL_37:
  *v101 = v9;
  return (unsigned int)v10;
}
