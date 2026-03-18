/*
 * XREFs of LocalGetStringForRelativeAttribute @ 0x14070B070
 * Callers:
 *     LocalGetAceCondition @ 0x140709E98 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _i64tow_s @ 0x140176974 (_i64tow_s.c)
 *     _ui64tow_s @ 0x1401769E4 (_ui64tow_s.c)
 *     _ultow_s @ 0x1401769F8 (_ultow_s.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     LocalGetStringForSid @ 0x14070A0FC (LocalGetStringForSid.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 *     SddlpFree @ 0x14070A4E0 (SddlpFree.c)
 *     EncodeAttributeName @ 0x14070A708 (EncodeAttributeName.c)
 */

__int64 __fastcall LocalGetStringForRelativeAttribute(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        size_t *a7)
{
  void *v9; // rdi
  unsigned int v10; // esi
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rax
  unsigned int v26; // r12d
  unsigned int *v27; // r15
  __int64 v28; // rcx
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r12d
  unsigned int *v35; // r15
  __int64 v36; // rcx
  unsigned int v37; // r12d
  unsigned int *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // r12d
  unsigned int *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // rax
  _WORD *v45; // rax
  void *v46; // rdx
  _WORD *v47; // rdi
  _DWORD *v48; // rdi
  int v49; // eax
  _DWORD *v50; // rdi
  __int64 v51; // rax
  size_t v52; // rbx
  char *v53; // rdi
  __int64 v54; // r8
  char *v55; // rdi
  int v56; // r15d
  int v57; // r15d
  int v58; // r15d
  int v59; // r15d
  int v60; // r15d
  unsigned int *v61; // r8
  __int64 v62; // r12
  __int64 v63; // rcx
  unsigned int v64; // r9d
  unsigned __int8 *v65; // rdx
  __int64 v66; // r10
  unsigned __int64 v67; // rax
  unsigned int v68; // r15d
  _DWORD *v69; // r12
  char *v70; // rdi
  __int64 v71; // rax
  size_t v72; // rbx
  __int64 v73; // r12
  unsigned int *v74; // r15
  __int64 v75; // rax
  char *v76; // rdi
  _WORD *v77; // rdx
  size_t v78; // rbx
  char *v79; // rdi
  unsigned int *v80; // r15
  __int64 v81; // r12
  char *v82; // rdi
  __int64 v83; // rax
  size_t v84; // rbx
  unsigned int *v85; // r15
  __int64 v86; // r12
  char *v87; // rdi
  __int64 v88; // rax
  size_t v89; // rbx
  size_t *v90; // rax
  size_t pcbLength; // [rsp+30h] [rbp-D0h] BYREF
  int v93; // [rsp+38h] [rbp-C8h]
  unsigned int StringForSid; // [rsp+3Ch] [rbp-C4h]
  __int64 v95; // [rsp+40h] [rbp-C0h]
  void *v96[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  size_t *v98; // [rsp+60h] [rbp-A0h]
  wchar_t DstBuf[40]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t v100[72]; // [rsp+C0h] [rbp-40h] BYREF

  v98 = a7;
  Src = 0LL;
  memset(DstBuf, 0, 70);
  v9 = 0LL;
  memset(v100, 0, 140);
  v96[0] = 0LL;
  pcbLength = 0LL;
  if ( !a1 || !a2 || !a7 )
  {
    v10 = 87;
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
  v14 = (__int64)a1 + v13;
  if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v13), a2 - (unsigned int)v13, &pcbLength) < 0
    || !(_DWORD)pcbLength )
  {
    return 1336;
  }
  StringForSid = EncodeAttributeName(v14, pcbLength, (__int64 *)&Src);
  v10 = StringForSid;
  if ( !StringForSid )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_WORD *)Src + v15) );
    v16 = (unsigned int)(2 * v15);
    v95 = v16;
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF )
    {
      v17 = 2 * v11 + 24;
      if ( v17 >= 0x18 )
      {
        v18 = v17 + v16;
        if ( v17 + (unsigned int)v16 >= v17 )
        {
          v19 = -1LL;
          do
            ++v19;
          while ( DstBuf[v19] );
          v20 = v18 + 2 * v19;
          if ( v20 >= v18 && (unsigned __int64)(4 * v11) <= 0xFFFFFFFF )
          {
            if ( a2 - 16 < 4 * (int)v11 )
              goto LABEL_29;
            v12 = (unsigned __int16)v12;
            v93 = (unsigned __int16)v12;
            if ( (unsigned __int16)v12 != 1 )
            {
              switch ( (unsigned __int16)v12 )
              {
                case 2u:
                  goto LABEL_61;
                case 3u:
                  v34 = 0;
                  v35 = a1 + 4;
                  while ( 1 )
                  {
                    v36 = *v35;
                    if ( a2 < (unsigned int)v36
                      || a2 - (unsigned int)v36 < 2
                      || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v36), a2 - (unsigned int)v36, &pcbLength) < 0 )
                    {
                      goto LABEL_29;
                    }
                    if ( v20 + (_DWORD)pcbLength + 4 < v20 )
                      goto LABEL_15;
                    ++v34;
                    ++v35;
                    v20 += pcbLength + 4;
                    if ( v34 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                case 5u:
                  v26 = 0;
                  v27 = a1 + 4;
                  while ( 1 )
                  {
                    v28 = *v27;
                    if ( a2 < (unsigned int)v28 )
                      goto LABEL_29;
                    if ( a2 - (unsigned int)v28 < 4 )
                      goto LABEL_29;
                    v29 = *(unsigned int *)((char *)a1 + v28);
                    v30 = (unsigned int)(v28 + 4);
                    if ( !v29 )
                      goto LABEL_29;
                    v31 = a2 - v30;
                    if ( a2 - (unsigned int)v30 < v29 )
                      goto LABEL_29;
                    if ( v31 < 8 )
                      goto LABEL_29;
                    v32 = (char *)a1 + v30;
                    if ( !v32[1] || v31 - 8 < 4 * (unsigned __int64)(unsigned __int8)v32[1] )
                      goto LABEL_29;
                    StringForSid = LocalGetStringForSid(v32, (wchar_t **)v96, (unsigned __int8)v32[1]);
                    v10 = StringForSid;
                    if ( StringForSid )
                      goto LABEL_135;
                    v33 = -1LL;
                    do
                      ++v33;
                    while ( *((_WORD *)v96[0] + v33) );
                    if ( v20 + 2 * (_DWORD)v33 < v20 )
                      goto LABEL_15;
                    v20 += 2 * v33;
                    if ( v96[0] )
                    {
                      SddlpFree(v96[0]);
                      v96[0] = 0LL;
                    }
                    ++v26;
                    ++v27;
                    if ( v26 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                case 6u:
LABEL_61:
                  v37 = 0;
                  v38 = a1 + 4;
                  while ( 1 )
                  {
                    v39 = *v38;
                    if ( a2 < (unsigned int)v39 || a2 - (unsigned int)v39 < 8 )
                      break;
                    ui64tow_s(*(_QWORD *)((char *)a1 + v39), v100, 0x46uLL, 10);
                    v40 = -1LL;
                    do
                      ++v40;
                    while ( v100[v40] );
                    if ( v20 + 2 * (_DWORD)v40 < v20 )
                      goto LABEL_15;
                    ++v37;
                    ++v38;
                    v20 += 2 * v40;
                    if ( v37 >= (unsigned int)v11 )
                      goto LABEL_76;
                  }
                  break;
                case 0x10u:
                  v21 = 0;
                  v22 = a1 + 4;
                  while ( 1 )
                  {
                    v23 = *v22;
                    if ( a2 < (unsigned int)v23 )
                      break;
                    if ( a2 - (unsigned int)v23 < 4 )
                      break;
                    v24 = *(unsigned int *)((char *)a1 + v23);
                    if ( a2 - (unsigned int)v23 - 4 < v24 )
                      break;
                    v25 = 4LL * v24;
                    if ( v25 > 0xFFFFFFFF || (unsigned int)v25 + v20 < v20 )
                      goto LABEL_15;
                    ++v21;
                    ++v22;
                    v20 += v25;
                    if ( v21 >= (unsigned int)v11 )
                      goto LABEL_77;
                  }
                  break;
              }
LABEL_29:
              v10 = 1336;
              goto LABEL_135;
            }
            v41 = 0;
            v42 = a1 + 4;
            do
            {
              v43 = *v42;
              if ( a2 < (unsigned int)v43 || a2 - (unsigned int)v43 < 8 )
                goto LABEL_29;
              i64tow_s(*(_QWORD *)((char *)a1 + v43), v100, 0x46uLL, 10);
              v44 = -1LL;
              do
                ++v44;
              while ( v100[v44] );
              if ( v20 + 2 * (_DWORD)v44 < v20 )
                goto LABEL_15;
              ++v41;
              ++v42;
              v20 += 2 * v44;
            }
            while ( v41 < (unsigned int)v11 );
LABEL_76:
            v12 = v93;
            LODWORD(v16) = v95;
LABEL_77:
            if ( v20 + 3 >= v20 )
            {
              v45 = SddlpAlloc((v20 + 3) & 0xFFFFFFFC);
              pcbLength = (size_t)v45;
              if ( !v45 )
              {
                v10 = 8;
                goto LABEL_135;
              }
              v46 = Src;
              *v45 = 40;
              v45[1] = 34;
              v47 = v45 + 2;
              memmove(v45 + 2, v46, (unsigned int)v16);
              v48 = &v47[(unsigned __int64)(unsigned int)v16 >> 1];
              *v48 = 2883618;
              switch ( v12 )
              {
                case 1:
                  v49 = *(_DWORD *)L"TI";
                  break;
                case 2:
                  v49 = *(_DWORD *)L"TU";
                  break;
                case 3:
                  v49 = *(_DWORD *)L"TS";
                  break;
                case 5:
                  v49 = *(_DWORD *)L"TD";
                  break;
                case 6:
                  v49 = *(_DWORD *)L"TB";
                  break;
                case 16:
                  v49 = *(_DWORD *)L"TX";
                  break;
                default:
LABEL_86:
                  v10 = 1336;
LABEL_87:
                  v9 = (void *)pcbLength;
                  goto LABEL_133;
              }
              v48[1] = v49;
              v50 = v48 + 2;
              v51 = -1LL;
              *(_WORD *)v50 = 44;
              do
                ++v51;
              while ( DstBuf[v51] );
              *(_DWORD *)((char *)v50 + 2) = 7864368;
              v52 = 2LL * (unsigned int)v51;
              v53 = (char *)v50 + 6;
              memmove(v53, DstBuf, v52);
              v55 = &v53[v52];
              v56 = v12 - 1;
              if ( !v56 )
              {
                v85 = a1 + 4;
                v86 = v11;
                do
                {
                  *(_WORD *)v55 = 44;
                  v87 = v55 + 2;
                  i64tow_s(*(_QWORD *)((char *)a1 + *v85), v100, 0x46uLL, 10);
                  v88 = -1LL;
                  do
                    ++v88;
                  while ( v100[v88] );
                  v89 = 2LL * (unsigned int)v88;
                  memmove(v87, v100, v89);
                  v55 = &v87[v89];
                  ++v85;
                  --v86;
                }
                while ( v86 );
                goto LABEL_130;
              }
              v57 = v56 - 1;
              if ( v57 )
              {
                v58 = v57 - 1;
                if ( !v58 )
                {
                  v73 = v11;
                  v74 = a1 + 4;
                  do
                  {
                    *(_DWORD *)v55 = 2228268;
                    v75 = -1LL;
                    v76 = v55 + 4;
                    v77 = (_WORD *)((char *)a1 + *v74);
                    do
                      ++v75;
                    while ( v77[v75] );
                    v78 = 2LL * (unsigned int)v75;
                    memmove(v76, v77, v78);
                    v79 = &v76[v78];
                    ++v74;
                    *(_WORD *)v79 = 34;
                    v55 = v79 + 2;
                    --v73;
                  }
                  while ( v73 );
                  goto LABEL_130;
                }
                v59 = v58 - 2;
                if ( !v59 )
                {
                  v68 = 0;
                  v69 = a1 + 4;
                  while ( 1 )
                  {
                    *(_WORD *)v55 = 44;
                    v70 = v55 + 2;
                    v10 = LocalGetStringForSid((char *)a1 + (unsigned int)(*v69 + 4), (wchar_t **)v96, v54);
                    if ( v10 )
                      goto LABEL_87;
                    v71 = -1LL;
                    do
                      ++v71;
                    while ( *((_WORD *)v96[0] + v71) );
                    v72 = 2LL * (unsigned int)v71;
                    memmove(v70, v96[0], v72);
                    v55 = &v70[v72];
                    if ( v96[0] )
                    {
                      SddlpFree(v96[0]);
                      v96[0] = 0LL;
                    }
                    ++v68;
                    ++v69;
                    if ( v68 >= (unsigned int)v11 )
                      goto LABEL_131;
                  }
                }
                v60 = v59 - 1;
                if ( v60 )
                {
                  if ( v60 != 10 )
                    goto LABEL_86;
                  v61 = a1 + 4;
                  v62 = v11;
                  do
                  {
                    *(_WORD *)v55 = 44;
                    v55 += 2;
                    v63 = *v61;
                    v64 = *(unsigned int *)((char *)a1 + v63);
                    v65 = (unsigned __int8 *)a1 + (unsigned int)(v63 + 4);
                    if ( v64 )
                    {
                      v66 = v64;
                      do
                      {
                        v67 = *v65++;
                        *(_WORD *)v55 = a0123456789abcd[v67 >> 4];
                        *((_WORD *)v55 + 1) = a0123456789abcd[v67 & 0xF];
                        v55 += 4;
                        --v66;
                      }
                      while ( v66 );
                    }
                    ++v61;
                    --v62;
                  }
                  while ( v62 );
LABEL_131:
                  v90 = v98;
                  *(_DWORD *)v55 = 41;
                  *v90 = pcbLength;
                  goto LABEL_135;
                }
              }
              v80 = a1 + 4;
              v81 = v11;
              do
              {
                *(_WORD *)v55 = 44;
                v82 = v55 + 2;
                ui64tow_s(*(_QWORD *)((char *)a1 + *v80), v100, 0x46uLL, 10);
                v83 = -1LL;
                do
                  ++v83;
                while ( v100[v83] );
                v84 = 2LL * (unsigned int)v83;
                memmove(v82, v100, v84);
                v55 = &v82[v84];
                ++v80;
                --v81;
              }
              while ( v81 );
LABEL_130:
              v10 = StringForSid;
              goto LABEL_131;
            }
          }
        }
      }
    }
LABEL_15:
    v10 = 534;
  }
LABEL_135:
  if ( Src )
    SddlpFree(Src);
  if ( v96[0] )
    SddlpFree(v96[0]);
  return v10;
}
