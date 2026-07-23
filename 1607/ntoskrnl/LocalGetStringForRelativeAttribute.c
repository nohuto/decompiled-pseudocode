/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x1406CF550
 * Callers:
 *     LocalGetAceCondition @ 0x1406CB600 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _i64tow_s @ 0x140152244 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1401522B4 (_ui64tow_s.c)
 *     _ultow_s @ 0x1401522C8 (_ultow_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 *     EncodeAttributeName @ 0x1406CCAA8 (EncodeAttributeName.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  void *v9; // rbx
  unsigned int StringForSid; // esi
  __int64 v11; // r13
  int v12; // r12d
  __int64 v13; // rcx
  unsigned __int16 *v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // r15d
  unsigned int v22; // r9d
  unsigned int *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int *v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // eax
  _BYTE *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // r12d
  unsigned int *v36; // rbx
  __int64 v37; // rcx
  unsigned int v38; // r12d
  unsigned int *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // r12d
  unsigned int *v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  _WORD *v46; // rax
  unsigned int v47; // r15d
  void *v48; // rdx
  _WORD *v49; // rdi
  _DWORD *v50; // rdi
  int v51; // eax
  _DWORD *v52; // rdi
  __int64 v53; // rax
  size_t v54; // rbx
  char *v55; // rdi
  __int64 v56; // r9
  char *v57; // rdi
  int v58; // r12d
  int v59; // r12d
  int v60; // r12d
  int v61; // r12d
  int v62; // r12d
  unsigned int *v63; // r8
  __int64 v64; // r12
  __int64 v65; // rcx
  unsigned int v66; // r9d
  unsigned __int8 *v67; // rdx
  __int64 v68; // r10
  unsigned __int64 v69; // rax
  _DWORD *v70; // r12
  __int64 v71; // r8
  char *v72; // rdi
  __int64 v73; // rax
  size_t v74; // rbx
  __int64 v75; // r12
  unsigned int *v76; // r15
  __int64 v77; // rax
  char *v78; // rdi
  _WORD *v79; // rdx
  size_t v80; // rbx
  char *v81; // rdi
  unsigned int *v82; // r15
  __int64 v83; // r12
  char *v84; // rdi
  __int64 v85; // rax
  size_t v86; // rbx
  unsigned int *v87; // r15
  __int64 v88; // r12
  char *v89; // rdi
  __int64 v90; // rax
  size_t v91; // rbx
  _QWORD *v92; // rax
  int v94; // [rsp+20h] [rbp-E0h]
  int v95; // [rsp+30h] [rbp-D0h]
  unsigned int v96; // [rsp+38h] [rbp-C8h]
  _WORD *v97; // [rsp+38h] [rbp-C8h]
  void *v98; // [rsp+40h] [rbp-C0h] BYREF
  size_t pcbLength[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v101; // [rsp+60h] [rbp-A0h]
  _QWORD *v102; // [rsp+68h] [rbp-98h]
  wchar_t v103[72]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t DstBuf[40]; // [rsp+100h] [rbp+0h] BYREF

  v101 = a3;
  v102 = a7;
  Src = 0LL;
  v9 = 0LL;
  memset(DstBuf, 0, 0x46uLL);
  memset(v103, 0, 0x8CuLL);
  v98 = 0LL;
  pcbLength[0] = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    StringForSid = 87;
LABEL_133:
    if ( v9 )
      SddlpFree(v9);
    goto LABEL_135;
  }
  if ( a2 < 0x14 )
    return 1336;
  v11 = a1[3];
  LOWORD(v12) = *((_WORD *)a1 + 2);
  if ( !(_DWORD)v11 )
    return 1336;
  ultow_s(a1[2], DstBuf, 0x23uLL, 16);
  v13 = *a1;
  if ( a2 < (unsigned int)v13 )
    return 1336;
  if ( a2 - (unsigned int)v13 < 4 )
    return 1336;
  v14 = (unsigned __int16 *)((char *)a1 + v13);
  if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, pcbLength) < 0
    || !LODWORD(pcbLength[0]) )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v14, pcbLength[0], (__int64 *)&Src);
  if ( !StringForSid )
  {
    v15 = -1LL;
    v16 = -1LL;
    do
      ++v16;
    while ( *((_WORD *)Src + v16) );
    v17 = 2 * v16;
    v96 = v17;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF )
    {
      v18 = 2 * v11 + 24;
      if ( v18 >= 0x18 )
      {
        v19 = v18 + v17;
        if ( v18 + v17 >= v18 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( DstBuf[v20] );
          v21 = v19 + 2 * v20;
          if ( v21 >= v19 && (unsigned __int64)(4 * v11) <= 0xFFFFFFFF )
          {
            if ( a2 - 16 < 4 * (int)v11 )
              goto LABEL_29;
            v12 = (unsigned __int16)v12;
            v95 = (unsigned __int16)v12;
            if ( (unsigned __int16)v12 != 1 )
            {
              switch ( (unsigned __int16)v12 )
              {
                case 2u:
                  goto LABEL_61;
                case 3u:
                  v35 = 0;
                  v36 = a1 + 4;
                  while ( 1 )
                  {
                    v37 = *v36;
                    if ( a2 < (unsigned int)v37
                      || a2 - (unsigned int)v37 < 2
                      || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v37), a2 - (unsigned int)v37, pcbLength) < 0 )
                    {
                      goto LABEL_29;
                    }
                    if ( v21 + LODWORD(pcbLength[0]) + 4 < v21 )
                      goto LABEL_15;
                    ++v35;
                    ++v36;
                    v21 += LODWORD(pcbLength[0]) + 4;
                    if ( v35 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                case 5u:
                  v27 = 0;
                  v28 = a1 + 4;
                  while ( 1 )
                  {
                    v29 = *v28;
                    if ( a2 < (unsigned int)v29 )
                      goto LABEL_29;
                    if ( a2 - (unsigned int)v29 < 4 )
                      goto LABEL_29;
                    v30 = *(unsigned int *)((char *)a1 + v29);
                    v31 = (unsigned int)(v29 + 4);
                    if ( !v30 )
                      goto LABEL_29;
                    v32 = a2 - v31;
                    if ( a2 - (unsigned int)v31 < v30 )
                      goto LABEL_29;
                    if ( v32 < 8 )
                      goto LABEL_29;
                    v33 = (char *)a1 + v31;
                    if ( !v33[1] || v32 - 8 < 4 * (unsigned __int64)(unsigned __int8)v33[1] )
                      goto LABEL_29;
                    StringForSid = LocalGetStringForSid(v33, (wchar_t **)&v98, v101, v15, v94, a6);
                    if ( StringForSid )
                      goto LABEL_135;
                    v34 = -1LL;
                    do
                      ++v34;
                    while ( *((_WORD *)v98 + v34) );
                    if ( v21 + 2 * (_DWORD)v34 < v21 )
                      goto LABEL_15;
                    v21 += 2 * v34;
                    if ( v98 )
                    {
                      SddlpFree(v98);
                      v98 = 0LL;
                    }
                    ++v27;
                    ++v28;
                    if ( v27 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                case 6u:
LABEL_61:
                  v38 = 0;
                  v39 = a1 + 4;
                  while ( 1 )
                  {
                    v40 = *v39;
                    if ( a2 < (unsigned int)v40 || a2 - (unsigned int)v40 < 8 )
                      break;
                    ui64tow_s(*(_QWORD *)((char *)a1 + v40), v103, 0x46uLL, 10);
                    v41 = -1LL;
                    do
                      ++v41;
                    while ( v103[v41] );
                    if ( v21 + 2 * (_DWORD)v41 < v21 )
                      goto LABEL_15;
                    ++v38;
                    ++v39;
                    v21 += 2 * v41;
                    if ( v38 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                  break;
                case 0x10u:
                  v22 = 0;
                  v23 = a1 + 4;
                  while ( 1 )
                  {
                    v24 = *v23;
                    if ( a2 < (unsigned int)v24 )
                      break;
                    if ( a2 - (unsigned int)v24 < 4 )
                      break;
                    v25 = *(unsigned int *)((char *)a1 + v24);
                    if ( a2 - (unsigned int)v24 - 4 < v25 )
                      break;
                    v26 = 4LL * v25;
                    if ( v26 > 0xFFFFFFFF || (unsigned int)v26 + v21 < v21 )
                      goto LABEL_15;
                    ++v22;
                    ++v23;
                    v21 += v26;
                    if ( v22 >= (unsigned int)v11 )
                      goto LABEL_77;
                  }
                  break;
              }
LABEL_29:
              StringForSid = 1336;
              goto LABEL_135;
            }
            v42 = 0;
            v43 = a1 + 4;
            do
            {
              v44 = *v43;
              if ( a2 < (unsigned int)v44 || a2 - (unsigned int)v44 < 8 )
                goto LABEL_29;
              i64tow_s(*(_QWORD *)((char *)a1 + v44), v103, 0x46uLL, 10);
              v45 = -1LL;
              do
                ++v45;
              while ( v103[v45] );
              if ( v21 + 2 * (_DWORD)v45 < v21 )
                goto LABEL_15;
              ++v42;
              ++v43;
              v21 += 2 * v45;
            }
            while ( v42 < (unsigned int)v11 );
LABEL_76:
            v17 = v96;
            v12 = v95;
LABEL_77:
            if ( v21 + 3 >= v21 )
            {
              v46 = SddlpAlloc((v21 + 3) & 0xFFFFFFFC);
              v47 = 0;
              v97 = v46;
              if ( !v46 )
              {
                StringForSid = 8;
                goto LABEL_135;
              }
              v48 = Src;
              *v46 = 40;
              v46[1] = 34;
              v49 = v46 + 2;
              memmove(v46 + 2, v48, v17);
              v50 = &v49[(unsigned __int64)v17 >> 1];
              *v50 = 2883618;
              switch ( v12 )
              {
                case 1:
                  v51 = *(_DWORD *)L"TI";
                  break;
                case 2:
                  v51 = *(_DWORD *)L"TU";
                  break;
                case 3:
                  v51 = *(_DWORD *)L"TS";
                  break;
                case 5:
                  v51 = *(_DWORD *)L"TD";
                  break;
                case 6:
                  v51 = *(_DWORD *)L"TB";
                  break;
                case 16:
                  v51 = *(_DWORD *)L"TX";
                  break;
                default:
LABEL_86:
                  StringForSid = 1336;
LABEL_87:
                  v9 = v97;
                  goto LABEL_133;
              }
              v50[1] = v51;
              v52 = v50 + 2;
              v53 = -1LL;
              *(_WORD *)v52 = 44;
              do
                ++v53;
              while ( DstBuf[v53] );
              *(_DWORD *)((char *)v52 + 2) = 7864368;
              v54 = 2LL * (unsigned int)v53;
              v55 = (char *)v52 + 6;
              memmove(v55, DstBuf, v54);
              v57 = &v55[v54];
              v58 = v12 - 1;
              if ( !v58 )
              {
                v87 = a1 + 4;
                v88 = v11;
                do
                {
                  *(_WORD *)v57 = 44;
                  v89 = v57 + 2;
                  i64tow_s(*(_QWORD *)((char *)a1 + *v87), v103, 0x46uLL, 10);
                  v90 = -1LL;
                  do
                    ++v90;
                  while ( v103[v90] );
                  v91 = 2LL * (unsigned int)v90;
                  memmove(v89, v103, v91);
                  v57 = &v89[v91];
                  ++v87;
                  --v88;
                }
                while ( v88 );
                goto LABEL_130;
              }
              v59 = v58 - 1;
              if ( v59 )
              {
                v60 = v59 - 1;
                if ( !v60 )
                {
                  v75 = v11;
                  v76 = a1 + 4;
                  do
                  {
                    *(_DWORD *)v57 = 2228268;
                    v77 = -1LL;
                    v78 = v57 + 4;
                    v79 = (_WORD *)((char *)a1 + *v76);
                    do
                      ++v77;
                    while ( v79[v77] );
                    v80 = 2LL * (unsigned int)v77;
                    memmove(v78, v79, v80);
                    v81 = &v78[v80];
                    ++v76;
                    *(_WORD *)v81 = 34;
                    v57 = v81 + 2;
                    --v75;
                  }
                  while ( v75 );
                  goto LABEL_130;
                }
                v61 = v60 - 2;
                if ( !v61 )
                {
                  v70 = a1 + 4;
                  while ( 1 )
                  {
                    v71 = v101;
                    *(_WORD *)v57 = 44;
                    v72 = v57 + 2;
                    StringForSid = LocalGetStringForSid(
                                     (char *)a1 + (unsigned int)(*v70 + 4),
                                     (wchar_t **)&v98,
                                     v71,
                                     v56,
                                     v94,
                                     a6);
                    if ( StringForSid )
                      goto LABEL_87;
                    v73 = -1LL;
                    do
                      ++v73;
                    while ( *((_WORD *)v98 + v73) );
                    v74 = 2LL * (unsigned int)v73;
                    memmove(v72, v98, v74);
                    v57 = &v72[v74];
                    if ( v98 )
                    {
                      SddlpFree(v98);
                      v98 = 0LL;
                    }
                    ++v47;
                    ++v70;
                    if ( v47 >= (unsigned int)v11 )
                      goto LABEL_131;
                  }
                }
                v62 = v61 - 1;
                if ( v62 )
                {
                  if ( v62 != 10 )
                    goto LABEL_86;
                  v63 = a1 + 4;
                  v64 = v11;
                  do
                  {
                    *(_WORD *)v57 = 44;
                    v57 += 2;
                    v65 = *v63;
                    v66 = *(unsigned int *)((char *)a1 + v65);
                    v67 = (unsigned __int8 *)a1 + (unsigned int)(v65 + 4);
                    if ( v66 )
                    {
                      v68 = v66;
                      do
                      {
                        v69 = *v67++;
                        *(_WORD *)v57 = a0123456789abcd[v69 >> 4];
                        *((_WORD *)v57 + 1) = a0123456789abcd[v69 & 0xF];
                        v57 += 4;
                        --v68;
                      }
                      while ( v68 );
                    }
                    ++v63;
                    --v64;
                  }
                  while ( v64 );
LABEL_131:
                  v92 = v102;
                  *(_DWORD *)v57 = 41;
                  *v92 = v97;
                  goto LABEL_135;
                }
              }
              v82 = a1 + 4;
              v83 = v11;
              do
              {
                *(_WORD *)v57 = 44;
                v84 = v57 + 2;
                ui64tow_s(*(_QWORD *)((char *)a1 + *v82), v103, 0x46uLL, 10);
                v85 = -1LL;
                do
                  ++v85;
                while ( v103[v85] );
                v86 = 2LL * (unsigned int)v85;
                memmove(v84, v103, v86);
                v57 = &v84[v86];
                ++v82;
                --v83;
              }
              while ( v83 );
LABEL_130:
              StringForSid = 0;
              goto LABEL_131;
            }
          }
        }
      }
    }
LABEL_15:
    StringForSid = 534;
  }
LABEL_135:
  if ( Src )
    SddlpFree(Src);
  if ( v98 )
    SddlpFree(v98);
  return StringForSid;
}
