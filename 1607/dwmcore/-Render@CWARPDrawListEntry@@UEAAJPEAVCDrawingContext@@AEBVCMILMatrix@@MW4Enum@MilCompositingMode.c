/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1801373F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005BB18 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetSourcePixelToTargetPixelTransform@CWARPDrawListEntry@@AEAAXAEBUD2D_MATRIX_4X4_F@@@Z @ 0x1800C0248 (-SetSourcePixelToTargetPixelTransform@CWARPDrawListEntry@@AEAAXAEBUD2D_MATRIX_4X4_F@@@Z.c)
 *     ?MilCompositingModeToBlendMode@@YA?AW4Enum@BlendMode@@W41MilCompositingMode@@@Z @ 0x18013511C (-MilCompositingModeToBlendMode@@YA-AW4Enum@BlendMode@@W41MilCompositingMode@@@Z.c)
 *     ?SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z @ 0x180137580 (-SetBlendMode@CWARPDrawListEntry@@AEAAXW4Enum@BlendMode@@@Z.c)
 *     ?SetOpacity@CWARPDrawListEntry@@AEAAXM@Z @ 0x18013764C (-SetOpacity@CWARPDrawListEntry@@AEAAXM@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180175B24 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, struct _D3DMATRIX *a3, float a4, int a5)
{
  __int64 v5; // r14
  __int64 (__fastcall ***v8)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  __int64 (__fastcall *v9)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rax
  int v10; // eax
  unsigned int v11; // edi
  CCompositionSurfaceBitmap *v12; // rcx
  unsigned int v13; // eax
  CWARPDrawListEntry *v14; // rcx
  CD2DContext *v15; // rax
  int appended; // eax
  CCompositionSurfaceBitmap *v18; // rcx
  CCompositionSurfaceBitmap *v19; // [rsp+38h] [rbp-41h] BYREF
  struct _D3DMATRIX v20; // [rsp+48h] [rbp-31h] BYREF
  __int128 v21; // [rsp+88h] [rbp+Fh] BYREF

  v5 = *(_QWORD *)(a2 + 456);
  CMILMatrix::GetD3DMatrix(a3, &v20);
  if ( (*(_BYTE *)(a1 + 20) & 0x10) == 0
    || (v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(a1 + 80)) == 0LL )
  {
LABEL_6:
    if ( (*(_BYTE *)(a1 + 20) & 4) != 0 )
      *(_BYTE *)(a2 + 6535) = 1;
    CWARPDrawListEntry::SetSourcePixelToTargetPixelTransform(
      (CWARPDrawListEntry *)a1,
      (const struct D2D_MATRIX_4X4_F *)&v20);
    v13 = MilCompositingModeToBlendMode(a5);
    CWARPDrawListEntry::SetBlendMode(a1, v13);
    CWARPDrawListEntry::SetOpacity(v14, a4);
    v15 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
    appended = CD2DContext::AppendWARPDrawListEntry(v15, (struct CWARPDrawListEntry *)a1);
    v11 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x19Au);
    return v11;
  }
  v19 = 0LL;
  v9 = **v8;
  v21 = *(_OWORD *)(a1 + 32);
  v10 = v9(v8, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v19);
  v11 = v10;
  if ( v10 >= 0 )
  {
    CDrawingContext::RecordBitmapContentInfo((CDrawingContext *)a2, v19, v19, &v21, 0LL);
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x188u);
  v18 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v11;
}
