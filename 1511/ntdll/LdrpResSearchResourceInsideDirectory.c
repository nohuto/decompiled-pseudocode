/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x18003839C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800D5110 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlULongLongAdd @ 0x18003935C (RtlULongLongAdd.c)
 *     LdrpResCompareResourceNames @ 0x180039378 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x180039A74 (RtlULongLongSub.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007AF40 (LdrpSectionTableFromVirtualAddress.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800D5054 (LdrpResReadFile.c)
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
  char v23; // r9
  int v24; // ecx
  unsigned __int64 v25; // rbx
  unsigned int *v26; // rsi
  unsigned __int64 v27; // r11
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdi
  int v31; // r9d
  int *v32; // r11
  char v33; // al
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  int *v36; // r12
  unsigned int *v37; // rax
  int v38; // r13d
  bool v39; // zf
  __int64 result; // rax
  int v41; // r10d
  unsigned int v42; // ebx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  char v46; // di
  int *v47; // r15
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r9
  _BYTE *v51; // rdx
  unsigned __int64 *v52; // r10
  __int64 v53; // rdx
  __int64 v54; // r11
  unsigned __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // r10
  __int64 v58; // r11
  int v59; // r11d
  int v60; // r10d
  __int64 v61; // rdx
  int v62; // r11d
  unsigned int v63; // r9d
  int v64; // r9d
  __int64 v65; // r15
  __int64 v66; // r12
  __int64 v67; // rax
  int v68; // r9d
  __int64 v69; // r15
  __int64 v70; // rax
  __int64 v71; // r9
  __int64 v72; // r9
  __int64 v73; // r10
  __int64 v74; // r10
  unsigned __int64 v75; // r12
  unsigned int *Heap; // rbx
  __int64 v77; // [rsp+40h] [rbp-188h]
  _BYTE *v78; // [rsp+48h] [rbp-180h] BYREF
  int v79; // [rsp+50h] [rbp-178h]
  int v80; // [rsp+54h] [rbp-174h]
  unsigned __int16 v81; // [rsp+58h] [rbp-170h]
  unsigned int *v82; // [rsp+60h] [rbp-168h]
  unsigned __int64 v83; // [rsp+68h] [rbp-160h]
  signed __int16 v84; // [rsp+70h] [rbp-158h]
  __int64 v85; // [rsp+78h] [rbp-150h]
  int v86; // [rsp+80h] [rbp-148h]
  unsigned __int64 v87; // [rsp+88h] [rbp-140h]
  int v88; // [rsp+90h] [rbp-138h]
  unsigned __int64 v89; // [rsp+98h] [rbp-130h]
  int v90; // [rsp+A0h] [rbp-128h] BYREF
  unsigned __int64 v91; // [rsp+A8h] [rbp-120h]
  PVOID BaseAddress; // [rsp+B0h] [rbp-118h]
  __int64 v93; // [rsp+B8h] [rbp-110h]
  int *v94; // [rsp+C0h] [rbp-108h]
  int *v95; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  __int64 v97; // [rsp+D8h] [rbp-F0h]
  __int64 v98; // [rsp+E0h] [rbp-E8h]
  __int64 v99; // [rsp+E8h] [rbp-E0h]
  int v100; // [rsp+F0h] [rbp-D8h]
  __int64 v101; // [rsp+F8h] [rbp-D0h]
  unsigned int *v102; // [rsp+100h] [rbp-C8h]
  unsigned __int64 *v103; // [rsp+108h] [rbp-C0h]
  int *v104; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v105; // [rsp+118h] [rbp-B0h]
  __int64 v106; // [rsp+120h] [rbp-A8h]
  _WORD *v107; // [rsp+128h] [rbp-A0h]
  _QWORD *v108; // [rsp+130h] [rbp-98h]
  _QWORD v109[2]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v110; // [rsp+148h] [rbp-80h]
  int v111; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v112; // [rsp+158h] [rbp-70h]
  int v113; // [rsp+160h] [rbp-68h]
  __int64 v114; // [rsp+164h] [rbp-64h]
  int v115; // [rsp+16Ch] [rbp-5Ch]
  _BYTE v116[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v89 = a4;
  v14 = a3;
  v83 = a3;
  Handle = a2;
  v16 = a1;
  v93 = a1;
  v17 = a5;
  v99 = a5;
  v106 = a6;
  v18 = a7;
  v98 = (__int64)a7;
  v101 = a9;
  v103 = a10;
  v110 = a11;
  v107 = a13;
  v113 = 0;
  v114 = 0LL;
  v115 = 0;
  v84 = 0;
  LOWORD(v19) = 0;
  BaseAddress = 0LL;
  v86 = 0;
  v81 = 0;
  LODWORD(v109[0]) = 5636180;
  v109[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v111 = 5505106;
  v112 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(v109, MEMORY[0x7FFE0384]);
    v18 = (_QWORD *)v98;
    v17 = v99;
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
  v23 = (a12 & 0x8800) == 34816;
  BYTE4(v77) = v23;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( (a12 & 0x8800) != 0x8800 && !v16 || v23 == 1 && !a2 )
    return 3221225485LL;
  v108 = v18;
  v24 = a8;
  v88 = a8;
  v25 = v13;
  v26 = 0LL;
  v82 = 0LL;
  v91 = 0LL;
  if ( v107 )
    *v107 = 0;
LABEL_15:
  LODWORD(v27) = 0;
  if ( !v25 || (v28 = v24, v29 = v24 - 1, v88 = v29, v100 = v29, !v28) )
  {
LABEL_51:
    if ( v26 && (v21 & 2) == 0 )
    {
      if ( v22 && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        v82 = 0LL;
        goto LABEL_181;
      }
      if ( v107 )
        *v107 = v19;
      v48 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v16 & 1) != 0 || v23 )
      {
        v62 = v99;
        if ( *(_WORD *)(v99 + 24) == 267 )
        {
          v63 = *(_DWORD *)(v99 + 136);
        }
        else if ( *(_WORD *)(v99 + 24) == 523 )
        {
          v63 = *(_DWORD *)(v99 + 152);
        }
        else
        {
          v63 = 0;
        }
        if ( !v63 )
        {
          v82 = 0LL;
          v42 = -1073741687;
          goto LABEL_55;
        }
        if ( v22
          && ((int)RtlULongLongAdd(v16 & 0xFFFFFFFFFFFFFFFCuLL, v63, &v78) < 0
           || (int)RtlULongLongSub(v78, v13, &v78) < 0) )
        {
          v42 = -1073741701;
          goto LABEL_55;
        }
        v49 = v48 + v63 - v13;
        v105 = v49;
        v65 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v14, v62, v106, v63, v22);
        if ( !v65 )
          goto LABEL_205;
        if ( BYTE4(v77) )
        {
          result = LdrpResReadFile(Handle);
          if ( (int)result < 0 )
            return result;
          v26 = (unsigned int *)v116;
          v82 = (unsigned int *)v116;
          v64 = v106;
        }
        if ( *v26 <= *(_DWORD *)(v65 + 8) )
        {
LABEL_99:
          v50 = v26[1];
          if ( !v22 )
          {
            v51 = 0LL;
LABEL_106:
            v52 = v103;
            if ( v103 )
            {
              if ( v22 )
              {
                if ( (int)RtlULongLongAdd(v48, v51, &v78) < 0
                  || (unsigned __int64)v78 < v48
                  || (unsigned __int64)v78 > v54 + (v48 & 0xFFFFFFFFFFFFFFFCuLL) )
                {
                  goto LABEL_181;
                }
                v55 = v53 + v48;
              }
              else
              {
                v55 = v48 + *v26 - v49;
              }
              *v52 = v55;
            }
            v56 = (_QWORD *)v110;
            if ( v110 )
            {
              if ( v22 && v52 && ((int)RtlULongLongAdd(*v52, v50, &v78) < 0 || v57 + v50 > v48 + v58) )
                goto LABEL_181;
              *v56 = v50;
            }
            v42 = 0;
            goto LABEL_55;
          }
          if ( (int)RtlULongLongSub(*v26, v49, &v78) < 0 )
            goto LABEL_181;
          v51 = v78;
          if ( (unsigned __int64)v78 >= v13 - v16
            && (unsigned __int64)v78 <= v83
            && (_DWORD)v50
            && v50 <= v83
            && (unsigned __int64)&v78[(unsigned int)v50] <= v83 )
          {
            goto LABEL_106;
          }
LABEL_205:
          v82 = 0LL;
          goto LABEL_181;
        }
        v66 = *(unsigned int *)(v65 + 12);
        v67 = LdrpSectionTableFromVirtualAddress(v48, v83, v99, v64, *v26, v22);
        if ( !v67 )
          goto LABEL_205;
        v69 = *(unsigned int *)(v67 + 12);
        v70 = LdrpSectionTableFromVirtualAddress(v48, v83, v99, v68, *(_DWORD *)(v67 + 12), v22);
        v71 = v70;
        if ( v70 )
        {
          if ( v22
            && ((int)RtlULongLongAdd(v48, (unsigned int)v69 - (unsigned __int64)*(unsigned int *)(v70 + 12), &v78) < 0
             || (int)RtlULongLongAdd(v78, *(unsigned int *)(v72 + 20), &v78) < 0) )
          {
            goto LABEL_181;
          }
          v73 = v69 + v48 + *(unsigned int *)(v71 + 20) - (unsigned __int64)*(unsigned int *)(v71 + 12);
        }
        else
        {
          v73 = 0LL;
        }
        if ( v22
          && ((int)RtlULongLongSub(*(unsigned int *)(v71 + 12), v66, &v78) < 0
           || (int)RtlULongLongSub(v78, v74 - v13, &v78) < 0) )
        {
          goto LABEL_181;
        }
        v49 += v13 + *(unsigned int *)(v71 + 12) - v66 - v73;
        v16 = v93;
      }
      else
      {
        v49 = 0LL;
      }
      v105 = v49;
      goto LABEL_99;
    }
    if ( v25 && (v21 & 2) != 0 )
    {
      if ( v22 && ((int)RtlULongLongAdd(v25, 24LL, &v78) < 0 || v25 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
      {
        v87 = v27;
        goto LABEL_181;
      }
      if ( v103 )
      {
        if ( v22 )
        {
          v75 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v25 < v75 || v25 > v75 + v14 )
            goto LABEL_181;
        }
        *v103 = v25;
      }
      v42 = v27;
      goto LABEL_55;
    }
LABEL_53:
    v41 = v20 - v88 - 1;
    if ( v41 )
    {
      v60 = v41 - 1;
      if ( v60 )
      {
        if ( v60 == 1 )
          v42 = -1073741308;
        else
          v42 = -1073741811;
      }
      else
      {
        v42 = -1073741685;
      }
    }
    else
    {
      v42 = -1073741686;
    }
    goto LABEL_55;
  }
  v30 = *v18;
  v85 = v30;
  v97 = v30;
  if ( !v29 && v20 == 3 )
  {
    v91 = v25;
    if ( !v101 )
    {
      v42 = -1073741811;
      goto LABEL_55;
    }
    v84 = *(_WORD *)v101;
    v86 = 0;
    v81 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
    {
      v30 = *(unsigned __int16 *)(v101 + 4);
      v85 = v30;
      v97 = v30;
    }
  }
  if ( v23 )
  {
    result = LdrpResReadFile(Handle);
    LODWORD(v77) = result;
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = BYTE4(v77);
    if ( BYTE4(v77) )
      goto LABEL_182;
  }
  if ( v22 && ((int)RtlULongLongAdd(v25, 24LL, &v78) < 0 || v25 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
    goto LABEL_181;
  if ( v23 )
LABEL_182:
    v31 = (unsigned __int16)v115;
  else
    v31 = *(unsigned __int16 *)(v25 + 12);
  v79 = v31;
  v80 = v31;
  if ( v31 && v22 )
  {
    v44 = 8LL * (unsigned int)v31;
    v95 = (int *)v44;
    if ( v44 > 0xFFFFFFFF
      || (int)RtlULongLongAdd(v25, (unsigned int)v44 + 16LL, &v78) < 0
      || v45 + v25 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      goto LABEL_181;
    }
    v31 = v79;
  }
  v32 = (int *)(v25 + 16);
  v95 = (int *)(v25 + 16);
  v94 = (int *)(v25 + 16);
  if ( (v30 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    goto LABEL_33;
  if ( v31 )
  {
    if ( v22 && (int)RtlULongLongAdd(v25 + 16, v31, &v78) < 0 )
      goto LABEL_181;
    v32 += 2 * v31;
    v95 = v32;
    v94 = v32;
  }
  v33 = BYTE4(v77);
  v31 = HIWORD(v115);
  if ( !BYTE4(v77) )
    v31 = *(unsigned __int16 *)(v25 + 14);
  v79 = v31;
  v80 = v31;
  if ( v22 )
  {
    v34 = 8LL * (unsigned int)v31;
    v109[0] = v34;
    if ( v34 > 0xFFFFFFFF
      || (int)RtlULongLongAdd(v32, (unsigned int)v34, &v78) < 0
      || (unsigned __int64)v32 + v35 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      goto LABEL_181;
    }
LABEL_33:
    v33 = BYTE4(v77);
  }
  if ( !v31 )
  {
    v87 = 0LL;
    goto LABEL_53;
  }
  if ( v33 )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
      v31 = v80;
    }
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v31);
    BaseAddress = Heap;
    if ( !Heap )
    {
      v42 = -1073741801;
      goto LABEL_55;
    }
    v79 = v80;
    result = LdrpResReadFile(Handle);
    LODWORD(v77) = result;
    if ( (int)result < 0 )
      return result;
    v32 = (int *)Heap;
    v95 = (int *)Heap;
    v94 = (int *)Heap;
    v85 = v97;
    v86 = v81;
    v98 = (__int64)v108;
    v88 = v100;
    v26 = v82;
    v31 = v79;
  }
  v21 = a12;
LABEL_37:
  if ( v91 && (v21 & 0x20) != 0 )
  {
    v25 = 0LL;
    v87 = 0LL;
    if ( v22 )
    {
      if ( (int)RtlULongLongAdd(v13, (unsigned int)v32[1], &v78) < 0 )
        goto LABEL_181;
      v26 = (unsigned int *)v78;
      v82 = (unsigned int *)v78;
      LOBYTE(v21) = a12;
    }
    else
    {
      v26 = (unsigned int *)(v13 + (unsigned int)v32[1]);
      v82 = v26;
    }
    v19 = *v32;
    v97 = (unsigned int)*v32;
LABEL_50:
    LODWORD(v27) = 0;
    v23 = BYTE4(v77);
    v16 = v93;
    v20 = a8;
    goto LABEL_51;
  }
LABEL_38:
  v25 = 0LL;
  v87 = 0LL;
  v36 = v32;
  v94 = v32;
  v37 = (unsigned int *)&v32[2 * v31 - 2];
  v102 = v37;
  v19 = v31;
  v80 = v31;
  while ( 1 )
  {
    if ( v36 > (int *)v37 )
    {
      v14 = v83;
      LOWORD(v19) = v85;
LABEL_44:
      v21 = a12;
      if ( !v91 || v26 )
        goto LABEL_45;
      if ( (a12 & 4) != 0 )
        goto LABEL_50;
      HIWORD(v59) = HIWORD(v86);
      LOWORD(v59) = v86 + 1;
      v86 = v59;
      v81 = v59;
      if ( (unsigned __int16)v59 >= v84 )
      {
        if ( *(_BYTE *)(v101 + 516) )
        {
LABEL_45:
          v18 = (_QWORD *)(v98 + 8);
          v98 = (__int64)v18;
          v108 = v18;
          v20 = a8;
          v16 = v93;
          v23 = BYTE4(v77);
          v24 = v88;
          goto LABEL_15;
        }
        v21 = a12 | 0x20;
        a12 |= 0x20u;
        v31 = v79;
        v32 = v95;
        goto LABEL_37;
      }
      v85 = *(unsigned __int16 *)(v101 + 8LL * (unsigned __int16)v59 + 4);
      v97 = v85;
      v31 = v79;
      v32 = v95;
      goto LABEL_38;
    }
    v38 = v19 >> 1;
    if ( !(v19 >> 1) )
    {
      v13 = v89;
      v14 = v83;
      v39 = v19 == 0;
      LOWORD(v19) = v85;
      if ( !v39 )
      {
        result = LdrpResCompareResourceNames(v93, Handle, v83, v85, v89, v36, v21, &v90, v77);
        LODWORD(v77) = result;
        if ( (int)result < 0 )
          return result;
        if ( !v90 )
        {
          v43 = (unsigned int)v36[1];
          if ( (int)v43 >= 0 )
          {
            if ( v22 )
            {
              if ( !v91 || (int)RtlULongLongAdd(v13, v43, &v78) < 0 )
                goto LABEL_181;
              v26 = (unsigned int *)v78;
            }
            else
            {
              v26 = (unsigned int *)(v43 + v13);
            }
            v82 = v26;
          }
          else
          {
            if ( v22 )
            {
              if ( v91 )
                goto LABEL_181;
              LODWORD(v43) = v43 & 0x7FFFFFFF;
              if ( (int)RtlULongLongAdd(v13, v43, &v78) < 0 )
                goto LABEL_181;
              v25 = (unsigned __int64)v78;
            }
            else
            {
              v25 = v13 + (v43 & 0xFFFFFFFF7FFFFFFFuLL);
            }
            v87 = v25;
          }
        }
      }
      goto LABEL_44;
    }
    v104 = v36;
    v46 = v19 & 1;
    if ( v46 )
      v47 = &v36[2 * v38];
    else
      v47 = &v36[2 * v38 - 2];
    v104 = v47;
    result = LdrpResCompareResourceNames(v93, Handle, v83, v85, v89, v47, v21, &v90, v77);
    LODWORD(v77) = result;
    if ( (int)result < 0 )
      return result;
    if ( !v90 )
      break;
    if ( v90 >= 0 )
    {
      v36 = v47 + 2;
      v94 = v47 + 2;
      v80 = v38;
      v37 = v102;
LABEL_81:
      v19 = v38;
      goto LABEL_82;
    }
    v37 = (unsigned int *)(v47 - 2);
    v102 = (unsigned int *)(v47 - 2);
    if ( v46 )
    {
      v80 = v38;
      goto LABEL_81;
    }
    v19 = v38 - 1;
    v80 = v38 - 1;
LABEL_82:
    v13 = v89;
    v21 = a12;
  }
  v61 = (unsigned int)v47[1];
  if ( (int)v61 >= 0 )
  {
    v25 = 0LL;
    v87 = 0LL;
    if ( v22 )
    {
      if ( !v91 )
        goto LABEL_181;
      v13 = v89;
      if ( (int)RtlULongLongAdd(v89, v61, &v78) < 0 )
        goto LABEL_181;
      v26 = (unsigned int *)v78;
    }
    else
    {
      v13 = v89;
      v26 = (unsigned int *)(v61 + v89);
    }
    v82 = v26;
    goto LABEL_138;
  }
  if ( !v22 )
  {
    v13 = v89;
    v25 = v89 + (v61 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_137:
    v87 = v25;
LABEL_138:
    v14 = v83;
    LOWORD(v19) = v85;
    goto LABEL_44;
  }
  if ( !v91 )
  {
    LODWORD(v61) = v61 & 0x7FFFFFFF;
    v13 = v89;
    if ( (int)RtlULongLongAdd(v89, v61, &v78) >= 0 )
    {
      v25 = (unsigned __int64)v78;
      goto LABEL_137;
    }
  }
LABEL_181:
  v42 = -1073741701;
LABEL_55:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v111, MEMORY[0x7FFE0384]);
  return v42;
}
