/*
 * XREFs of RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E5974
 * Callers:
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F93B8 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6914 (VirtualizeMultiMonDigitizerSize.c)
 */

__int64 __fastcall RemapHimetricPointsForMultiMonDigitizers(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __m128i *v4; // rdi
  __m128i v5; // xmm0
  INT v8; // edx
  INT v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  INT *v22; // rbx
  unsigned __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v31; // rdx
  INT v32; // r13d
  unsigned __int64 v33; // rcx
  int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  INT *v41; // rbx
  unsigned __int64 v42; // rcx
  int v43; // r14d
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // rcx
  INT v52; // r15d
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  INT *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  _DWORD *v62; // rdx
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // rcx
  INT v66; // edi
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  INT *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // ecx
  __int64 v75; // rcx
  __int64 v76; // rcx
  _DWORD *v78; // rdx
  INT v79; // edi
  INT v80; // ebx
  INT v81; // eax
  INT v82; // ecx
  INT v83; // eax
  INT v84; // ecx
  __int64 result; // rax
  INT v86; // [rsp+20h] [rbp-38h]
  INT v87; // [rsp+24h] [rbp-34h]
  INT b[4]; // [rsp+28h] [rbp-30h] BYREF
  __m128i v89; // [rsp+38h] [rbp-20h]
  INT v90; // [rsp+A0h] [rbp+48h]
  INT v91; // [rsp+A8h] [rbp+50h]

  v4 = (__m128i *)(a2 + 28);
  v5 = *(__m128i *)(a2 + 28);
  v8 = *(_DWORD *)(a1 + 8);
  v89 = v5;
  v91 = EngMulDiv(_mm_cvtsi128_si32(v5) - *(_DWORD *)(gpsi + 2184LL), v8, *(_DWORD *)(gpsi + 2192LL));
  v90 = EngMulDiv(v5.m128i_i32[1] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  v86 = EngMulDiv(v5.m128i_i32[2] - *(_DWORD *)(gpsi + 2184LL), *(_DWORD *)(a1 + 8), *(_DWORD *)(gpsi + 2192LL));
  v9 = EngMulDiv(v5.m128i_i32[3] - *(_DWORD *)(gpsi + 2188LL), *(_DWORD *)(a1 + 12), *(_DWORD *)(gpsi + 2196LL));
  *(_OWORD *)b = *(_OWORD *)a1;
  v87 = v9;
  VirtualizeMultiMonDigitizerSize(b, v10);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v12 = 0LL)
      : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v12) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
    {
      v4 = (__m128i *)(a2 + 60);
    }
  }
  else
  {
    v4 = (__m128i *)(a2 + 44);
  }
  v89 = *v4;
  v15 = IsDPIAbsoluteSysMet(0x4EuLL);
  if ( v15 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0 )
    {
      goto LABEL_17;
    }
LABEL_28:
    v22 = (INT *)(gpsi + 2580LL);
    goto LABEL_33;
  }
  if ( IsDPIDWMSysMet(v14)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_28;
  }
LABEL_17:
  if ( IsDPIDWMSysMet(0x4EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v18 = 0)
      : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v18) )
  {
    v22 = (INT *)(gpsi + 2968LL);
  }
  else
  {
    v22 = (INT *)(gpsi + 2192LL);
  }
LABEL_33:
  v24 = IsDPIAbsoluteSysMet(0x4CuLL);
  if ( v24 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0 )
    {
      goto LABEL_36;
    }
LABEL_47:
    v31 = (_DWORD *)(gpsi + 2572LL);
    goto LABEL_52;
  }
  if ( IsDPIDWMSysMet(v23)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_47;
  }
LABEL_36:
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v27 = 0)
      : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v27) )
  {
    v31 = (_DWORD *)(gpsi + 2960LL);
  }
  else
  {
    v31 = (_DWORD *)(gpsi + 2184LL);
  }
LABEL_52:
  v32 = EngMulDiv(v89.m128i_i32[0] - *v31, b[2], *v22);
  v34 = IsDPIAbsoluteSysMet(0x4FuLL);
  if ( v34 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
    {
      goto LABEL_55;
    }
LABEL_66:
    v41 = (INT *)(gpsi + 2584LL);
    goto LABEL_71;
  }
  if ( IsDPIDWMSysMet(v33)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_66;
  }
LABEL_55:
  if ( IsDPIDWMSysMet(0x4FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v37 = 0)
      : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v37) )
  {
    v41 = (INT *)(gpsi + 2972LL);
  }
  else
  {
    v41 = (INT *)(gpsi + 2196LL);
  }
LABEL_71:
  v43 = IsDPIAbsoluteSysMet(0x4DuLL);
  if ( v43 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0 )
    {
      goto LABEL_74;
    }
LABEL_85:
    v50 = (_DWORD *)(gpsi + 2576LL);
    goto LABEL_90;
  }
  if ( IsDPIDWMSysMet(v42)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_85;
  }
LABEL_74:
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v46 = 0)
      : (v46 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v46) )
  {
    v50 = (_DWORD *)(gpsi + 2964LL);
  }
  else
  {
    v50 = (_DWORD *)(gpsi + 2188LL);
  }
LABEL_90:
  v52 = EngMulDiv(v89.m128i_i32[1] - *v50, b[3], *v41);
  if ( v15 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0 )
    {
      goto LABEL_93;
    }
LABEL_104:
    v57 = (INT *)(gpsi + 2580LL);
    goto LABEL_109;
  }
  if ( IsDPIDWMSysMet(0x4EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
  {
    v54 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 244LL) & 1;
    if ( (_DWORD)v54 )
      goto LABEL_104;
  }
LABEL_93:
  if ( IsDPIDWMSysMet(0x4EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v54 = 0LL)
      : (v54 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        (_DWORD)v54) )
  {
    v57 = (INT *)(gpsi + 2968LL);
  }
  else
  {
    v57 = (INT *)(gpsi + 2192LL);
  }
LABEL_109:
  if ( v24 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x4000) != 0 )
    {
      goto LABEL_121;
    }
LABEL_120:
    v62 = (_DWORD *)(gpsi + 2572LL);
    goto LABEL_129;
  }
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_120;
  }
LABEL_121:
  if ( IsDPIDWMSysMet(0x4CuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v63) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v64 = 0)
      : (v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v64) )
  {
    v62 = (_DWORD *)(gpsi + 2960LL);
  }
  else
  {
    v62 = (_DWORD *)(gpsi + 2184LL);
  }
LABEL_129:
  v66 = EngMulDiv(v89.m128i_i32[2] - *v62, b[2], *v57);
  if ( v34 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v67) + 776) & 0x4000) != 0 )
    {
      goto LABEL_132;
    }
LABEL_143:
    v71 = (INT *)(gpsi + 2584LL);
    goto LABEL_148;
  }
  if ( IsDPIDWMSysMet(0x4FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v70) + 776) & 0x4000) == 0 )
  {
    v68 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 244LL) & 1;
    if ( (_DWORD)v68 )
      goto LABEL_143;
  }
LABEL_132:
  if ( IsDPIDWMSysMet(0x4FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v68 = 0LL)
      : (v68 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        (_DWORD)v68) )
  {
    v71 = (INT *)(gpsi + 2972LL);
  }
  else
  {
    v71 = (INT *)(gpsi + 2196LL);
  }
LABEL_148:
  if ( v43 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) != 0 )
    {
      goto LABEL_151;
    }
LABEL_162:
    v78 = (_DWORD *)(gpsi + 2576LL);
    goto LABEL_167;
  }
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v75) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
  {
    goto LABEL_162;
  }
LABEL_151:
  if ( IsDPIDWMSysMet(0x4DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v74 = 0)
      : (v74 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v74) )
  {
    v78 = (_DWORD *)(gpsi + 2964LL);
  }
  else
  {
    v78 = (_DWORD *)(gpsi + 2188LL);
  }
LABEL_167:
  v79 = v66 - v32;
  v80 = EngMulDiv(v89.m128i_i32[3] - *v78, b[3], *v71) - v52;
  v81 = EngMulDiv(*a3 - v91, v79, v86 - v91);
  v82 = a3[1] - v90;
  *a3 = v32 + v81;
  a3[1] = v52 + EngMulDiv(v82, v80, v87 - v90);
  v83 = EngMulDiv(*a4 - v91, v79, v86 - v91);
  v84 = a4[1] - v90;
  *a4 = v32 + v83;
  result = (unsigned int)(v52 + EngMulDiv(v84, v80, v87 - v90));
  a4[1] = result;
  return result;
}
