/*
 * XREFs of DrawDiagonalLine @ 0x1C02465E0
 * Callers:
 *     DrawDiagonal @ 0x1C0246524 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C0246DB8 (FillTriangle.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, __m128i *a2, int a3, __int64 a4, int a5)
{
  __int32 v5; // eax
  __m128i v7; // xmm1
  int v8; // edx
  __int32 v9; // edi
  int v10; // ebx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  int *v37; // rbx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // ecx
  int *v64; // rcx
  int v65; // eax
  int v66; // edx
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  int v92; // ecx
  __int32 *v93; // rcx
  int v94; // r15d
  __int64 v95; // rdx
  unsigned __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  int v99; // r12d
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rcx
  int v104; // ecx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // ecx
  _DWORD *v113; // rcx
  __int8 *v114; // r14
  int v115; // esi
  int v116; // ebx
  __int32 v117; // edi
  int v118; // eax
  int v119; // r13d
  __int64 v120; // rbx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rdx
  int v127; // ecx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdx
  BOOL v136; // ecx
  __int32 *v137; // rcx
  __int32 v138; // eax
  int v139; // ecx
  __m128i *v140; // rax
  __int32 v141; // eax
  int v142; // eax
  __m128i *v143; // rax
  __m128i *v144; // rax
  __int32 v145; // ecx
  __int32 v147; // [rsp+30h] [rbp-D0h] BYREF
  int v148; // [rsp+34h] [rbp-CCh] BYREF
  int v149; // [rsp+38h] [rbp-C8h]
  __m128i *v150; // [rsp+40h] [rbp-C0h]
  int v151; // [rsp+48h] [rbp-B8h]
  HDC v152; // [rsp+50h] [rbp-B0h]
  __m128i v153; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v154[48]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a2->m128i_i32[2];
  v150 = a2;
  v152 = a1;
  v149 = 0;
  if ( a2->m128i_i32[0] >= v5 || a2->m128i_i32[1] >= a2->m128i_i32[3] )
    return 0LL;
  v7 = *a2;
  v8 = _mm_cvtsi128_si32(*a2);
  v153 = v7;
  v153.m128i_i32[0] = v8;
  v9 = _mm_srli_si128(v7, 8).m128i_i32[1] - v7.m128i_i32[1];
  v147 = v9;
  v153.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v10 = v153.m128i_i32[2] - v8;
  v148 = v153.m128i_i32[2] - v8;
  if ( !a5 )
  {
    if ( v9 == v10 )
      goto LABEL_21;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 0 )
        goto LABEL_20;
    }
    else if ( IsDPIDWMSysMet(v12) && (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17, v18) & 0xF) == 0 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20, v21) + 408) )
        v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1;
      else
        v25 = 0;
      if ( v25 )
      {
LABEL_19:
        v10 = v148;
        v9 = v147;
        goto LABEL_20;
      }
      v9 = v147;
      v10 = v148;
    }
    if ( IsDPIDWMSysMet(6uLL) && (W32GetCurrentThreadDpiAwarenessContext(v27, v26, v28, v29) & 0xF) == 1 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 408) )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( v9 >= v10 )
  {
LABEL_21:
    v36 = v9 / v10;
    v37 = &v147;
    v147 = v36;
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v39, v38, v40, v41) & 0xF) != 0 )
        goto LABEL_23;
    }
    else if ( !IsDPIDWMSysMet(v39)
           || (W32GetCurrentThreadDpiAwarenessContext(v54, v53, v55, v56) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59) + 408)
             ? (v63 = 0)
             : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v60,
                                                            v61,
                                                            v62)
                                                        + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v63) )
    {
LABEL_23:
      if ( IsDPIDWMSysMet(5uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
          ? (v52 = 0)
          : (v52 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v49,
                                                         v50,
                                                         v51)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v52) )
      {
        v64 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v64 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_38;
    }
    v64 = (int *)(gpsi + 2288LL);
LABEL_38:
    v148 = *v64;
    goto LABEL_57;
  }
  v65 = v10;
  v66 = v10 >> 31;
  v37 = &v148;
  v148 = __SPAIR64__(v66, v65) / v9;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) != 0 )
      goto LABEL_41;
  }
  else if ( !IsDPIDWMSysMet(v68)
         || (W32GetCurrentThreadDpiAwarenessContext(v83, v82, v84, v85) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v86, v87, v88) + 408)
           ? (v92 = 0)
           : (v92 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v89,
                                                          v90,
                                                          v91)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v92) )
  {
LABEL_41:
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v72, v71, v73, v74) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 408)
        ? (v81 = 0)
        : (v81 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v78,
                                                       v79,
                                                       v80)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v81) )
    {
      v93 = (__int32 *)(gpsi + 2680LL);
    }
    else
    {
      v93 = (__int32 *)(gpsi + 1904LL);
    }
    goto LABEL_56;
  }
  v93 = (__int32 *)(gpsi + 2292LL);
LABEL_56:
  v147 = *v93;
LABEL_57:
  v94 = a3 * v147;
  v151 = v148;
  v99 = IsDPIAbsoluteSysMet(6uLL);
  if ( v99 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v96, v95, v97, v98) & 0xF) != 0 )
      goto LABEL_59;
  }
  else if ( !IsDPIDWMSysMet(v96)
         || (W32GetCurrentThreadDpiAwarenessContext(v106, v105, v107, v108) & 0xF) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v109, v110, v111) + 408)
           ? (v112 = 0)
           : (v112 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v100,
                                                           v101,
                                                           v102)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
             !v112) )
  {
LABEL_59:
    if ( IsDPIDWMSysMet(6uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v103, v100, v101, v102) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 408)
        ? (v104 = 0)
        : (v104 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                        (__int64)KeGetCurrentThread(),
                                                        v100,
                                                        v101,
                                                        v102)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
          v104) )
    {
      v113 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v113 = (_DWORD *)(gpsi + 1904LL);
    }
    goto LABEL_74;
  }
  v113 = (_DWORD *)(gpsi + 2292LL);
LABEL_74:
  v114 = &v153.m128i_i8[4];
  *v37 *= *v113;
  v115 = v148;
  v116 = v153.m128i_i32[2] - v148;
  v117 = v147;
  v118 = v153.m128i_i32[3] - v147;
  v153.m128i_i32[2] -= v148;
  v153.m128i_i32[3] -= v147;
  if ( a3 >= 0 )
    v114 = &v153.m128i_i8[12];
  if ( v153.m128i_i32[0] <= v116 )
  {
    v119 = v151;
    v120 = 0LL;
    v121 = 0LL;
    while ( 1 )
    {
      if ( v153.m128i_i32[1] > v118 )
      {
LABEL_110:
        if ( (_DWORD)v121 )
          GrePolyPatBlt(v152, 15728673, (struct _POLYPATBLT *)v154, v121);
        return (unsigned __int16)v115 | ((unsigned __int16)v117 << 16);
      }
      if ( (a5 & 0x800) == 0 )
      {
        v122 = 3 * v120;
        v154[2 * v122] = v153.m128i_i32[0];
        v154[2 * v122 + 1] = *(_DWORD *)v114;
        v154[2 * v122 + 2] = v115;
LABEL_81:
        v154[2 * v122 + 3] = v117;
        *(_QWORD *)&v154[2 * v122 + 4] = 0LL;
        goto LABEL_106;
      }
      if ( v99 )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v121, v100, v101, v102) & 0xF) == 0 )
          goto LABEL_94;
      }
      else if ( IsDPIDWMSysMet(6uLL) && (W32GetCurrentThreadDpiAwarenessContext(v129, v128, v130, v131) & 0xF) == 0 )
      {
        v136 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v132, v133, v134) + 408)
            && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                     (__int64)KeGetCurrentThread(),
                                                     v135,
                                                     v101,
                                                     v102)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1;
        v117 = v147;
        v115 = v148;
        if ( v136 )
        {
LABEL_94:
          v137 = (__int32 *)(gpsi + 2292LL);
          goto LABEL_99;
        }
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v124, v123, v101, v102) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v125, v101, v102) + 408)
          ? (v127 = 0)
          : (v127 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v126,
                                                          v101,
                                                          v102)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v117 = v147,
            v115 = v148,
            v127) )
      {
        v137 = (__int32 *)(gpsi + 2680LL);
      }
      else
      {
        v137 = (__int32 *)(gpsi + 1904LL);
      }
LABEL_99:
      if ( v117 <= *v137 )
      {
        if ( (a5 & 2) != 0 )
        {
          v122 = 3 * v120;
          v100 = v153.m128i_u32[0];
          v154[2 * v122 + 1] = *(_DWORD *)v114;
          v143 = v150;
          v154[2 * v122] = v100;
          v154[2 * v122 + 2] = v143->m128i_i32[2] - v100;
          goto LABEL_81;
        }
        v144 = v150;
        v100 = 3 * v120;
        v154[2 * v100 + 3] = v117;
        v145 = v144->m128i_i32[0];
        v154[2 * v100 + 1] = *(_DWORD *)v114;
        LODWORD(v144) = v153.m128i_i32[0] - v145;
        v154[2 * v100] = v145;
        *(_QWORD *)&v154[2 * v100 + 4] = 0LL;
        v154[2 * v100 + 2] = v115 + (_DWORD)v144;
      }
      else
      {
        v138 = v153.m128i_i32[0];
        v100 = 3 * v120;
        *(_QWORD *)&v154[2 * v100 + 4] = 0LL;
        v139 = *(_DWORD *)v114;
        v154[2 * v100] = v138;
        v140 = v150;
        v154[2 * v100 + 2] = v115;
        if ( (a5 & 1) != 0 )
        {
          v141 = v140->m128i_i32[1];
          v154[6 * v120 + 1] = v141;
          v154[6 * v120 + 3] = v117 + v139 - v141;
        }
        else
        {
          v142 = v140->m128i_i32[3] - v139;
          v154[6 * v120 + 1] = v139;
          v154[6 * v120 + 3] = v142;
        }
      }
LABEL_106:
      ++v120;
      v153.m128i_i32[0] += v119;
      v121 = (unsigned int)(v149 + 1);
      *(_DWORD *)v114 -= v94;
      v149 = v121;
      if ( v120 == 8 )
      {
        GrePolyPatBlt(v152, 15728673, (struct _POLYPATBLT *)v154, 8);
        v121 = 0LL;
        v149 = 0;
        v120 = 0LL;
      }
      if ( v153.m128i_i32[0] > v153.m128i_i32[2] )
        goto LABEL_110;
      v118 = v153.m128i_i32[3];
    }
  }
  return (unsigned __int16)v115 | ((unsigned __int16)v117 << 16);
}
