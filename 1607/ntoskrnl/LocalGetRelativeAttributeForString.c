/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x1406CE9C4
 * Callers:
 *     LocalGetAclForString @ 0x1404BA348 (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     iswspace @ 0x14014E2FC (iswspace.c)
 *     wcstoxq @ 0x14014FE94 (wcstoxq.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x1406CC818 (DecodeAttributeName.c)
 *     GetDigitFromChar @ 0x1406CCEF0 (GetDigitFromChar.c)
 *     GetFlags @ 0x1406CCF5C (GetFlags.c)
 *     GetValueType @ 0x1406CE0D0 (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x1406CE220 (IsLegalAttributeChar2.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        unsigned int **a3,
        _DWORD *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  unsigned int *v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // r12d
  bool v11; // zf
  unsigned int ValueType; // edi
  wint_t *v13; // rdi
  __int64 v14; // rdi
  unsigned __int16 *i; // rbx
  __int16 v16; // cx
  wint_t *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // r15d
  wint_t *j; // rbx
  wint_t *v21; // rsi
  PWSTR v23; // rsi
  unsigned __int16 v24; // r14
  wint_t *v25; // rbx
  int v26; // r13d
  int kk; // eax
  unsigned int v28; // r8d
  unsigned int v29; // ecx
  unsigned __int64 v30; // rcx
  unsigned int v31; // eax
  int v32; // ecx
  size_t v33; // rcx
  unsigned int *v34; // rax
  PSID v35; // r14
  ULONG v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // r14d
  _WORD *v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  wint_t *v43; // rbx
  int k; // eax
  unsigned int v45; // r14d
  void *v46; // rdx
  size_t v47; // r8
  char *v48; // rcx
  unsigned int v49; // eax
  unsigned int v50; // r14d
  unsigned int *v51; // r12
  int v52; // r13d
  int v53; // r13d
  int v54; // r13d
  int v55; // r13d
  int v56; // r13d
  wint_t v57; // ax
  int v58; // ebx
  __int16 *m; // r9
  int v60; // r8d
  wint_t *v61; // r9
  unsigned int v62; // eax
  __int16 *v63; // r8
  __int64 v64; // r8
  __int64 v65; // r8
  __int64 v66; // r10
  __int64 v67; // r11
  _BYTE *v68; // r10
  wint_t v69; // cx
  wint_t v70; // ax
  int v71; // r13d
  wint_t n; // cx
  PSID v73; // rbx
  ULONG v74; // eax
  __int64 v75; // rcx
  wint_t v76; // ax
  unsigned int *v77; // r13
  wint_t ii; // cx
  WCHAR *v79; // r15
  unsigned int v80; // ecx
  WCHAR jj; // ax
  size_t v82; // rbx
  unsigned __int64 v83; // rax
  int v84; // edx
  unsigned __int64 v85; // rax
  int v86; // edx
  _DWORD *v87; // rcx
  int v88; // [rsp+30h] [rbp-69h]
  int v89; // [rsp+38h] [rbp-61h]
  unsigned int *v90; // [rsp+48h] [rbp-51h]
  int v91; // [rsp+50h] [rbp-49h] BYREF
  int v92; // [rsp+54h] [rbp-45h]
  PWSTR EndPointer; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v94[4]; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int16 v95; // [rsp+64h] [rbp-35h] BYREF
  unsigned int v96; // [rsp+68h] [rbp-31h]
  int v97; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v98; // [rsp+70h] [rbp-29h] BYREF
  PSID Sid; // [rsp+78h] [rbp-21h] BYREF
  void *Src; // [rsp+80h] [rbp-19h] BYREF
  int v101; // [rsp+88h] [rbp-11h]
  __int64 v102; // [rsp+90h] [rbp-9h]
  char v103; // [rsp+E8h] [rbp+4Fh] BYREF
  _QWORD *v104; // [rsp+F0h] [rbp+57h]
  unsigned int **v105; // [rsp+F8h] [rbp+5Fh]
  _DWORD *v106; // [rsp+100h] [rbp+67h]

  v106 = a4;
  v105 = a3;
  v104 = a2;
  EndPointer = 0LL;
  v8 = 0LL;
  v9 = 0;
  Src = 0LL;
  v10 = 0;
  v95 = 0;
  v98 = 0;
  v92 = 0;
  a6 = 0;
  v103 = 0;
  a7 = 0;
  Sid = 0LL;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_40;
  }
  v11 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v11 )
    return 1336;
  v13 = a1 + 1;
  if ( iswspace(a1[1]) )
  {
    do
      ++v13;
    while ( iswspace(*v13) );
    v8 = 0LL;
  }
  if ( *v13 != 34 )
    return 1336;
  v14 = (__int64)(v13 + 1);
  for ( i = (unsigned __int16 *)v14; IsLegalAttributeChar2(*i) && v16; ++i )
  {
    if ( v9 + 1 < v9 )
      return 534;
    ++v9;
  }
  if ( *i != 34 || !v9 )
    return 1336;
  v17 = i + 1;
  ValueType = DecodeAttributeName(v14, 2 * v9, &Src);
  if ( !ValueType )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)Src + v18) );
    v102 = (unsigned int)(v18 + 1);
    v101 = 2 * v102;
    v19 = 2 * v102 + 20;
    v96 = v19;
    if ( (unsigned int)(2 * v102) >= 0xFFFFFFEC )
    {
      ValueType = 534;
LABEL_24:
      v8 = 0LL;
      goto LABEL_40;
    }
    while ( iswspace(*v17) )
      ++v17;
    if ( *v17 != 44 )
    {
LABEL_28:
      ValueType = 1336;
      goto LABEL_24;
    }
    do
      ++v17;
    while ( iswspace(*v17) );
    ValueType = GetValueType(v17, &EndPointer, (__int16 *)&v95);
    if ( ValueType )
      goto LABEL_39;
    for ( j = EndPointer; iswspace(*j); ++j )
      ;
    if ( *j != 44 )
      goto LABEL_28;
    do
      ++j;
    while ( iswspace(*j) );
    ValueType = GetFlags(j, &EndPointer, &v98);
    if ( ValueType )
    {
LABEL_39:
      v8 = 0LL;
      goto LABEL_40;
    }
    v21 = EndPointer;
    if ( (v98 & 0xFFC0) != 0 )
    {
      ValueType = 1336;
      goto LABEL_39;
    }
    if ( iswspace(*EndPointer) )
    {
      do
        ++v21;
      while ( iswspace(*v21) );
      v19 = v96;
    }
    if ( *v21 != 44 )
      goto LABEL_28;
    v23 = v21 + 1;
    v24 = v95;
    v97 = v95;
    v25 = v23;
    v26 = v95;
    if ( v95 == 1 )
    {
      if ( *v23 )
      {
        do
        {
          v91 = 0;
          v42 = wcstoxq(0LL, v25, &EndPointer, 0, 0, &v91);
          if ( EndPointer == v25 && !v42 )
            goto LABEL_141;
          if ( v91 )
          {
            ValueType = 534;
            goto LABEL_39;
          }
          v43 = EndPointer;
          ++v10;
          for ( k = iswspace(*EndPointer); k; k = iswspace(*v43) )
            ++v43;
          if ( *v43 != 44 )
          {
            if ( *v43 == 41 )
              goto LABEL_146;
            goto LABEL_143;
          }
          v25 = v43 + 1;
        }
        while ( *v25 );
      }
    }
    else
    {
      if ( v95 != 2 )
      {
        if ( v95 == 3 )
        {
          v38 = 0;
          if ( *v23 )
          {
            while ( 1 )
            {
              if ( iswspace(*v25) )
              {
                do
                  ++v25;
                while ( iswspace(*v25) );
                v19 = v96;
              }
              if ( *v25 != 34 )
                goto LABEL_127;
              v39 = v25 + 1;
              while ( *v39 != 34 && *v39 )
              {
                ++v39;
                if ( v38 + 1 < v38 )
                  goto LABEL_148;
                ++v38;
              }
              if ( v38 + 1 < v38 )
                goto LABEL_148;
              ++v38;
              if ( *v39 != 34 )
                goto LABEL_127;
              v25 = v39 + 1;
              ++v10;
              if ( iswspace(*v25) )
              {
                do
                  ++v25;
                while ( iswspace(*v25) );
                v19 = v96;
              }
              if ( *v25 == 44 )
              {
                if ( *++v25 )
                  continue;
              }
              break;
            }
          }
          if ( *v25 != 41 )
          {
LABEL_127:
            ValueType = 1336;
LABEL_128:
            v8 = 0LL;
            goto LABEL_40;
          }
          v40 = 2LL * v38;
LABEL_147:
          if ( v40 > 0xFFFFFFFF || (unsigned int)v40 + v19 < v19 )
          {
LABEL_148:
            ValueType = 534;
            goto LABEL_128;
          }
          v19 += v40;
LABEL_72:
          v30 = 4LL * (v10 - 1);
          if ( v30 <= 0xFFFFFFFF )
          {
            v31 = v30 + v19;
            if ( (unsigned int)v30 + v19 >= v19 )
            {
              v32 = v31 + 3;
              if ( v31 + 3 < v31 )
              {
                v32 = -1;
                ValueType = 534;
              }
              v33 = v32 & 0xFFFFFFFC;
              v97 = v33;
              v34 = (unsigned int *)SddlpAlloc(v33);
              v90 = v34;
              v8 = v34;
              if ( !v34 )
              {
                ValueType = 8;
                goto LABEL_40;
              }
              v45 = 4 * v10 + 16;
              v46 = Src;
              v47 = 2LL * (unsigned int)v102;
              *((_WORD *)v34 + 2) = v95;
              *((_WORD *)v34 + 3) = 0;
              v48 = (char *)v34 + v45;
              v49 = v98;
              *v8 = v45;
              v50 = v101 + v45;
              v8[2] = v49;
              v8[3] = v10;
              memmove(v48, v46, v47);
              v51 = (unsigned int *)((char *)v8 + v50);
              v52 = v26 - 1;
              if ( v52 )
              {
                v53 = v52 - 1;
                if ( !v53 )
                  goto LABEL_219;
                v54 = v53 - 1;
                if ( v54 )
                {
                  v55 = v54 - 2;
                  if ( v55 )
                  {
                    v56 = v55 - 1;
                    if ( v56 )
                    {
                      if ( v56 != 10 )
                      {
LABEL_177:
                        ValueType = 1336;
                        goto LABEL_40;
                      }
                      v57 = *v23;
                      if ( *v23 )
                      {
                        v58 = 0;
                        do
                        {
                          if ( iswspace(v57) )
                          {
                            do
                              ++v23;
                            while ( iswspace(*v23) );
                            v8 = v90;
                          }
                          for ( m = (__int16 *)v23; GetDigitFromChar(*m, v94); m = (__int16 *)(v61 + 1) )
                            ;
                          v8[v58 + 4] = v50;
                          v62 = (unsigned int)(v60 + 1) >> 1;
                          v63 = (__int16 *)(v61 - 1);
                          *v51 = v62;
                          v50 += v62 + 4;
                          while ( v63 > (__int16 *)v23 )
                          {
                            if ( !GetDigitFromChar(*v63, &v103) || !GetDigitFromChar(*(_WORD *)(v64 - 2), &a7) )
                              goto LABEL_177;
                            v63 = (__int16 *)(v65 - 4);
                            *(_BYTE *)(v67 + v66) = v103 | (16 * a7);
                          }
                          if ( v63 == (__int16 *)v23 )
                          {
                            if ( !GetDigitFromChar(*v63, &v103) )
                              goto LABEL_177;
                            *v68 = v103;
                          }
                          v69 = *v61;
                          v23 = v61;
                          v51 = (unsigned int *)((char *)v8 + v50);
                          ++v58;
                          while ( iswspace(v69) )
                            v69 = *++v23;
                          if ( *v23 != 44 )
                            break;
                          v57 = *++v23;
                        }
                        while ( *v23 );
                      }
                    }
                    else
                    {
LABEL_219:
                      while ( *v23 )
                      {
                        v91 = 0;
                        v83 = wcstoxq(0LL, v23, &EndPointer, 0, 1, &v91);
                        if ( EndPointer == v23 && !v83 )
                          goto LABEL_177;
                        if ( v91 )
                          goto LABEL_231;
                        v84 = v92;
                        v8[v92 + 4] = v50;
                        v50 += 8;
                        *(_QWORD *)v51 = v83;
                        v23 = EndPointer;
                        v51 = (unsigned int *)((char *)v8 + v50);
                        v92 = v84 + 1;
                        while ( iswspace(*v23) )
                          ++v23;
                        if ( *v23 != 44 )
                          break;
                        ++v23;
                      }
                    }
                  }
                  else
                  {
                    v70 = *v23;
                    if ( *v23 )
                    {
                      v71 = 0;
                      while ( 1 )
                      {
                        for ( n = v70; iswspace(n); n = *v23 )
                          ++v23;
                        ValueType = LocalGetSidForString(v23, &Sid, &EndPointer, &a6, a5, v88, v89, a8);
                        if ( ValueType )
                          goto LABEL_40;
                        v73 = Sid;
                        if ( !Sid )
                          goto LABEL_40;
                        v74 = RtlLengthSid(Sid);
                        v8[v71 + 4] = v50;
                        v75 = v50 + 4;
                        v50 = v74 + v75;
                        *v51 = v74;
                        memmove((char *)v8 + v75, v73, v74);
                        v23 = EndPointer;
                        ++v71;
                        v51 = (unsigned int *)((char *)v8 + v50);
                        if ( a6 )
                        {
                          SddlpFree(v73);
                          Sid = 0LL;
                        }
                        if ( iswspace(*v23) )
                        {
                          do
                            ++v23;
                          while ( iswspace(*v23) );
                          v8 = v90;
                        }
                        if ( *v23 == 44 )
                        {
                          v70 = *++v23;
                          if ( *v23 )
                            continue;
                        }
                        break;
                      }
                    }
                  }
                }
                else
                {
                  v76 = *v23;
                  if ( *v23 )
                  {
                    v77 = v8;
                    while ( 1 )
                    {
                      for ( ii = v76; iswspace(ii); ii = *v23 )
                        ++v23;
                      if ( *v23 != 34 )
                        break;
                      v79 = v23 + 1;
                      v80 = 0;
                      for ( jj = v23[1]; jj != 34 && jj; jj = *v79 )
                      {
                        ++v79;
                        ++v80;
                      }
                      if ( *v79 != 34 )
                        break;
                      v77[v92 + 4] = v50;
                      v50 += 2 * v80 + 2;
                      v82 = 2LL * v80;
                      memmove(v51, v23 + 1, v82);
                      v23 = v79 + 1;
                      *(_WORD *)((char *)v51 + v82) = 0;
                      v51 = (unsigned int *)((char *)v77 + v50);
                      ++v92;
                      while ( iswspace(*v23) )
                        ++v23;
                      if ( *v23 == 44 )
                      {
                        v76 = *++v23;
                        if ( *v23 )
                          continue;
                      }
                      v8 = v77;
                      goto LABEL_176;
                    }
                    ValueType = 1336;
                    v8 = v77;
                    goto LABEL_40;
                  }
                }
              }
              else
              {
                while ( *v23 )
                {
                  v91 = 0;
                  v85 = wcstoxq(0LL, v23, &EndPointer, 0, 0, &v91);
                  if ( EndPointer == v23 && !v85 )
                    goto LABEL_177;
                  if ( v91 )
                  {
LABEL_231:
                    ValueType = 534;
                    goto LABEL_40;
                  }
                  v86 = v92;
                  v8[v92 + 4] = v50;
                  v50 += 8;
                  *(_QWORD *)v51 = v85;
                  v23 = EndPointer;
                  v51 = (unsigned int *)((char *)v8 + v50);
                  v92 = v86 + 1;
                  while ( iswspace(*v23) )
                    ++v23;
                  if ( *v23 != 44 )
                    break;
                  ++v23;
                }
              }
LABEL_176:
              if ( *v23 == 41 )
              {
                v87 = v106;
                *v105 = v8;
                *v87 = v97;
                *v104 = v23 + 1;
                goto LABEL_40;
              }
              goto LABEL_177;
            }
          }
          goto LABEL_148;
        }
        if ( v95 == 5 )
        {
          if ( *v23 )
          {
            while ( 1 )
            {
              while ( iswspace(*v25) )
                ++v25;
              ValueType = LocalGetSidForString(v25, &Sid, &EndPointer, &a6, a5, v88, v89, a8);
              if ( ValueType )
                goto LABEL_39;
              v35 = Sid;
              if ( !Sid )
                goto LABEL_39;
              v25 = EndPointer;
              ++v10;
              v36 = RtlLengthSid(Sid);
              v37 = v36 + v19;
              if ( v36 + v19 < v19 )
                goto LABEL_148;
              v19 = v37 + 4;
              if ( v37 + 4 < v37 )
                goto LABEL_148;
              if ( a6 )
              {
                SddlpFree(v35);
                Sid = 0LL;
              }
              if ( iswspace(*v25) )
              {
                do
                  ++v25;
                while ( iswspace(*v25) );
                v26 = v97;
              }
              if ( *v25 == 44 )
              {
                if ( *++v25 )
                  continue;
              }
              break;
            }
          }
LABEL_93:
          if ( *v25 == 41 )
            goto LABEL_72;
          goto LABEL_127;
        }
        if ( v95 != 6 )
        {
          if ( v95 != 16 )
            goto LABEL_28;
          if ( *v23 )
          {
            while ( 1 )
            {
              for ( kk = iswspace(*v25); kk; kk = iswspace(*v25) )
                ++v25;
              while ( GetDigitFromChar(*v25, v94) )
              {
                ++v25;
                if ( v28 + 1 < v28 )
                  goto LABEL_62;
              }
              ++v10;
              v29 = v19 + ((v28 + 1) >> 1);
              if ( v29 < v19 || (v19 = v29 + 4, v29 + 4 < v29) )
              {
LABEL_62:
                ValueType = 534;
                goto LABEL_144;
              }
              if ( iswspace(*v25) )
              {
                do
                  ++v25;
                while ( iswspace(*v25) );
                v26 = v97;
              }
              if ( *v25 != 44 )
                break;
              if ( !*++v25 )
                goto LABEL_93;
            }
            if ( *v25 != 41 )
            {
LABEL_143:
              ValueType = 1336;
LABEL_144:
              v8 = 0LL;
              goto LABEL_40;
            }
            goto LABEL_72;
          }
          goto LABEL_93;
        }
      }
      if ( *v23 )
      {
        while ( 1 )
        {
          v91 = 0;
          v41 = wcstoxq(0LL, v25, &EndPointer, 0, 1, &v91);
          if ( EndPointer == v25 && !v41 )
            break;
          if ( v91 )
            goto LABEL_148;
          if ( v24 == 6 && v41 > 1 )
            goto LABEL_127;
          v25 = EndPointer;
          ++v10;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v25;
            while ( iswspace(*v25) );
            v19 = v96;
          }
          if ( *v25 == 44 )
          {
            if ( *++v25 )
              continue;
          }
          goto LABEL_126;
        }
LABEL_141:
        ValueType = 1336;
        v8 = 0LL;
        goto LABEL_40;
      }
    }
LABEL_126:
    if ( *v25 != 41 )
      goto LABEL_127;
LABEL_146:
    v40 = 8LL * v10;
    goto LABEL_147;
  }
LABEL_40:
  if ( Src )
    SddlpFree(Src);
  if ( ValueType && v8 )
    SddlpFree(v8);
  return ValueType;
}
