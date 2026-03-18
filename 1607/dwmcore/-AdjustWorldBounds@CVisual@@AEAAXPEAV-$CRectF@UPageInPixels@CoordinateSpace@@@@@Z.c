/*
 * XREFs of ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18004FC24
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180051AA0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingHPC@C.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004DA60 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180093CF0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AD870 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::AdjustWorldBounds(__int64 a1, float *a2)
{
  __int64 v2; // rcx
  _BOOL8 (__fastcall *v4)(__int64, int); // rax
  char v5; // al
  float v6; // xmm1_4
  float v7; // xmm0_4

  v2 = *(_QWORD *)(a1 + 304);
  if ( v2 )
  {
    v4 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v2 + 48LL);
    if ( (char *)v4 == (char *)CCompositionSurfaceBitmap::IsOfType )
    {
      v5 = CCompositionSurfaceBitmap::IsOfType(v2, 97LL);
    }
    else if ( v4 == CPrimitiveGroup::IsOfType )
    {
      v5 = CPrimitiveGroup::IsOfType(v2, 97);
    }
    else if ( (char *)v4 == (char *)CPrimitiveGroupLayerClip::IsOfType )
    {
      v5 = CPrimitiveGroupLayerClip::IsOfType(v2, 97LL);
    }
    else
    {
      v5 = v4(v2, 97);
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
