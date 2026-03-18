/*
 * XREFs of GreAngleArc @ 0x1C02925A8
 * Callers:
 *     NtGdiAngleArc @ 0x1C02A5AC0 (NtGdiAngleArc.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 *     ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1C0292558 (-lGetQuadrant@@YAJAEAVEPOINTFL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z @ 0x1C02A7FFC (--0EBOX@@QEAA@AEAVEXFORMOBJ@@AEAU_RECTL@@@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A80F0 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A86A0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A882C (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A8990 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall GreAngleArc(HDC a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  POINTL *v9; // rcx
  unsigned int v10; // ebx
  POINTL v11; // rdx
  int v12; // r15d
  __m128i v13; // xmm7
  __m128i v14; // xmm6
  LONG top; // ecx
  int v16; // r8d
  char v17; // di
  int v18; // r13d
  BOOL IsZero; // ecx
  float v20; // esi
  float v21; // eax
  char v22; // r14
  int v23; // r14d
  int v24; // esi
  int v25; // edi
  int v26; // r15d
  unsigned int v27; // eax
  _QWORD *Current; // rax
  __int64 v29; // r8
  ULONG v30; // ecx
  float v32; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-ACh] BYREF
  float v34; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v35; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+7Ch] [rbp-8Ch] BYREF
  POINTL *v38[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _XFORMOBJ v39; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v40[80]; // [rsp+A8h] [rbp-60h] BYREF
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v42; // [rsp+100h] [rbp-8h]

  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v9 = v38[0];
  v10 = 0;
  if ( !v38[0] || (v38[0][4].y & 0x10000) != 0 )
  {
    v30 = 6;
    goto LABEL_40;
  }
  v11 = v38[0][10];
  v12 = *(_DWORD *)(*(_QWORD *)&v11 + 8LL);
  if ( (v12 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v38[0], *(_QWORD *)(*(_QWORD *)&v11 + 16LL));
    v9 = v38[0];
  }
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[10] + 24LL));
  v35.right = a4 + a2;
  v35.left = a2 - a4;
  v35.top = a3 - a4;
  v35.bottom = a4 + a3;
  if ( a4 < 0 || a2 - a4 > a2 || a4 + a2 < a2 || a3 - a4 > a3 || a4 + a3 < a3 )
  {
    v30 = 87;
LABEL_40:
    EngSetLastError(v30);
    goto LABEL_41;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v39, (struct XDCOBJ *)v38, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v38, 1);
  if ( v42 )
  {
    ERECTL::vOrder((ERECTL *)&v35);
    v13 = (__m128i)a6;
    v14 = (__m128i)a5;
    v33 = a5;
    if ( *(float *)&a6 < 0.0 )
    {
      top = v35.top;
      v14 = (__m128i)_mm_xor_ps((__m128)a5, (__m128)_xmm);
      v13 = (__m128i)_mm_xor_ps((__m128)a6, (__m128)_xmm);
      v33 = v14.m128i_i32[0];
      v35.top = v35.bottom;
      v35.bottom = top;
    }
    EBOX::EBOX((EBOX *)v40, (struct EXFORMOBJ *)&v39, &v35);
    bFToL(*(float *)v13.m128i_i32 * FP_1DIV90, &v32, 5);
    v17 = LOBYTE(v32);
    *(float *)v13.m128i_i32 = *(float *)v13.m128i_i32 + *(float *)v14.m128i_i32;
    v18 = SLODWORD(v32) >> 2;
    if ( SLODWORD(v32) >> 2 > v16 + 3 )
      v18 = v16 + 3;
    v34 = *(float *)v13.m128i_i32;
    v32 = *(float *)v13.m128i_i32 - *(float *)v14.m128i_i32;
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v32);
    if ( (float)((float)(*(float *)v13.m128i_i32 - *(float *)v14.m128i_i32) - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin((unsigned int)_mm_cvtsi128_si32(v14), &v35, &v35.top);
      vCosSin((unsigned int)_mm_cvtsi128_si32(v13), &v36, &v37);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v14), &v35, &v35.top);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v13), &v36, &v37);
    }
    LODWORD(v20) = lGetQuadrant((struct EPOINTFL *)&v35);
    v32 = v20;
    if ( *(float *)v14.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v14.m128i_i32 )
    {
      vArctan((unsigned int)v35.left, (unsigned int)v35.top, &v33, &v32);
      v14.m128i_i32[0] = v33;
      v20 = v32;
    }
    LODWORD(v21) = lGetQuadrant((struct EPOINTFL *)&v36);
    v22 = LOBYTE(v21);
    v32 = v21;
    if ( *(float *)v13.m128i_i32 > FP_3600_0 || FP_M3600_0 > *(float *)v13.m128i_i32 )
    {
      vArctan(v36, v37, &v34, &v32);
      v22 = LOBYTE(v32);
      v17 = (LOBYTE(v32) - LOBYTE(v20)) & 3;
      if ( ((LODWORD(v32) - LODWORD(v20)) & 3) == 0 && *(float *)v14.m128i_i32 > v34 )
        v17 = 3;
    }
    v23 = v22 & 3;
    v24 = LOBYTE(v20) & 3;
    v25 = v17 & 3;
    v26 = 0;
    v27 = 2;
    if ( v18 <= 0 )
    {
LABEL_33:
      if ( (unsigned int)bPartialArc(v27, &ppo, v40, &v35, v24, &v33, &v36, v23, &v34, v25) )
      {
        *(_DWORD *)(*(_QWORD *)&v38[0][10] + 8LL) |= 0x100u;
        *(_DWORD *)(*(_QWORD *)&v38[0][10] + 8LL) &= ~0x200u;
        Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v35);
        *(_QWORD *)(v29 + 84) = *Current;
        if ( (v38[0][22].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v38, (LINEATTRS *)&v38[0][23], &v39, 1u) )
        {
          v10 = 1;
        }
      }
    }
    else
    {
      while ( (unsigned int)bPartialArc(v27, &ppo, v40, &v35, v24, &v33, &v36, v23, &v34, v25)
           && (unsigned int)bPartialArc(0LL, &ppo, v40, &v36, v23, &v34, &v35, v24, &v33, 3 - v25) )
      {
        ++v26;
        v27 = 0;
        if ( v26 >= v18 )
          goto LABEL_33;
      }
    }
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
LABEL_41:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
  return v10;
}
