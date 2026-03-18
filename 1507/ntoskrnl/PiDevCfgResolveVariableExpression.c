/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x14068A41C
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     wcstoul @ 0x1401740E0 (wcstoul.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1404DA390 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PiDevCfgCopyVariableData @ 0x1406857EC (PiDevCfgCopyVariableData.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  unsigned int v5; // r14d
  PVOID *v6; // r13
  unsigned int v7; // r15d
  int RegistryValue; // edi
  unsigned int v9; // ecx
  _WORD *v10; // rbx
  unsigned __int64 v11; // rax
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // r12
  __int64 *v16; // rdx
  wchar_t **v17; // rdx
  unsigned int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r14
  int v24; // esi
  UNICODE_STRING *v25; // r13
  __int64 *v26; // r15
  int v27; // ecx
  unsigned int v28; // eax
  _WORD *v29; // rdx
  int v30; // ecx
  bool v31; // zf
  __int64 v32; // rax
  unsigned int v33; // ebx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  wchar_t *v37; // rax
  __int64 v38; // rax
  _WORD *v39; // r9
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  const wchar_t *v43; // rcx
  int v44; // r8d
  __int64 *v45; // rbx
  unsigned int v46; // eax
  __int64 *v47; // r11
  int v48; // ecx
  SIZE_T v49; // r15
  const WCHAR *v50; // r14
  const WCHAR *v51; // r12
  size_t v52; // rsi
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  __int64 v58; // rax
  unsigned int v59; // esi
  const WCHAR *v60; // rbx
  int v61; // ebx
  int v62; // eax
  UNICODE_STRING *v63; // rax
  size_t v64; // r8
  char *v65; // rdx
  __int64 v66; // rcx
  char *v67; // rcx
  LONG v68; // eax
  BOOL v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  LONG v74; // eax
  LONG v75; // eax
  LONG v76; // eax
  LONG v77; // eax
  LONG v78; // eax
  int v79; // r8d
  _WORD *v80; // rsi
  int v81; // ecx
  unsigned int v82; // ebx
  __int64 v83; // rax
  UNICODE_STRING *v84; // rax
  unsigned __int64 v85; // r15
  const void *v86; // r13
  size_t v87; // r12
  const WCHAR *v88; // rbx
  UNICODE_STRING *v89; // rax
  __int64 *v90; // rax
  int v91; // ebx
  const WCHAR *v92; // rsi
  UNICODE_STRING *v93; // rax
  __int64 v94; // rbx
  int v95; // ecx
  unsigned int v96; // r9d
  unsigned int v97; // r8d
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  int v103; // ecx
  int v104; // ecx
  int v105; // ecx
  int v106; // r8d
  unsigned int v107; // r9d
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // ecx
  int v114; // ecx
  BOOL v115; // eax
  size_t v116; // r8
  const void *v117; // r11
  int v118; // r9d
  int v119; // ecx
  size_t v120; // r15
  const void *v121; // r12
  const WCHAR *v122; // rsi
  size_t v123; // r14
  const WCHAR *i; // rbx
  UNICODE_STRING *v125; // rax
  wchar_t *v126; // r14
  int v127; // ecx
  wchar_t *v128; // r15
  int v129; // ebx
  int v130; // esi
  int v131; // ecx
  int v132; // ecx
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  int v137; // ecx
  int v138; // ecx
  UNICODE_STRING *v139; // rax
  unsigned int v140; // eax
  _BYTE *v141; // rdx
  int v142; // ecx
  UNICODE_STRING *v144; // rax
  __int64 *v145; // rsi
  __int64 v146; // r14
  _QWORD *v147; // rbx
  void *v148; // rcx
  unsigned int v149; // eax
  __int64 *v150; // rbx
  __int64 v151; // r14
  _QWORD *v152; // rsi
  void *v153; // rcx
  PVOID *v154; // rbx
  void *v155; // rcx
  unsigned __int16 v157; // [rsp+30h] [rbp-D0h]
  unsigned int v158; // [rsp+34h] [rbp-CCh]
  int v159; // [rsp+38h] [rbp-C8h]
  __int64 *PoolWithTag; // [rsp+48h] [rbp-B8h]
  unsigned int v161; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING *v162; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v163; // [rsp+68h] [rbp-98h]
  UNICODE_STRING v164; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v165; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v167; // [rsp+98h] [rbp-68h]
  _WORD *v168; // [rsp+A0h] [rbp-60h]
  wchar_t *EndPtr; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v170; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v171; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v173; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v174; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v175; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v176; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v178; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v179; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v180; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v181; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING String1; // [rsp+168h] [rbp+68h] BYREF
  __int64 v183; // [rsp+178h] [rbp+78h] BYREF
  __int64 v184; // [rsp+180h] [rbp+80h]
  __int64 v185; // [rsp+188h] [rbp+88h]

  P = 0LL;
  v163 = a3;
  v3 = a3;
  v170 = a1;
  v4 = 0LL;
  v5 = 0;
  v161 = 0;
  v158 = 0;
  v6 = 0LL;
  v7 = 0;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_358;
  if ( *((_DWORD *)P + 1) != 7 )
    goto LABEL_386;
  v9 = *((_DWORD *)P + 3);
  v10 = (char *)P + *((unsigned int *)P + 2);
  v168 = v10;
  if ( v9 < 4 || (v11 = (unsigned __int64)v9 >> 1, v10[v11 - 1]) || v10[v11 - 2] )
  {
    if ( v9 != 2 || *v10 )
      goto LABEL_386;
  }
  v12 = v10;
  if ( !*v10 )
    goto LABEL_386;
  do
  {
    ++v7;
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v12 += v13 + 1;
  }
  while ( *v12 );
  v167 = v7;
  if ( !v7 )
  {
LABEL_386:
    RegistryValue = -1073741823;
    goto LABEL_375;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x63647050u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryValue = -1073741670;
    goto LABEL_375;
  }
  if ( !*v10 )
    goto LABEL_382;
  v15 = v183;
  while ( 1 )
  {
    v16 = 0LL;
    if ( *v10 )
    {
      if ( !v10[1] || !v10[2] )
      {
        v17 = &off_140725D90;
        v18 = 1;
        while ( *(_DWORD *)v10 != *(_DWORD *)*v17 )
        {
          ++v18;
          v17 += 3;
          if ( v18 >= 0x1A )
            goto LABEL_23;
        }
        v16 = &qword_140725D70[3 * v18];
        goto LABEL_31;
      }
LABEL_23:
      if ( (unsigned int)v4 >= v167 )
      {
        RegistryValue = -1073741571;
LABEL_381:
        v3 = v163;
      }
      else
      {
        v162 = 0LL;
        v19 = PiDevCfgResolveVariable(v170, (__int64)v10, &v162);
        RegistryValue = v19;
        if ( v19 >= 0 )
        {
          v14[v4] = (__int64)v162;
          v4 = (unsigned int)(v4 + 1);
          v161 = v4;
          goto LABEL_26;
        }
        v3 = v163;
        if ( v19 == -1073741772 )
          RegistryValue = -1073741823;
      }
LABEL_382:
      if ( RegistryValue < 0 )
        goto LABEL_357;
      if ( (_DWORD)v4 == 1 )
      {
        RegistryValue = PiDevCfgCopyVariableData(v3, *v14);
        goto LABEL_357;
      }
      v6 = (PVOID *)PoolWithTag;
      RegistryValue = -1073741823;
      goto LABEL_366;
    }
LABEL_31:
    if ( !v16 )
      goto LABEL_23;
    v21 = *((_DWORD *)v16 + 4);
    if ( v21 )
    {
      while ( (_DWORD)v4 )
      {
        v4 = (unsigned int)(v4 - 1);
        v22 = v5++;
        v161 = v4;
        v158 = v5;
        *(&v183 + v22) = v14[v4];
        if ( v5 >= v21 )
          goto LABEL_37;
      }
      RegistryValue = -1073741823;
LABEL_37:
      v15 = v183;
    }
    if ( RegistryValue < 0 )
      goto LABEL_357;
    LODWORD(v23) = 0;
    LOWORD(v24) = 0;
    v157 = 0;
    v25 = 0LL;
    LOWORD(v159) = 0;
    v26 = 0LL;
    v162 = 0LL;
    if ( v158 == 1 )
    {
      v27 = *(_DWORD *)v16;
      if ( *(_DWORD *)v16 == 22 )
      {
        LOBYTE(v23) = *(_DWORD *)(v15 + 32) != 0;
        goto LABEL_201;
      }
      v28 = *(_DWORD *)(v183 + 32);
      if ( !v28 )
        goto LABEL_88;
      if ( v28 > 2 )
      {
        if ( v28 != 4 )
        {
          if ( v28 == 7 )
          {
            v29 = *(_WORD **)(v183 + 40);
            v30 = v27 - 11;
            if ( !v30 )
            {
              while ( *v29 )
              {
                LODWORD(v23) = v23 + 1;
                v32 = -1LL;
                do
                  ++v32;
                while ( v29[v32] );
                v29 += v32 + 1;
              }
              goto LABEL_89;
            }
            if ( v30 == 1 )
            {
              v31 = *v29 == 0;
LABEL_49:
              LOBYTE(v23) = v31;
LABEL_89:
              v15 = v183;
              goto LABEL_201;
            }
          }
          goto LABEL_88;
        }
        v33 = **(_DWORD **)(v183 + 40);
        v34 = v27 - 11;
        if ( !v34 )
        {
          LODWORD(v23) = ~v33;
          goto LABEL_89;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          v31 = v33 == 0;
          goto LABEL_49;
        }
        v36 = v35 - 12;
        if ( !v36 )
        {
          LODWORD(v23) = **(_DWORD **)(v183 + 40);
          goto LABEL_89;
        }
        if ( v36 != 1 )
        {
LABEL_88:
          v26 = qword_140721A28;
          goto LABEL_89;
        }
        LOWORD(v24) = 22;
        v159 = 20;
        v157 = 22;
        v37 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x16uLL, 0x63647050u);
        v25 = (UNICODE_STRING *)v37;
        if ( v37 )
        {
          RegistryValue = RtlStringCchPrintfW(v37, 0xBuLL, L"%u", v33);
          if ( RegistryValue >= 0 )
          {
            v38 = -1LL;
            do
              ++v38;
            while ( *(&v25->Length + v38) );
            v159 = 2 * v38;
            LOWORD(v24) = 2 * v38 + 2;
LABEL_64:
            v157 = v24;
            goto LABEL_65;
          }
          ExFreePoolWithTag(v25, 0);
          goto LABEL_67;
        }
        goto LABEL_353;
      }
      v39 = *(_WORD **)(v183 + 40);
      v40 = v27 - 11;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 12;
          if ( v42 )
          {
            v15 = v183;
            if ( v42 == 1 )
              v26 = (__int64 *)v183;
            else
              v26 = qword_140721A28;
            goto LABEL_201;
          }
          if ( *v39 != 48 || ((v39[1] - 88) & 0xFFDF) != 0 )
          {
            v44 = 10;
            v43 = *(const wchar_t **)(v183 + 40);
          }
          else
          {
            v43 = v39 + 2;
            v44 = 16;
          }
          LODWORD(v23) = wcstoul(v43, &EndPtr, v44);
          if ( !EndPtr || *EndPtr )
            LODWORD(v23) = 0;
        }
        else
        {
          LOBYTE(v23) = *v39 == 0;
        }
      }
      else
      {
        v23 = -1LL;
        do
          ++v23;
        while ( v39[v23] );
      }
LABEL_65:
      v15 = v183;
      goto LABEL_201;
    }
    if ( v158 != 2 )
    {
      if ( v158 != 3 )
        goto LABEL_201;
      v140 = *(_DWORD *)(v185 + 32);
      if ( v140 )
      {
        if ( v140 <= 2 )
        {
          if ( *(_DWORD *)(v185 + 36) < 2u )
            goto LABEL_200;
        }
        else if ( v140 == 3 )
        {
          v141 = *(_BYTE **)(v185 + 40);
          v142 = *(_DWORD *)(v185 + 36);
          if ( !v142 )
            goto LABEL_200;
          while ( !*v141++ )
          {
            if ( !--v142 )
              goto LABEL_200;
          }
        }
        else if ( v140 == 4 )
        {
          if ( !**(_DWORD **)(v185 + 40) )
            goto LABEL_200;
        }
        else if ( v140 == 7 && *(_DWORD *)(v185 + 36) <= 4u )
        {
          goto LABEL_200;
        }
        v26 = (__int64 *)v184;
        goto LABEL_201;
      }
LABEL_200:
      v26 = (__int64 *)v15;
      goto LABEL_201;
    }
    v45 = (__int64 *)v184;
    v46 = *(_DWORD *)(v184 + 32);
    if ( !v46 )
      goto LABEL_276;
    if ( v46 <= 2 )
    {
      v47 = (__int64 *)v183;
      v119 = *(_DWORD *)(v183 + 32);
      if ( (unsigned int)(v119 - 1) > 1 )
      {
        if ( v119 == 7 )
        {
          v120 = *(unsigned int *)(v184 + 36);
          v121 = *(const void **)(v184 + 40);
          v122 = *(const WCHAR **)(v183 + 40);
          v123 = *(unsigned int *)(v183 + 36);
          if ( (unsigned int)v120 > 0xFFFE || (unsigned int)v123 > 0xFFFE )
            goto LABEL_355;
          if ( *(_DWORD *)v16 == 1 )
            goto LABEL_287;
          if ( *(_DWORD *)v16 != 8 )
          {
            if ( *(_DWORD *)v16 == 9 )
            {
              RtlInitUnicodeString(&v179, *(PCWSTR *)(v184 + 40));
              for ( i = v122; *i; i += ((unsigned __int64)v174.Length >> 1) + 1 )
              {
                RtlInitUnicodeString(&v174, i);
                if ( RtlEqualUnicodeString(&v179, &v174, 1u) )
                {
                  v15 = v183;
                  LODWORD(v23) = 0;
                  v26 = (__int64 *)v183;
                  goto LABEL_111;
                }
              }
LABEL_287:
              if ( (unsigned int)(v123 + v120) <= 0xFFFE )
              {
                v157 = v123 + v120;
                v159 = v123 + v120;
                v125 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v123 + v120), 0x63647050u);
                v25 = v125;
                if ( v125 )
                {
                  memmove(v125, v121, v120);
                  v64 = v123;
                  v65 = (char *)v122;
                  v66 = 2 * (v120 >> 1);
                  goto LABEL_141;
                }
LABEL_353:
                RegistryValue = -1073741670;
LABEL_354:
                v149 = v158;
                v6 = (PVOID *)PoolWithTag;
                goto LABEL_359;
              }
LABEL_355:
              RegistryValue = -2147483643;
              goto LABEL_354;
            }
LABEL_153:
            v26 = qword_140721A28;
LABEL_135:
            LODWORD(v23) = 0;
            goto LABEL_110;
          }
          RtlInitUnicodeString(&v181, *(PCWSTR *)(v184 + 40));
          while ( *v122 )
          {
            RtlInitUnicodeString(&v176, v122);
            if ( RtlEqualUnicodeString(&v181, &v176, 1u) )
              goto LABEL_137;
            v122 += ((unsigned __int64)v176.Length >> 1) + 1;
          }
          LODWORD(v23) = 0;
LABEL_147:
          v26 = 0LL;
          goto LABEL_110;
        }
LABEL_167:
        v26 = qword_140721A28;
        goto LABEL_65;
      }
      if ( *(_DWORD *)(v184 + 36) > 0xFFFEu || *(_DWORD *)(v183 + 36) > 0xFFFEu )
        goto LABEL_355;
      v126 = *(wchar_t **)(v184 + 40);
      v129 = *(unsigned __int16 *)(v184 + 36);
      v130 = *(unsigned __int16 *)(v183 + 36);
      v127 = *(_DWORD *)v16;
      v128 = *(wchar_t **)(v183 + 40);
      v165.MaximumLength = v129;
      LOWORD(v129) = v129 - 2;
      v164.MaximumLength = v130;
      LOWORD(v130) = v130 - 2;
      v165.Buffer = v126;
      v165.Length = v129;
      v164.Buffer = v128;
      v164.Length = v130;
      v131 = v127 - 1;
      if ( v131 )
      {
        v132 = v131 - 12;
        if ( !v132 )
        {
          if ( (unsigned __int16)v129 >= 2u && (unsigned __int16)v130 >= 2u )
            goto LABEL_107;
          goto LABEL_108;
        }
        v133 = v132 - 1;
        if ( v133 )
        {
          v134 = v133 - 1;
          if ( v134 )
          {
            v135 = v134 - 1;
            if ( v135 )
            {
              v136 = v135 - 1;
              if ( v136 )
              {
                v137 = v136 - 1;
                if ( v137 )
                {
                  v138 = v137 - 1;
                  if ( v138 )
                  {
                    if ( v138 != 1 )
                      goto LABEL_153;
                    v74 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_155:
                    v69 = v74 >= 0;
LABEL_146:
                    LODWORD(v23) = v69;
                    goto LABEL_147;
                  }
                  v75 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_157:
                  v69 = v75 <= 0;
                  goto LABEL_146;
                }
                v76 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_159:
                v69 = v76 > 0;
                goto LABEL_146;
              }
              v77 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_161:
              v69 = v77 < 0;
              goto LABEL_146;
            }
            v78 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_163:
            v69 = v78 != 0;
            goto LABEL_146;
          }
          v68 = RtlCompareUnicodeString(&v165, &v164, 1u);
LABEL_145:
          v69 = v68 == 0;
          goto LABEL_146;
        }
        if ( (unsigned __int16)v129 < 2u && (unsigned __int16)v130 < 2u )
          goto LABEL_108;
LABEL_107:
        LODWORD(v23) = 1;
LABEL_109:
        v26 = 0LL;
        goto LABEL_110;
      }
      if ( !*v126 )
      {
LABEL_134:
        v26 = v47;
        goto LABEL_135;
      }
      if ( !*v128 )
      {
        v26 = (__int64 *)v184;
        goto LABEL_135;
      }
      if ( (unsigned __int16)v129 + (unsigned int)(unsigned __int16)v130 >= 0xFFFE )
        goto LABEL_355;
      v159 = v129 + v130;
      v157 = v129 + v130 + 2;
      v139 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v157, 0x63647050u);
      v25 = v139;
      if ( !v139 )
        goto LABEL_353;
      memmove(v139, v126, (unsigned __int16)v129);
      v65 = (char *)v128;
      v64 = (unsigned __int16)v130 + 2LL;
      v66 = 2 * ((unsigned __int64)(unsigned __int16)v129 >> 1);
LABEL_141:
      v67 = (char *)v25 + v66;
LABEL_142:
      memmove(v67, v65, v64);
      LODWORD(v23) = 0;
      v26 = 0LL;
LABEL_143:
      v15 = v183;
      LOWORD(v24) = v157;
      goto LABEL_201;
    }
    if ( v46 == 3 )
    {
      v15 = v183;
      if ( *(_DWORD *)(v183 + 32) != 3 )
      {
LABEL_276:
        v26 = qword_140721A28;
        goto LABEL_201;
      }
      v116 = *(unsigned int *)(v184 + 36);
      v117 = *(const void **)(v183 + 40);
      v118 = *(_DWORD *)(v183 + 36);
      if ( *(_DWORD *)v16 == 15 )
      {
        if ( (_DWORD)v116 != v118 || memcmp(*(const void **)(v184 + 40), v117, v116) )
        {
LABEL_270:
          LODWORD(v23) = 0;
          goto LABEL_201;
        }
      }
      else
      {
        if ( *(_DWORD *)v16 != 16 )
        {
          v26 = qword_140721A28;
          goto LABEL_201;
        }
        if ( (_DWORD)v116 == v118 && !memcmp(*(const void **)(v184 + 40), v117, v116) )
          goto LABEL_270;
      }
      LODWORD(v23) = 1;
      goto LABEL_201;
    }
    if ( v46 == 4 )
    {
      if ( *(_DWORD *)(v183 + 32) != 4 )
        goto LABEL_167;
      v95 = *(_DWORD *)v16;
      v96 = **(_DWORD **)(v184 + 40);
      v97 = **(_DWORD **)(v183 + 40);
      if ( *(int *)v16 <= 10 )
      {
        if ( v95 == 10 )
        {
          v106 = v96 ^ v97;
          goto LABEL_230;
        }
        v98 = v95 - 1;
        if ( !v98 )
        {
          LODWORD(v23) = v97 + v96;
          goto LABEL_65;
        }
        v99 = v98 - 1;
        if ( v99 )
        {
          v100 = v99 - 1;
          if ( !v100 )
          {
            v106 = v96 * v97;
            goto LABEL_230;
          }
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
                  v105 = v104 - 1;
                  if ( v105 )
                  {
                    if ( v105 != 1 )
                      goto LABEL_167;
                    v106 = v96 | v97;
                  }
                  else
                  {
                    v106 = v96 & v97;
                  }
LABEL_230:
                  LODWORD(v23) = v106;
                  goto LABEL_65;
                }
                v107 = v96 >> v97;
              }
              else
              {
                v107 = v96 << v97;
              }
LABEL_233:
              LODWORD(v23) = v107;
              goto LABEL_65;
            }
            v15 = v183;
            if ( v97 )
            {
              LODWORD(v23) = v96 % v97;
              goto LABEL_201;
            }
          }
          else
          {
            v15 = v183;
            if ( v97 )
            {
              LODWORD(v23) = v96 / v97;
              goto LABEL_201;
            }
          }
          RegistryValue = -1073741676;
          goto LABEL_201;
        }
        v107 = v96 - v97;
        goto LABEL_233;
      }
      v108 = v95 - 13;
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
                  v114 = v113 - 1;
                  if ( v114 )
                  {
                    if ( v114 != 1 )
                      goto LABEL_167;
                    v115 = v96 >= v97;
                  }
                  else
                  {
                    v115 = v96 <= v97;
                  }
                }
                else
                {
                  v115 = v96 > v97;
                }
              }
              else
              {
                v115 = v96 < v97;
              }
            }
            else
            {
              v115 = v96 != v97;
            }
          }
          else
          {
            v115 = v96 == v97;
          }
          LODWORD(v23) = v115;
          goto LABEL_65;
        }
        if ( !v96 )
        {
LABEL_260:
          if ( !v97 )
            goto LABEL_65;
        }
        LODWORD(v23) = 1;
        goto LABEL_65;
      }
      if ( !v96 )
        goto LABEL_65;
      goto LABEL_260;
    }
    if ( v46 != 7 )
      goto LABEL_276;
    v47 = (__int64 *)v183;
    v48 = *(_DWORD *)(v183 + 32);
    if ( v48 != 7 )
    {
      if ( (unsigned int)(v48 - 1) <= 1 )
      {
        v85 = *(unsigned int *)(v184 + 36);
        v23 = *(_QWORD *)(v184 + 40);
        v86 = *(const void **)(v183 + 40);
        v87 = *(unsigned int *)(v183 + 36);
        if ( (unsigned int)v85 > 0xFFFE || (unsigned int)v87 > 0xFFFE )
          goto LABEL_355;
        if ( *(_DWORD *)v16 != 1 )
        {
          if ( *(_DWORD *)v16 == 2 )
          {
            RtlInitUnicodeString(&v178, *(PCWSTR *)(v183 + 40));
            v92 = (const WCHAR *)v23;
            if ( !*(_WORD *)v23 )
              goto LABEL_211;
            while ( 1 )
            {
              RtlInitUnicodeString(&v171, v92);
              if ( RtlEqualUnicodeString(&v178, &v171, 1u) )
                break;
              v92 += ((unsigned __int64)v171.Length >> 1) + 1;
              if ( !*v92 )
                goto LABEL_211;
            }
            if ( !v92 )
            {
LABEL_211:
              LODWORD(v23) = 0;
              v26 = v45;
              v25 = v162;
              goto LABEL_110;
            }
            v157 = v85 - v87;
            v159 = (unsigned __int16)(v85 - v87);
            v93 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v85 - v87), 0x63647050u);
            v25 = v93;
            if ( !v93 )
              goto LABEL_353;
            v94 = ((__int64)v92 - v23) >> 1;
            if ( v94 > 0 )
              memmove(v93, (const void *)v23, ((__int64)v92 - v23) >> 1);
            v65 = (char *)v92 + v87;
            v67 = (char *)v25 + v94;
            v64 = (unsigned int)(v85 - v87) - v94;
            goto LABEL_142;
          }
          if ( *(_DWORD *)v16 == 8 )
          {
            RtlInitUnicodeString(&v180, *(PCWSTR *)(v183 + 40));
            while ( *(_WORD *)v23 )
            {
              RtlInitUnicodeString(&v175, (PCWSTR)v23);
              if ( RtlEqualUnicodeString(&v180, &v175, 1u) )
              {
                v15 = v183;
                LODWORD(v23) = 0;
                v25 = v162;
                goto LABEL_200;
              }
              v23 += 2 * ((unsigned __int64)v175.Length >> 1) + 2;
            }
            v26 = 0LL;
            LODWORD(v23) = 0;
            v25 = 0LL;
            goto LABEL_65;
          }
          if ( *(_DWORD *)v16 != 9 )
          {
            LODWORD(v23) = 0;
            v26 = qword_140721A28;
LABEL_67:
            v25 = 0LL;
            goto LABEL_65;
          }
          RtlInitUnicodeString(&String1, *(PCWSTR *)(v183 + 40));
          v88 = (const WCHAR *)v23;
          if ( *(_WORD *)v23 )
          {
            while ( 1 )
            {
              RtlInitUnicodeString(&v173, v88);
              if ( RtlEqualUnicodeString(&String1, &v173, 1u) )
                break;
              v88 += ((unsigned __int64)v173.Length >> 1) + 1;
              if ( !*v88 )
                goto LABEL_190;
            }
            v26 = (__int64 *)v184;
            LODWORD(v23) = 0;
            v25 = v162;
            goto LABEL_65;
          }
        }
LABEL_190:
        if ( (unsigned int)(v87 + v85) <= 0xFFFE )
        {
          v157 = v87 + v85;
          v159 = v87 + v85;
          v89 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(v87 + v85), 0x63647050u);
          v162 = v89;
          if ( v89 )
          {
            memmove(v89, (const void *)v23, v85 - 2);
            memmove((char *)&v162[-1].Buffer + 2 * (v85 >> 1) + 6, v86, v87);
            v25 = v162;
            LODWORD(v23) = 0;
            *((_WORD *)v162 + ((unsigned __int64)(unsigned __int16)(v87 + v85) >> 1) - 1) = 0;
            goto LABEL_132;
          }
          goto LABEL_353;
        }
        goto LABEL_355;
      }
      if ( v48 != 4 )
        goto LABEL_167;
      v79 = **(_DWORD **)(v183 + 40);
      if ( *(_DWORD *)v16 != 23 )
        goto LABEL_167;
      v80 = *(_WORD **)(v184 + 40);
      v81 = 0;
      v82 = 0;
      while ( *v80 )
      {
        v83 = -1LL;
        do
          ++v83;
        while ( v80[v83] );
        v82 = 2 * v83 + 2;
        if ( v81 == v79 )
          goto LABEL_175;
        ++v81;
        v80 += (unsigned __int64)v82 >> 1;
      }
      if ( v81 == v79 )
      {
LABEL_175:
        if ( *v80 && v82 > 2 )
        {
          v157 = v82;
          LOWORD(v159) = v82 - 16;
          v84 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v82, 0x63647050u);
          v25 = v84;
          if ( !v84 )
            goto LABEL_353;
          memmove(v84, v80, v82);
          goto LABEL_143;
        }
      }
      v26 = qword_140721A28;
      goto LABEL_110;
    }
    v49 = *(unsigned int *)(v184 + 36);
    v50 = *(const WCHAR **)(v184 + 40);
    v51 = *(const WCHAR **)(v183 + 40);
    v52 = *(unsigned int *)(v183 + 36);
    if ( (unsigned int)v49 > 0xFFFE || (unsigned int)v52 > 0xFFFE )
      goto LABEL_355;
    v53 = *(_DWORD *)v16;
    if ( *(int *)v16 > 15 )
    {
      v70 = v53 - 16;
      if ( v70 )
      {
        v71 = v70 - 1;
        if ( v71 )
        {
          v72 = v71 - 1;
          if ( v72 )
          {
            v73 = v72 - 1;
            if ( v73 )
            {
              if ( v73 != 1 )
                goto LABEL_153;
              v74 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
              goto LABEL_155;
            }
            v75 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
            goto LABEL_157;
          }
          v76 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
          goto LABEL_159;
        }
        v77 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
        goto LABEL_161;
      }
      v78 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
      goto LABEL_163;
    }
    if ( v53 == 15 )
    {
      v68 = RtlCompareUnicodeStrings(v50, v49 >> 1, v51, v52 >> 1, 1u);
      goto LABEL_145;
    }
    v54 = v53 - 1;
    if ( !v54 )
      goto LABEL_133;
    v55 = v54 - 7;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v57 = v56 - 4;
        if ( v57 )
        {
          if ( v57 != 1 )
            goto LABEL_153;
          if ( (unsigned int)v49 > 2 )
            goto LABEL_107;
LABEL_113:
          if ( (unsigned int)v52 > 2 )
            goto LABEL_107;
        }
        else if ( (unsigned int)v49 > 2 )
        {
          goto LABEL_113;
        }
LABEL_108:
        LODWORD(v23) = 0;
        goto LABEL_109;
      }
LABEL_133:
      if ( *v50 )
      {
        if ( *v51 )
        {
          if ( (unsigned __int64)(unsigned int)(v52 + v49) - 2 <= 0xFFFE )
          {
            v62 = v52 + v49;
            LOWORD(v62) = v52 + v49 - 2;
            v157 = v62;
            v159 = v62;
            v63 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v62, 0x63647050u);
            v25 = v63;
            if ( v63 )
            {
              memmove(v63, v50, v49 - 2);
              v64 = v52;
              v65 = (char *)v51;
              v66 = 2 * (v49 >> 1) - 2;
              goto LABEL_141;
            }
            goto LABEL_353;
          }
          goto LABEL_355;
        }
LABEL_137:
        v26 = v45;
        goto LABEL_135;
      }
      goto LABEL_134;
    }
    if ( !*v50 )
      goto LABEL_131;
    while ( 1 )
    {
      v58 = -1LL;
      do
        ++v58;
      while ( v50[v58] );
      v59 = 2 * v58 + 2;
      RtlInitUnicodeString(&DestinationString, v50);
      v60 = v51;
      if ( *v51 )
        break;
LABEL_121:
      v61 = v159;
LABEL_122:
      v50 += (unsigned __int64)v59 >> 1;
      if ( !*v50 )
        goto LABEL_127;
    }
    while ( 1 )
    {
      RtlInitUnicodeString(&String2, v60);
      if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
        break;
      v60 += ((unsigned __int64)String2.Length >> 1) + 1;
      if ( !*v60 )
        goto LABEL_121;
    }
    if ( v25 )
    {
      v61 = v159;
LABEL_130:
      memmove((char *)v25 + (unsigned __int16)v61, v50, v59);
      LOWORD(v61) = v59 + v61;
      v159 = v61;
      goto LABEL_122;
    }
    v61 = 0;
    v159 = 0;
    v25 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v49, 0x63647050u);
    if ( v25 )
      goto LABEL_130;
    RegistryValue = -1073741670;
LABEL_127:
    if ( v25 )
    {
      LODWORD(v23) = 0;
      LOWORD(v61) = v61 + 2;
      v26 = 0LL;
      LOWORD(v24) = v61;
      v159 = v61;
      *((_WORD *)v25 + ((unsigned __int64)(unsigned __int16)v61 >> 1) - 1) = 0;
      goto LABEL_64;
    }
LABEL_131:
    LODWORD(v23) = 0;
LABEL_132:
    v26 = 0LL;
LABEL_110:
    v15 = v183;
LABEL_111:
    LOWORD(v24) = v157;
LABEL_201:
    if ( RegistryValue < 0 )
      goto LABEL_357;
    if ( v26 )
      goto LABEL_344;
    v90 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x63647050u);
    v26 = v90;
    if ( !v90 )
      goto LABEL_356;
    *((_DWORD *)v90 + 4) = 0;
    v90[3] = 0LL;
    if ( !v25 )
      break;
    v91 = 1;
    v24 = (unsigned __int16)v24;
    if ( (_WORD)v159 == v157 )
      v91 = 7;
LABEL_343:
    *((_DWORD *)v26 + 8) = v91;
    *((_DWORD *)v26 + 9) = v24;
    v26[5] = (__int64)v25;
LABEL_344:
    PoolWithTag[v161] = (__int64)v26;
    v4 = ++v161;
    if ( v158 )
    {
      v145 = &v183;
      v146 = v158;
      do
      {
        v147 = (_QWORD *)*v145;
        if ( !*(_QWORD *)(*v145 + 24) )
        {
          v148 = (void *)v147[5];
          if ( v148 )
            ExFreePoolWithTag(v148, 0);
          ExFreePoolWithTag(v147, 0);
        }
        ++v145;
        --v146;
      }
      while ( v146 );
      v4 = v161;
    }
    v10 = v168;
    v5 = 0;
    v158 = 0;
    v14 = PoolWithTag;
LABEL_26:
    v20 = -1LL;
    do
      ++v20;
    while ( v10[v20] );
    v10 += v20 + 1;
    v168 = v10;
    if ( !*v10 )
      goto LABEL_381;
  }
  v91 = 4;
  v24 = 4;
  v144 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
  v25 = v144;
  if ( v144 )
  {
    *(_DWORD *)&v144->Length = v23;
    goto LABEL_343;
  }
LABEL_356:
  RegistryValue = -1073741670;
LABEL_357:
  v6 = (PVOID *)PoolWithTag;
LABEL_358:
  v149 = v158;
  if ( v158 )
  {
LABEL_359:
    v150 = &v183;
    v151 = v149;
    do
    {
      v152 = (_QWORD *)*v150;
      if ( !*(_QWORD *)(*v150 + 24) )
      {
        v153 = (void *)v152[5];
        if ( v153 )
          ExFreePoolWithTag(v153, 0);
        ExFreePoolWithTag(v152, 0);
      }
      ++v150;
      --v151;
    }
    while ( v151 );
  }
  v4 = v161;
LABEL_366:
  if ( v6 )
  {
    if ( (_DWORD)v4 )
    {
      v154 = v6;
      do
      {
        if ( !*((_QWORD *)*v154 + 3) )
        {
          v155 = (void *)*((_QWORD *)*v154 + 5);
          if ( v155 )
            ExFreePoolWithTag(v155, 0);
          ExFreePoolWithTag(*v154, 0);
        }
        ++v154;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(v6, 0);
  }
LABEL_375:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)RegistryValue;
}
