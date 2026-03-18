/*
 * XREFs of ?SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_4X4_F@@@Z @ 0x180177C50
 * Callers:
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18010F390 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 * Callees:
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007C840 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007C86C (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetCommonStateMinusTransform(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        enum D2D1_PRIMITIVE_BLEND a3,
        enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_4X4_F *a5)
{
  __int64 v6; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-98h] BYREF
  int v14; // [rsp+30h] [rbp-88h]
  int v15; // [rsp+34h] [rbp-84h]
  _OWORD v16[4]; // [rsp+40h] [rbp-78h] BYREF

  v6 = *((_QWORD *)this + 5);
  v14 = 0;
  v15 = 0;
  v13 = _xmm;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 240LL))(v6, &v13);
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
