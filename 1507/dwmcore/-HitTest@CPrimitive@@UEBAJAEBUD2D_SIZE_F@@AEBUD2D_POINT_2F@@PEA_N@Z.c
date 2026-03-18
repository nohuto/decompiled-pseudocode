/*
 * XREFs of ?HitTest@CPrimitive@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180117480
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008CE0 (-IsSwapChain@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?CalculateDestinationRect@CPrimitive@@AEBAXAEBUD2D_SIZE_F@@0W4CompositionStretch@Composition@UI@Windows@@MMPEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x18011658C (-CalculateDestinationRect@CPrimitive@@AEBAXAEBUD2D_SIZE_F@@0W4CompositionStretch@Composition@UI@.c)
 *     ?CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180116A08 (-CalculateSwapChainContentSize@CPrimitive@@AEBAXPEAUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CPrimitive::HitTest(
        CPrimitive *this,
        struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float v4; // xmm0_4
  float width; // xmm4_4
  float height; // xmm1_4
  int v11; // ecx
  int v12; // ecx
  float v13; // xmm2_4
  float y; // xmm3_4
  __int64 v16; // rcx
  __int64 v17; // rcx
  FLOAT v18; // xmm0_4
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  struct D2D_SIZE_F v20; // [rsp+88h] [rbp+28h] BYREF

  v4 = 0.0;
  *a4 = 0;
  width = a2->width;
  v19 = 0LL;
  if ( width == 0.0 )
    return 0LL;
  height = a2->height;
  if ( height == 0.0 )
    return 0LL;
  v11 = *((_DWORD *)this + 12) - 1;
  if ( !v11 )
    goto LABEL_6;
  v12 = v11 - 1;
  if ( !v12 )
  {
    v16 = *((_QWORD *)this + 7);
    v20.width = 0.0;
    v20.height = 0.0;
    if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(v16 + 40)) )
    {
      CPrimitive::CalculateSwapChainContentSize(this, &v20, 0LL);
    }
    else
    {
      v18 = *((float *)this + 21) - *((float *)this + 19);
      v20.width = *((float *)this + 20) - *((float *)this + 18);
      v20.height = v18;
    }
    CPrimitive::CalculateDestinationRect(
      v17,
      (float *)&v20,
      (float *)a2,
      *((_DWORD *)this + 46),
      *((float *)this + 44),
      *((float *)this + 45),
      &v19,
      0LL,
      0LL);
    goto LABEL_17;
  }
  if ( v12 != 1 )
  {
LABEL_17:
    height = *((float *)&v19 + 3);
    width = *((float *)&v19 + 2);
    v4 = *((float *)&v19 + 1);
    v13 = *(float *)&v19;
    goto LABEL_7;
  }
LABEL_6:
  v13 = 0.0;
LABEL_7:
  y = a3->y;
  if ( y >= v4 && height > y && a3->x >= v13 && width > a3->x )
    *a4 = 1;
  return 0LL;
}
