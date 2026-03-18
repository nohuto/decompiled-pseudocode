/*
 * XREFs of NtGdiArcInternal @ 0x140110940
 * Callers:
 *     <none>
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1401104E0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1401111E4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x140111ED4 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x140112528 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x140113AD4 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1401C069C (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x14032BF90 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiArcInternal(
        unsigned int a1,
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
  DC *v11; // rcx
  unsigned int v12; // ebx
  ULONG v13; // ecx
  __int64 v15; // rdx
  int v16; // esi
  unsigned int v17; // esi
  float v18; // xmm8_4
  int v19; // r14d
  int v20; // r15d
  unsigned int v21; // ecx
  int v22; // r9d
  int v23; // r10d
  unsigned int v24; // r11d
  float v25; // xmm9_4
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  float v28; // xmm1_4
  int v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // eax
  unsigned int v32; // r9d
  unsigned int v33; // r10d
  float v34; // xmm6_4
  float v35; // xmm7_4
  _QWORD *Current; // rax
  float v37; // [rsp+58h] [rbp-B0h] BYREF
  float v38; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+64h] [rbp-A4h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v42[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v43; // [rsp+70h] [rbp-98h] BYREF
  struct _RECTFX v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+88h] [rbp-80h]
  __int64 v46; // [rsp+90h] [rbp-78h]
  __int16 v47; // [rsp+98h] [rbp-70h]
  DC *v48[14]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v49; // [rsp+118h] [rbp+10h] BYREF
  _DWORD v50[10]; // [rsp+128h] [rbp+20h] BYREF
  char v51; // [rsp+150h] [rbp+48h] BYREF
  unsigned int v52; // [rsp+168h] [rbp+60h]
  unsigned int v53; // [rsp+16Ch] [rbp+64h]
  int v54; // [rsp+170h] [rbp+68h]
  int v55; // [rsp+174h] [rbp+6Ch]
  _BYTE v56[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v57; // [rsp+180h] [rbp+78h]

  v49.right = a5;
  v49.bottom = a6;
  v49.left = a3;
  v49.top = a4;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v48, a2);
  v11 = v48[0];
  v12 = 0;
  if ( !v48[0] || (*((_DWORD *)v48[0] + 9) & 0x10000) != 0 )
  {
    v13 = 6;
LABEL_3:
    EngSetLastError(v13);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v48);
    return 0LL;
  }
  if ( a1 > 3 )
  {
    v13 = 87;
    goto LABEL_3;
  }
  v15 = *((_QWORD *)v48[0] + 122);
  v16 = *(_DWORD *)(v15 + 152);
  if ( (v16 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v48[0], *(_QWORD *)(v15 + 160));
    v11 = v48[0];
  }
  if ( (v16 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 122) + 168LL));
  v17 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v56, v48, a1 == 1);
  if ( !v57 )
  {
    EngSetLastError(8u);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v56);
    goto LABEL_4;
  }
  DC::QuickInitXform(v48[0], &v44, 516LL);
  EBOX::EBOX((EBOX *)v50, (struct XDCOBJ *)v48, &v49, (struct _LINEATTRS *)((char *)v48[0] + 208), 1);
  if ( v50[1] )
    goto LABEL_41;
  if ( v50[0] )
    goto LABEL_42;
  LODWORD(v18) = efHalfDiff(v53, (unsigned int)-v55);
  v19 = 0;
  v43 = 0;
  v20 = 0;
  v41 = 0;
  LODWORD(v25) = efHalfDiff(v52, (unsigned int)-v54);
  v40 = 0;
  v39 = 0;
  if ( v21 == v24 || v23 == v22 )
  {
    v26 = (__m128i)FP_0_0;
    v40 = FP_0_0;
    v27 = (__m128i)FP_0_0;
    v39 = FP_0_0;
  }
  else
  {
    v34 = COERCE_FLOAT(efHalfDiff(v24, v21));
    v35 = COERCE_FLOAT(efHalfDiff(v33, v32));
    vArctan(
      COERCE_UNSIGNED_INT((float)((float)a7 - v25) / v34),
      COERCE_UNSIGNED_INT((float)((float)a8 - v18) / v35),
      &v40,
      &v43);
    v38 = (float)((float)a10 - v18) / v35;
    v37 = (float)((float)a9 - v25) / v34;
    vArctan(LODWORD(v37), LODWORD(v38), &v39, &v41);
    v26 = (__m128i)v40;
    v27 = (__m128i)v39;
    v19 = v43;
    v20 = v41;
  }
  v28 = *(float *)v27.m128i_i32 - *(float *)v26.m128i_i32;
  if ( (float)(*(float *)v27.m128i_i32 - *(float *)v26.m128i_i32) < 0.0 )
    LODWORD(v28) ^= _xmm;
  if ( (float)(v28 - FP_3_0) >= 0.0 || v28 == 0.0 )
  {
    vCosSin((unsigned int)_mm_cvtsi128_si32(v26), &v41, v42);
    vCosSin((unsigned int)_mm_cvtsi128_si32(v27), &v37, &v38);
  }
  else
  {
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v26), &v41, v42);
    vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v27), &v37, &v38);
  }
  if ( v19 != v20 || (v29 = 0, *(float *)v27.m128i_i32 <= *(float *)v26.m128i_i32) )
    v29 = 1;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, _DWORD *, int *, int, unsigned int *, float *, int, unsigned int *, int))bPartialArc)(
                        (unsigned int)(a1 == 1) + 1,
                        v56,
                        v50,
                        &v41,
                        v19,
                        &v40,
                        &v37,
                        v20,
                        &v39,
                        v29) )
    goto LABEL_41;
  switch ( a1 )
  {
    case 1u:
      *(_DWORD *)(*((_QWORD *)v48[0] + 122) + 152LL) |= 0x100u;
      *(_DWORD *)(*((_QWORD *)v48[0] + 122) + 152LL) &= ~0x200u;
      Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v56);
      *(_QWORD *)(*((_QWORD *)v48[0] + 122) + 8LL) = *Current;
      break;
    case 2u:
      if ( EPATHOBJ::bCloseFigure((EPATHOBJ *)v56) )
        break;
LABEL_41:
      v17 = 0;
      goto LABEL_42;
    case 3u:
      v45 = 1LL;
      *(_QWORD *)&v44.xRight = &v51;
      v46 = 0LL;
      v47 = 0;
      if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v56, 0LL, &v44.xRight, 1LL)
        || !EPATHOBJ::bCloseFigure((EPATHOBJ *)v56) )
      {
        goto LABEL_41;
      }
      break;
  }
  if ( (*((_DWORD *)v48[0] + 62) & 1) == 0 )
  {
    if ( a1 && (v30 = a1 - 1) != 0 )
    {
      if ( v30 - 1 > 1 )
      {
LABEL_34:
        PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v56);
        APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v48);
        return v12;
      }
      v31 = EPATHOBJ_bStrokeAndOrFill(
              (struct EPATHOBJ *)v56,
              (struct XDCOBJ *)v48,
              (LINEATTRS *)((char *)v48[0] + 208),
              &v44,
              3u);
    }
    else
    {
      v31 = EPATHOBJ_bStrokeAndOrFill(
              (struct EPATHOBJ *)v56,
              (struct XDCOBJ *)v48,
              (LINEATTRS *)((char *)v48[0] + 208),
              &v44,
              1u);
    }
    v12 = v31;
    goto LABEL_34;
  }
LABEL_42:
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v56);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v48);
  return v17;
}
