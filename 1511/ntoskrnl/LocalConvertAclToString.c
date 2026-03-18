/*
 * XREFs of LocalConvertAclToString @ 0x140684128
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x140684C48 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x140148978 (_ultow_s.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140685258 (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x1406856FC (LocalGetAceCondition.c)
 *     LookupAccessMaskInTable @ 0x1406870C0 (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x140687168 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x140687210 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpFree @ 0x140687B40 (SddlpFree.c)
 *     SddlpFreeUuidString @ 0x140687B58 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x140687CC4 (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  __int64 *v9; // r15
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 *v17; // r13
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // ebx
  _DWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  ULONG v28; // r14d
  __int64 v29; // rax
  _WORD *v30; // rsi
  int v31; // r8d
  int v32; // r9d
  int v33; // r8d
  unsigned __int8 *v34; // rsi
  unsigned __int8 *v35; // rax
  unsigned __int8 *v36; // rax
  unsigned int v37; // edi
  int v38; // ebx
  size_t v39; // rsi
  __int64 v40; // r15
  _QWORD *v41; // rax
  __int64 v42; // rbx
  unsigned int v43; // eax
  int v44; // edi
  __int64 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  wchar_t *v50; // rax
  wchar_t **v51; // rdi
  NTSTATUS v52; // eax
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int8 *v55; // r14
  wchar_t *v56; // rsi
  rsize_t v57; // rdi
  const wchar_t **v58; // rax
  const wchar_t **v59; // rbx
  __int64 v60; // rax
  wchar_t *v61; // rsi
  _DWORD *v62; // rbx
  rsize_t v63; // rdi
  __int64 v64; // r15
  const wchar_t **v65; // rax
  const wchar_t **v66; // r14
  __int64 v67; // rax
  rsize_t v68; // rdi
  int v69; // eax
  wchar_t *v70; // rsi
  __int64 v71; // r12
  unsigned __int8 *v72; // r13
  unsigned __int8 *v73; // r15
  __int64 v74; // r15
  int v75; // eax
  wchar_t *v76; // rsi
  size_t v77; // rdi
  __int64 v78; // rax
  int v79; // r8d
  int v80; // r9d
  int v81; // r8d
  unsigned int v82; // eax
  const wchar_t **v83; // rax
  const wchar_t **v84; // rbx
  __int64 v85; // rax
  unsigned int v86; // ebx
  unsigned int v87; // eax
  const wchar_t **v88; // rax
  const wchar_t **v89; // r15
  __int64 v90; // rax
  rsize_t v91; // rdi
  wchar_t *v92; // rsi
  __int64 v93; // rbx
  rsize_t v94; // rdi
  wchar_t *v95; // rsi
  __int64 v96; // rbx
  __int64 v97; // rax
  rsize_t v98; // rdi
  wchar_t *v99; // rsi
  const wchar_t *v100; // rbx
  __int64 v101; // rax
  wchar_t *v102; // rbx
  wchar_t *v103; // rsi
  unsigned __int64 v104; // rdi
  rsize_t v105; // rdi
  wchar_t *v106; // rsi
  __int64 v107; // rax
  unsigned int v108; // ecx
  unsigned int v109; // edi
  __int64 v110; // r14
  __int64 v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  int AceCondition; // [rsp+58h] [rbp-59h] BYREF
  unsigned int Val; // [rsp+5Ch] [rbp-55h]
  wchar_t *Src; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v119; // [rsp+68h] [rbp-49h]
  int v120; // [rsp+6Ch] [rbp-45h]
  PSID Sid; // [rsp+70h] [rbp-41h]
  wchar_t *v122; // [rsp+78h] [rbp-39h] BYREF
  unsigned __int8 *v123; // [rsp+80h] [rbp-31h]
  __int64 v124; // [rsp+88h] [rbp-29h]
  __int64 v125; // [rsp+90h] [rbp-21h] BYREF
  __int64 v126; // [rsp+98h] [rbp-19h]
  unsigned __int8 *v127; // [rsp+A0h] [rbp-11h]
  __int64 v128; // [rsp+A8h] [rbp-9h]
  __int64 v129; // [rsp+B0h] [rbp-1h]

  v9 = a4;
  Val = 0;
  v10 = 0;
  LODWORD(Src) = 0;
  a8 = 0;
  Sid = 0LL;
  v125 = 0LL;
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
    v13 = SddlpAlloc(0x24uLL);
    *v9 = v13;
    if ( v13 )
    {
      *(_OWORD *)v13 = *(_OWORD *)L"NO_ACCESS_CONTROL";
      *(_OWORD *)(v13 + 16) = *(_OWORD *)L"S_CONTROL";
      *(_DWORD *)(v13 + 32) = *(_DWORD *)L"L";
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
  v124 = SddlpAlloc(8LL * v14);
  if ( !v124 )
    return 8LL;
  v128 = SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v128 )
  {
    v16 = v124;
LABEL_17:
    SddlpFree(v16, v15);
    return 8LL;
  }
  v126 = SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v126 )
  {
    SddlpFree(v124, 0LL);
    v16 = v128;
    goto LABEL_17;
  }
  v119 = 0;
  v17 = (unsigned __int8 *)(a1 + 8);
  v123 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_39;
  while ( 1 )
  {
    v10 += 2;
    LODWORD(Src) = v10;
    a8 = v10;
    v18 = (__int64 *)LookupAceTypeInTable(0LL);
    if ( !v18 )
    {
LABEL_37:
      v28 = 1336;
      AceCondition = 1336;
      goto LABEL_38;
    }
    v19 = *v18;
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(v19 + 2 * v20) );
    v21 = 7LL;
    v22 = v10 + 2 * v20 + 2;
    v23 = &unk_14025DD88;
    do
    {
      if ( ((unsigned __int8)*v23 & v17[1]) != 0 )
      {
        v24 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v24 )
        {
          v25 = *v24;
          v26 = -1LL;
          do
            ++v26;
          while ( *(_WORD *)(v25 + 2 * v26) );
          v22 += 2 * v26;
        }
      }
      ++v23;
      --v21;
    }
    while ( v21 );
    v27 = *v17;
    v10 = v22 + 2;
    LODWORD(Src) = v10;
    a8 = v10;
    if ( v27 > 11 )
    {
      if ( v27 != 13 && (unsigned int)(v27 - 17) > 3 )
        goto LABEL_37;
LABEL_59:
      v37 = *((_DWORD *)v17 + 1);
      v34 = v17 + 8;
      Sid = v17 + 8;
      Val = v37;
      goto LABEL_60;
    }
    if ( v27 != 11 )
    {
      if ( v27 <= 3 )
        goto LABEL_59;
      if ( v27 <= 4 )
        goto LABEL_37;
      if ( v27 > 8 )
        goto LABEL_59;
    }
    v31 = *((_DWORD *)v17 + 2);
    v32 = v31 & 1;
    Val = *((_DWORD *)v17 + 1);
    v33 = v31 & 2;
    v34 = &v17[(v33 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v32 != 0 ? 0x10 : 0)];
    v35 = v17 + 12;
    Sid = v34;
    if ( !v32 )
      v35 = 0LL;
    if ( v35 )
    {
      v10 += 72;
      a8 = v10;
    }
    if ( v33 )
    {
      if ( v32 )
        v36 = v17 + 28;
      else
        v36 = v17 + 12;
    }
    else
    {
      v36 = 0LL;
    }
    if ( v36 )
      a8 = v10 + 72;
LABEL_60:
    if ( v122 )
    {
      SddlpFree(v122, 0LL);
      v122 = 0LL;
    }
    AceCondition = 0;
    AceCondition = LocalGetAceCondition(v17, v34, &v122, &AceCondition);
    v28 = AceCondition;
    if ( AceCondition )
      break;
    v38 = 0;
    v39 = v119;
    v40 = v119;
    *(_DWORD *)(v126 + 4LL * v119) = 0;
    v41 = (_QWORD *)LookupAccessMaskInTable(0LL);
    if ( !v41 )
    {
      v43 = Val;
      v44 = 0;
      while ( 1 )
      {
        if ( (v43 & (1 << v44)) != 0 )
        {
          v45 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v45 )
          {
            v38 = 20;
            *(_DWORD *)(v126 + 4 * v39) = 2;
            goto LABEL_76;
          }
          v46 = *v45;
          v47 = -1LL;
          do
            ++v47;
          while ( *(_WORD *)(v46 + 2 * v47) );
          v38 += 2 * v47;
          v43 = Val;
        }
        if ( (unsigned int)++v44 >= 0x20 )
          goto LABEL_76;
      }
    }
    v42 = -1LL;
    *(_DWORD *)(v126 + 4 * v39) = 1;
    do
      ++v42;
    while ( *(_WORD *)(*v41 + 2 * v42) );
    v38 = 2 * v42;
LABEL_76:
    v10 = a8 + 6 + v38;
    LODWORD(Src) = v10;
    a8 = v10;
    v48 = LookupSidInTable(0LL, Sid, (int)&a8, a9, (__int64)&v125);
    if ( v48 )
    {
      v51 = (wchar_t **)(v124 + 8 * v39);
      *v51 = (wchar_t *)(v48 + 2);
    }
    else if ( v125 )
    {
      v49 = -1LL;
      do
        ++v49;
      while ( aSa[v49] );
      v39 = 2 * v49 + 2;
      v50 = (wchar_t *)SddlpAlloc(v39);
      v51 = (wchar_t **)(v124 + 8 * v40);
      *v51 = v50;
      if ( !v50 )
      {
        v28 = 8;
        AceCondition = 8;
        goto LABEL_38;
      }
      wcscpy_s(v50, v39 >> 1, L"SA");
      LODWORD(v39) = v119;
      *(_BYTE *)(v40 + v128) = 1;
    }
    else
    {
      v51 = (wchar_t **)(v124 + 8 * v39);
      v52 = LocalConvertSidToStringSidW(Sid);
      if ( v52 < 0 )
      {
        v28 = RtlNtStatusToDosError(v52);
        AceCondition = v28;
        goto LABEL_38;
      }
      *(_BYTE *)(v39 + v128) = 1;
    }
    v53 = -1LL;
    do
      ++v53;
    while ( (*v51)[v53] );
    v10 += 2 * v53 + 4;
    v17 += *((unsigned __int16 *)v17 + 1);
    LODWORD(Src) = v10;
    a8 = v10;
    v119 = v39 + 1;
    if ( (int)v39 + 1 >= (unsigned int)*(unsigned __int16 *)(a1 + 4) )
      goto LABEL_38;
  }
  v10 = a8;
  LODWORD(Src) = a8;
LABEL_38:
  v9 = a4;
  if ( !v10 )
  {
LABEL_39:
    v28 = 1336;
    AceCondition = 1336;
  }
  if ( v28 )
    goto LABEL_165;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(Src) = ++v10;
    a8 = v10;
  }
  v29 = SddlpAlloc(v10);
  *v9 = v29;
  v30 = (_WORD *)v29;
  if ( !v29 )
  {
    v28 = 8;
    AceCondition = 8;
    goto LABEL_165;
  }
  v54 = (unsigned __int64)v10 >> 1;
  v119 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    while ( 2 )
    {
      if ( !v54 )
        goto LABEL_163;
      v55 = v123;
      *v30 = 40;
      v56 = v30 + 1;
      v57 = v54 - 1;
      v58 = (const wchar_t **)LookupAceTypeInTable(0LL);
      v59 = v58;
      if ( v58 )
      {
        wcscpy_s(v56, v57, *v58);
        v60 = *((unsigned int *)v59 + 2);
        v57 -= v60;
        v56 += v60;
      }
      if ( !v57 )
        goto LABEL_163;
      *v56 = 59;
      v61 = v56 + 1;
      v62 = &unk_14025DD88;
      v63 = v57 - 1;
      v64 = 7LL;
      do
      {
        if ( ((unsigned __int8)*v62 & v55[1]) != 0 )
        {
          v65 = (const wchar_t **)LookupAceFlagsInTable(0LL);
          v66 = v65;
          if ( v65 )
          {
            wcscpy_s(v61, v63, *v65);
            v67 = *((unsigned int *)v66 + 2);
            v55 = v123;
            v63 -= v67;
            v61 += v67;
          }
          else
          {
            v55 = v123;
          }
        }
        ++v62;
        --v64;
      }
      while ( v64 );
      if ( !v63 )
      {
LABEL_163:
        v28 = 1336;
        AceCondition = 1336;
LABEL_164:
        v10 = a8;
        LODWORD(Src) = a8;
        goto LABEL_165;
      }
      *v61 = 59;
      v68 = v63 - 1;
      v69 = *v55;
      v70 = v61 + 1;
      v125 = 0LL;
      v71 = 0LL;
      v127 = 0LL;
      v72 = 0LL;
      if ( v69 > 11 )
      {
        if ( v69 == 13 || (unsigned int)(v69 - 17) <= 3 )
        {
LABEL_128:
          v82 = *((_DWORD *)v55 + 1);
          v73 = v55 + 8;
          Sid = v55 + 8;
          Val = v82;
          goto LABEL_110;
        }
      }
      else
      {
        if ( v69 == 11 )
          goto LABEL_118;
        if ( v69 <= 3 )
          goto LABEL_128;
        if ( v69 > 4 )
        {
          if ( v69 > 8 )
            goto LABEL_128;
LABEL_118:
          v79 = *((_DWORD *)v55 + 2);
          v80 = v79 & 1;
          Val = *((_DWORD *)v55 + 1);
          v81 = v79 & 2;
          v73 = &v55[(v81 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v80 != 0 ? 0x10 : 0)];
          Sid = v73;
          if ( v81 )
          {
            if ( v80 )
              v72 = v55 + 28;
            else
              v72 = v55 + 12;
          }
          else
          {
            v72 = 0LL;
          }
          v127 = v72;
          if ( v80 )
          {
            v71 = (__int64)(v55 + 12);
            v125 = (__int64)(v55 + 12);
          }
          else
          {
            v71 = 0LL;
            v125 = 0LL;
          }
LABEL_110:
          if ( v122 )
          {
            SddlpFree(v122, 0LL);
            v122 = 0LL;
          }
          AceCondition = 0;
          AceCondition = LocalGetAceCondition(v55, v73, &v122, &AceCondition);
          v28 = AceCondition;
          if ( AceCondition )
            goto LABEL_164;
          v74 = v119;
          v129 = v119;
          v75 = *(_DWORD *)(v126 + 4LL * v119);
          if ( v75 == 2 )
          {
            wcscpy_s(v70, v68, L"0x");
            v76 = v70 + 2;
            v77 = v68 - 2;
            ultow_s(Val, v76, v77, v28 + 16);
            v78 = -1LL;
            do
              ++v78;
            while ( v76[v78] );
            v70 = &v76[v78];
            v68 = v77 - v78;
          }
          else if ( v75 == 1 )
          {
            v83 = (const wchar_t **)LookupAccessMaskInTable(0LL);
            v84 = v83;
            if ( v83 )
            {
              wcscpy_s(v70, v68, *v83);
              v85 = *((unsigned int *)v84 + 2);
              v68 -= v85;
              v70 += v85;
            }
          }
          else
          {
            v86 = 0;
            v87 = Val;
            do
            {
              if ( (v87 & (1 << v86)) != 0 )
              {
                v88 = (const wchar_t **)LookupAccessMaskInTable(0LL);
                v89 = v88;
                if ( v88 )
                {
                  wcscpy_s(v70, v68, *v88);
                  v90 = *((unsigned int *)v89 + 2);
                  v68 -= v90;
                  v70 += v90;
                }
                v87 = Val;
              }
              ++v86;
            }
            while ( v86 < 0x20 );
            v28 = AceCondition;
            v71 = v125;
            v72 = v127;
            v74 = v129;
          }
          if ( !v68 )
            goto LABEL_163;
          v91 = v68 - 1;
          *v70 = 59;
          v92 = v70 + 1;
          if ( v71 )
          {
            if ( !(unsigned int)SddlpUuidToString(v71, &Src) )
              goto LABEL_164;
            v93 = -1LL;
            do
              ++v93;
            while ( Src[v93] );
            wcscpy_s(v92, v91, Src);
            v91 -= v93;
            v92 += v93;
            SddlpFreeUuidString(&Src);
          }
          if ( !v91 )
            goto LABEL_163;
          *v92 = 59;
          v94 = v91 - 1;
          v95 = v92 + 1;
          if ( v72 )
          {
            if ( !(unsigned int)SddlpUuidToString(v72, &Src) )
              goto LABEL_164;
            v96 = -1LL;
            do
              ++v96;
            while ( Src[v96] );
            wcscpy_s(v95, v94, Src);
            v94 -= v96;
            v95 += v96;
            SddlpFreeUuidString(&Src);
          }
          if ( !v94 )
            goto LABEL_163;
          v97 = v124;
          *v95 = 59;
          v98 = v94 - 1;
          v99 = v95 + 1;
          v100 = *(const wchar_t **)(v97 + 8 * v74);
          wcscpy_s(v99, v98, v100);
          v101 = -1LL;
          do
            ++v101;
          while ( v100[v101] );
          v102 = v122;
          v103 = &v99[v101];
          v104 = v98 - v101;
          if ( v122 )
          {
            if ( !v104 )
              goto LABEL_163;
            *v103 = 59;
            v105 = v104 - 1;
            v106 = v103 + 1;
            wcscpy_s(v106, v105, v102);
            v107 = -1LL;
            do
              ++v107;
            while ( v102[v107] );
            v103 = &v106[v107];
            v104 = v105 - v107;
          }
          if ( v104 <= 1 )
            goto LABEL_163;
          v108 = v119;
          *v103 = 41;
          ++v108;
          v30 = v103 + 1;
          v119 = v108;
          v54 = v104 - 1;
          *v30 = 0;
          v123 += *((unsigned __int16 *)v123 + 1);
          if ( v108 >= *(unsigned __int16 *)(a1 + 4) )
            goto LABEL_164;
          continue;
        }
      }
      break;
    }
    v73 = (unsigned __int8 *)Sid;
    goto LABEL_110;
  }
LABEL_165:
  v109 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v110 = v124;
    v111 = v128;
    do
    {
      if ( *(_BYTE *)(v109 + v111) )
        SddlpFree(*(_QWORD *)(v110 + 8LL * v109), 0LL);
      ++v109;
    }
    while ( v109 < *(unsigned __int16 *)(a1 + 4) );
    v10 = (unsigned int)Src;
    v28 = AceCondition;
  }
  SddlpFree(v124, 0LL);
  SddlpFree(v128, v112);
  SddlpFree(v126, v113);
  SddlpFree(v122, v114);
  if ( v28 )
  {
    SddlpFree(*a4, v115);
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v10;
  }
  return v28;
}
