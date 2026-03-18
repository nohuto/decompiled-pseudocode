/*
 * XREFs of ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1800B057C
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?BuildFromRectFs@CComplexShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B03EC (-BuildFromRectFs@CComplexShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 * Callees:
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall AddTransformedRectToD2DRgnGeometrySink(
        const struct MilRectF *a1,
        const struct CMILMatrix *a2,
        struct ID2D1GeometrySink *a3)
{
  int v4; // xmm2_4
  int v5; // xmm0_4
  unsigned int *v6; // rdi
  int v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+24h] [rbp-5Ch]
  int v9; // [rsp+28h] [rbp-58h]
  int v10; // [rsp+2Ch] [rbp-54h]
  int v11; // [rsp+30h] [rbp-50h]
  int v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+38h] [rbp-48h]
  int v14; // [rsp+3Ch] [rbp-44h]
  _BYTE v15[32]; // [rsp+40h] [rbp-40h] BYREF

  v4 = *(_DWORD *)a1;
  v5 = *((_DWORD *)a1 + 2);
  v8 = *((_DWORD *)a1 + 1);
  v10 = v8;
  v12 = *((_DWORD *)a1 + 3);
  v14 = v12;
  v7 = v4;
  v9 = v5;
  v11 = v5;
  v13 = v4;
  if ( a2 )
  {
    CBaseMatrix::Transform(a2, (const struct MilPoint2F *)&v7, (struct MilPoint2F *)v15, 4);
    v6 = (unsigned int *)v15;
  }
  else
  {
    v6 = (unsigned int *)&v7;
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a3 + 40LL))(
    a3,
    _mm_unpacklo_ps((__m128)*v6, (__m128)v6[1]).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps((__m128)v6[2], (__m128)v6[3]).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps((__m128)v6[4], (__m128)v6[5]).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(*(_QWORD *)a3 + 80LL))(
    a3,
    _mm_unpacklo_ps((__m128)v6[6], (__m128)v6[7]).m128_u64[0]);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a3 + 64LL))(a3, 1LL);
}
