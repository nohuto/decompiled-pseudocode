/*
 * XREFs of ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801954E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  int (__fastcall ***v10)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int (__fastcall **v11)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rax
  CCompositionSurfaceBitmap *v12; // rcx
  CCompositionSurfaceBitmap *v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(unsigned __int8 *)(a1 + 44);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) + 128LL);
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 64LL))(v7, v6);
  if ( v9 )
  {
    do
    {
      v10 = (int (__fastcall ***)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(*(_QWORD *)(a1 + 8LL * (int)v8 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v10 )
      {
        v11 = *v10;
        v13 = 0LL;
        if ( (*v11)(v10, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v13) >= 0 )
          CDrawingContext::RecordBitmapContentInfo(a2, v13, v13, a3, 0LL);
        v12 = v13;
        if ( v13 )
        {
          v13 = 0LL;
          (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      ++v8;
    }
    while ( v8 < v9 );
  }
}
