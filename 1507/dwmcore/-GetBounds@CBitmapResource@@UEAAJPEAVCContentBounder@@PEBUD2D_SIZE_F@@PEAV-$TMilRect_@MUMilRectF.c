/*
 * XREFs of ?GetBounds@CBitmapResource@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082820
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?GetBounds@CBitmapResource@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A5A0 (-GetBounds@CBitmapResource@@W7EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180080880 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v6)(CBitmap *, unsigned int *, unsigned int *); // rsi
  int Size; // eax
  unsigned int v8; // ebx
  int v9; // eax
  float v10; // xmm1_4
  unsigned int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 56LL);
    if ( v6 == CBitmap::GetSize )
      Size = CBitmap::GetSize(*(CBitmap **)(a1 + 56), (unsigned int *)&v13, v12);
    else
      Size = v6(*(CBitmap **)(a1 + 56), (unsigned int *)&v13, v12);
    v8 = Size;
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x103u);
    }
    else
    {
      v9 = v13;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      v10 = (float)(int)v12[0];
      *(float *)(a4 + 8) = (float)v9;
      *(float *)(a4 + 12) = v10;
    }
  }
  else
  {
    v8 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x10Cu);
  }
  return v8;
}
