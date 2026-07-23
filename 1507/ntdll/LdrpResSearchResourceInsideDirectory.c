/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800196E8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180018FCC (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800CC8D0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlULongLongAdd @ 0x18001A694 (RtlULongLongAdd.c)
 *     LdrpResCompareResourceNames @ 0x18001A6B0 (LdrpResCompareResourceNames.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18006F2CC (LdrpSectionTableFromVirtualAddress.c)
 *     RtlULongLongSub @ 0x180070C34 (RtlULongLongSub.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800CC814 (LdrpResReadFile.c)
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
  __int64 v41; // rdx
  int v42; // r10d
  unsigned int v43; // ebx
  int v44; // r11d
  unsigned __int64 v45; // rax
  __int64 v46; // r9
  char v47; // di
  int *v48; // r15
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r9
  _BYTE *v52; // rdx
  unsigned __int64 *v53; // r10
  __int64 v54; // rdx
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // r10
  __int64 v59; // r11
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
  while ( 2 )
  {
    LODWORD(v27) = 0;
    if ( !v25 || (v28 = v24, v29 = v24 - 1, v88 = v29, v100 = v29, !v28) )
    {
LABEL_58:
      if ( v26 && (v21 & 2) == 0 )
      {
        if ( v22 && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
        {
          v82 = 0LL;
          goto LABEL_185;
        }
        if ( v107 )
          *v107 = v19;
        v49 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
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
            v43 = -1073741687;
            goto LABEL_62;
          }
          if ( v22
            && ((int)RtlULongLongAdd(v16 & 0xFFFFFFFFFFFFFFFCuLL, v63, &v78) < 0
             || (int)RtlULongLongSub(v78, v13, &v78) < 0) )
          {
            v43 = -1073741701;
            goto LABEL_62;
          }
          v50 = v49 + v63 - v13;
          v105 = v50;
          v65 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v14, v62, v106, v63, v22);
          if ( !v65 )
            goto LABEL_206;
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
LABEL_102:
            v51 = v26[1];
            if ( !v22 )
            {
              v52 = 0LL;
LABEL_109:
              v53 = v103;
              if ( v103 )
              {
                if ( v22 )
                {
                  if ( (int)RtlULongLongAdd(v49, v52, &v78) < 0
                    || (unsigned __int64)v78 < v49
                    || (unsigned __int64)v78 > v55 + (v49 & 0xFFFFFFFFFFFFFFFCuLL) )
                  {
                    goto LABEL_185;
                  }
                  v56 = v54 + v49;
                }
                else
                {
                  v56 = v49 + *v26 - v50;
                }
                *v53 = v56;
              }
              v57 = (_QWORD *)v110;
              if ( v110 )
              {
                if ( v22 && v53 && ((int)RtlULongLongAdd(*v53, v51, &v78) < 0 || v58 + v51 > v49 + v59) )
                  goto LABEL_185;
                *v57 = v51;
              }
              v43 = 0;
              goto LABEL_62;
            }
            if ( (int)RtlULongLongSub(*v26, v50, &v78) < 0 )
              goto LABEL_185;
            v52 = v78;
            if ( (unsigned __int64)v78 >= v13 - v16
              && (unsigned __int64)v78 <= v83
              && (_DWORD)v51
              && v51 <= v83
              && (unsigned __int64)&v78[(unsigned int)v51] <= v83 )
            {
              goto LABEL_109;
            }
LABEL_206:
            v82 = 0LL;
            goto LABEL_185;
          }
          v66 = *(unsigned int *)(v65 + 12);
          v67 = LdrpSectionTableFromVirtualAddress(v49, v83, v99, v64, *v26, v22);
          if ( !v67 )
            goto LABEL_206;
          v69 = *(unsigned int *)(v67 + 12);
          v70 = LdrpSectionTableFromVirtualAddress(v49, v83, v99, v68, *(_DWORD *)(v67 + 12), v22);
          v71 = v70;
          if ( v70 )
          {
            if ( v22
              && ((int)RtlULongLongAdd(v49, (unsigned int)v69 - (unsigned __int64)*(unsigned int *)(v70 + 12), &v78) < 0
               || (int)RtlULongLongAdd(v78, *(unsigned int *)(v72 + 20), &v78) < 0) )
            {
              goto LABEL_185;
            }
            v73 = v69 + v49 + *(unsigned int *)(v71 + 20) - (unsigned __int64)*(unsigned int *)(v71 + 12);
          }
          else
          {
            v73 = 0LL;
          }
          if ( v22
            && ((int)RtlULongLongSub(*(unsigned int *)(v71 + 12), v66, &v78) < 0
             || (int)RtlULongLongSub(v78, v74 - v13, &v78) < 0) )
          {
            goto LABEL_185;
          }
          v50 += v13 + *(unsigned int *)(v71 + 12) - v66 - v73;
          v16 = v93;
        }
        else
        {
          v50 = 0LL;
        }
        v105 = v50;
        goto LABEL_102;
      }
      if ( v25 && (v21 & 2) != 0 )
      {
        if ( v22 && ((int)RtlULongLongAdd(v25, 24LL, &v78) < 0 || v25 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
        {
          v87 = v27;
          goto LABEL_185;
        }
        if ( v103 )
        {
          if ( v22 )
          {
            v75 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v25 < v75 || v25 > v75 + v14 )
              goto LABEL_185;
          }
          *v103 = v25;
        }
        v43 = v27;
        goto LABEL_62;
      }
LABEL_60:
      v42 = v20 - v88 - 1;
      if ( v42 )
      {
        v60 = v42 - 1;
        if ( v60 )
        {
          if ( v60 == 1 )
            v43 = -1073741308;
          else
            v43 = -1073741811;
        }
        else
        {
          v43 = -1073741685;
        }
      }
      else
      {
        v43 = -1073741686;
      }
      goto LABEL_62;
    }
    v30 = *v18;
    v85 = v30;
    v97 = v30;
    if ( !v29 && v20 == 3 )
    {
      v91 = v25;
      if ( !v101 )
      {
        v43 = -1073741811;
        goto LABEL_62;
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
        goto LABEL_186;
    }
    if ( v22 && ((int)RtlULongLongAdd(v25, 24LL, &v78) < 0 || v25 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
      goto LABEL_185;
    if ( v23 )
LABEL_186:
      v31 = (unsigned __int16)v115;
    else
      v31 = *(unsigned __int16 *)(v25 + 12);
    v79 = v31;
    v80 = v31;
    if ( v31 && v22 )
    {
      v45 = 8LL * (unsigned int)v31;
      v95 = (int *)v45;
      if ( v45 > 0xFFFFFFFF
        || (int)RtlULongLongAdd(v25, (unsigned int)v45 + 16LL, &v78) < 0
        || v46 + v25 + 16 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        goto LABEL_185;
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
        goto LABEL_185;
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
        goto LABEL_185;
      }
LABEL_33:
      v33 = BYTE4(v77);
    }
    if ( !v31 )
    {
      v87 = 0LL;
      goto LABEL_60;
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
        v43 = -1073741801;
        goto LABEL_62;
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
          goto LABEL_185;
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
LABEL_57:
      LODWORD(v27) = 0;
      v23 = BYTE4(v77);
      v16 = v93;
      v20 = a8;
      goto LABEL_58;
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
        goto LABEL_51;
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
            v41 = (unsigned int)v36[1];
            if ( (int)v41 >= 0 )
            {
              if ( v22 )
              {
                if ( !v91 || (int)RtlULongLongAdd(v13, v41, &v78) < 0 )
                  goto LABEL_185;
                v26 = (unsigned int *)v78;
              }
              else
              {
                v26 = (unsigned int *)(v41 + v13);
              }
              v82 = v26;
            }
            else
            {
              if ( v22 )
              {
                if ( v91 )
                  goto LABEL_185;
                LODWORD(v41) = v41 & 0x7FFFFFFF;
                if ( (int)RtlULongLongAdd(v13, v41, &v78) < 0 )
                  goto LABEL_185;
                v25 = (unsigned __int64)v78;
              }
              else
              {
                v25 = v13 + (v41 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v87 = v25;
            }
          }
        }
        goto LABEL_51;
      }
      v104 = v36;
      v47 = v19 & 1;
      if ( v47 )
        v48 = &v36[2 * v38];
      else
        v48 = &v36[2 * v38 - 2];
      v104 = v48;
      result = LdrpResCompareResourceNames(v93, Handle, v83, v85, v89, v48, v21, &v90, v77);
      LODWORD(v77) = result;
      if ( (int)result < 0 )
        return result;
      if ( !v90 )
        break;
      if ( v90 >= 0 )
      {
        v36 = v48 + 2;
        v94 = v48 + 2;
        v80 = v38;
        v37 = v102;
LABEL_81:
        v19 = v38;
        goto LABEL_82;
      }
      v37 = (unsigned int *)(v48 - 2);
      v102 = (unsigned int *)(v48 - 2);
      if ( v47 )
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
    v61 = (unsigned int)v48[1];
    if ( (int)v61 >= 0 )
    {
      v25 = 0LL;
      v87 = 0LL;
      if ( v22 )
      {
        if ( !v91 )
          goto LABEL_185;
        v13 = v89;
        if ( (int)RtlULongLongAdd(v89, v61, &v78) < 0 )
          goto LABEL_185;
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
LABEL_51:
      v21 = a12;
      if ( !v91 || v26 )
        goto LABEL_52;
      if ( (a12 & 4) != 0 )
        goto LABEL_57;
      HIWORD(v44) = HIWORD(v86);
      LOWORD(v44) = v86 + 1;
      v86 = v44;
      v81 = v44;
      if ( (unsigned __int16)v44 >= v84 )
      {
        if ( *(_BYTE *)(v101 + 516) )
        {
LABEL_52:
          v18 = (_QWORD *)(v98 + 8);
          v98 = (__int64)v18;
          v108 = v18;
          v20 = a8;
          v16 = v93;
          v23 = BYTE4(v77);
          v24 = v88;
          continue;
        }
        v21 = a12 | 0x20;
        a12 |= 0x20u;
        v31 = v79;
        v32 = v95;
        goto LABEL_37;
      }
      v85 = *(unsigned __int16 *)(v101 + 8LL * (unsigned __int16)v44 + 4);
      v97 = v85;
      v31 = v79;
      v32 = v95;
      goto LABEL_38;
    }
    break;
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
LABEL_185:
  v43 = -1073741701;
LABEL_62:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v111, MEMORY[0x7FFE0384]);
  return v43;
}
