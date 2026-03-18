/*
 * XREFs of ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180022CA0
 * Callers:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180071408 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800721B0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetWorldTransform3x2(CDrawingContext *this, struct D2D_MATRIX_3X2_F *a2)
{
  int v2; // eax
  _DWORD *v3; // rax
  unsigned __int64 v4; // xmm1_8
  __int128 v5; // [rsp+0h] [rbp-28h]

  v2 = *((_DWORD *)this + 100);
  if ( v2 )
    v3 = (_DWORD *)(*((_QWORD *)this + 52) + ((unsigned __int64)(unsigned int)(v2 - 1) << 6));
  else
    v3 = &IdentityMatrix;
  DWORD1(v5) = v3[1];
  HIDWORD(v5) = v3[5];
  LODWORD(v5) = *v3;
  DWORD2(v5) = v3[4];
  v4 = _mm_unpacklo_ps((__m128)(unsigned int)v3[12], (__m128)(unsigned int)v3[13]).m128_u64[0];
  *(_OWORD *)&a2->m11 = v5;
  *(_QWORD *)&a2->m[2][0] = v4;
}
