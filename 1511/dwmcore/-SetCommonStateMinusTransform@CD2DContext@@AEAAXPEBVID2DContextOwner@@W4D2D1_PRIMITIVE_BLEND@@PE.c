/*
 * XREFs of ?SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_4X4_F@@@Z @ 0x180147F48
 * Callers:
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180146F10 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800FA314 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FA374 (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

void __fastcall CD2DContext::SetCommonStateMinusTransform(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        unsigned int a3,
        const enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_4X4_F *a5)
{
  __int64 v5; // rdi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-A8h] BYREF
  int v14; // [rsp+30h] [rbp-98h]
  int v15; // [rsp+34h] [rbp-94h]
  _OWORD v16[4]; // [rsp+40h] [rbp-88h] BYREF

  v5 = *((_QWORD *)this + 5);
  v14 = 0;
  v15 = 0;
  v13 = _xmm;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 240LL))(v5, &v13);
  CD2DContext::SetPrimitiveBlend(this, a3);
  (*(void (__fastcall **)(const struct ID2DContextOwner *, _OWORD *))(*(_QWORD *)a2 + 16LL))(a2, v16);
  if ( a4 )
    CD2DContext::SetAntiAliasMode(this, *a4);
  if ( a5 )
  {
    v10 = v16[1];
    *(_OWORD *)&a5->_11 = v16[0];
    v11 = v16[2];
    *(_OWORD *)&a5->m[1][0] = v10;
    v12 = v16[3];
    *(_OWORD *)&a5->m[2][0] = v11;
    *(_OWORD *)&a5->m[3][0] = v12;
  }
}
