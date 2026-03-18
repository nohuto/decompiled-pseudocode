/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C001EB28
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00216C4 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C001AA28 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C001AA58 (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C001C55C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C001C59C (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C013C3E0 (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoW_Win31(
        struct MATRIX *a1,
        struct tagLOGFONTW *a2,
        struct IFIOBJ *a3,
        struct DCOBJ *a4,
        char a5,
        int a6)
{
  __int64 v6; // r10
  unsigned int v7; // edi
  struct IFIOBJ *v8; // r15
  int v11; // r8d
  int v12; // r13d
  int v13; // r12d
  LONG lfHeight; // ebx
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  int v19; // r8d
  _DWORD *v20; // rbx
  float v21; // r11d
  __int64 v22; // rdx
  int v23; // r12d
  float v24; // xmm6_4
  __int64 v25; // rax
  int v26; // r14d
  int v27; // r15d
  int v28; // ebx
  int v29; // ecx
  struct IFIOBJ *v30; // rax
  __int64 v31; // rax
  __int64 v33; // r15
  int v34; // r14d
  float v35; // xmm1_4
  int v36; // r11d
  float v37; // xmm5_4
  float v38; // xmm1_4
  LONG DefaultWorldHeight; // eax
  float v40; // xmm1_4
  int v41; // edx
  BOOL IsZero; // eax
  __int64 v43; // rcx
  int *v44; // rax
  int v45; // edx
  float v46; // xmm2_4
  float v47; // xmm0_4
  int v48; // eax
  int v49; // eax
  int lfOrientation; // eax
  __m128i v51; // xmm0
  __int32 v52; // eax
  __int128 v53; // xmm1
  int v54; // eax
  __int128 v55; // xmm0
  float v56; // [rsp+28h] [rbp-99h] BYREF
  float v57; // [rsp+2Ch] [rbp-95h] BYREF
  __int64 v58; // [rsp+30h] [rbp-91h] BYREF
  struct tagLOGFONTW *v59; // [rsp+38h] [rbp-89h]
  _DWORD *v60; // [rsp+40h] [rbp-81h] BYREF
  struct IFIOBJ *v61; // [rsp+48h] [rbp-79h]
  struct MATRIX *v62; // [rsp+50h] [rbp-71h] BYREF
  int v63; // [rsp+5Ch] [rbp-65h]
  _DWORD v64[10]; // [rsp+60h] [rbp-61h] BYREF
  _OWORD v65[2]; // [rsp+88h] [rbp-39h] BYREF
  int v66; // [rsp+A8h] [rbp-19h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v61 = a3;
  v8 = a3;
  v59 = a2;
  v11 = 1;
  if ( *(float *)(v6 + 468) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 472)), v12 = v11, IsZero) )
    v12 = 0;
  if ( (a5 & 2) != 0 || !v12 && (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v11;
  lfHeight = a2->lfHeight;
  LODWORD(v58) = v11;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v59;
    lfHeight = DefaultWorldHeight;
  }
  if ( gbShellFontCompatible && !_wcsicmp(a2->lfFaceName, L"MS Shell Dlg") && !a6 )
  {
    if ( lfHeight > 0 )
    {
      if ( lfHeight >= 12 )
      {
        if ( lfHeight <= 15 )
        {
          lfHeight = 14;
          goto LABEL_12;
        }
        if ( lfHeight <= 19 )
          lfHeight = 16;
      }
    }
    else
    {
      if ( (unsigned int)(lfHeight + 12) <= 3 )
      {
        lfHeight = -11;
        goto LABEL_17;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
        lfHeight = -13;
    }
  }
  if ( lfHeight > 0 )
  {
LABEL_12:
    v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
    goto LABEL_18;
  }
LABEL_17:
  lfHeight = -lfHeight;
  v15 = (unsigned int)*(__int16 *)(*(_QWORD *)v8 + 56LL);
LABEL_18:
  *((float *)a1 + 3) = (float)lfHeight / (float)(int)v15;
  v16 = (float)lfHeight / (float)(int)v15;
  v56 = v16;
  v17 = v16;
  if ( !v13 )
  {
    v18 = *(float *)&v58;
    v19 = v58;
    goto LABEL_20;
  }
  if ( v12 )
  {
    v18 = *(float *)(*(_QWORD *)a4 + 468LL);
    v40 = *(float *)(*(_QWORD *)a4 + 472LL);
  }
  else
  {
    v43 = *(_QWORD *)a4;
    v44 = *(int **)(*(_QWORD *)a4 + 80LL);
    v45 = v44[88];
    if ( (v45 & 0x1000) != 0 )
    {
      v18 = *(float *)&v58;
      v40 = v57;
      goto LABEL_51;
    }
    if ( (v45 & 2) == 0 )
    {
      v46 = (float)v44[87];
      v47 = (float)v44[83];
      v18 = (float)v44[86] / (float)v44[82];
      *(float *)&v58 = v18;
      v40 = v46 / v47;
      v57 = v46 / v47;
      goto LABEL_51;
    }
    v18 = *(float *)(v43 + 336) * 0.0625;
    v40 = *(float *)(v43 + 348) * 0.0625;
  }
  *(float *)&v58 = v18;
  v57 = v40;
LABEL_51:
  LODWORD(v58) = EFLOAT::bIs1((EFLOAT *)&v58);
  if ( !EFLOAT::bIs1((EFLOAT *)&v57) )
    v56 = v17 * v40;
  EFLOAT::vAbs((EFLOAT *)&v56);
  v16 = v56;
  if ( v41 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_20:
  v20 = *(_DWORD **)(*(_QWORD *)a4 + 48LL);
  v60 = v20;
  if ( !v20 )
    return v7;
  v21 = *(float *)&v59->lfWidth;
  if ( v21 != 0.0 )
  {
    v33 = *(_QWORD *)v8;
    if ( v21 < 0.0 )
      LODWORD(v21) = -LODWORD(v21);
    v34 = 1;
    v57 = v21;
    v35 = (float)SLODWORD(v21);
    v56 = (float)SLODWORD(v21);
    if ( v13 )
    {
      if ( !v19 )
      {
        v56 = v35 * v18;
        v34 = bFToL(v15, &v57, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v56);
      v35 = v56;
    }
    if ( (unsigned int)bFToL(v15, &v56, 6LL) && SLODWORD(v56) > 0 && v34 && v36 / 256 < SLODWORD(v56)
      || (*(_DWORD *)(v33 + 48) & 4) != 0 )
    {
      v23 = v58;
      v38 = v35 / v37;
      goto LABEL_46;
    }
    v8 = v61;
  }
  v22 = *(_QWORD *)v8;
  v23 = v58;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 48LL) & 4) != 0 )
  {
    v24 = v17;
    if ( !(_DWORD)v58 )
    {
      v56 = v17 * v18;
      EFLOAT::vAbs((EFLOAT *)&v56);
      v24 = v56;
    }
  }
  else
  {
    v24 = v16;
  }
  v25 = *(_QWORD *)(v22 + 128);
  v56 = NAN;
  v58 = v25;
  UserGetCurrentProcessDpiAwareness(&v56);
  v26 = 96;
  if ( (v20[14] & 1) == 0 || (v27 = 96, (unsigned int)(LODWORD(v56) - 1) <= 1) )
    v27 = v20[550];
  v57 = NAN;
  UserGetCurrentProcessDpiAwareness(&v57);
  if ( (v20[14] & 1) == 0 || (unsigned int)(LODWORD(v57) - 1) <= 1 )
    v26 = v20[551];
  if ( v27 == v26 || v12 )
  {
    v28 = HIDWORD(v58);
    v29 = v58;
  }
  else
  {
    v48 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v60);
    v28 = v48 * HIDWORD(v58);
    v49 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v60);
    v29 = v49 * v58;
  }
  if ( v29 == v28 )
    goto LABEL_33;
  v38 = (float)((float)v28 * v24) / (float)v29;
LABEL_46:
  v24 = v38;
LABEL_33:
  if ( !v23 )
    v24 = v24 / v18;
  *(float *)a1 = v24;
  v30 = v61;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  v62 = a1;
  v31 = *(_QWORD *)v30;
  v63 = 0;
  if ( (*(_DWORD *)(v31 + 48) & 4) == 0 )
    goto LABEL_36;
  lfOrientation = v59->lfOrientation;
  if ( !lfOrientation )
    goto LABEL_36;
  v51 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
  *(float *)v51.m128i_i32 = *(float *)v51.m128i_i32 / 10.0;
  v64[0] = efCos((unsigned int)_mm_cvtsi128_si32(v51));
  v64[3] = v64[0];
  v52 = efSin((unsigned int)_mm_cvtsi128_si32(v51));
  v53 = *((_OWORD *)a1 + 1);
  v64[4] = 0;
  v64[5] = 0;
  v51.m128i_i32[0] = v52;
  v54 = *((_DWORD *)a1 + 8);
  v64[1] = v51.m128i_i32[0];
  v64[2] = v51.m128i_i32[0] ^ _xmm;
  v55 = *(_OWORD *)a1;
  v66 = v54;
  v65[1] = v53;
  v65[0] = v55;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v62, (struct MATRIX *)v65, (struct MATRIX *)v64, 0) )
  {
LABEL_36:
    *((_DWORD *)a1 + 1) ^= _xmm;
    *((_DWORD *)a1 + 3) ^= _xmm;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v62, 8u);
    return 1;
  }
  return v7;
}
