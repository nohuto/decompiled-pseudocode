/*
 * XREFs of ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180048584
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800497D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18002E650 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180091E00 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

void __fastcall CVisual::AdjustWorldBounds(__int64 a1, float *a2)
{
  __int64 v2; // rdi
  _BOOL8 (__fastcall *v4)(__int64, int); // rsi
  char v5; // al
  float v6; // xmm1_4
  float v7; // xmm0_4

  v2 = *(_QWORD *)(a1 + 360);
  if ( v2 )
  {
    v4 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v2 + 48LL);
    if ( v4 == CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(*(_QWORD *)(a1 + 360), 92);
    }
    else if ( (char *)v4 == (char *)CPrimitiveGroup::IsOfType )
    {
      v5 = CPrimitiveGroup::IsOfType(*(_QWORD *)(a1 + 360), 92LL);
    }
    else
    {
      v5 = v4(*(_QWORD *)(a1 + 360), 92);
    }
    if ( v5 )
    {
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
      {
        v6 = a2[2] + 0.5;
        *a2 = *a2 - 0.5;
        v7 = a2[1] - 0.5;
        a2[2] = v6;
        a2[1] = v7;
        a2[3] = a2[3] + 0.5;
      }
    }
  }
}
