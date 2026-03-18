/*
 * XREFs of ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C000E630
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C00266B4 (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bUseMetaPtoD@DC@@QEAAHXZ @ 0x1C004A980 (-bUseMetaPtoD@DC@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bGetNtoWScales(struct EPOINTFL *a1, struct XDCOBJ *a2, __m128 *a3, struct PFEOBJ *a4, int *a5)
{
  __m128 v6; // xmm0
  unsigned int v7; // edi
  __int64 v10; // rax
  __m128 *v11; // rdx
  __int64 v13; // r9
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // [rsp+28h] [rbp-61h] BYREF
  float v17; // [rsp+2Ch] [rbp-5Dh]
  float v18; // [rsp+30h] [rbp-59h] BYREF
  float v19; // [rsp+34h] [rbp-55h]
  __m128 *v20; // [rsp+38h] [rbp-51h] BYREF
  int v21; // [rsp+44h] [rbp-45h]
  char v22[8]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  __m128 v25; // [rsp+70h] [rbp-19h] BYREF

  v6 = _mm_mul_ps(*a3, (__m128)_xmm);
  v7 = 0;
  v20 = &v25;
  v21 = 0;
  v25 = v6;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v20);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v20, 8u);
  v24 = *(_QWORD *)(*(_QWORD *)a4 + 32LL);
  v10 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v24);
  v16 = (float)(int)v10;
  v17 = (float)SHIDWORD(v10);
  if ( (*(_DWORD *)(v24 + 48) & 0x80000) != 0 )
  {
    v19 = (float)(int)v10;
    v18 = (float)-HIDWORD(v10);
  }
  else
  {
    v18 = (float)SHIDWORD(v10);
    v19 = (float)-(int)v10;
  }
  v11 = v20;
  if ( (v20[2].m128_i32[0] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v16, (struct VECTORFL *)&v16, 1uLL) )
      return v7;
    v11 = v20;
  }
  if ( (v11[2].m128_i32[0] & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v18, (struct VECTORFL *)&v18, 1uLL) )
      return v7;
    v11 = v20;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    *a5 = v11[2].m128_i32[0] & 2;
LABEL_11:
    EFLOAT::eqLength(a1, v22, &v16);
    EFLOAT::eqLength((char *)a1 + 4, v22, &v18);
    return 1;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v23, a2, 0x402u);
  v13 = v23[0];
  if ( !v23[0] )
    return v7;
  *a5 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1
    && !(unsigned int)DC::bUseMetaPtoD(*(DC **)a2)
    && (*(_DWORD *)(v24 + 48) & 4) == 0 )
  {
    v14 = *(float *)v13;
    v16 = v16 * *(float *)v13;
    v17 = v17 * v14;
    v15 = (float)(v19 * *(float *)(v13 + 12)) * 16.0;
    v18 = (float)(v18 * *(float *)(v13 + 12)) * 16.0;
    v19 = v15;
    v16 = v16 * 16.0;
    v17 = v17 * 16.0;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v13 + 32) & 2) == 0 )
  {
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v16, (struct VECTORFL *)&v16, 1uLL) )
      return v7;
    v13 = v23[0];
  }
  if ( (*(_DWORD *)(v13 + 32) & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)v23, (struct VECTORFL *)&v18, (struct VECTORFL *)&v18, 1uLL) )
  {
    goto LABEL_11;
  }
  return v7;
}
