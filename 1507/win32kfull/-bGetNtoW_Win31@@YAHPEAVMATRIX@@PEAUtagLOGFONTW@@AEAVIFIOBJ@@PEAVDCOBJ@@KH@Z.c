/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C0027504
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0029584 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C003280C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C003283C (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C011183C (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v19; // r8
  _DWORD *v20; // rbx
  float v21; // r11d
  __int64 v22; // rdx
  int v23; // r12d
  float v24; // xmm6_4
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // r14d
  int v29; // r15d
  int v30; // ebx
  int v31; // ecx
  struct IFIOBJ *v32; // rax
  __int64 v33; // rax
  __int64 v35; // r15
  int v36; // r14d
  float v37; // xmm1_4
  int v38; // r11d
  float v39; // xmm5_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  int v42; // edx
  int IsZero; // eax
  LONG DefaultWorldHeight; // eax
  __int64 v45; // rcx
  int *v46; // rax
  int v47; // edx
  float v48; // xmm2_4
  float v49; // xmm0_4
  unsigned int v50; // eax
  unsigned int v51; // eax
  int lfOrientation; // eax
  __m128i v53; // xmm0
  __int32 v54; // eax
  __int128 v55; // xmm1
  int v56; // eax
  __int128 v57; // xmm0
  float v58; // [rsp+28h] [rbp-99h] BYREF
  float v59; // [rsp+2Ch] [rbp-95h] BYREF
  __int64 v60; // [rsp+30h] [rbp-91h] BYREF
  struct tagLOGFONTW *v61; // [rsp+38h] [rbp-89h]
  _DWORD *v62; // [rsp+40h] [rbp-81h] BYREF
  struct IFIOBJ *v63; // [rsp+48h] [rbp-79h]
  struct MATRIX *v64; // [rsp+50h] [rbp-71h] BYREF
  int v65; // [rsp+5Ch] [rbp-65h]
  _DWORD v66[10]; // [rsp+60h] [rbp-61h] BYREF
  _OWORD v67[2]; // [rsp+88h] [rbp-39h] BYREF
  int v68; // [rsp+A8h] [rbp-19h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v63 = a3;
  v8 = a3;
  v61 = a2;
  v11 = 1;
  if ( *(float *)(v6 + 468) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 472)), v12 = v11, IsZero) )
    v12 = 0;
  if ( (a5 & 2) != 0 || !v12 && (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v11;
  lfHeight = a2->lfHeight;
  LODWORD(v60) = v11;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v61;
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
        goto LABEL_37;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
        lfHeight = -13;
    }
  }
  if ( lfHeight > 0 )
  {
LABEL_12:
    v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
    goto LABEL_13;
  }
LABEL_37:
  lfHeight = -lfHeight;
  v15 = (unsigned int)*(__int16 *)(*(_QWORD *)v8 + 56LL);
LABEL_13:
  *((float *)a1 + 3) = (float)lfHeight / (float)(int)v15;
  v16 = (float)lfHeight / (float)(int)v15;
  v58 = v16;
  v17 = v16;
  if ( !v13 )
  {
    v18 = *(float *)&v60;
    v19 = (unsigned int)v60;
    goto LABEL_15;
  }
  if ( v12 )
  {
    v18 = *(float *)(*(_QWORD *)a4 + 468LL);
    v41 = *(float *)(*(_QWORD *)a4 + 472LL);
  }
  else
  {
    v45 = *(_QWORD *)a4;
    v46 = *(int **)(*(_QWORD *)a4 + 80LL);
    v47 = v46[88];
    if ( (v47 & 0x1000) != 0 )
    {
      v18 = *(float *)&v60;
      v41 = v59;
      goto LABEL_51;
    }
    if ( (v47 & 2) == 0 )
    {
      v48 = (float)v46[87];
      v49 = (float)v46[83];
      v18 = (float)v46[86] / (float)v46[82];
      *(float *)&v60 = v18;
      v41 = v48 / v49;
      v59 = v48 / v49;
      goto LABEL_51;
    }
    v18 = *(float *)(v45 + 336) * 0.0625;
    v41 = *(float *)(v45 + 348) * 0.0625;
  }
  *(float *)&v60 = v18;
  v59 = v41;
LABEL_51:
  LODWORD(v60) = EFLOAT::bIs1((EFLOAT *)&v60);
  if ( !(unsigned int)EFLOAT::bIs1((EFLOAT *)&v59) )
    v58 = v17 * v41;
  EFLOAT::vAbs((EFLOAT *)&v58);
  v16 = v58;
  if ( v42 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_15:
  v20 = *(_DWORD **)(*(_QWORD *)a4 + 48LL);
  v62 = v20;
  if ( !v20 )
    return v7;
  v21 = *(float *)&v61->lfWidth;
  if ( v21 != 0.0 )
  {
    v35 = *(_QWORD *)v8;
    if ( v21 < 0.0 )
      LODWORD(v21) = -LODWORD(v21);
    v36 = 1;
    v59 = v21;
    v37 = (float)SLODWORD(v21);
    v58 = (float)SLODWORD(v21);
    if ( v13 )
    {
      if ( !(_DWORD)v19 )
      {
        v58 = v37 * v18;
        v36 = bFToL(v15, &v59, 6LL);
      }
      EFLOAT::vAbs((EFLOAT *)&v58);
      v37 = v58;
    }
    if ( (unsigned int)bFToL(v15, &v58, 6LL) && SLODWORD(v58) > 0 && v36 && v38 / 256 < SLODWORD(v58)
      || (*(_DWORD *)(v35 + 48) & 4) != 0 )
    {
      v23 = v60;
      v40 = v37 / v39;
      goto LABEL_46;
    }
    v8 = v63;
  }
  v22 = *(_QWORD *)v8;
  v23 = v60;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 48LL) & 4) != 0 )
  {
    v24 = v17;
    if ( !(_DWORD)v60 )
    {
      v58 = v17 * v18;
      EFLOAT::vAbs((EFLOAT *)&v58);
      v24 = v58;
    }
  }
  else
  {
    v24 = v16;
  }
  v25 = *(_QWORD *)(v22 + 128);
  v58 = NAN;
  v60 = v25;
  UserGetCurrentProcessDpiAwareness(&v58, v22, v19);
  v28 = 96;
  if ( (v20[14] & 1) == 0 || (v29 = 96, (unsigned int)(LODWORD(v58) - 1) <= 1) )
    v29 = v20[550];
  v59 = NAN;
  UserGetCurrentProcessDpiAwareness(&v59, v26, v27);
  if ( (v20[14] & 1) == 0 || (unsigned int)(LODWORD(v59) - 1) <= 1 )
    v28 = v20[551];
  if ( v29 == v28 || v12 )
  {
    v30 = HIDWORD(v60);
    v31 = v60;
  }
  else
  {
    v50 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v62);
    v30 = v50 * HIDWORD(v60);
    v51 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v62);
    v31 = v51 * v60;
  }
  if ( v31 == v30 )
    goto LABEL_28;
  v40 = (float)((float)v30 * v24) / (float)v31;
LABEL_46:
  v24 = v40;
LABEL_28:
  if ( !v23 )
    v24 = v24 / v18;
  *(float *)a1 = v24;
  v32 = v63;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  v64 = a1;
  v33 = *(_QWORD *)v32;
  v65 = 0;
  if ( (*(_DWORD *)(v33 + 48) & 4) == 0 )
    goto LABEL_31;
  lfOrientation = v61->lfOrientation;
  if ( !lfOrientation )
    goto LABEL_31;
  v53 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
  *(float *)v53.m128i_i32 = *(float *)v53.m128i_i32 / 10.0;
  v66[0] = efCos((unsigned int)_mm_cvtsi128_si32(v53));
  v66[3] = v66[0];
  v54 = efSin((unsigned int)_mm_cvtsi128_si32(v53));
  v55 = *((_OWORD *)a1 + 1);
  v66[4] = 0;
  v66[5] = 0;
  v53.m128i_i32[0] = v54;
  v56 = *((_DWORD *)a1 + 8);
  v66[1] = v53.m128i_i32[0];
  v66[2] = v53.m128i_i32[0] ^ _xmm;
  v57 = *(_OWORD *)a1;
  v68 = v56;
  v67[1] = v55;
  v67[0] = v57;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v64, (struct MATRIX *)v67, (struct MATRIX *)v66, 0) )
  {
LABEL_31:
    *((_DWORD *)a1 + 1) ^= _xmm;
    *((_DWORD *)a1 + 3) ^= _xmm;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v64, 8u);
    return 1;
  }
  return v7;
}
