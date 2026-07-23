/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x14063EC90
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     PnpMultiSzContainsString @ 0x1401CF258 (PnpMultiSzContainsString.c)
 *     PnpStringToDwordValue @ 0x1401CF320 (PnpStringToDwordValue.c)
 *     PnpValidateRegistryMultiSz @ 0x1401CF3C4 (PnpValidateRegistryMultiSz.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x1404E27E0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x140511FA0 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     PiDevCfgCopyVariableData @ 0x140637304 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // r14d
  PVOID *v5; // r13
  unsigned int v6; // r15d
  int RegistryValue; // edi
  unsigned int *v8; // r12
  __int16 v9; // r10
  _WORD *v10; // rbx
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // r12
  __int64 *v15; // rdx
  wchar_t **v16; // rdx
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rcx
  size_t v22; // r14
  unsigned __int16 v23; // bx
  UNICODE_STRING *v24; // r13
  __int64 *v25; // r15
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // eax
  _WORD *v29; // rdx
  int v30; // ecx
  __int64 *v31; // rax
  int v32; // esi
  int v33; // ebx
  bool v34; // zf
  __int64 v35; // rax
  unsigned int v36; // ebx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  wchar_t *PoolWithTag; // rax
  __int64 v41; // rax
  int v42; // esi
  _WORD *v43; // r8
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  bool v47; // al
  __int64 *v48; // rbx
  unsigned int v49; // eax
  __int64 *v50; // r12
  int v51; // ecx
  SIZE_T v52; // r15
  const WCHAR *v53; // r14
  const WCHAR *v54; // r12
  size_t v55; // rsi
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rax
  unsigned int v62; // ebx
  int v63; // eax
  UNICODE_STRING *v64; // rax
  size_t v65; // r8
  char *v66; // rdx
  __int64 v67; // rcx
  char *v68; // rcx
  LONG v69; // eax
  BOOL v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  LONG v75; // eax
  LONG v76; // eax
  LONG v77; // eax
  LONG v78; // eax
  LONG v79; // eax
  int v80; // r8d
  _WORD *v81; // rsi
  int v82; // ecx
  unsigned int v83; // ebx
  __int64 v84; // rax
  UNICODE_STRING *v85; // rax
  unsigned __int64 v86; // rsi
  _BYTE *v87; // r15
  const void *v88; // r13
  PCWSTR v89; // r12
  UNICODE_STRING *v90; // rax
  __int64 v91; // rbx
  SIZE_T v92; // r12
  UNICODE_STRING *v93; // rax
  int v94; // ecx
  unsigned int v95; // r9d
  unsigned int v96; // r8d
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // r8d
  unsigned int v106; // r9d
  int v107; // ecx
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // ecx
  BOOL v114; // eax
  size_t v115; // r8
  int v116; // r9d
  __int64 *v117; // r12
  int v118; // ecx
  const WCHAR *v119; // r14
  size_t v120; // rbx
  wchar_t *v121; // r15
  size_t v122; // rsi
  PCWSTR v123; // rax
  UNICODE_STRING *v124; // rax
  wchar_t *v125; // r14
  int v126; // ecx
  int v127; // esi
  int v128; // ecx
  int v129; // ecx
  int v130; // ecx
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  UNICODE_STRING *v136; // rax
  unsigned int v137; // eax
  _BYTE *v138; // rdx
  int v139; // ecx
  UNICODE_STRING *v141; // rax
  __int64 v142; // rax
  __int64 *v143; // rsi
  __int64 v144; // r14
  _QWORD *v145; // rbx
  void *v146; // rcx
  unsigned int v147; // eax
  __int64 *v148; // rbx
  __int64 v149; // r14
  _QWORD *v150; // rsi
  void *v151; // rcx
  PVOID *v152; // rbx
  void *v153; // rcx
  unsigned __int16 v155; // [rsp+30h] [rbp-79h]
  unsigned int v156; // [rsp+34h] [rbp-75h]
  unsigned int v157; // [rsp+38h] [rbp-71h]
  int v158; // [rsp+3Ch] [rbp-6Dh]
  __int64 *P; // [rsp+48h] [rbp-61h]
  UNICODE_STRING *v160; // [rsp+58h] [rbp-51h] BYREF
  unsigned int v161; // [rsp+60h] [rbp-49h] BYREF
  PVOID v162; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v165; // [rsp+90h] [rbp-19h]
  _WORD *v166; // [rsp+98h] [rbp-11h]
  __int64 v167; // [rsp+A0h] [rbp-9h]
  __int64 v168; // [rsp+A8h] [rbp-1h]
  __int64 v169; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v170; // [rsp+B8h] [rbp+Fh]
  __int64 v171; // [rsp+C0h] [rbp+17h]

  v162 = 0LL;
  v168 = a3;
  v167 = a1;
  v3 = 0LL;
  v4 = 0;
  v156 = 0;
  v157 = 0;
  v5 = 0LL;
  v6 = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &v162);
  if ( RegistryValue < 0 )
    goto LABEL_344;
  v8 = (unsigned int *)v162;
  if ( !PnpValidateRegistryMultiSz(v162) )
    goto LABEL_3;
  v10 = (_WORD *)((char *)v8 + v8[2]);
  v166 = v10;
  v11 = v10;
  if ( *v10 == v9 )
    goto LABEL_3;
  do
  {
    ++v6;
    v12 = -1LL;
    do
      ++v12;
    while ( v11[v12] != v9 );
    v11 += v12 + 1;
  }
  while ( *v11 != v9 );
  v165 = v6;
  if ( !v6 )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_362;
  }
  P = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x63647050u);
  v13 = P;
  if ( !P )
  {
    RegistryValue = -1073741670;
    goto LABEL_362;
  }
  if ( !*v10 )
    goto LABEL_339;
  v14 = v169;
  while ( 1 )
  {
    v15 = 0LL;
    if ( *v10 )
    {
      if ( !v10[1] || !v10[2] )
      {
        v16 = &off_1406EE120;
        v17 = 1;
        while ( *(_DWORD *)v10 != *(_DWORD *)*v16 )
        {
          ++v17;
          v16 += 3;
          if ( v17 >= 0x1B )
            goto LABEL_19;
        }
        v15 = &qword_1406EE100[3 * v17];
        goto LABEL_27;
      }
LABEL_19:
      if ( (unsigned int)v3 >= v165 )
      {
        RegistryValue = -1073741571;
      }
      else
      {
        v160 = 0LL;
        v18 = PiDevCfgResolveVariable(v167, v10, &v160);
        RegistryValue = v18;
        if ( v18 >= 0 )
        {
          v13[v3] = (__int64)v160;
          v3 = (unsigned int)(v3 + 1);
          v156 = v3;
          goto LABEL_22;
        }
        if ( v18 == -1073741772 )
          RegistryValue = -1073741823;
      }
LABEL_339:
      if ( RegistryValue < 0 )
        goto LABEL_343;
      if ( (_DWORD)v3 == 1 )
      {
        RegistryValue = PiDevCfgCopyVariableData(v168, *v13);
        goto LABEL_343;
      }
      v5 = (PVOID *)P;
      RegistryValue = -1073741823;
      goto LABEL_352;
    }
LABEL_27:
    if ( !v15 )
      goto LABEL_19;
    v20 = *((_DWORD *)v15 + 4);
    if ( v20 )
    {
      while ( (_DWORD)v3 )
      {
        v3 = (unsigned int)(v3 - 1);
        v21 = v4++;
        v156 = v3;
        v157 = v4;
        *(&v169 + v21) = v13[v3];
        if ( v4 >= v20 )
          goto LABEL_33;
      }
      RegistryValue = -1073741823;
LABEL_33:
      v14 = v169;
    }
    if ( RegistryValue < 0 )
      goto LABEL_343;
    LODWORD(v22) = 0;
    v23 = 0;
    v155 = 0;
    v24 = 0LL;
    v161 = 0;
    v25 = 0LL;
    LOWORD(v158) = 0;
    v160 = 0LL;
    if ( v157 == 1 )
    {
      v26 = *(_DWORD *)v15;
      v27 = *(_DWORD *)v15 - 22;
      if ( v27 )
      {
        v14 = v169;
        if ( v27 != 1 )
        {
          v28 = *(_DWORD *)(v169 + 32);
          if ( !v28 )
            goto LABEL_44;
          if ( v28 <= 2 )
          {
            v43 = *(_WORD **)(v169 + 40);
            v44 = v26 - 11;
            if ( !v44 )
            {
              v22 = -1LL;
              do
                ++v22;
              while ( v43[v22] );
              goto LABEL_45;
            }
            v45 = v44 - 1;
            if ( v45 )
            {
              v46 = v45 - 13;
              if ( !v46 )
              {
                v47 = PnpStringToDwordValue(*(_QWORD *)(v169 + 40), &v161);
                v14 = v169;
                if ( v47 )
                  LODWORD(v22) = v161;
                else
                  LODWORD(v22) = 0;
                goto LABEL_46;
              }
              if ( v46 == 1 )
              {
                v25 = (__int64 *)v169;
                goto LABEL_45;
              }
LABEL_44:
              v25 = qword_1406E9930;
              goto LABEL_45;
            }
            v34 = *v43 == 0;
LABEL_54:
            LOBYTE(v22) = v34;
            goto LABEL_45;
          }
          if ( v28 != 4 )
          {
            if ( v28 != 7 )
              goto LABEL_44;
            v29 = *(_WORD **)(v169 + 40);
            v30 = v26 - 11;
            if ( !v30 )
            {
              while ( *v29 )
              {
                LODWORD(v22) = v22 + 1;
                v35 = -1LL;
                do
                  ++v35;
                while ( v29[v35] );
                v29 += v35 + 1;
              }
              goto LABEL_45;
            }
            if ( v30 != 1 )
              goto LABEL_44;
            v34 = *v29 == 0;
            goto LABEL_54;
          }
          v36 = **(_DWORD **)(v169 + 40);
          v37 = v26 - 11;
          if ( !v37 )
          {
            LODWORD(v22) = ~v36;
            goto LABEL_65;
          }
          v38 = v37 - 1;
          if ( !v38 )
          {
            LOBYTE(v22) = v36 == 0;
            goto LABEL_65;
          }
          v39 = v38 - 13;
          if ( !v39 )
          {
            LODWORD(v22) = **(_DWORD **)(v169 + 40);
            goto LABEL_65;
          }
          if ( v39 != 1 )
          {
LABEL_64:
            v25 = qword_1406E9930;
LABEL_65:
            v23 = v155;
            goto LABEL_45;
          }
          v158 = 20;
          v155 = 22;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
          v24 = (UNICODE_STRING *)PoolWithTag;
          if ( PoolWithTag )
          {
            RegistryValue = RtlStringCchPrintfW(PoolWithTag, 0xBuLL, L"%u", v36);
            if ( RegistryValue >= 0 )
            {
              v41 = -1LL;
              do
                ++v41;
              while ( *(&v24->Length + v41) );
              v42 = 2 * v41;
              v23 = 2 * v41 + 2;
LABEL_71:
              v155 = v23;
              v158 = v42;
              goto LABEL_72;
            }
            ExFreePoolWithTag(v24, 0);
            v24 = 0LL;
            goto LABEL_65;
          }
          goto LABEL_332;
        }
        if ( *(_DWORD *)(v169 + 32) )
          goto LABEL_46;
      }
      else if ( !*(_DWORD *)(v14 + 32) )
      {
        goto LABEL_46;
      }
      LODWORD(v22) = 1;
      goto LABEL_46;
    }
    if ( v157 != 2 )
    {
      if ( v157 != 3 )
        goto LABEL_46;
      v137 = *(_DWORD *)(v171 + 32);
      if ( !v137 )
        goto LABEL_311;
      if ( v137 <= 2 )
      {
        if ( *(_DWORD *)(v171 + 36) >= 2u )
          goto LABEL_319;
      }
      else if ( v137 == 3 )
      {
        v138 = *(_BYTE **)(v171 + 40);
        v139 = *(_DWORD *)(v171 + 36);
        if ( v139 )
        {
          while ( !*v138++ )
          {
            if ( !--v139 )
              goto LABEL_311;
          }
          goto LABEL_319;
        }
      }
      else
      {
        if ( v137 != 4 )
        {
          if ( v137 == 7 && *(_DWORD *)(v171 + 36) <= 4u )
            goto LABEL_311;
LABEL_319:
          v25 = (__int64 *)v170;
          goto LABEL_46;
        }
        if ( **(_DWORD **)(v171 + 40) )
          goto LABEL_319;
      }
LABEL_311:
      v25 = (__int64 *)v14;
      goto LABEL_46;
    }
    v48 = (__int64 *)v170;
    v49 = *(_DWORD *)(v170 + 32);
    if ( !v49 )
      goto LABEL_303;
    if ( v49 <= 2 )
    {
      v117 = (__int64 *)v169;
      v118 = *(_DWORD *)(v169 + 32);
      if ( (unsigned int)(v118 - 1) > 1 )
      {
        if ( v118 != 7 )
          goto LABEL_64;
        v119 = *(const WCHAR **)(v170 + 40);
        v120 = *(unsigned int *)(v170 + 36);
        v121 = *(wchar_t **)(v169 + 40);
        v122 = *(unsigned int *)(v169 + 36);
        if ( (unsigned int)v120 > 0xFFFE || (unsigned int)v122 > 0xFFFE )
          goto LABEL_334;
        switch ( *(_DWORD *)v15 )
        {
          case 1:
            goto LABEL_270;
          case 8:
            v123 = PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), v119);
            v14 = v169;
            v23 = 0;
            LODWORD(v3) = v156;
            if ( v123 )
            {
              v25 = (__int64 *)v170;
              LODWORD(v22) = 0;
            }
            else
            {
              LODWORD(v22) = 0;
              v25 = 0LL;
            }
            goto LABEL_46;
          case 9:
            if ( PnpMultiSzContainsString(*(PCWSTR *)(v169 + 40), v119) )
              goto LABEL_266;
LABEL_270:
            if ( (unsigned int)(v122 + v120) <= 0xFFFE )
            {
              v155 = v122 + v120;
              v158 = v122 + v120;
              v124 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v122 + v120), 0x63647050u);
              v24 = v124;
              if ( v124 )
              {
                memmove(v124, v119, v120);
                v65 = v122;
                goto LABEL_273;
              }
LABEL_332:
              RegistryValue = -1073741670;
LABEL_333:
              v147 = v157;
              v5 = (PVOID *)P;
              goto LABEL_345;
            }
LABEL_334:
            RegistryValue = -2147483643;
            goto LABEL_333;
        }
LABEL_153:
        v25 = qword_1406E9930;
LABEL_135:
        LODWORD(v22) = 0;
        goto LABEL_113;
      }
      if ( *(_DWORD *)(v170 + 36) > 0xFFFEu || *(_DWORD *)(v169 + 36) > 0xFFFEu )
        goto LABEL_334;
      v125 = *(wchar_t **)(v170 + 40);
      LODWORD(v120) = *(unsigned __int16 *)(v170 + 36);
      v127 = *(unsigned __int16 *)(v169 + 36);
      v126 = *(_DWORD *)v15;
      v121 = *(wchar_t **)(v169 + 40);
      String1.MaximumLength = v120;
      LOWORD(v120) = v120 - 2;
      String2.MaximumLength = v127;
      LOWORD(v127) = v127 - 2;
      String1.Buffer = v125;
      String1.Length = v120;
      String2.Buffer = v121;
      String2.Length = v127;
      v128 = v126 - 1;
      if ( v128 )
      {
        v129 = v128 - 12;
        if ( !v129 )
        {
          if ( (unsigned __int16)v120 >= 2u && (unsigned __int16)v127 >= 2u )
            goto LABEL_110;
          goto LABEL_111;
        }
        v130 = v129 - 1;
        if ( v130 )
        {
          v131 = v130 - 1;
          if ( v131 )
          {
            v132 = v131 - 1;
            if ( v132 )
            {
              v133 = v132 - 1;
              if ( v133 )
              {
                v134 = v133 - 1;
                if ( v134 )
                {
                  v135 = v134 - 1;
                  if ( v135 )
                  {
                    if ( v135 != 1 )
                      goto LABEL_153;
                    v75 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_155:
                    v70 = v75 >= 0;
LABEL_147:
                    LODWORD(v22) = v70;
                    v25 = 0LL;
                    goto LABEL_113;
                  }
                  v76 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_157:
                  v70 = v76 <= 0;
                  goto LABEL_147;
                }
                v77 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_159:
                v70 = v77 > 0;
                goto LABEL_147;
              }
              v78 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_161:
              v70 = v78 < 0;
              goto LABEL_147;
            }
            v79 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_163:
            v70 = v79 != 0;
            goto LABEL_147;
          }
          v69 = RtlCompareUnicodeString(&String1, &String2, 1u);
LABEL_146:
          v70 = v69 == 0;
          goto LABEL_147;
        }
        if ( (unsigned __int16)v120 < 2u && (unsigned __int16)v127 < 2u )
          goto LABEL_111;
LABEL_110:
        LODWORD(v22) = 1;
LABEL_112:
        v25 = 0LL;
        goto LABEL_113;
      }
      if ( !*v125 )
      {
LABEL_266:
        v25 = v117;
        goto LABEL_135;
      }
      if ( !*v121 )
      {
        v25 = (__int64 *)v170;
        goto LABEL_135;
      }
      if ( (unsigned __int16)v120 + (unsigned int)(unsigned __int16)v127 >= 0xFFFE )
        goto LABEL_334;
      v158 = v120 + v127;
      v155 = v120 + v127 + 2;
      v136 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v155, 0x63647050u);
      v24 = v136;
      if ( !v136 )
        goto LABEL_332;
      v120 = (unsigned __int16)v120;
      memmove(v136, v125, (unsigned __int16)v120);
      v65 = (unsigned __int16)v127 + 2LL;
LABEL_273:
      v66 = (char *)v121;
      v67 = 2 * (v120 >> 1);
LABEL_141:
      v68 = (char *)v24 + v67;
LABEL_142:
      memmove(v68, v66, v65);
      LODWORD(v22) = 0;
      v25 = 0LL;
LABEL_143:
      LODWORD(v3) = v156;
LABEL_144:
      v23 = v155;
      goto LABEL_45;
    }
    if ( v49 == 3 )
    {
      if ( *(_DWORD *)(v169 + 32) != 3 )
        goto LABEL_64;
      v115 = *(unsigned int *)(v170 + 36);
      v116 = *(_DWORD *)(v169 + 36);
      if ( *(_DWORD *)v15 == 15 )
      {
        if ( (_DWORD)v115 != v116 || memcmp(*(const void **)(v170 + 40), *(const void **)(v169 + 40), v115) )
          goto LABEL_252;
      }
      else
      {
        if ( *(_DWORD *)v15 != 16 )
        {
          v25 = qword_1406E9930;
          goto LABEL_144;
        }
        if ( (_DWORD)v115 == v116 && !memcmp(*(const void **)(v170 + 40), *(const void **)(v169 + 40), v115) )
        {
LABEL_252:
          LODWORD(v22) = 0;
          goto LABEL_65;
        }
      }
LABEL_243:
      LODWORD(v22) = 1;
      goto LABEL_65;
    }
    if ( v49 == 4 )
    {
      if ( *(_DWORD *)(v169 + 32) != 4 )
        goto LABEL_64;
      v94 = *(_DWORD *)v15;
      v95 = **(_DWORD **)(v170 + 40);
      v96 = **(_DWORD **)(v169 + 40);
      if ( *(int *)v15 > 10 )
      {
        v107 = v94 - 13;
        if ( v107 )
        {
          v108 = v107 - 1;
          if ( v108 )
          {
            v109 = v108 - 1;
            if ( v109 )
            {
              v110 = v109 - 1;
              if ( v110 )
              {
                v111 = v110 - 1;
                if ( v111 )
                {
                  v112 = v111 - 1;
                  if ( v112 )
                  {
                    v113 = v112 - 1;
                    if ( v113 )
                    {
                      if ( v113 != 1 )
                        goto LABEL_64;
                      v114 = v95 >= v96;
                    }
                    else
                    {
                      v114 = v95 <= v96;
                    }
                  }
                  else
                  {
                    v114 = v95 > v96;
                  }
                }
                else
                {
                  v114 = v95 < v96;
                }
              }
              else
              {
                v114 = v95 != v96;
              }
            }
            else
            {
              v114 = v95 == v96;
            }
            LODWORD(v22) = v114;
            goto LABEL_65;
          }
          if ( v95 )
            goto LABEL_243;
        }
        else if ( !v95 )
        {
          goto LABEL_65;
        }
        if ( !v96 )
          goto LABEL_65;
        goto LABEL_243;
      }
      if ( v94 == 10 )
      {
        v105 = v95 ^ v96;
        goto LABEL_212;
      }
      v97 = v94 - 1;
      if ( !v97 )
      {
        LODWORD(v22) = v96 + v95;
        goto LABEL_65;
      }
      v98 = v97 - 1;
      if ( v98 )
      {
        v99 = v98 - 1;
        if ( !v99 )
        {
          v105 = v95 * v96;
          goto LABEL_212;
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
              v103 = v102 - 1;
              if ( v103 )
              {
                v104 = v103 - 1;
                if ( v104 )
                {
                  if ( v104 != 1 )
                    goto LABEL_64;
                  v105 = v95 | v96;
                }
                else
                {
                  v105 = v95 & v96;
                }
LABEL_212:
                LODWORD(v22) = v105;
                goto LABEL_65;
              }
              v106 = v95 >> v96;
            }
            else
            {
              v106 = v95 << v96;
            }
LABEL_215:
            LODWORD(v22) = v106;
            goto LABEL_65;
          }
          v14 = v169;
          v23 = 0;
          if ( v96 )
          {
            LODWORD(v22) = v95 % v96;
            goto LABEL_46;
          }
        }
        else
        {
          v14 = v169;
          v23 = 0;
          if ( v96 )
          {
            LODWORD(v22) = v95 / v96;
            goto LABEL_46;
          }
        }
        RegistryValue = -1073741676;
        goto LABEL_46;
      }
      v106 = v95 - v96;
      goto LABEL_215;
    }
    if ( v49 != 7 )
    {
LABEL_303:
      v23 = 0;
      v25 = qword_1406E9930;
      goto LABEL_46;
    }
    v50 = (__int64 *)v169;
    v51 = *(_DWORD *)(v169 + 32);
    if ( v51 != 7 )
    {
      if ( (unsigned int)(v51 - 1) > 1 )
      {
        if ( v51 != 4 )
          goto LABEL_64;
        v80 = **(_DWORD **)(v169 + 40);
        if ( *(_DWORD *)v15 != 24 )
          goto LABEL_64;
        v81 = *(_WORD **)(v170 + 40);
        v82 = 0;
        v83 = 0;
        while ( *v81 )
        {
          v84 = -1LL;
          do
            ++v84;
          while ( v81[v84] );
          v83 = 2 * v84 + 2;
          if ( v82 == v80 )
            goto LABEL_174;
          ++v82;
          v81 += (unsigned __int64)v83 >> 1;
        }
        if ( v82 == v80 )
        {
LABEL_174:
          if ( *v81 && v83 > 2 )
          {
            v155 = v83;
            LOWORD(v158) = v83 - 16;
            v85 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v83, 0x63647050u);
            v24 = v85;
            if ( !v85 )
              goto LABEL_332;
            memmove(v85, v81, v83);
            goto LABEL_143;
          }
        }
        v25 = qword_1406E9930;
        goto LABEL_113;
      }
      v86 = *(unsigned int *)(v170 + 36);
      v87 = *(_BYTE **)(v170 + 40);
      v88 = *(const void **)(v169 + 40);
      v22 = *(unsigned int *)(v169 + 36);
      if ( (unsigned int)v86 > 0xFFFE || (unsigned int)v22 > 0xFFFE )
        goto LABEL_334;
      if ( *(_DWORD *)v15 != 1 )
      {
        if ( *(_DWORD *)v15 == 2 )
        {
          v89 = PnpMultiSzContainsString(*(PCWSTR *)(v170 + 40), *(const WCHAR **)(v169 + 40));
          if ( v89 )
          {
            v155 = v86 - v22;
            v158 = (unsigned __int16)(v86 - v22);
            v90 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v86 - v22), 0x63647050u);
            v24 = v90;
            if ( !v90 )
              goto LABEL_332;
            v91 = ((char *)v89 - v87) >> 1;
            if ( v91 > 0 )
              memmove(v90, v87, ((char *)v89 - v87) >> 1);
            v66 = (char *)v89 + v22;
            v68 = (char *)v24 + v91;
            v65 = (unsigned int)(v86 - v22) - v91;
            goto LABEL_142;
          }
LABEL_187:
          LODWORD(v22) = 0;
          v25 = v48;
          v24 = v160;
          goto LABEL_113;
        }
        if ( *(_DWORD *)v15 == 8 )
        {
          v23 = 0;
          LODWORD(v3) = v156;
          if ( PnpMultiSzContainsString(*(PCWSTR *)(v170 + 40), *(const WCHAR **)(v169 + 40)) )
          {
            LODWORD(v22) = 0;
            v25 = v50;
            v24 = v160;
          }
          else
          {
            v25 = 0LL;
            LODWORD(v22) = 0;
            v24 = 0LL;
          }
          goto LABEL_45;
        }
        if ( *(_DWORD *)v15 != 9 )
        {
          LODWORD(v22) = 0;
          v25 = qword_1406E9930;
          v24 = 0LL;
          goto LABEL_113;
        }
        if ( PnpMultiSzContainsString(*(PCWSTR *)(v170 + 40), *(const WCHAR **)(v169 + 40)) )
          goto LABEL_187;
      }
      if ( (unsigned int)(v22 + v86) <= 0xFFFE )
      {
        v92 = (unsigned __int16)(v22 + v86);
        v155 = v22 + v86;
        v158 = v22 + v86;
        v93 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v92, 0x63647050u);
        v160 = v93;
        if ( v93 )
        {
          memmove(v93, v87, v86 - 2);
          memmove((char *)&v160[-1].Buffer + 2 * (v86 >> 1) + 6, v88, v22);
          v24 = v160;
          LODWORD(v22) = 0;
          *((_WORD *)v160 + (v92 >> 1) - 1) = 0;
          goto LABEL_132;
        }
        goto LABEL_332;
      }
      goto LABEL_334;
    }
    v52 = *(unsigned int *)(v170 + 36);
    v53 = *(const WCHAR **)(v170 + 40);
    v54 = *(const WCHAR **)(v169 + 40);
    v55 = *(unsigned int *)(v169 + 36);
    if ( (unsigned int)v52 > 0xFFFE || (unsigned int)v55 > 0xFFFE )
      goto LABEL_334;
    v56 = *(_DWORD *)v15;
    if ( *(int *)v15 > 15 )
    {
      v71 = v56 - 16;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( v72 )
        {
          v73 = v72 - 1;
          if ( v73 )
          {
            v74 = v73 - 1;
            if ( v74 )
            {
              if ( v74 != 1 )
                goto LABEL_153;
              v75 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
              goto LABEL_155;
            }
            v76 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
            goto LABEL_157;
          }
          v77 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
          goto LABEL_159;
        }
        v78 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
        goto LABEL_161;
      }
      v79 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
      goto LABEL_163;
    }
    if ( v56 == 15 )
    {
      v69 = RtlCompareUnicodeStrings(v53, v52 >> 1, v54, v55 >> 1, 1u);
      goto LABEL_146;
    }
    v57 = v56 - 1;
    if ( !v57 )
      goto LABEL_133;
    v58 = v57 - 7;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( v59 )
      {
        v60 = v59 - 4;
        if ( v60 )
        {
          if ( v60 != 1 )
            goto LABEL_153;
          if ( (unsigned int)v52 > 2 )
            goto LABEL_110;
LABEL_115:
          if ( (unsigned int)v55 > 2 )
            goto LABEL_110;
        }
        else if ( (unsigned int)v52 > 2 )
        {
          goto LABEL_115;
        }
LABEL_111:
        LODWORD(v22) = 0;
        goto LABEL_112;
      }
LABEL_133:
      if ( !*v53 )
      {
        v25 = (__int64 *)v169;
        goto LABEL_135;
      }
      if ( !*v54 )
      {
        v25 = (__int64 *)v170;
        goto LABEL_135;
      }
      if ( (unsigned __int64)(unsigned int)(v55 + v52) - 2 > 0xFFFE )
        goto LABEL_334;
      v63 = v55 + v52;
      LOWORD(v63) = v55 + v52 - 2;
      v155 = v63;
      v158 = v63;
      v64 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v63, 0x63647050u);
      v24 = v64;
      if ( !v64 )
        goto LABEL_332;
      memmove(v64, v53, v52 - 2);
      v65 = v55;
      v66 = (char *)v54;
      v67 = 2 * (v52 >> 1) - 2;
      goto LABEL_141;
    }
    if ( !*v53 )
      goto LABEL_131;
    while ( 1 )
    {
      v61 = -1LL;
      do
        ++v61;
      while ( v53[v61] );
      v62 = 2 * v61 + 2;
      if ( !PnpMultiSzContainsString(v54, v53) )
      {
        v42 = v158;
        goto LABEL_129;
      }
      if ( v24 )
      {
        v42 = v158;
        goto LABEL_127;
      }
      v42 = 0;
      v158 = 0;
      v24 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v52, 0x63647050u);
      if ( !v24 )
        break;
LABEL_127:
      memmove((char *)v24 + (unsigned __int16)v42, v53, v62);
      LOWORD(v42) = v62 + v42;
      v158 = v42;
LABEL_129:
      v53 += (unsigned __int64)v62 >> 1;
      if ( !*v53 )
        goto LABEL_124;
    }
    RegistryValue = -1073741670;
LABEL_124:
    if ( v24 )
    {
      LODWORD(v22) = 0;
      LOWORD(v42) = v42 + 2;
      v25 = 0LL;
      v23 = v42;
      *((_WORD *)v24 + ((unsigned __int64)(unsigned __int16)v42 >> 1) - 1) = 0;
      goto LABEL_71;
    }
LABEL_131:
    LODWORD(v22) = 0;
LABEL_132:
    v25 = 0LL;
LABEL_113:
    v23 = v155;
LABEL_72:
    LODWORD(v3) = v156;
LABEL_45:
    v14 = v169;
LABEL_46:
    if ( RegistryValue < 0 )
      goto LABEL_343;
    if ( v25 )
      goto LABEL_323;
    v31 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v25 = v31;
    if ( !v31 )
      goto LABEL_335;
    *((_DWORD *)v31 + 4) = 0;
    v31[3] = 0LL;
    if ( !v24 )
      break;
    v32 = v23;
    v33 = 1;
    if ( (_WORD)v158 == v155 )
      v33 = 7;
LABEL_322:
    *((_DWORD *)v25 + 9) = v32;
    LODWORD(v3) = v156;
    *((_DWORD *)v25 + 8) = v33;
    v25[5] = (__int64)v24;
LABEL_323:
    v142 = (unsigned int)v3;
    v3 = (unsigned int)(v3 + 1);
    v156 = v3;
    P[v142] = (__int64)v25;
    if ( v157 )
    {
      v143 = &v169;
      v144 = v157;
      do
      {
        v145 = (_QWORD *)*v143;
        if ( !*(_QWORD *)(*v143 + 24) )
        {
          v146 = (void *)v145[5];
          if ( v146 )
            ExFreePoolWithTag(v146, 0);
          ExFreePoolWithTag(v145, 0);
        }
        ++v143;
        --v144;
      }
      while ( v144 );
      v3 = v156;
    }
    v10 = v166;
    v4 = 0;
    v157 = 0;
    v13 = P;
LABEL_22:
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    v10 += v19 + 1;
    v166 = v10;
    if ( !*v10 )
      goto LABEL_339;
  }
  v33 = 4;
  v32 = 4;
  v141 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
  v24 = v141;
  if ( v141 )
  {
    *(_DWORD *)&v141->Length = v22;
    goto LABEL_322;
  }
LABEL_335:
  RegistryValue = -1073741670;
LABEL_343:
  v5 = (PVOID *)P;
LABEL_344:
  v147 = v157;
  if ( v157 )
  {
LABEL_345:
    v148 = &v169;
    v149 = v147;
    do
    {
      v150 = (_QWORD *)*v148;
      if ( !*(_QWORD *)(*v148 + 24) )
      {
        v151 = (void *)v150[5];
        if ( v151 )
          ExFreePoolWithTag(v151, 0);
        ExFreePoolWithTag(v150, 0);
      }
      ++v148;
      --v149;
    }
    while ( v149 );
  }
  v3 = v156;
LABEL_352:
  if ( v5 )
  {
    if ( (_DWORD)v3 )
    {
      v152 = v5;
      do
      {
        if ( !*((_QWORD *)*v152 + 3) )
        {
          v153 = (void *)*((_QWORD *)*v152 + 5);
          if ( v153 )
            ExFreePoolWithTag(v153, 0);
          ExFreePoolWithTag(*v152, 0);
        }
        ++v152;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(v5, 0);
  }
  v8 = (unsigned int *)v162;
LABEL_362:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RegistryValue;
}
