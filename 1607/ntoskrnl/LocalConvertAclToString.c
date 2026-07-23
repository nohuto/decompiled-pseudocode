/*
 * XREFs of LocalConvertAclToString @ 0x1406CA4C0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1406CAFA0 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1404BAA38 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1404BAAD4 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x1406CB54C (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x1406CB600 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x1406CBEF0 (LookupAceFlagsInTable.c)
 *     SddlpFreeUuidString @ 0x1406CC510 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x1406CC67C (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        void **a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  unsigned int v10; // ebx
  __int64 result; // rax
  wchar_t *v13; // rax
  unsigned __int16 v14; // ax
  void *v15; // rcx
  unsigned int v16; // r13d
  unsigned __int8 *v17; // r15
  int v18; // edx
  wchar_t **v19; // rax
  wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // ebx
  _DWORD *v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  ULONG v29; // r14d
  void **v30; // r15
  wchar_t *v31; // rsi
  int v32; // r8d
  unsigned int v33; // edi
  int v34; // r9d
  int v35; // r8d
  unsigned __int8 *v36; // rsi
  unsigned __int8 *v37; // rax
  unsigned __int8 *v38; // rax
  int v39; // ebx
  int v40; // r8d
  wchar_t **v41; // rax
  __int64 v42; // r9
  __int64 v43; // rbx
  unsigned int v44; // eax
  int v45; // edi
  int v46; // r8d
  wchar_t **v47; // rax
  wchar_t *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  wchar_t *v51; // rax
  wchar_t **v52; // rdi
  NTSTATUS v53; // eax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  unsigned __int8 *v56; // r14
  int v57; // r12d
  wchar_t *v58; // rsi
  rsize_t v59; // rdi
  wchar_t **v60; // rax
  wchar_t **v61; // rbx
  __int64 v62; // rax
  wchar_t *v63; // rsi
  _DWORD *v64; // rbx
  rsize_t v65; // rdi
  __int64 v66; // r15
  const wchar_t **v67; // rax
  const wchar_t **v68; // r14
  __int64 v69; // rax
  rsize_t v70; // rdi
  int v71; // eax
  wchar_t *v72; // rsi
  __int64 v73; // r12
  unsigned __int8 *v74; // r13
  unsigned __int8 *v75; // r15
  __int64 v76; // r15
  int v77; // eax
  wchar_t *v78; // rsi
  size_t v79; // rdi
  __int64 v80; // rax
  int v81; // r8d
  int v82; // r9d
  int v83; // r8d
  unsigned int v84; // eax
  int v85; // r8d
  wchar_t **v86; // rax
  wchar_t **v87; // rbx
  __int64 v88; // rax
  _BYTE *v89; // r12
  unsigned int v90; // ebx
  int v91; // r14d
  unsigned int v92; // eax
  int v93; // r8d
  wchar_t **v94; // rax
  wchar_t **v95; // r15
  __int64 v96; // rax
  rsize_t v97; // rdi
  wchar_t *v98; // rsi
  __int64 v99; // rbx
  rsize_t v100; // rdi
  wchar_t *v101; // rsi
  __int64 v102; // rbx
  char *v103; // rax
  rsize_t v104; // rdi
  wchar_t *v105; // rsi
  const wchar_t *v106; // rbx
  __int64 v107; // rax
  wchar_t *v108; // rbx
  wchar_t *v109; // rsi
  unsigned __int64 v110; // rdi
  rsize_t v111; // rdi
  wchar_t *v112; // rsi
  __int64 v113; // rax
  unsigned int v114; // ecx
  unsigned int v115; // edi
  char *v116; // r15
  _BYTE *v117; // r14
  int AceCondition; // [rsp+58h] [rbp-69h] BYREF
  unsigned int Val; // [rsp+5Ch] [rbp-65h]
  int v120; // [rsp+60h] [rbp-61h]
  PSID Sid; // [rsp+68h] [rbp-59h]
  wchar_t *v122; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v123; // [rsp+78h] [rbp-49h]
  unsigned __int8 *v124; // [rsp+80h] [rbp-41h]
  char *v125; // [rsp+88h] [rbp-39h]
  __int64 v126; // [rsp+90h] [rbp-31h] BYREF
  wchar_t *Src; // [rsp+98h] [rbp-29h] BYREF
  _DWORD *v128; // [rsp+A0h] [rbp-21h]
  unsigned __int8 *v129; // [rsp+A8h] [rbp-19h]
  _BYTE *v130; // [rsp+B0h] [rbp-11h]
  __int64 v131; // [rsp+B8h] [rbp-9h]

  Val = 0;
  v10 = 0;
  a8 = 0;
  Sid = 0LL;
  v126 = 0LL;
  v122 = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v13 = (wchar_t *)SddlpAlloc(0x24uLL);
    *a4 = v13;
    if ( v13 )
    {
      wcscpy(v13, L"NO_ACCESS_CONTROL");
      return 0LL;
    }
    result = 8LL;
LABEL_12:
    *a5 = 0;
    return result;
  }
  v14 = *(_WORD *)(a1 + 4);
  if ( !v14 )
  {
    *a4 = 0LL;
    result = 0LL;
    goto LABEL_12;
  }
  v120 = 2 - (a3 != 0);
  v125 = (char *)SddlpAlloc(8LL * v14);
  if ( !v125 )
    return 8LL;
  v130 = SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v130 )
  {
    v15 = v125;
LABEL_17:
    SddlpFree(v15);
    return 8LL;
  }
  v128 = SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v128 )
  {
    SddlpFree(v125);
    v15 = v130;
    goto LABEL_17;
  }
  v16 = 0;
  v17 = (unsigned __int8 *)(a1 + 8);
  v124 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_39;
  while ( 1 )
  {
    v10 += 2;
    v18 = *v17;
    a8 = v10;
    v19 = LookupAceTypeInTable(0LL, v18, v120);
    if ( !v19 )
    {
LABEL_37:
      v29 = 1336;
      AceCondition = 1336;
      goto LABEL_38;
    }
    v20 = *v19;
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 7LL;
    v23 = v10 + 2 * v21 + 2;
    v24 = &unk_140287748;
    do
    {
      if ( ((unsigned __int8)*v24 & v17[1]) != 0 )
      {
        v25 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v25 )
        {
          v26 = *v25;
          v27 = -1LL;
          do
            ++v27;
          while ( *(_WORD *)(v26 + 2 * v27) );
          v23 += 2 * v27;
        }
      }
      ++v24;
      --v22;
    }
    while ( v22 );
    v28 = *v17;
    v10 = v23 + 2;
    a8 = v10;
    if ( v28 > 11 )
    {
      if ( v28 != 13 && (unsigned int)(v28 - 17) > 3 )
        goto LABEL_37;
LABEL_59:
      v33 = *((_DWORD *)v17 + 1);
      v36 = v17 + 8;
      Sid = v17 + 8;
      Val = v33;
      goto LABEL_60;
    }
    if ( v28 != 11 )
    {
      if ( v28 <= 3 )
        goto LABEL_59;
      if ( v28 <= 4 )
        goto LABEL_37;
      if ( v28 > 8 )
        goto LABEL_59;
    }
    v32 = *((_DWORD *)v17 + 2);
    v33 = *((_DWORD *)v17 + 1);
    v34 = v32 & 1;
    Val = v33;
    v35 = v32 & 2;
    v36 = &v17[(v35 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v34 != 0 ? 0x10 : 0)];
    v37 = v17 + 12;
    Sid = v36;
    if ( !v34 )
      v37 = 0LL;
    if ( v37 )
    {
      v10 += 72;
      a8 = v10;
    }
    if ( v35 )
    {
      if ( v34 )
        v38 = v17 + 28;
      else
        v38 = v17 + 12;
    }
    else
    {
      v38 = 0LL;
    }
    if ( v38 )
      a8 = v10 + 72;
LABEL_60:
    if ( v122 )
    {
      SddlpFree(v122);
      v122 = 0LL;
    }
    AceCondition = 0;
    AceCondition = LocalGetAceCondition(v17, v36, &v122, &AceCondition);
    v29 = AceCondition;
    if ( AceCondition )
      break;
    v39 = 0;
    v40 = v120;
    v128[v16] = 0;
    if ( *v17 == 17 )
      v40 = 4;
    v41 = LookupAccessMaskInTable(0LL, v33, v40);
    if ( !v41 )
    {
      v44 = Val;
      v45 = 0;
      while ( 1 )
      {
        if ( (v44 & (1 << v45)) != 0 )
        {
          v46 = v120;
          if ( *v17 == 17 )
            v46 = 4;
          v47 = LookupAccessMaskInTable(0LL, v44 & (1 << v45), v46);
          if ( !v47 )
          {
            v39 = 20;
            v128[v16] = 2;
            goto LABEL_80;
          }
          v48 = *v47;
          v49 = -1LL;
          do
            ++v49;
          while ( v48[v49] );
          v39 += 2 * v49;
          v44 = Val;
        }
        if ( (unsigned int)++v45 >= 0x20 )
          goto LABEL_80;
      }
    }
    v43 = -1LL;
    v128[v16] = 1;
    do
      ++v43;
    while ( (*v41)[v43] );
    v39 = 2 * v43;
LABEL_80:
    v10 = a8 + 6 + v39;
    a8 = v10;
    v50 = LookupSidInTable(0LL, Sid, a6, v42, (int)&a8, a9, &v126);
    if ( v50 )
    {
      v52 = (wchar_t **)&v125[8 * v16];
      *v52 = (wchar_t *)(v50 + 2);
    }
    else if ( v126 )
    {
      v51 = (wchar_t *)SddlpAlloc(6uLL);
      v52 = (wchar_t **)&v125[8 * v16];
      *v52 = v51;
      if ( !v51 )
      {
        v29 = 8;
        AceCondition = 8;
        goto LABEL_38;
      }
      wcscpy_s(v51, 3uLL, L"SA");
      v130[v16] = 1;
    }
    else
    {
      v52 = (wchar_t **)&v125[8 * v16];
      v53 = LocalConvertSidToStringSidW(Sid);
      if ( v53 < 0 )
      {
        v29 = RtlNtStatusToDosError(v53);
        AceCondition = v29;
        goto LABEL_38;
      }
      v130[v16] = 1;
    }
    v54 = -1LL;
    do
      ++v54;
    while ( (*v52)[v54] );
    ++v16;
    v10 += 2 * v54 + 4;
    v17 += *((unsigned __int16 *)v17 + 1);
    a8 = v10;
    if ( v16 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_38;
  }
  v10 = a8;
LABEL_38:
  if ( !v10 )
  {
LABEL_39:
    v29 = 1336;
    AceCondition = 1336;
  }
  if ( v29 )
    goto LABEL_171;
  if ( (v10 & 1) != 0 )
    a8 = ++v10;
  v30 = a4;
  v31 = (wchar_t *)SddlpAlloc(v10);
  *a4 = v31;
  if ( !v31 )
  {
    v29 = 8;
    AceCondition = 8;
    goto LABEL_172;
  }
  v55 = (unsigned __int64)v10 >> 1;
  v123 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 2 )
    {
      if ( !v55 )
        goto LABEL_169;
      v56 = v124;
      v57 = v120;
      *v31 = 40;
      v58 = v31 + 1;
      v59 = v55 - 1;
      v60 = LookupAceTypeInTable(0LL, *v56, v57);
      v61 = v60;
      if ( v60 )
      {
        wcscpy_s(v58, v59, *v60);
        v62 = *((unsigned int *)v61 + 2);
        v59 -= v62;
        v58 += v62;
      }
      if ( !v59 )
        goto LABEL_169;
      *v58 = 59;
      v63 = v58 + 1;
      v64 = &unk_140287748;
      v65 = v59 - 1;
      v66 = 7LL;
      do
      {
        if ( ((unsigned __int8)*v64 & v56[1]) != 0 )
        {
          v67 = (const wchar_t **)LookupAceFlagsInTable(0LL);
          v68 = v67;
          if ( v67 )
          {
            wcscpy_s(v63, v65, *v67);
            v69 = *((unsigned int *)v68 + 2);
            v56 = v124;
            v65 -= v69;
            v63 += v69;
          }
          else
          {
            v56 = v124;
          }
        }
        ++v64;
        --v66;
      }
      while ( v66 );
      if ( !v65 )
      {
LABEL_169:
        v29 = 1336;
        AceCondition = 1336;
LABEL_170:
        v10 = a8;
LABEL_171:
        v30 = a4;
        goto LABEL_172;
      }
      *v63 = 59;
      v70 = v65 - 1;
      v71 = *v56;
      v72 = v63 + 1;
      v126 = 0LL;
      v73 = 0LL;
      v129 = 0LL;
      v74 = 0LL;
      if ( v71 > 11 )
      {
        if ( v71 == 13 || (unsigned int)(v71 - 17) <= 3 )
        {
LABEL_130:
          v84 = *((_DWORD *)v56 + 1);
          v75 = v56 + 8;
          Sid = v56 + 8;
          Val = v84;
          goto LABEL_112;
        }
      }
      else
      {
        if ( v71 == 11 )
          goto LABEL_120;
        if ( v71 <= 3 )
          goto LABEL_130;
        if ( v71 > 4 )
        {
          if ( v71 > 8 )
            goto LABEL_130;
LABEL_120:
          v81 = *((_DWORD *)v56 + 2);
          v82 = v81 & 1;
          Val = *((_DWORD *)v56 + 1);
          v83 = v81 & 2;
          v75 = &v56[(v83 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v82 != 0 ? 0x10 : 0)];
          Sid = v75;
          if ( v83 )
          {
            if ( v82 )
              v74 = v56 + 28;
            else
              v74 = v56 + 12;
          }
          else
          {
            v74 = 0LL;
          }
          v129 = v74;
          if ( v82 )
          {
            v73 = (__int64)(v56 + 12);
            v126 = (__int64)(v56 + 12);
          }
          else
          {
            v73 = 0LL;
            v126 = 0LL;
          }
LABEL_112:
          if ( v122 )
          {
            SddlpFree(v122);
            v122 = 0LL;
          }
          AceCondition = 0;
          AceCondition = LocalGetAceCondition(v56, v75, &v122, &AceCondition);
          v29 = AceCondition;
          if ( AceCondition )
            goto LABEL_170;
          v76 = v123;
          v131 = v123;
          v77 = v128[v123];
          if ( v77 == 2 )
          {
            wcscpy_s(v72, v70, L"0x");
            v78 = v72 + 2;
            v79 = v70 - 2;
            ultow_s(Val, v78, v79, v29 + 16);
            v80 = -1LL;
            do
              ++v80;
            while ( v78[v80] );
            v72 = &v78[v80];
            v70 = v79 - v80;
          }
          else if ( v77 == 1 )
          {
            v85 = v120;
            if ( *v124 == 17 )
              v85 = 4;
            v86 = LookupAccessMaskInTable(0LL, Val, v85);
            v87 = v86;
            if ( v86 )
            {
              wcscpy_s(v72, v70, *v86);
              v88 = *((unsigned int *)v87 + 2);
              v70 -= v88;
              v72 += v88;
            }
          }
          else
          {
            v89 = v124;
            v90 = 0;
            v91 = v120;
            v92 = Val;
            do
            {
              if ( (v92 & (1 << v90)) != 0 )
              {
                v93 = v91;
                if ( *v89 == 17 )
                  v93 = 4;
                v94 = LookupAccessMaskInTable(0LL, v92 & (1 << v90), v93);
                v95 = v94;
                if ( v94 )
                {
                  wcscpy_s(v72, v70, *v94);
                  v96 = *((unsigned int *)v95 + 2);
                  v70 -= v96;
                  v72 += v96;
                }
                v92 = Val;
              }
              ++v90;
            }
            while ( v90 < 0x20 );
            v29 = AceCondition;
            v73 = v126;
            v74 = v129;
            v76 = v131;
          }
          if ( !v70 )
            goto LABEL_169;
          v97 = v70 - 1;
          *v72 = 59;
          v98 = v72 + 1;
          if ( v73 )
          {
            if ( !(unsigned int)SddlpUuidToString(v73, &Src) )
              goto LABEL_170;
            v99 = -1LL;
            do
              ++v99;
            while ( Src[v99] );
            wcscpy_s(v98, v97, Src);
            v97 -= v99;
            v98 += v99;
            SddlpFreeUuidString(&Src);
          }
          if ( !v97 )
            goto LABEL_169;
          *v98 = 59;
          v100 = v97 - 1;
          v101 = v98 + 1;
          if ( v74 )
          {
            if ( !(unsigned int)SddlpUuidToString(v74, &Src) )
              goto LABEL_170;
            v102 = -1LL;
            do
              ++v102;
            while ( Src[v102] );
            wcscpy_s(v101, v100, Src);
            v100 -= v102;
            v101 += v102;
            SddlpFreeUuidString(&Src);
          }
          if ( !v100 )
            goto LABEL_169;
          v103 = v125;
          *v101 = 59;
          v104 = v100 - 1;
          v105 = v101 + 1;
          v106 = *(const wchar_t **)&v103[8 * v76];
          wcscpy_s(v105, v104, v106);
          v107 = -1LL;
          do
            ++v107;
          while ( v106[v107] );
          v108 = v122;
          v109 = &v105[v107];
          v110 = v104 - v107;
          if ( v122 )
          {
            if ( !v110 )
              goto LABEL_169;
            *v109 = 59;
            v111 = v110 - 1;
            v112 = v109 + 1;
            wcscpy_s(v112, v111, v108);
            v113 = -1LL;
            do
              ++v113;
            while ( v108[v113] );
            v109 = &v112[v113];
            v110 = v111 - v113;
          }
          if ( v110 <= 1 )
            goto LABEL_169;
          v114 = v123;
          *v109 = 41;
          ++v114;
          v31 = v109 + 1;
          v123 = v114;
          v55 = v110 - 1;
          *v31 = 0;
          v124 += *((unsigned __int16 *)v124 + 1);
          if ( v114 >= *(unsigned __int16 *)(a1 + 4) )
            goto LABEL_170;
          continue;
        }
      }
      break;
    }
    v75 = (unsigned __int8 *)Sid;
    goto LABEL_112;
  }
LABEL_172:
  v115 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v116 = v125;
    v117 = v130;
    do
    {
      if ( v117[v115] )
        SddlpFree(*(void **)&v116[8 * v115]);
      ++v115;
    }
    while ( v115 < *(unsigned __int16 *)(a1 + 4) );
    v29 = AceCondition;
    v30 = a4;
  }
  SddlpFree(v125);
  SddlpFree(v130);
  SddlpFree(v128);
  SddlpFree(v122);
  if ( v29 )
  {
    SddlpFree(*v30);
    *v30 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v10;
  }
  return v29;
}
