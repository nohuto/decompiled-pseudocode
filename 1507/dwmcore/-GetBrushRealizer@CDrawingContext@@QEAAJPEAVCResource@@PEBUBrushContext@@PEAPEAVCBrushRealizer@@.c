/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180023BE8
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18002D8C0 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRealizer@CBrush@@UEAAJPEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180083700 (-GetRealizer@CBrush@@UEAAJPEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z.c)
 *     ?IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083E60 (-IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085BE0 (-IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::GetBrushRealizer(
        CDrawingContext *this,
        struct CResource *a2,
        const struct BrushContext *a3,
        struct CBrushRealizer **a4)
{
  struct CBrushRealizer *v4; // rdi
  unsigned int v6; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 (__fastcall *v12)(struct CResource *, __int64); // rsi
  char v13; // al
  int Realizer; // eax
  struct CBrushRealizer *v16; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v6 = 0;
  v16 = 0LL;
  if ( (unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    if ( !v9 )
      goto LABEL_8;
LABEL_13:
    v4 = *(struct CBrushRealizer **)(v10 + 2624);
    (**(void (__fastcall ***)(struct CBrushRealizer *))v4)(v4);
    goto LABEL_8;
  }
  if ( !v9 )
    goto LABEL_13;
  v12 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)v9 + 48LL);
  if ( (char *)v12 == (char *)CSolidColorBrush::IsOfType )
  {
    v13 = CSolidColorBrush::IsOfType(a2, 66LL, v11);
  }
  else if ( (char *)v12 == (char *)CImageBrush::IsOfType )
  {
    v13 = CImageBrush::IsOfType(a2, 66LL);
  }
  else
  {
    v13 = v12(a2, 66LL);
  }
  if ( !v13 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236Du);
    return v6;
  }
  Realizer = CBrush::GetRealizer(a2, a3, &v16);
  v6 = Realizer;
  if ( Realizer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Realizer, 0x236Fu);
    return v6;
  }
  v4 = v16;
LABEL_8:
  *a4 = v4;
  return v6;
}
