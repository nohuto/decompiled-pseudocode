/*
 * XREFs of NtGdiArcInternal @ 0x1C02AA770
 * Callers:
 *     <none>
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000A694 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014318 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0014404 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C02797F8 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A9D18 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AA2C8 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AA458 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02AA5E0 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall NtGdiArcInternal(
        int a1,
        HDC a2,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  POINTL *v11; // rcx
  unsigned int v12; // ebx
  POINTL v13; // rdx
  int v14; // edi
  int v15; // edi
  float v16; // xmm8_4
  int v17; // ecx
  int v18; // r9d
  int v19; // r10d
  int v20; // r11d
  float v21; // xmm9_4
  float v22; // xmm7_4
  int v23; // r9d
  int v24; // r10d
  float v25; // xmm6_4
  __m128i v26; // xmm7
  __m128i v27; // xmm6
  float v28; // r14d
  int v29; // r15d
  float v30; // xmm2_4
  BOOL IsZero; // ecx
  int v32; // eax
  _QWORD *Current; // rax
  __int64 v34; // r8
  unsigned int v35; // eax
  ULONG v36; // ecx
  float v38; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-94h] BYREF
  int v42; // [rsp+78h] [rbp-90h] BYREF
  float v43; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v44[6]; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v45; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v46[10]; // [rsp+C8h] [rbp-40h] BYREF
  struct _POINTL v47; // [rsp+F0h] [rbp-18h] BYREF
  int v48; // [rsp+108h] [rbp+0h]
  int v49; // [rsp+10Ch] [rbp+4h]
  int v50; // [rsp+110h] [rbp+8h]
  int v51; // [rsp+114h] [rbp+Ch]
  PATHOBJ ppo; // [rsp+118h] [rbp+10h] BYREF
  __int64 v53; // [rsp+120h] [rbp+18h]

  v39.right = a5;
  v39.bottom = a6;
  v39.left = a3;
  v39.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v44, a2);
  v11 = v44[0];
  v12 = 0;
  if ( !v44[0] || (v44[0][4].y & 0x10000) != 0 )
  {
    v36 = 6;
    goto LABEL_42;
  }
  if ( (unsigned int)a1 > 3 )
  {
    v36 = 87;
LABEL_42:
    EngSetLastError(v36);
    goto LABEL_43;
  }
  v13 = v44[0][10];
  v14 = *(_DWORD *)(*(_QWORD *)&v13 + 8LL);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v44[0], *(_QWORD *)(*(_QWORD *)&v13 + 16LL));
    v11 = v44[0];
  }
  if ( (v14 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[10] + 24LL));
  v15 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v44, a1 == 1);
  if ( v53 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v44, 0x204u);
    EBOX::EBOX((EBOX *)v46, (struct DCOBJ *)v44, &v39, (struct _LINEATTRS *)&v44[0][23], 1);
    if ( v46[1] )
      goto LABEL_33;
    if ( v46[0] )
    {
LABEL_32:
      v12 = v15;
      goto LABEL_33;
    }
    LODWORD(v16) = efHalfDiff(v49, -v51);
    LODWORD(v21) = efHalfDiff(v48, -v50);
    if ( v17 == v20 || v19 == v18 )
    {
      v29 = 0;
      v28 = 0.0;
      v27 = (__m128i)FP_0_0;
      v41 = FP_0_0;
      v26 = (__m128i)FP_0_0;
      v40 = FP_0_0;
    }
    else
    {
      v22 = COERCE_FLOAT(efHalfDiff(v20, v17));
      v25 = COERCE_FLOAT(efHalfDiff(v24, v23));
      *(float *)&v39.top = (float)((float)a8 - v16) / v25;
      *(float *)&v39.left = (float)((float)a7 - v21) / v22;
      vArctan(v39.left, v39.top, (__int64)&v41, &v38);
      *(float *)&v39.top = (float)((float)a10 - v16) / v25;
      *(float *)&v39.left = (float)((float)a9 - v21) / v22;
      vArctan(v39.left, v39.top, (__int64)&v40, &v42);
      v26 = (__m128i)v40;
      v27 = (__m128i)v41;
      v28 = v38;
      v29 = v42;
    }
    v30 = *(float *)v26.m128i_i32 - *(float *)v27.m128i_i32;
    v38 = *(float *)v26.m128i_i32 - *(float *)v27.m128i_i32;
    if ( (float)(*(float *)v26.m128i_i32 - *(float *)v27.m128i_i32) < 0.0 )
    {
      LODWORD(v30) ^= _xmm;
      v38 = v30;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v38);
    if ( (float)(v30 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v27), (float *)&v42, &v43);
      vCosSin(_mm_cvtsi128_si32(v26), (float *)&v39.left, (float *)&v39.top);
    }
    else
    {
      vCosSinPrecise(_mm_cvtsi128_si32(v27), (float *)&v42, &v43);
      vCosSinPrecise(_mm_cvtsi128_si32(v26), (float *)&v39.left, (float *)&v39.top);
    }
    if ( LODWORD(v28) != v29 || (v32 = 0, *(float *)v26.m128i_i32 <= *(float *)v27.m128i_i32) )
      v32 = 1;
    if ( (unsigned int)bPartialArc(
                         (unsigned int)(a1 == 1) + 1,
                         (EPATHOBJ *)&ppo,
                         (__int64)v46,
                         (__int64)&v42,
                         SLOBYTE(v28),
                         (__int64)&v41,
                         (__int64)&v39,
                         v29,
                         (__int64)&v40,
                         v32) )
    {
      if ( a1 == 1 )
      {
        *(_DWORD *)(*(_QWORD *)&v44[0][10] + 8LL) |= 0x100u;
        *(_DWORD *)(*(_QWORD *)&v44[0][10] + 8LL) &= ~0x200u;
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v39);
        *(_QWORD *)(v34 + 84) = *Current;
        goto LABEL_35;
      }
      if ( a1 == 2 )
        goto LABEL_46;
      if ( a1 != 3 )
        goto LABEL_35;
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v47, 1u) )
      {
LABEL_46:
        if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
          goto LABEL_31;
LABEL_35:
        if ( (v44[0][22].x & 1) == 0 )
        {
          if ( a1 <= 1 )
            v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v44, (LINEATTRS *)&v44[0][23], &v45, 1u);
          else
            v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v44, (LINEATTRS *)&v44[0][23], &v45, 3u);
          v12 = v35;
          goto LABEL_33;
        }
        goto LABEL_32;
      }
    }
LABEL_31:
    v15 = 0;
    goto LABEL_32;
  }
  EngSetLastError(8u);
LABEL_33:
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_43:
  DCOBJ::~DCOBJ((DCOBJ *)v44);
  return v12;
}
