/*
 * XREFs of DrawDiagonalLine @ 0x1C024A194
 * Callers:
 *     DrawDiagonal @ 0x1C024A0D4 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C024AAA8 (FillTriangle.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawDiagonalLine(HDC a1, __m128i *a2, int a3, __int64 a4, int a5)
{
  __int32 v5; // eax
  __m128i v7; // xmm1
  int v8; // edx
  __int32 v9; // edi
  int v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  __int32 *v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  int *v26; // rcx
  int v27; // eax
  int v28; // edx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int32 *v36; // rcx
  int v37; // r13d
  int v38; // r15d
  unsigned __int64 v39; // rcx
  int v40; // r12d
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  _DWORD *v47; // rcx
  __int8 *v48; // r14
  int v49; // esi
  int v50; // ebx
  __int32 v51; // edi
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rcx
  BOOL v61; // ecx
  __int32 *v62; // rcx
  __int32 v63; // eax
  __int64 v64; // rdx
  int v65; // ecx
  __m128i *v66; // rax
  __int32 v67; // eax
  int v68; // eax
  __int32 v69; // edx
  __m128i *v70; // rax
  __m128i *v71; // rax
  __int64 v72; // rdx
  __int32 v73; // ecx
  int v75; // [rsp+30h] [rbp-D0h] BYREF
  int v76; // [rsp+34h] [rbp-CCh]
  __int32 v77; // [rsp+38h] [rbp-C8h] BYREF
  __m128i *v78; // [rsp+40h] [rbp-C0h]
  int v79; // [rsp+48h] [rbp-B8h]
  HDC v80; // [rsp+50h] [rbp-B0h]
  __m128i v81; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v82[48]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a2->m128i_i32[2];
  v79 = a3;
  v78 = a2;
  v80 = a1;
  v76 = 0;
  if ( a2->m128i_i32[0] >= v5 || a2->m128i_i32[1] >= a2->m128i_i32[3] )
    return 0LL;
  v7 = *a2;
  v8 = _mm_cvtsi128_si32(*a2);
  v81 = v7;
  v81.m128i_i32[0] = v8;
  v9 = _mm_srli_si128(v7, 8).m128i_i32[1] - v7.m128i_i32[1];
  v77 = v9;
  v81.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v10 = v81.m128i_i32[2] - v8;
  v75 = v81.m128i_i32[2] - v8;
  if ( !a5 )
  {
    if ( v9 == v10 )
      goto LABEL_23;
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
      {
        goto LABEL_22;
      }
    }
    else if ( IsDPIDWMSysMet(v11)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) == 0 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
        v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1;
      else
        v15 = 0;
      if ( v15 )
      {
LABEL_21:
        v10 = v75;
        v9 = v77;
        goto LABEL_22;
      }
      v9 = v77;
      v10 = v75;
    }
    if ( IsDPIDWMSysMet(6uLL) && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      goto LABEL_21;
    }
  }
LABEL_22:
  if ( v9 >= v10 )
  {
LABEL_23:
    v17 = v9 / v10;
    v18 = &v77;
    v77 = v17;
    if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
      {
        goto LABEL_26;
      }
    }
    else if ( !IsDPIDWMSysMet(v19)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v25 = 0)
             : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v25) )
    {
LABEL_26:
      if ( IsDPIDWMSysMet(5uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v22 = 0)
          : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v22) )
      {
        v26 = (int *)(gpsi + 2676LL);
      }
      else
      {
        v26 = (int *)(gpsi + 1900LL);
      }
      goto LABEL_42;
    }
    v26 = (int *)(gpsi + 2288LL);
LABEL_42:
    v75 = *v26;
    goto LABEL_63;
  }
  v27 = v10;
  v28 = v10 >> 31;
  v18 = &v75;
  v75 = __SPAIR64__(v28, v27) / v9;
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
    {
      goto LABEL_46;
    }
  }
  else if ( !IsDPIDWMSysMet(v29)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v35 = 0)
           : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v35) )
  {
LABEL_46:
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v32 = 0)
        : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v32) )
    {
      v36 = (__int32 *)(gpsi + 2680LL);
    }
    else
    {
      v36 = (__int32 *)(gpsi + 1904LL);
    }
    goto LABEL_62;
  }
  v36 = (__int32 *)(gpsi + 2292LL);
LABEL_62:
  v77 = *v36;
LABEL_63:
  v37 = v75;
  v38 = a3 * v77;
  v40 = IsDPIAbsoluteSysMet(6uLL);
  if ( v40 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
    {
      goto LABEL_66;
    }
  }
  else if ( !IsDPIDWMSysMet(v39)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v46 = 0)
           : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v46) )
  {
LABEL_66:
    if ( IsDPIDWMSysMet(6uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v43 = 0)
        : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v43) )
    {
      v47 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v47 = (_DWORD *)(gpsi + 1904LL);
    }
    goto LABEL_82;
  }
  v47 = (_DWORD *)(gpsi + 2292LL);
LABEL_82:
  v48 = &v81.m128i_i8[4];
  *v18 *= *v47;
  v49 = v75;
  v50 = v81.m128i_i32[2] - v75;
  v51 = v77;
  v52 = v81.m128i_i32[3] - v77;
  v81.m128i_i32[2] -= v75;
  if ( v79 >= 0 )
    v48 = &v81.m128i_i8[12];
  v81.m128i_i32[3] -= v77;
  if ( v81.m128i_i32[0] <= v50 )
  {
    v53 = 0LL;
    v54 = 0LL;
    while ( 1 )
    {
      if ( v81.m128i_i32[1] > v52 )
      {
LABEL_120:
        if ( (_DWORD)v54 )
          GrePolyPatBlt(v80, 0xF00021u, (struct _POLYPATBLT *)v82, v54);
        return (unsigned __int16)v49 | ((unsigned __int16)v51 << 16);
      }
      if ( (a5 & 0x800) == 0 )
      {
        v55 = 3 * v53;
        v82[2 * v55] = v81.m128i_i32[0];
        v82[2 * v55 + 1] = *(_DWORD *)v48;
        v82[2 * v55 + 2] = v49;
LABEL_89:
        v82[2 * v55 + 3] = v51;
        *(_QWORD *)&v82[2 * v55 + 4] = 0LL;
        goto LABEL_116;
      }
      if ( v40 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
        {
          goto LABEL_104;
        }
      }
      else if ( IsDPIDWMSysMet(6uLL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) == 0 )
      {
        v61 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1;
        v51 = v77;
        v49 = v75;
        if ( v61 )
        {
LABEL_104:
          v62 = (__int32 *)(gpsi + 2292LL);
          goto LABEL_109;
        }
      }
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v58 = 0)
          : (v58 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v51 = v77,
            v49 = v75,
            v58) )
      {
        v62 = (__int32 *)(gpsi + 2680LL);
      }
      else
      {
        v62 = (__int32 *)(gpsi + 1904LL);
      }
LABEL_109:
      if ( v51 <= *v62 )
      {
        if ( (a5 & 2) != 0 )
        {
          v55 = 3 * v53;
          v69 = v81.m128i_i32[0];
          v82[2 * v55 + 1] = *(_DWORD *)v48;
          v70 = v78;
          v82[2 * v55] = v69;
          v82[2 * v55 + 2] = v70->m128i_i32[2] - v69;
          goto LABEL_89;
        }
        v71 = v78;
        v72 = 3 * v53;
        v82[2 * v72 + 3] = v51;
        v73 = v71->m128i_i32[0];
        v82[2 * v72 + 1] = *(_DWORD *)v48;
        LODWORD(v71) = v81.m128i_i32[0] - v73;
        v82[2 * v72] = v73;
        *(_QWORD *)&v82[2 * v72 + 4] = 0LL;
        v82[2 * v72 + 2] = v49 + (_DWORD)v71;
      }
      else
      {
        v63 = v81.m128i_i32[0];
        v64 = 3 * v53;
        *(_QWORD *)&v82[2 * v64 + 4] = 0LL;
        v65 = *(_DWORD *)v48;
        v82[2 * v64] = v63;
        v66 = v78;
        v82[2 * v64 + 2] = v49;
        if ( (a5 & 1) != 0 )
        {
          v67 = v66->m128i_i32[1];
          v82[6 * v53 + 1] = v67;
          v82[6 * v53 + 3] = v51 + v65 - v67;
        }
        else
        {
          v68 = v66->m128i_i32[3] - v65;
          v82[6 * v53 + 1] = v65;
          v82[6 * v53 + 3] = v68;
        }
      }
LABEL_116:
      ++v53;
      v81.m128i_i32[0] += v37;
      v54 = (unsigned int)(v76 + 1);
      *(_DWORD *)v48 -= v38;
      v76 = v54;
      if ( v53 == 8 )
      {
        GrePolyPatBlt(v80, 0xF00021u, (struct _POLYPATBLT *)v82, 8u);
        v54 = 0LL;
        v76 = 0;
        v53 = 0LL;
      }
      if ( v81.m128i_i32[0] > v81.m128i_i32[2] )
        goto LABEL_120;
      v52 = v81.m128i_i32[3];
    }
  }
  return (unsigned __int16)v49 | ((unsigned __int16)v51 << 16);
}
