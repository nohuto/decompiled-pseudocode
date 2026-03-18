/*
 * XREFs of ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00356D8
 * Callers:
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0035A74 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00143BC (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bIs1@EFLOAT@@QEAAHXZ @ 0x1C00143EC (-bIs1@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014BACC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
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
  unsigned int *v20; // rbx
  int lfWidth; // r11d
  __int64 v22; // rdx
  int v23; // r12d
  float v24; // xmm6_4
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // r14d
  int v30; // r15d
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // ebx
  int v35; // ecx
  struct IFIOBJ *v36; // rax
  __int64 v37; // rax
  LONG DefaultWorldHeight; // eax
  __int64 v40; // rcx
  int *v41; // rax
  int v42; // edx
  float v43; // xmm1_4
  int v44; // edx
  BOOL IsZero; // eax
  float v46; // xmm2_4
  float v47; // xmm0_4
  __int64 v48; // r15
  float v49; // xmm4_4
  int v50; // r14d
  float v51; // xmm1_4
  int v52; // r11d
  float v53; // xmm5_4
  float v54; // xmm1_4
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // r8
  int v58; // eax
  int lfOrientation; // eax
  __m128i v60; // xmm0
  __int32 v61; // eax
  __int128 v62; // xmm1
  int v63; // eax
  __int128 v64; // xmm0
  __int64 v65; // [rsp+28h] [rbp-A9h] BYREF
  __int64 v66; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v67; // [rsp+38h] [rbp-99h] BYREF
  struct tagLOGFONTW *v68; // [rsp+40h] [rbp-91h]
  unsigned int *v69; // [rsp+48h] [rbp-89h] BYREF
  struct IFIOBJ *v70; // [rsp+50h] [rbp-81h]
  struct MATRIX *v71; // [rsp+58h] [rbp-79h] BYREF
  int v72; // [rsp+64h] [rbp-6Dh]
  _DWORD v73[10]; // [rsp+68h] [rbp-69h] BYREF
  _OWORD v74[2]; // [rsp+90h] [rbp-41h] BYREF
  int v75; // [rsp+B0h] [rbp-21h]

  v6 = *(_QWORD *)a4;
  v7 = 0;
  v70 = a3;
  v8 = a3;
  v68 = a2;
  v11 = 1;
  if ( *(float *)(v6 + 468) == 0.0 || (IsZero = EFLOAT::bIsZero((EFLOAT *)(v6 + 472)), v12 = v11, IsZero) )
    v12 = 0;
  if ( (a5 & 2) != 0 || !v12 && (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL) & 0x1000) != 0 )
    v13 = 0;
  else
    v13 = v11;
  lfHeight = a2->lfHeight;
  LODWORD(v65) = v11;
  if ( !lfHeight )
  {
    DefaultWorldHeight = lGetDefaultWorldHeight(a4);
    a2 = v68;
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
          goto LABEL_33;
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
        goto LABEL_12;
      }
      if ( (unsigned int)(lfHeight + 15) <= 2 )
        lfHeight = -13;
    }
  }
  if ( lfHeight <= 0 )
  {
LABEL_12:
    lfHeight = -lfHeight;
    v15 = (unsigned int)*(__int16 *)(*(_QWORD *)v8 + 56LL);
    goto LABEL_13;
  }
LABEL_33:
  v15 = (unsigned int)(*(__int16 *)(*(_QWORD *)v8 + 60LL) + *(__int16 *)(*(_QWORD *)v8 + 62LL));
LABEL_13:
  *((float *)a1 + 3) = (float)lfHeight / (float)(int)v15;
  v16 = (float)lfHeight / (float)(int)v15;
  *(float *)&v66 = v16;
  v17 = v16;
  if ( !v13 )
  {
    v18 = *(float *)&v65;
    v19 = (unsigned int)v65;
    goto LABEL_15;
  }
  if ( v12 )
  {
    v18 = *(float *)(*(_QWORD *)a4 + 468LL);
    v43 = *(float *)(*(_QWORD *)a4 + 472LL);
  }
  else
  {
    v40 = *(_QWORD *)a4;
    v41 = *(int **)(*(_QWORD *)a4 + 80LL);
    v42 = v41[88];
    if ( (v42 & 0x1000) != 0 )
    {
      v18 = *(float *)&v65;
      v43 = *(float *)&v67;
      goto LABEL_44;
    }
    if ( (v42 & 2) == 0 )
    {
      v46 = (float)v41[87];
      v47 = (float)v41[83];
      v18 = (float)v41[86] / (float)v41[82];
      *(float *)&v65 = v18;
      v43 = v46 / v47;
      *(float *)&v67 = v46 / v47;
      goto LABEL_44;
    }
    v18 = *(float *)(v40 + 336) * 0.0625;
    v43 = *(float *)(v40 + 348) * 0.0625;
  }
  *(float *)&v65 = v18;
  *(float *)&v67 = v43;
LABEL_44:
  LODWORD(v65) = EFLOAT::bIs1((EFLOAT *)&v65);
  if ( !EFLOAT::bIs1((EFLOAT *)&v67) )
    *(float *)&v66 = v17 * v43;
  EFLOAT::vAbs((EFLOAT *)&v66);
  v16 = *(float *)&v66;
  if ( v44 )
    *((_DWORD *)a1 + 3) ^= _xmm;
LABEL_15:
  v20 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v69 = v20;
  if ( !v20 )
    return v7;
  lfWidth = v68->lfWidth;
  if ( lfWidth )
  {
    v48 = *(_QWORD *)v8;
    v49 = (float)*(__int16 *)(v48 + 76) * v16;
    if ( lfWidth < 0 )
      lfWidth = -lfWidth;
    v50 = 1;
    LODWORD(v67) = lfWidth;
    v51 = (float)lfWidth;
    *(float *)&v66 = (float)lfWidth;
    if ( v13 )
    {
      if ( !(_DWORD)v19 )
      {
        *(float *)&v66 = v51 * v18;
        v50 = bFToL(v51 * v18, &v67, 6);
      }
      EFLOAT::vAbs((EFLOAT *)&v66);
      v51 = *(float *)&v66;
    }
    if ( (unsigned int)bFToL(v49, &v66, 6) && (int)v66 > 0 && v50 && (v15 = 256LL, v52 / 256 < (int)v66)
      || (*(_DWORD *)(v48 + 48) & 4) != 0 )
    {
      v23 = v65;
      v54 = v51 / v53;
      goto LABEL_80;
    }
    v8 = v70;
  }
  v22 = *(_QWORD *)v8;
  v23 = v65;
  if ( (*(_DWORD *)(*(_QWORD *)v8 + 48LL) & 4) != 0 )
  {
    v24 = v17;
    if ( !(_DWORD)v65 )
    {
      *(float *)&v66 = v17 * v18;
      EFLOAT::vAbs((EFLOAT *)&v66);
      v24 = *(float *)&v66;
    }
  }
  else
  {
    v24 = v16;
  }
  v66 = *(_QWORD *)(v22 + 128);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v15, v22, v19);
  v28 = v20[14];
  v29 = 96;
  if ( (v28 & 1) == 0 || (v30 = 96, (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1) )
    v30 = v20[550];
  v31 = W32GetCurrentThreadDpiAwarenessContext(v28, v26, v27);
  if ( (v20[14] & 1) == 0 || (v31 & 0xFu) - 1 <= 1 )
    v29 = v20[551];
  if ( v30 == v29 || v12 )
  {
    v34 = HIDWORD(v66);
    v35 = v66;
  }
  else
  {
    v55 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v69, v32, v33);
    v34 = v55 * HIDWORD(v66);
    v58 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v69, v56, v57);
    v35 = v58 * v66;
  }
  if ( v35 == v34 )
    goto LABEL_28;
  v54 = (float)((float)v34 * v24) / (float)v35;
LABEL_80:
  v24 = v54;
LABEL_28:
  if ( !v23 )
    v24 = v24 / v18;
  *(float *)a1 = v24;
  v36 = v70;
  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  v71 = a1;
  v37 = *(_QWORD *)v36;
  v72 = 0;
  if ( (*(_DWORD *)(v37 + 48) & 4) == 0 )
    goto LABEL_31;
  lfOrientation = v68->lfOrientation;
  if ( !lfOrientation )
    goto LABEL_31;
  v60 = (__m128i)COERCE_UNSIGNED_INT((float)lfOrientation);
  *(float *)v60.m128i_i32 = *(float *)v60.m128i_i32 / 10.0;
  v73[0] = efCos((unsigned int)_mm_cvtsi128_si32(v60));
  v73[3] = v73[0];
  v61 = efSin((unsigned int)_mm_cvtsi128_si32(v60));
  v62 = *((_OWORD *)a1 + 1);
  v73[4] = 0;
  v73[5] = 0;
  v60.m128i_i32[0] = v61;
  v63 = *((_DWORD *)a1 + 8);
  v73[1] = v60.m128i_i32[0];
  v73[2] = v60.m128i_i32[0] ^ _xmm;
  v64 = *(_OWORD *)a1;
  v75 = v63;
  v74[1] = v62;
  v74[0] = v64;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v71, (struct MATRIX *)v74, (struct MATRIX *)v73, 0) )
  {
LABEL_31:
    *((_DWORD *)a1 + 1) ^= _xmm;
    *((_DWORD *)a1 + 3) ^= _xmm;
    EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v71, 8u);
    return 1;
  }
  return v7;
}
