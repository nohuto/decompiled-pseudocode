/*
 * XREFs of NtGdiArcInternal @ 0x1C02A8B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0003E90 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0018C18 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A80F0 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A86A0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A882C (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A8990 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
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
  POINTL *v42[2]; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+88h] [rbp-80h] BYREF
  float v44; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _XFORMOBJ v45; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v46[10]; // [rsp+A8h] [rbp-60h] BYREF
  struct _POINTL v47; // [rsp+D0h] [rbp-38h] BYREF
  int v48; // [rsp+E8h] [rbp-20h]
  int v49; // [rsp+ECh] [rbp-1Ch]
  int v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+F4h] [rbp-14h]
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v53; // [rsp+100h] [rbp-8h]

  v39.right = a5;
  v39.bottom = a6;
  v39.left = a3;
  v39.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v42, a2);
  v11 = v42[0];
  v12 = 0;
  if ( !v42[0] || (v42[0][4].y & 0x10000) != 0 )
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
  v13 = v42[0][10];
  v14 = *(_DWORD *)(*(_QWORD *)&v13 + 8LL);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v42[0], *(_QWORD *)(*(_QWORD *)&v13 + 16LL));
    v11 = v42[0];
  }
  if ( (v14 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[10] + 24LL));
  v15 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v42, a1 == 1);
  if ( v53 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v42, 0x204u);
    EBOX::EBOX((EBOX *)v46, (struct DCOBJ *)v42, &v39, (struct _LINEATTRS *)&v42[0][23], 1);
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
      v40 = FP_0_0;
      v26 = (__m128i)FP_0_0;
      v41 = FP_0_0;
    }
    else
    {
      v22 = COERCE_FLOAT(efHalfDiff(v20, v17));
      v25 = COERCE_FLOAT(efHalfDiff(v24, v23));
      *(float *)&v39.top = (float)((float)a8 - v16) / v25;
      *(float *)&v39.left = (float)((float)a7 - v21) / v22;
      vArctan(v39.left, v39.top, (float *)&v40, &v38);
      *(float *)&v39.top = (float)((float)a10 - v16) / v25;
      *(float *)&v39.left = (float)((float)a9 - v21) / v22;
      vArctan(v39.left, v39.top, (float *)&v41, &v43);
      v26 = (__m128i)v41;
      v27 = (__m128i)v40;
      v28 = v38;
      v29 = v43;
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
      vCosSin(_mm_cvtsi128_si32(v27), (float *)&v43, &v44);
      vCosSin(_mm_cvtsi128_si32(v26), (float *)&v39.left, (float *)&v39.top);
    }
    else
    {
      vCosSinPrecise(_mm_cvtsi128_si32(v27), (float *)&v43, &v44);
      vCosSinPrecise(_mm_cvtsi128_si32(v26), (float *)&v39.left, (float *)&v39.top);
    }
    if ( LODWORD(v28) != v29 || (v32 = 0, *(float *)v26.m128i_i32 <= *(float *)v27.m128i_i32) )
      v32 = 1;
    if ( (unsigned int)bPartialArc(
                         (unsigned int)(a1 == 1) + 1,
                         (EPATHOBJ *)&ppo,
                         (__int64)v46,
                         (__int64)&v43,
                         SLOBYTE(v28),
                         (__int64)&v40,
                         (__int64)&v39,
                         v29,
                         (__int64)&v41,
                         v32) )
    {
      if ( a1 == 1 )
      {
        *(_DWORD *)(*(_QWORD *)&v42[0][10] + 8LL) |= 0x100u;
        *(_DWORD *)(*(_QWORD *)&v42[0][10] + 8LL) &= ~0x200u;
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
        if ( (v42[0][22].x & 1) == 0 )
        {
          if ( a1 <= 1 )
            v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v42, (LINEATTRS *)&v42[0][23], &v45, 1u);
          else
            v35 = EPATHOBJ::bStrokeAndOrFill(&ppo, v42, (LINEATTRS *)&v42[0][23], &v45, 3u);
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
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
LABEL_43:
  DCOBJ::~DCOBJ((DCOBJ *)v42);
  return v12;
}
