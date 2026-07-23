/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800381CC
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD580 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlULongLongAdd @ 0x180039184 (RtlULongLongAdd.c)
 *     LdrpResCompareResourceNames @ 0x1800391A0 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x180039BF0 (RtlULongLongSub.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007FEE4 (LdrpSectionTableFromVirtualAddress.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800DD4C4 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        __int64 a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r15
  __int64 v16; // r12
  __int64 v17; // r11
  _QWORD *v18; // r8
  int v19; // edi
  int v20; // r10d
  int v21; // edx
  char v22; // r14
  int v23; // ecx
  unsigned __int64 v24; // rbx
  unsigned int *v25; // rsi
  unsigned __int64 v26; // r11
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rdi
  int *v30; // r11
  char v31; // al
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  int *v34; // r12
  unsigned int *v35; // rax
  int v36; // r13d
  bool v37; // zf
  __int64 result; // rax
  int v39; // r10d
  unsigned int v40; // ebx
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  char v44; // di
  int *v45; // r15
  int v46; // r11d
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r9
  _BYTE *v50; // rdx
  unsigned __int64 *v51; // r10
  __int64 v52; // rdx
  __int64 v53; // r11
  unsigned __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // r10
  __int64 v57; // r11
  int v58; // r10d
  __int64 v59; // rdx
  int v60; // r11d
  __int64 v61; // r9
  int v62; // r9d
  __int64 v63; // r15
  __int64 v64; // r12
  __int64 v65; // rax
  int v66; // r9d
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // r9
  __int64 v71; // r10
  __int64 v72; // r10
  unsigned __int64 v73; // r12
  unsigned int *Heap; // rbx
  __int64 v75; // [rsp+40h] [rbp-178h]
  _BYTE *v76; // [rsp+48h] [rbp-170h] BYREF
  unsigned int v77; // [rsp+50h] [rbp-168h]
  unsigned __int16 v78; // [rsp+54h] [rbp-164h]
  int v79; // [rsp+58h] [rbp-160h]
  unsigned int *v80; // [rsp+60h] [rbp-158h]
  unsigned __int64 v81; // [rsp+68h] [rbp-150h]
  signed __int16 v82; // [rsp+70h] [rbp-148h]
  __int64 v83; // [rsp+78h] [rbp-140h]
  int v84; // [rsp+80h] [rbp-138h]
  int v85; // [rsp+84h] [rbp-134h]
  unsigned __int64 v86; // [rsp+88h] [rbp-130h]
  unsigned __int64 v87; // [rsp+90h] [rbp-128h]
  int v88; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v89; // [rsp+A0h] [rbp-118h]
  PVOID BaseAddress; // [rsp+A8h] [rbp-110h]
  __int64 v91; // [rsp+B0h] [rbp-108h]
  int *v92; // [rsp+B8h] [rbp-100h]
  int *v93; // [rsp+C0h] [rbp-F8h]
  HANDLE Handle; // [rsp+C8h] [rbp-F0h]
  __int64 v95; // [rsp+D0h] [rbp-E8h]
  __int64 v96; // [rsp+D8h] [rbp-E0h]
  __int64 v97; // [rsp+E0h] [rbp-D8h]
  int v98; // [rsp+E8h] [rbp-D0h]
  __int64 v99; // [rsp+F0h] [rbp-C8h]
  int *v100; // [rsp+F8h] [rbp-C0h]
  unsigned int *v101; // [rsp+100h] [rbp-B8h]
  _QWORD *v102; // [rsp+108h] [rbp-B0h]
  _WORD *v103; // [rsp+110h] [rbp-A8h]
  __int64 v104; // [rsp+118h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+120h] [rbp-98h]
  unsigned __int64 *v106; // [rsp+128h] [rbp-90h]
  _QWORD v107[2]; // [rsp+130h] [rbp-88h] BYREF
  __int64 v108; // [rsp+140h] [rbp-78h]
  int v109; // [rsp+148h] [rbp-70h] BYREF
  const wchar_t *v110; // [rsp+150h] [rbp-68h]
  int v111; // [rsp+158h] [rbp-60h]
  __int64 v112; // [rsp+15Ch] [rbp-5Ch]
  int v113; // [rsp+164h] [rbp-54h]
  _BYTE v114[16]; // [rsp+168h] [rbp-50h] BYREF

  v13 = a4;
  v87 = a4;
  v14 = a3;
  v81 = a3;
  Handle = a2;
  v16 = a1;
  v91 = a1;
  v17 = a5;
  v97 = a5;
  v104 = a6;
  v18 = a7;
  v96 = (__int64)a7;
  v99 = a9;
  v106 = a10;
  v108 = a11;
  v103 = a13;
  v111 = 0;
  v112 = 0LL;
  v113 = 0;
  v82 = 0;
  LOWORD(v19) = 0;
  BaseAddress = 0LL;
  v84 = 0;
  v78 = 0;
  LODWORD(v107[0]) = 5636180;
  v107[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v109 = 5505106;
  v110 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v107, MEMORY[0x7FFE0384]);
    v18 = (_QWORD *)v96;
    v17 = v97;
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v17 )
    return 3221225485LL;
  if ( !v18 )
    return 3221225485LL;
  v20 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = (a12 & 0x1000) != 0;
  LOBYTE(a4) = (a12 & 0x8800) == 34816;
  BYTE4(v75) = a4;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) != 0x8800 && !v16 || (_BYTE)a4 == 1 && !a2 )
    return 3221225485LL;
  v102 = v18;
  v23 = a8;
  v85 = a8;
  v24 = v13;
  v25 = 0LL;
  v80 = 0LL;
  v89 = 0LL;
  if ( v103 )
    *v103 = 0;
LABEL_15:
  LODWORD(v26) = 0;
  if ( !v24 || (v27 = v23, v28 = v23 - 1, v85 = v28, v98 = v28, !v27) )
  {
LABEL_51:
    if ( v25 && (v21 & 2) == 0 )
    {
      if ( v22 && ((unsigned __int64)v25 <= v13 || (unsigned __int64)(v25 + 4) > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        v80 = 0LL;
        goto LABEL_180;
      }
      if ( v103 )
        *v103 = v19;
      v47 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v16 & 1) != 0 || (_BYTE)a4 )
      {
        v60 = v97;
        if ( *(_WORD *)(v97 + 24) == 267 )
        {
          v61 = *(unsigned int *)(v97 + 136);
        }
        else if ( *(_WORD *)(v97 + 24) == 523 )
        {
          v61 = *(unsigned int *)(v97 + 152);
        }
        else
        {
          v61 = 0LL;
        }
        if ( !(_DWORD)v61 )
        {
          v80 = 0LL;
          v40 = -1073741687;
          goto LABEL_55;
        }
        if ( v22
          && ((int)RtlULongLongAdd(v16 & 0xFFFFFFFFFFFFFFFCuLL, (unsigned int)v61, &v76, v61) < 0
           || (int)RtlULongLongSub(v76, v13, &v76) < 0) )
        {
          v40 = -1073741701;
          goto LABEL_55;
        }
        v48 = v47 + (unsigned int)v61 - v13;
        v105 = v48;
        v63 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v14, v60, v104, v61, v22);
        if ( !v63 )
          goto LABEL_204;
        if ( BYTE4(v75) )
        {
          result = LdrpResReadFile(Handle);
          if ( (int)result < 0 )
            return result;
          v25 = (unsigned int *)v114;
          v80 = (unsigned int *)v114;
          v62 = v104;
        }
        if ( *v25 <= *(_DWORD *)(v63 + 8) )
        {
LABEL_101:
          v49 = v25[1];
          if ( !v22 )
          {
            v50 = 0LL;
LABEL_108:
            v51 = v106;
            if ( v106 )
            {
              if ( v22 )
              {
                if ( (int)RtlULongLongAdd(v47, v50, &v76, v49) < 0
                  || (unsigned __int64)v76 < v47
                  || (unsigned __int64)v76 > v53 + (v47 & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  goto LABEL_180;
                }
                v54 = v52 + v47;
              }
              else
              {
                v54 = v47 + *v25 - v48;
              }
              *v51 = v54;
            }
            v55 = (_QWORD *)v108;
            if ( v108 )
            {
              if ( v22 && v51 && ((int)RtlULongLongAdd(*v51, v49, &v76, v49) < 0 || v56 + v49 > v47 + v57) )
                goto LABEL_180;
              *v55 = v49;
            }
            v40 = 0;
            goto LABEL_55;
          }
          if ( (int)RtlULongLongSub(*v25, v48, &v76) < 0 )
            goto LABEL_180;
          v50 = v76;
          if ( (unsigned __int64)v76 >= v13 - v16
            && (unsigned __int64)v76 <= v81
            && (_DWORD)v49
            && v49 <= v81
            && (unsigned __int64)&v76[(unsigned int)v49] <= v81 )
          {
            goto LABEL_108;
          }
LABEL_204:
          v80 = 0LL;
          goto LABEL_180;
        }
        v64 = *(unsigned int *)(v63 + 12);
        v65 = LdrpSectionTableFromVirtualAddress(v47, v81, v97, v62, *v25, v22);
        if ( !v65 )
          goto LABEL_204;
        v67 = *(unsigned int *)(v65 + 12);
        v68 = LdrpSectionTableFromVirtualAddress(v47, v81, v97, v66, *(_DWORD *)(v65 + 12), v22);
        v69 = v68;
        if ( v68 )
        {
          if ( v22
            && ((int)RtlULongLongAdd(v47, (unsigned int)v67 - (unsigned __int64)*(unsigned int *)(v68 + 12), &v76, v68) < 0
             || (int)RtlULongLongAdd(v76, *(unsigned int *)(v70 + 20), &v76, v70) < 0) )
          {
            goto LABEL_180;
          }
          v71 = v67 + v47 + *(unsigned int *)(v69 + 20) - (unsigned __int64)*(unsigned int *)(v69 + 12);
        }
        else
        {
          v71 = 0LL;
        }
        if ( v22
          && ((int)RtlULongLongSub(*(unsigned int *)(v69 + 12), v64, &v76) < 0
           || (int)RtlULongLongSub(v76, v72 - v13, &v76) < 0) )
        {
          goto LABEL_180;
        }
        v48 += v13 + *(unsigned int *)(v69 + 12) - v64 - v71;
        v16 = v91;
      }
      else
      {
        v48 = 0LL;
      }
      v105 = v48;
      goto LABEL_101;
    }
    if ( v24 && (v21 & 2) != 0 )
    {
      if ( v22 && ((int)RtlULongLongAdd(v24, 24LL, &v76, a4) < 0 || v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        v86 = v26;
        goto LABEL_180;
      }
      if ( v106 )
      {
        if ( v22 )
        {
          v73 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v24 < v73 || v24 > v73 + v14 )
            goto LABEL_180;
        }
        *v106 = v24;
      }
      v40 = v26;
      goto LABEL_55;
    }
LABEL_53:
    v39 = v20 - v85 - 1;
    if ( v39 )
    {
      v58 = v39 - 1;
      if ( v58 )
      {
        if ( v58 == 1 )
          v40 = -1073741308;
        else
          v40 = -1073741811;
      }
      else
      {
        v40 = -1073741685;
      }
    }
    else
    {
      v40 = -1073741686;
    }
    goto LABEL_55;
  }
  v29 = *v18;
  v83 = v29;
  v95 = v29;
  if ( !v28 && v20 == 3 )
  {
    v89 = v24;
    if ( !v99 )
    {
      v40 = -1073741811;
      goto LABEL_55;
    }
    v82 = *(_WORD *)v99;
    v84 = 0;
    v78 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
    {
      v29 = *(unsigned __int16 *)(v99 + 4);
      v83 = v29;
      v95 = v29;
    }
  }
  if ( (_BYTE)a4 )
  {
    result = LdrpResReadFile(Handle);
    LODWORD(v75) = result;
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    LOBYTE(a4) = BYTE4(v75);
    if ( BYTE4(v75) )
      goto LABEL_181;
  }
  if ( v22 && ((int)RtlULongLongAdd(v24, 24LL, &v76, a4) < 0 || v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
    goto LABEL_180;
  if ( (_BYTE)a4 )
LABEL_181:
    a4 = (unsigned __int16)v113;
  else
    a4 = *(unsigned __int16 *)(v24 + 12);
  v77 = a4;
  v79 = a4;
  if ( (_DWORD)a4 && v22 )
  {
    v42 = 8LL * (unsigned int)a4;
    v92 = (int *)v42;
    if ( v42 > 0xFFFFFFFF
      || (int)RtlULongLongAdd(v24, (unsigned int)v42 + 16LL, &v76, (unsigned int)v42) < 0
      || v43 + v24 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      goto LABEL_180;
    }
    a4 = v77;
  }
  v30 = (int *)(v24 + 16);
  v92 = (int *)(v24 + 16);
  v93 = (int *)(v24 + 16);
  if ( (v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_33;
  if ( (_DWORD)a4 )
  {
    if ( v22 && (int)RtlULongLongAdd(v24 + 16, (int)a4, &v76, a4) < 0 )
      goto LABEL_180;
    v30 += 2 * (int)a4;
    v92 = v30;
    v93 = v30;
  }
  v31 = BYTE4(v75);
  a4 = HIWORD(v113);
  if ( !BYTE4(v75) )
    a4 = *(unsigned __int16 *)(v24 + 14);
  v77 = a4;
  v79 = a4;
  if ( v22 )
  {
    v32 = 8LL * (unsigned int)a4;
    v107[0] = v32;
    if ( v32 > 0xFFFFFFFF
      || (int)RtlULongLongAdd(v30, (unsigned int)v32, &v76, a4) < 0
      || (unsigned __int64)v30 + v33 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      goto LABEL_180;
    }
LABEL_33:
    v31 = BYTE4(v75);
  }
  if ( !(_DWORD)a4 )
  {
    v86 = 0LL;
    goto LABEL_53;
  }
  if ( v31 )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
      LODWORD(a4) = v79;
    }
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (int)a4);
    BaseAddress = Heap;
    if ( !Heap )
    {
      v40 = -1073741801;
      goto LABEL_55;
    }
    v77 = v79;
    result = LdrpResReadFile(Handle);
    LODWORD(v75) = result;
    if ( (int)result < 0 )
      return result;
    v30 = (int *)Heap;
    v92 = (int *)Heap;
    v93 = (int *)Heap;
    v83 = v95;
    v84 = v78;
    v96 = (__int64)v102;
    v85 = v98;
    v25 = v80;
    a4 = v77;
  }
  v21 = a12;
LABEL_37:
  if ( v89 && (v21 & 0x20) != 0 )
  {
    v24 = 0LL;
    v86 = 0LL;
    if ( v22 )
    {
      if ( (int)RtlULongLongAdd(v13, (unsigned int)v30[1], &v76, a4) < 0 )
        goto LABEL_180;
      v25 = (unsigned int *)v76;
      v80 = (unsigned int *)v76;
      LOBYTE(v21) = a12;
    }
    else
    {
      v25 = (unsigned int *)(v13 + (unsigned int)v30[1]);
      v80 = v25;
    }
    v19 = *v30;
    v95 = (unsigned int)*v30;
LABEL_50:
    LODWORD(v26) = 0;
    LOBYTE(a4) = BYTE4(v75);
    v16 = v91;
    v20 = a8;
    goto LABEL_51;
  }
LABEL_38:
  v24 = 0LL;
  v86 = 0LL;
  v34 = v30;
  v93 = v30;
  v35 = (unsigned int *)&v30[2 * (int)a4 - 2];
  v101 = v35;
  v19 = a4;
  v79 = a4;
  while ( 1 )
  {
    if ( v34 > (int *)v35 )
    {
      v14 = v81;
      LOWORD(v19) = v83;
LABEL_44:
      v21 = a12;
      if ( !v89 || v25 )
        goto LABEL_45;
      if ( (a12 & 4) != 0 )
        goto LABEL_50;
      HIWORD(v46) = HIWORD(v84);
      LOWORD(v46) = v84 + 1;
      v84 = v46;
      v78 = v46;
      if ( (unsigned __int16)v46 >= v82 )
      {
        if ( *(_BYTE *)(v99 + 516) )
        {
LABEL_45:
          v18 = (_QWORD *)(v96 + 8);
          v96 = (__int64)v18;
          v102 = v18;
          v20 = a8;
          v16 = v91;
          LOBYTE(a4) = BYTE4(v75);
          v23 = v85;
          goto LABEL_15;
        }
        v21 = a12 | 0x20;
        a12 |= 0x20u;
        a4 = v77;
        v30 = v92;
        goto LABEL_37;
      }
      v83 = *(unsigned __int16 *)(v99 + 8LL * (unsigned __int16)v46 + 4);
      v95 = v83;
      a4 = v77;
      v30 = v92;
      goto LABEL_38;
    }
    v36 = v19 >> 1;
    if ( !(v19 >> 1) )
    {
      v13 = v87;
      v14 = v81;
      v37 = v19 == 0;
      LOWORD(v19) = v83;
      if ( !v37 )
      {
        result = LdrpResCompareResourceNames(v91, Handle, v81, v83, v87, v34, v21, &v88, v75);
        LODWORD(v75) = result;
        if ( (int)result < 0 )
          return result;
        if ( !v88 )
        {
          v41 = (unsigned int)v34[1];
          if ( (int)v41 >= 0 )
          {
            if ( v22 )
            {
              if ( !v89 || (int)RtlULongLongAdd(v13, v41, &v76, a4) < 0 )
                goto LABEL_180;
              v25 = (unsigned int *)v76;
            }
            else
            {
              v25 = (unsigned int *)(v41 + v13);
            }
            v80 = v25;
          }
          else
          {
            if ( v22 )
            {
              if ( v89 )
                goto LABEL_180;
              LODWORD(v41) = v41 & 0x7FFFFFFF;
              if ( (int)RtlULongLongAdd(v13, v41, &v76, a4) < 0 )
                goto LABEL_180;
              v24 = (unsigned __int64)v76;
            }
            else
            {
              v24 = v13 + (v41 & 0xFFFFFFFF7FFFFFFFuLL);
            }
            v86 = v24;
          }
        }
      }
      goto LABEL_44;
    }
    v100 = v34;
    v44 = v19 & 1;
    if ( v44 )
      v45 = &v34[2 * v36];
    else
      v45 = &v34[2 * v36 - 2];
    v100 = v45;
    result = LdrpResCompareResourceNames(v91, Handle, v81, v83, v87, v45, v21, &v88, v75);
    LODWORD(v75) = result;
    if ( (int)result < 0 )
      return result;
    if ( !v88 )
      break;
    if ( v88 >= 0 )
    {
      v34 = v45 + 2;
      v93 = v45 + 2;
      v79 = v36;
      v35 = v101;
LABEL_79:
      v19 = v36;
      goto LABEL_80;
    }
    v35 = (unsigned int *)(v45 - 2);
    v101 = (unsigned int *)(v45 - 2);
    if ( v44 )
    {
      v79 = v36;
      goto LABEL_79;
    }
    v19 = v36 - 1;
    v79 = v36 - 1;
LABEL_80:
    v13 = v87;
    v21 = a12;
  }
  v59 = (unsigned int)v45[1];
  if ( (int)v59 >= 0 )
  {
    v24 = 0LL;
    v86 = 0LL;
    if ( v22 )
    {
      if ( !v89 )
        goto LABEL_180;
      v13 = v87;
      if ( (int)RtlULongLongAdd(v87, v59, &v76, a4) < 0 )
        goto LABEL_180;
      v25 = (unsigned int *)v76;
    }
    else
    {
      v13 = v87;
      v25 = (unsigned int *)(v59 + v87);
    }
    v80 = v25;
    goto LABEL_137;
  }
  if ( !v22 )
  {
    v13 = v87;
    v24 = v87 + (v59 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_136:
    v86 = v24;
LABEL_137:
    v14 = v81;
    LOWORD(v19) = v83;
    goto LABEL_44;
  }
  if ( !v89 )
  {
    LODWORD(v59) = v59 & 0x7FFFFFFF;
    v13 = v87;
    if ( (int)RtlULongLongAdd(v87, v59, &v76, a4) >= 0 )
    {
      v24 = (unsigned __int64)v76;
      goto LABEL_136;
    }
  }
LABEL_180:
  v40 = -1073741701;
LABEL_55:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v109, MEMORY[0x7FFE0384]);
  return v40;
}
