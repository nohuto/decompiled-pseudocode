/*
 * XREFs of ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180136E70
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCommonRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2, __int128 *a3)
{
  int (__fastcall ****v4)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rbx
  __int64 v6; // rdi
  int (__fastcall ***v7)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int (__fastcall **v8)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rax
  CCompositionSurfaceBitmap *v9; // rcx
  CCompositionSurfaceBitmap *v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = (int (__fastcall ****)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(a1 + 8);
  v6 = 2LL;
  do
  {
    v7 = *v4;
    if ( *v4 )
    {
      v8 = *v7;
      v10 = 0LL;
      if ( (*v8)(v7, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v10) >= 0 )
        CDrawingContext::RecordBitmapContentInfo(a2, v10, v10, a3, 0LL);
      v9 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    ++v4;
    --v6;
  }
  while ( v6 );
}
