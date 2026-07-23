/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x14051E630
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400F5198 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x1400C0D64 (RtlULongLongSub.c)
 *     RtlULongLongAdd @ 0x14010D2A4 (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1404C5500 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResCompareResourceNames @ 0x14051E54C (LdrpResCompareResourceNames.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        int a8,
        signed __int16 *a9,
        ULONGLONG *a10,
        ULONGLONG *a11,
        __int16 a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r12
  __int64 v14; // r10
  __int64 v15; // r11
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int64 *v18; // r14
  __int16 v19; // r8
  bool v20; // r9
  char v21; // si
  int v22; // ecx
  ULONGLONG v23; // rdi
  unsigned int *v24; // r15
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // r9d
  unsigned int *v28; // r14
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int *v31; // rdx
  unsigned int *v32; // rax
  int v33; // r14d
  int v34; // eax
  __int64 result; // rax
  ULONGLONG v36; // rdx
  char v37; // r14
  ULONGLONG v38; // rdi
  ULONGLONG v39; // r14
  ULONGLONG v40; // r10
  __int64 v41; // r11
  ULONGLONG v42; // rdx
  ULONGLONG v43; // r12
  ULONGLONG *v44; // r9
  __int64 v45; // rdx
  ULONGLONG v46; // rax
  ULONGLONG *v47; // r11
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  bool v52; // zf
  __int16 v53; // ax
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r9
  ULONGLONG v57; // r13
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // r9
  ULONGLONG v64; // r10
  __int64 v65; // r10
  int v66; // edx
  unsigned __int64 v67; // r11
  ULONGLONG pullResult; // [rsp+48h] [rbp-E0h] BYREF
  int v69; // [rsp+50h] [rbp-D8h]
  unsigned int v70; // [rsp+54h] [rbp-D4h]
  ULONGLONG v71; // [rsp+58h] [rbp-D0h]
  int v72; // [rsp+60h] [rbp-C8h] BYREF
  ULONGLONG v73; // [rsp+68h] [rbp-C0h]
  __int16 v74; // [rsp+70h] [rbp-B8h]
  int v75; // [rsp+74h] [rbp-B4h]
  int v76; // [rsp+78h] [rbp-B0h]
  ULONGLONG v77; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+88h] [rbp-A0h]
  unsigned int *v79; // [rsp+90h] [rbp-98h]
  unsigned int *v80; // [rsp+98h] [rbp-90h]
  unsigned int *v81; // [rsp+A0h] [rbp-88h]
  __int16 v82; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-78h]
  unsigned int *v84; // [rsp+B8h] [rbp-70h]
  int v85; // [rsp+C0h] [rbp-68h]
  int v86; // [rsp+D4h] [rbp-54h]
  ULONGLONG v87; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v88; // [rsp+E0h] [rbp-48h]
  unsigned __int64 *v89; // [rsp+E8h] [rbp-40h]
  bool v91; // [rsp+138h] [rbp+10h]
  signed __int16 v94; // [rsp+158h] [rbp+30h]

  v13 = a4;
  v14 = a3;
  v15 = a1;
  v86 = 0;
  v16 = 0;
  v94 = 0;
  LOWORD(v17) = 0;
  v75 = 0;
  if ( a4 )
  {
    if ( a5 )
    {
      v18 = a7;
      if ( a7 )
      {
        if ( (unsigned int)(a8 - 1) <= 3 )
        {
          LOBYTE(v19) = a12;
          if ( (a12 & 0x8000) == 0 )
          {
            v20 = (a12 & 0x8800) == 34816;
            v91 = v20;
            v21 = (a12 & 0x1000) != 0;
            if ( ((a12 & 0x1000) == 0 || v14) && ((a12 & 0x8800) == 0x8800 || a1) && !v20 )
            {
              v22 = a8;
              v76 = a8;
              v23 = v13;
              v24 = 0LL;
              v77 = 0LL;
              if ( a13 )
                *a13 = 0;
LABEL_13:
              if ( v23 )
              {
                v25 = v22;
                v26 = v22 - 1;
                v76 = v26;
                v85 = v26;
                if ( v25 )
                {
                  v78 = *v18;
                  v83 = v78;
                  if ( !v26 && a8 == 3 )
                  {
                    v77 = v23;
                    v87 = v23;
                    if ( !a9 )
                      return (unsigned int)-1073741811;
                    v94 = *a9;
                    v82 = *a9;
                    v75 = 0;
                    v74 = 0;
                    if ( (~(_BYTE)v19 & 4) != 0 )
                    {
                      v78 = (unsigned __int16)a9[2];
                      v83 = v78;
                    }
                  }
                  if ( v20 )
                    goto LABEL_149;
                  if ( v21
                    && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                  {
                    return (unsigned int)-1073741701;
                  }
                  if ( v20 )
LABEL_149:
                    v27 = (unsigned __int16)v86;
                  else
                    v27 = *(unsigned __int16 *)(v23 + 12);
                  v70 = v27;
                  v69 = v27;
                  if ( v27 && v21 )
                  {
                    v50 = 8LL * v27;
                    v81 = (unsigned int *)v50;
                    if ( v50 > 0xFFFFFFFF
                      || RtlULongLongAdd(v23, (unsigned int)v50 + 16LL, &pullResult) < 0
                      || v51 + v23 + 16 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                    {
                      return (unsigned int)-1073741701;
                    }
                    v27 = v70;
                  }
                  v28 = (unsigned int *)(v23 + 16);
                  v81 = (unsigned int *)(v23 + 16);
                  v79 = (unsigned int *)(v23 + 16);
                  if ( (v78 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    if ( v27 )
                    {
                      if ( v21 && RtlULongLongAdd(v23 + 16, (int)v27, &pullResult) < 0 )
                        return (unsigned int)-1073741701;
                      v28 += 2 * (int)v27;
                      v81 = v28;
                      v79 = v28;
                    }
                    v27 = HIWORD(v86);
                    if ( !v91 )
                      v27 = *(unsigned __int16 *)(v23 + 14);
                    v70 = v27;
                    v69 = v27;
                    if ( v21 )
                    {
                      v29 = 8LL * v27;
                      v88 = v29;
                      if ( v29 > 0xFFFFFFFF
                        || RtlULongLongAdd((ULONGLONG)v28, (unsigned int)v29, &pullResult) < 0
                        || (unsigned __int64)v28 + v30 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL) )
                      {
                        return (unsigned int)-1073741701;
                      }
                    }
                  }
                  if ( !v27 )
                  {
                    v73 = 0LL;
LABEL_105:
                    switch ( a8 - v76 )
                    {
                      case 1:
                        return (unsigned int)-1073741686;
                      case 2:
                        return (unsigned int)-1073741685;
                      case 3:
                        return (unsigned int)-1073741308;
                    }
                    return (unsigned int)-1073741811;
                  }
                  v19 = a12;
                  while ( !v77 || (v19 & 0x20) == 0 )
                  {
                    while ( 2 )
                    {
                      v23 = 0LL;
                      v73 = 0LL;
                      v31 = v28;
                      v79 = v28;
                      v32 = &v28[2 * v27 - 2];
                      v84 = v32;
                      v33 = v27;
                      v69 = v27;
                      while ( 1 )
                      {
                        if ( v31 > v32 )
                          goto LABEL_47;
                        v34 = v33 >> 1;
                        v69 = v33 >> 1;
                        if ( !(v33 >> 1) )
                          break;
                        v80 = v31;
                        v37 = v33 & 1;
                        if ( !v37 )
                          --v34;
                        v80 = &v31[2 * v34];
                        result = LdrpResCompareResourceNames(
                                   v15,
                                   (__int64)v31,
                                   v14,
                                   (const wchar_t *)v78,
                                   v13,
                                   v80,
                                   v19,
                                   &v72);
                        if ( (int)result < 0 )
                          return result;
                        if ( !v72 )
                        {
                          v36 = v80[1];
                          if ( (v36 & 0x80000000) == 0LL )
                          {
                            v23 = 0LL;
                            v73 = 0LL;
LABEL_129:
                            if ( v21 )
                            {
                              if ( v77 && RtlULongLongAdd(v13, v36, &pullResult) >= 0 )
                              {
                                v24 = (unsigned int *)pullResult;
                                goto LABEL_133;
                              }
                              return (unsigned int)-1073741701;
                            }
                            v24 = (unsigned int *)(v13 + v36);
LABEL_133:
                            v71 = (ULONGLONG)v24;
                            goto LABEL_46;
                          }
LABEL_41:
                          if ( v21 )
                          {
                            if ( v77 )
                              return (unsigned int)-1073741701;
                            LODWORD(v36) = v36 & 0x7FFFFFFF;
                            if ( RtlULongLongAdd(v13, v36, &pullResult) < 0 )
                              return (unsigned int)-1073741701;
                            v23 = pullResult;
                          }
                          else
                          {
                            v23 = v13 + (v36 & 0xFFFFFFFF7FFFFFFFuLL);
                          }
                          v73 = v23;
                          goto LABEL_46;
                        }
                        if ( v72 < 0 )
                        {
                          v32 = v80 - 2;
                          v84 = v80 - 2;
                          v52 = v37 == 0;
                          v33 = v69;
                          if ( v52 )
                            v33 = v69 - 1;
                          v69 = v33;
                          v31 = v79;
                        }
                        else
                        {
                          v31 = v80 + 2;
                          v79 = v80 + 2;
                          v33 = v69;
                          v32 = v84;
                        }
                        v14 = a3;
                        v15 = a1;
                        v19 = a12;
                      }
                      if ( !v33 )
                        goto LABEL_47;
                      result = LdrpResCompareResourceNames(
                                 v15,
                                 (__int64)v31,
                                 v14,
                                 (const wchar_t *)v78,
                                 v13,
                                 v31,
                                 v19,
                                 &v72);
                      if ( (int)result < 0 )
                        return result;
                      if ( !v72 )
                      {
                        v36 = v79[1];
                        if ( (v36 & 0x80000000) == 0LL )
                          goto LABEL_129;
                        goto LABEL_41;
                      }
LABEL_46:
                      v14 = a3;
                      v15 = a1;
LABEL_47:
                      v19 = a12;
                      if ( !v77 || v24 )
                      {
LABEL_48:
                        v18 = a7 + 1;
                        a7 = v18;
                        v89 = v18;
                        LOWORD(v17) = v78;
                        v20 = v91;
                        v22 = v76;
                        goto LABEL_13;
                      }
                      if ( (a12 & 4) != 0 )
                      {
                        LOWORD(v17) = v78;
                        goto LABEL_61;
                      }
                      HIWORD(v66) = HIWORD(v75);
                      LOWORD(v66) = v75 + 1;
                      v75 = v66;
                      v74 = v66;
                      if ( (unsigned __int16)v66 < v94 )
                      {
                        v78 = (unsigned __int16)a9[4 * (unsigned __int16)v66 + 2];
                        v83 = v78;
                        v27 = v70;
                        v28 = v81;
                        continue;
                      }
                      break;
                    }
                    if ( *((_BYTE *)a9 + 516) )
                      goto LABEL_48;
                    v19 = a12 | 0x20;
                    a12 |= 0x20u;
                    v27 = v70;
                    v28 = v81;
                  }
                  v23 = 0LL;
                  v73 = 0LL;
                  if ( v21 )
                  {
                    if ( RtlULongLongAdd(v13, v28[1], &pullResult) < 0 )
                      return (unsigned int)-1073741701;
                    v24 = (unsigned int *)pullResult;
                    v71 = pullResult;
                    LOBYTE(v19) = a12;
                  }
                  else
                  {
                    v24 = (unsigned int *)(v13 + v28[1]);
                    v71 = (ULONGLONG)v24;
                  }
                  v17 = *v28;
                  v83 = *v28;
LABEL_61:
                  v20 = v91;
                }
              }
              if ( v24 && (v19 & 2) == 0 )
              {
                if ( v21
                  && ((unsigned __int64)v24 <= v13 || (unsigned __int64)(v24 + 4) > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  goto LABEL_159;
                }
                if ( a13 )
                  *a13 = v17;
                v38 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (v15 & 1) == 0 && !v20 )
                {
                  v39 = 0LL;
                  goto LABEL_72;
                }
                v53 = *(_WORD *)(a5 + 24);
                if ( v53 == 267 )
                {
                  v54 = *(unsigned int *)(a5 + 136);
                }
                else if ( v53 == 523 )
                {
                  v54 = *(unsigned int *)(a5 + 152);
                }
                else
                {
                  v54 = 0LL;
                }
                if ( (_DWORD)v54 )
                {
                  if ( v21
                    && (RtlULongLongAdd(v15 & 0xFFFFFFFFFFFFFFFCuLL, (unsigned int)v54, &pullResult) < 0
                     || RtlULongLongSub(pullResult, v13, &pullResult) < 0) )
                  {
                    return (unsigned int)-1073741701;
                  }
                  v39 = v38 + (unsigned int)v54 - v13;
                  v55 = LdrpSectionTableFromVirtualAddress(v38, v14, a5, v54, v54, v21);
                  if ( !v55 )
                    goto LABEL_159;
                  if ( *v24 > *(_DWORD *)(v55 + 8) )
                  {
                    v57 = *(unsigned int *)(v55 + 12);
                    v58 = LdrpSectionTableFromVirtualAddress(v38, a3, a5, v56, *v24, v21);
                    if ( !v58 )
                      goto LABEL_159;
                    v60 = *(unsigned int *)(v58 + 12);
                    v61 = LdrpSectionTableFromVirtualAddress(v38, a3, a5, v59, *(_DWORD *)(v58 + 12), v21);
                    v62 = v61;
                    if ( v61 )
                    {
                      if ( v21
                        && (RtlULongLongAdd(
                              v38,
                              (unsigned int)v60 - (unsigned __int64)*(unsigned int *)(v61 + 12),
                              &pullResult) < 0
                         || RtlULongLongAdd(pullResult, *(unsigned int *)(v63 + 20), &pullResult) < 0) )
                      {
                        return (unsigned int)-1073741701;
                      }
                      v64 = v60 + v38 + *(unsigned int *)(v62 + 20) - (unsigned __int64)*(unsigned int *)(v62 + 12);
                    }
                    else
                    {
                      v64 = 0LL;
                    }
                    if ( v21 )
                    {
                      if ( RtlULongLongSub(*(unsigned int *)(v62 + 12), v57, &pullResult) < 0 )
                        return (unsigned int)-1073741701;
                      v13 = a4;
                      if ( RtlULongLongSub(pullResult, v65 - a4, &pullResult) < 0 )
                        return (unsigned int)-1073741701;
                    }
                    else
                    {
                      v13 = a4;
                    }
                    v39 += v13 + *(unsigned int *)(v62 + 12) - v57 - v64;
                  }
LABEL_72:
                  v40 = v24[1];
                  if ( !v21 )
                  {
                    v42 = 0LL;
                    v43 = a3;
LABEL_79:
                    v44 = a10;
                    if ( a10 )
                    {
                      if ( v21 )
                      {
                        if ( RtlULongLongAdd(v38, v42, &pullResult) < 0
                          || pullResult < v38
                          || pullResult > v43 + (v38 & 0xFFFFFFFFFFFFFFFCuLL) )
                        {
                          return (unsigned int)-1073741701;
                        }
                        v46 = v45 + v38;
                      }
                      else
                      {
                        v46 = v38 + *v24 - v39;
                      }
                      *v44 = v46;
                    }
                    v47 = a11;
                    if ( a11 )
                    {
                      if ( v21 && v44 && (RtlULongLongAdd(*v44, v40, &pullResult) < 0 || v48 + v49 > v38 + v43) )
                        return (unsigned int)-1073741701;
                      *v47 = v40;
                    }
                    return v16;
                  }
                  if ( RtlULongLongSub(*v24, v39, &pullResult) < 0 )
                    return (unsigned int)-1073741701;
                  v42 = pullResult;
                  if ( pullResult >= v13 - v41 )
                  {
                    v43 = a3;
                    if ( pullResult <= a3 && (_DWORD)v40 && v40 <= a3 && pullResult + (unsigned int)v40 <= a3 )
                      goto LABEL_79;
                  }
LABEL_159:
                  v71 = 0LL;
                  return (unsigned int)-1073741701;
                }
                v71 = 0LL;
                return (unsigned int)-1073741687;
              }
              if ( v23 && (v19 & 2) != 0 )
              {
                if ( v21
                  && (RtlULongLongAdd(v23, 0x18uLL, &pullResult) < 0 || v23 + 24 > v14 + (v15 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  v73 = 0LL;
                  return (unsigned int)-1073741701;
                }
                if ( a10 )
                {
                  if ( v21 )
                  {
                    v67 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( v23 < v67 || v23 > v67 + v14 )
                      return (unsigned int)-1073741701;
                  }
                  *a10 = v23;
                }
                return v16;
              }
              goto LABEL_105;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
