/*
 * XREFs of LocalConvertAclToString @ 0x140708CD8
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407097E4 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1401769F8 (_ultow_s.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x140709DE4 (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x140709E98 (LocalGetAceCondition.c)
 *     LookupAccessMaskInTable @ 0x14070A1DC (LookupAccessMaskInTable.c)
 *     LookupAceFlagsInTable @ 0x14070A220 (LookupAceFlagsInTable.c)
 *     LookupAceTypeInTable @ 0x14070A264 (LookupAceTypeInTable.c)
 *     LookupSidInTable @ 0x14070A2A8 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 *     SddlpFree @ 0x14070A4E0 (SddlpFree.c)
 *     SddlpFreeUuidString @ 0x14070A4F8 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x14070A584 (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        char a9)
{
  __int64 *v9; // r15
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  wchar_t *v18; // rcx
  unsigned int v19; // esi
  unsigned __int8 *v20; // r13
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ebx
  unsigned int *v27; // r11
  __int64 v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  ULONG v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rcx
  _WORD *v36; // rsi
  int v37; // r8d
  int v38; // r9d
  int v39; // r8d
  unsigned __int8 *v40; // rdi
  unsigned __int8 *v41; // rax
  unsigned __int8 *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rbx
  unsigned int v46; // edi
  __int64 v47; // r15
  __int64 v48; // r8
  __int64 *v49; // rax
  unsigned int v50; // edx
  int v51; // r11d
  __int64 v52; // r11
  __int64 v53; // rcx
  unsigned int v54; // ebx
  unsigned int v55; // eax
  __int64 v56; // r8
  __int64 *v57; // rax
  int v58; // r11d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  size_t v62; // rsi
  wchar_t *v63; // rax
  wchar_t **v64; // rdi
  NTSTATUS v65; // eax
  __int64 v66; // rax
  unsigned __int64 v67; // rdi
  unsigned __int8 *v68; // r11
  __int64 v69; // r8
  rsize_t v70; // rdi
  wchar_t *v71; // rsi
  const wchar_t **v72; // rax
  __int64 v73; // r8
  unsigned __int8 *v74; // r11
  const wchar_t **v75; // rbx
  __int64 v76; // rax
  wchar_t *v77; // rsi
  unsigned int *v78; // rbx
  rsize_t v79; // rdi
  __int64 v80; // r15
  __int64 v81; // rdx
  const wchar_t **v82; // rax
  const wchar_t **v83; // r14
  __int64 v84; // rax
  rsize_t v85; // rdi
  int v86; // eax
  wchar_t *v87; // rsi
  unsigned __int8 *v88; // r12
  unsigned __int8 *v89; // r13
  unsigned __int8 *v90; // r14
  __int64 v91; // rcx
  __int64 v92; // r15
  int v93; // eax
  wchar_t *v94; // rsi
  size_t v95; // rdi
  __int64 v96; // rax
  int v97; // r8d
  int v98; // r9d
  int v99; // r8d
  unsigned int v100; // eax
  __int64 v101; // r8
  const wchar_t **v102; // rax
  const wchar_t **v103; // rbx
  __int64 v104; // rax
  unsigned __int8 *v105; // r12
  unsigned int v106; // ebx
  unsigned int v107; // r14d
  unsigned int v108; // eax
  __int64 v109; // r8
  const wchar_t **v110; // rax
  const wchar_t **v111; // r15
  __int64 v112; // rax
  rsize_t v113; // rdi
  wchar_t *v114; // rsi
  __int64 v115; // rbx
  rsize_t v116; // rdi
  wchar_t *v117; // rsi
  __int64 v118; // rbx
  __int64 v119; // rax
  rsize_t v120; // rdi
  wchar_t *v121; // rsi
  const wchar_t *v122; // rbx
  __int64 v123; // rax
  wchar_t *v124; // rbx
  wchar_t *v125; // rsi
  unsigned __int64 v126; // rdi
  rsize_t v127; // rdi
  wchar_t *v128; // rsi
  __int64 v129; // rax
  unsigned __int8 *v130; // r11
  unsigned int v131; // ecx
  unsigned int v132; // edi
  __int64 v133; // r14
  __int64 v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rdx
  int v139; // [rsp+48h] [rbp-69h]
  int AceCondition; // [rsp+58h] [rbp-59h] BYREF
  unsigned int Val; // [rsp+5Ch] [rbp-55h]
  wchar_t *Src; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v143; // [rsp+68h] [rbp-49h]
  unsigned int v144; // [rsp+6Ch] [rbp-45h]
  PSID Sid; // [rsp+70h] [rbp-41h]
  unsigned __int8 *v146; // [rsp+78h] [rbp-39h]
  wchar_t *v147; // [rsp+80h] [rbp-31h] BYREF
  __int64 v148; // [rsp+88h] [rbp-29h]
  unsigned __int8 *v149; // [rsp+90h] [rbp-21h]
  __int64 v150; // [rsp+98h] [rbp-19h]
  unsigned __int8 *v151; // [rsp+A0h] [rbp-11h]
  __int64 v152; // [rsp+A8h] [rbp-9h]
  __int64 v153; // [rsp+B0h] [rbp-1h]

  v9 = a4;
  Val = 0;
  v10 = 0;
  LODWORD(Src) = 0;
  a8 = 0;
  Sid = 0LL;
  v149 = 0LL;
  v147 = 0LL;
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
    goto LABEL_12;
  }
  v14 = *(_WORD *)(a1 + 4);
  if ( !v14 )
  {
    *a4 = 0LL;
    result = 0LL;
LABEL_12:
    *a5 = 0;
    return result;
  }
  v15 = 2 - (a3 != 0);
  v143 = v15;
  v148 = SddlpAlloc(8LL * v14);
  if ( !v148 )
    return 8LL;
  v150 = SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v150 )
  {
    v17 = v148;
LABEL_17:
    SddlpFree(v17, v16);
    return 8LL;
  }
  v152 = SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v152 )
  {
    SddlpFree(v148, 0LL);
    v17 = v150;
    goto LABEL_17;
  }
  v19 = 0;
  v20 = (unsigned __int8 *)(a1 + 8);
  v146 = (unsigned __int8 *)(a1 + 8);
  v144 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_39;
  while ( 1 )
  {
    v21 = *v20;
    v10 += 2;
    LODWORD(Src) = v10;
    a8 = v10;
    v22 = (__int64 *)LookupAceTypeInTable(v18, v21, v15);
    if ( !v22 )
    {
LABEL_37:
      v33 = 1336;
      AceCondition = 1336;
      goto LABEL_38;
    }
    v23 = *v22;
    v24 = -1LL;
    do
      ++v24;
    while ( *(_WORD *)(v23 + 2 * v24) );
    v25 = 7LL;
    v26 = v10 + 2 * v24 + 2;
    v27 = (unsigned int *)&unk_1402ADC98;
    do
    {
      v28 = *v27;
      if ( ((unsigned __int8)v28 & v20[1]) != 0 )
      {
        v29 = (__int64 *)LookupAceFlagsInTable(4LL, v28, v15);
        if ( v29 )
        {
          v30 = *v29;
          v31 = -1LL;
          do
            ++v31;
          while ( *(_WORD *)(v30 + 2 * v31) );
          v26 += 2 * v31;
        }
      }
      ++v27;
      --v25;
    }
    while ( v25 );
    v32 = *v20;
    v10 = v26 + 2;
    LODWORD(Src) = v10;
    a8 = v10;
    if ( v32 > 11 )
    {
      if ( v32 != 13 && (unsigned int)(v32 - 17) > 3 )
        goto LABEL_37;
LABEL_59:
      v43 = *((_DWORD *)v20 + 1);
      v40 = v20 + 8;
      Sid = v20 + 8;
      Val = v43;
      goto LABEL_60;
    }
    if ( v32 != 11 )
    {
      if ( v32 <= 3 )
        goto LABEL_59;
      if ( v32 <= 4 )
        goto LABEL_37;
      if ( v32 > 8 )
        goto LABEL_59;
    }
    v37 = *((_DWORD *)v20 + 2);
    v38 = v37 & 1;
    Val = *((_DWORD *)v20 + 1);
    v39 = v37 & 2;
    v40 = &v20[(v39 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v38 != 0 ? 0x10 : 0)];
    v41 = v20 + 12;
    Sid = v40;
    if ( !v38 )
      v41 = 0LL;
    if ( v41 )
    {
      v10 += 72;
      a8 = v10;
    }
    if ( v39 )
    {
      if ( v38 )
        v42 = v20 + 28;
      else
        v42 = v20 + 12;
    }
    else
    {
      v42 = 0LL;
    }
    if ( v42 )
      a8 = v10 + 72;
LABEL_60:
    if ( v147 )
    {
      SddlpFree(v147, 0LL);
      v147 = 0LL;
    }
    LOBYTE(v139) = a9;
    AceCondition = 0;
    AceCondition = LocalGetAceCondition(v20, v40, &v147, &AceCondition, &a8, a6, a7, 0LL, v139);
    v33 = AceCondition;
    if ( AceCondition )
      break;
    v45 = v152;
    v46 = v143;
    v47 = v19;
    v48 = v143;
    *(_DWORD *)(v152 + 4LL * v19) = 0;
    if ( *v20 == 17 )
      v48 = 4LL;
    v49 = (__int64 *)LookupAccessMaskInTable(v44, Val, v48);
    if ( !v49 )
    {
      v54 = 0;
      v55 = v50;
      while ( 1 )
      {
        v53 = v54;
        if ( (v55 & (1 << v54)) != 0 )
        {
          v56 = v46;
          if ( *v20 == 17 )
            v56 = 4LL;
          v57 = (__int64 *)LookupAccessMaskInTable(v54, v55 & (1 << v54), v56);
          if ( !v57 )
          {
            v51 = 20;
            *(_DWORD *)(v152 + 4LL * v19) = 2;
            goto LABEL_80;
          }
          v53 = *v57;
          v59 = -1LL;
          do
            ++v59;
          while ( *(_WORD *)(v53 + 2 * v59) );
          v51 = v58 + 2 * v59;
          v55 = Val;
        }
        if ( ++v54 >= 0x20 )
          goto LABEL_80;
      }
    }
    *(_DWORD *)(v45 + 4LL * v19) = 1;
    v52 = -1LL;
    v53 = *v49;
    do
      ++v52;
    while ( *(_WORD *)(v53 + 2 * v52) );
    v51 = 2 * v52;
LABEL_80:
    v10 = v51 + a8 + 6;
    LODWORD(Src) = v10;
    a8 = v10;
    v60 = LookupSidInTable(v53, Sid, 0LL);
    if ( v60 )
    {
      v64 = (wchar_t **)(v148 + 8LL * v19);
      *v64 = (wchar_t *)(v60 + 2);
    }
    else if ( v149 )
    {
      v61 = -1LL;
      do
        ++v61;
      while ( aSa[v61] );
      v62 = 2 * v61 + 2;
      v63 = (wchar_t *)SddlpAlloc(v62);
      v64 = (wchar_t **)(v148 + 8 * v47);
      *v64 = v63;
      if ( !v63 )
      {
        v33 = 8;
        AceCondition = 8;
        goto LABEL_38;
      }
      wcscpy_s(v63, v62 >> 1, L"SA");
      v19 = v144;
      *(_BYTE *)(v47 + v150) = 1;
    }
    else
    {
      v64 = (wchar_t **)(v148 + 8LL * v19);
      v65 = LocalConvertSidToStringSidW(Sid);
      if ( v65 < 0 )
      {
        v33 = RtlNtStatusToDosError(v65);
        AceCondition = v33;
        goto LABEL_38;
      }
      *(_BYTE *)(v19 + v150) = 1;
    }
    v18 = *v64;
    v66 = -1LL;
    do
      ++v66;
    while ( v18[v66] );
    ++v19;
    v10 += 2 * v66 + 4;
    v20 += *((unsigned __int16 *)v20 + 1);
    LODWORD(Src) = v10;
    a8 = v10;
    v144 = v19;
    if ( v19 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_38;
    v15 = v143;
  }
  v10 = a8;
  LODWORD(Src) = a8;
LABEL_38:
  v9 = a4;
  if ( !v10 )
  {
LABEL_39:
    v33 = 1336;
    AceCondition = 1336;
  }
  if ( v33 )
    goto LABEL_174;
  if ( (v10 & 1) != 0 )
  {
    LODWORD(Src) = ++v10;
    a8 = v10;
  }
  v34 = SddlpAlloc(v10);
  *v9 = v34;
  v36 = (_WORD *)v34;
  if ( !v34 )
  {
    v33 = 8;
    AceCondition = 8;
    goto LABEL_174;
  }
  v67 = (unsigned __int64)v10 >> 1;
  v144 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v68 = v146;
    while ( 1 )
    {
      if ( !v67 )
        goto LABEL_172;
      v69 = v143;
      *v36 = 40;
      v70 = v67 - 1;
      v71 = v36 + 1;
      v72 = (const wchar_t **)LookupAceTypeInTable(v35, *v68, v69);
      v75 = v72;
      if ( v72 )
      {
        wcscpy_s(v71, v70, *v72);
        v76 = *((unsigned int *)v75 + 2);
        v74 = v146;
        v70 -= v76;
        v73 = v143;
        v71 += v76;
      }
      if ( !v70 )
        goto LABEL_172;
      *v71 = 59;
      v77 = v71 + 1;
      v78 = (unsigned int *)&unk_1402ADC98;
      v79 = v70 - 1;
      v80 = 7LL;
      do
      {
        v81 = *v78;
        if ( ((unsigned __int8)v81 & v74[1]) != 0 )
        {
          v82 = (const wchar_t **)LookupAceFlagsInTable(4LL, v81, v73);
          v83 = v82;
          if ( v82 )
          {
            wcscpy_s(v77, v79, *v82);
            v84 = *((unsigned int *)v83 + 2);
            v74 = v146;
            v79 -= v84;
            v77 += v84;
          }
        }
        v73 = v143;
        ++v78;
        --v80;
      }
      while ( v80 );
      if ( !v79 )
      {
LABEL_172:
        v33 = 1336;
        AceCondition = 1336;
LABEL_173:
        v10 = a8;
        LODWORD(Src) = a8;
        break;
      }
      *v77 = 59;
      v85 = v79 - 1;
      v86 = *v74;
      v87 = v77 + 1;
      v149 = 0LL;
      v88 = 0LL;
      v151 = 0LL;
      v89 = 0LL;
      if ( v86 > 11 )
      {
        if ( v86 == 13 || (unsigned int)(v86 - 17) <= 3 )
          goto LABEL_133;
      }
      else
      {
        if ( v86 == 11 )
          goto LABEL_123;
        if ( v86 <= 3 )
          goto LABEL_133;
        if ( v86 > 4 )
        {
          if ( v86 <= 8 )
          {
LABEL_123:
            v97 = *((_DWORD *)v74 + 2);
            v98 = v97 & 1;
            Val = *((_DWORD *)v74 + 1);
            v99 = v97 & 2;
            v90 = &v74[(v99 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v98 != 0 ? 0x10 : 0)];
            Sid = v90;
            if ( v99 )
            {
              if ( v98 )
                v89 = v74 + 28;
              else
                v89 = v74 + 12;
            }
            else
            {
              v89 = 0LL;
            }
            v151 = v89;
            if ( v98 )
            {
              v88 = v74 + 12;
              v149 = v74 + 12;
            }
            else
            {
              v88 = 0LL;
              v149 = 0LL;
            }
            goto LABEL_115;
          }
LABEL_133:
          v100 = *((_DWORD *)v74 + 1);
          v90 = v74 + 8;
          Sid = v74 + 8;
          Val = v100;
          goto LABEL_115;
        }
      }
      v90 = (unsigned __int8 *)Sid;
LABEL_115:
      if ( v147 )
      {
        SddlpFree(v147, 0LL);
        v74 = v146;
        v147 = 0LL;
      }
      LOBYTE(v139) = a9;
      AceCondition = 0;
      AceCondition = LocalGetAceCondition(v74, v90, &v147, &AceCondition, &a8, a6, a7, 0LL, v139);
      v33 = AceCondition;
      if ( AceCondition )
        goto LABEL_173;
      v92 = v144;
      v153 = v144;
      v93 = *(_DWORD *)(v152 + 4LL * v144);
      if ( v93 == 2 )
      {
        wcscpy_s(v87, v85, L"0x");
        v94 = v87 + 2;
        v95 = v85 - 2;
        ultow_s(Val, v94, v95, v33 + 16);
        v96 = -1LL;
        do
          ++v96;
        while ( v94[v96] );
        v87 = &v94[v96];
        v85 = v95 - v96;
      }
      else if ( v93 == 1 )
      {
        v101 = v143;
        if ( *v146 == 17 )
          v101 = 4LL;
        v102 = (const wchar_t **)LookupAccessMaskInTable(v91, Val, v101);
        v103 = v102;
        if ( v102 )
        {
          wcscpy_s(v87, v85, *v102);
          v104 = *((unsigned int *)v103 + 2);
          v85 -= v104;
          v87 += v104;
        }
      }
      else
      {
        v105 = v146;
        v106 = 0;
        v107 = v143;
        v108 = Val;
        do
        {
          if ( (v108 & (1 << v106)) != 0 )
          {
            v109 = v107;
            if ( *v105 == 17 )
              v109 = 4LL;
            v110 = (const wchar_t **)LookupAccessMaskInTable(v106, v108 & (1 << v106), v109);
            v111 = v110;
            if ( v110 )
            {
              wcscpy_s(v87, v85, *v110);
              v112 = *((unsigned int *)v111 + 2);
              v85 -= v112;
              v87 += v112;
            }
            v108 = Val;
          }
          ++v106;
        }
        while ( v106 < 0x20 );
        v33 = AceCondition;
        v88 = v149;
        v89 = v151;
        v92 = v153;
      }
      if ( !v85 )
        goto LABEL_172;
      v113 = v85 - 1;
      *v87 = 59;
      v114 = v87 + 1;
      if ( v88 )
      {
        if ( !(unsigned int)SddlpUuidToString(v88, &Src) )
          goto LABEL_173;
        v115 = -1LL;
        do
          ++v115;
        while ( Src[v115] );
        wcscpy_s(v114, v113, Src);
        v113 -= v115;
        v114 += v115;
        SddlpFreeUuidString(&Src);
      }
      if ( !v113 )
        goto LABEL_172;
      v116 = v113 - 1;
      *v114 = 59;
      v117 = v114 + 1;
      if ( v89 )
      {
        if ( !(unsigned int)SddlpUuidToString(v89, &Src) )
          goto LABEL_173;
        v118 = -1LL;
        do
          ++v118;
        while ( Src[v118] );
        wcscpy_s(v117, v116, Src);
        v116 -= v118;
        v117 += v118;
        SddlpFreeUuidString(&Src);
      }
      if ( !v116 )
        goto LABEL_172;
      v119 = v148;
      v120 = v116 - 1;
      *v117 = 59;
      v121 = v117 + 1;
      v122 = *(const wchar_t **)(v119 + 8 * v92);
      wcscpy_s(v121, v120, v122);
      v123 = -1LL;
      do
        ++v123;
      while ( v122[v123] );
      v124 = v147;
      v125 = &v121[v123];
      v126 = v120 - v123;
      if ( v147 )
      {
        if ( !v126 )
          goto LABEL_172;
        *v125 = 59;
        v127 = v126 - 1;
        v128 = v125 + 1;
        wcscpy_s(v128, v127, v124);
        v129 = -1LL;
        do
          ++v129;
        while ( v124[v129] );
        v125 = &v128[v129];
        v126 = v127 - v129;
      }
      if ( v126 <= 1 )
        goto LABEL_172;
      v130 = v146;
      v131 = v144;
      v67 = v126 - 1;
      *v125 = 41;
      v35 = v131 + 1;
      v36 = v125 + 1;
      v144 = v35;
      *v36 = 0;
      v68 = &v130[*((unsigned __int16 *)v130 + 1)];
      v146 = v68;
      if ( (unsigned int)v35 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_173;
    }
  }
LABEL_174:
  v132 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v133 = v148;
    v134 = v150;
    do
    {
      if ( *(_BYTE *)(v132 + v134) )
        SddlpFree(*(_QWORD *)(v133 + 8LL * v132), 0LL);
      ++v132;
    }
    while ( v132 < *(unsigned __int16 *)(a1 + 4) );
    v10 = (unsigned int)Src;
    v33 = AceCondition;
  }
  SddlpFree(v148, 0LL);
  SddlpFree(v150, v135);
  SddlpFree(v152, v136);
  SddlpFree(v147, v137);
  if ( v33 )
  {
    SddlpFree(*a4, v138);
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v10;
  }
  return v33;
}
