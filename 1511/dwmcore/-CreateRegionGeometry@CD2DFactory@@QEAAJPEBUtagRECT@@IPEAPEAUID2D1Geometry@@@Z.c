/*
 * XREFs of ?CreateRegionGeometry@CD2DFactory@@QEAAJPEBUtagRECT@@IPEAPEAUID2D1Geometry@@@Z @ 0x1800AD1C8
 * Callers:
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E200 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z @ 0x180146610 (-CreateMeshFromRects@CD2DContext@@MEAAJPEBUMilRectU@@IPEAPEAVCD2DMesh@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DFactory::CreateRegionGeometry(
        CD2DFactory *this,
        const struct tagRECT *a2,
        unsigned int a3,
        struct ID2D1Geometry **a4)
{
  __int64 v4; // rdi
  int v6; // eax
  unsigned int v7; // esi
  struct ID2D1Geometry *v8; // rdi
  struct ID2D1Geometry *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL))(
         v4,
         a2,
         a3,
         &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x9Au);
    v8 = v10;
  }
  else
  {
    v8 = 0LL;
    *a4 = v10;
    v10 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
