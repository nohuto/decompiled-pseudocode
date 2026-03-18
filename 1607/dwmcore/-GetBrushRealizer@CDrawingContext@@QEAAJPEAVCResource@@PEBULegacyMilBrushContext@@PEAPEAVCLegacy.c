/*
 * XREFs of ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180064DB4
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18006B420 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18002EE90 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180031AA0 (-IsOfType@CSolidColorLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180032A20 (-IsOfType@CImageLegacyMilBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetBrushRealizer(
        CDrawingContext *this,
        struct CResource *a2,
        const struct LegacyMilBrushContext *a3,
        struct CLegacyMilBrushRealizer **a4)
{
  struct CLegacyMilBrushRealizer *v4; // rbx
  unsigned int v8; // esi
  __int64 (__fastcall *v9)(struct CResource *, __int64); // rax
  char v10; // al
  int Realizer; // eax
  struct CLegacyMilBrushRealizer *v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v8 = 0;
  v13 = 0LL;
  if ( *((_BYTE *)this + 3048) || *((_DWORD *)this + 1621) )
  {
    if ( !a2 )
      goto LABEL_9;
LABEL_18:
    v4 = (struct CLegacyMilBrushRealizer *)*((_QWORD *)this + 382);
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *))v4)(v4);
    goto LABEL_9;
  }
  if ( !a2 )
    goto LABEL_18;
  v9 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v9 == (char *)CSolidColorLegacyMilBrush::IsOfType )
  {
    v10 = CSolidColorLegacyMilBrush::IsOfType((__int64)a2, 71);
  }
  else if ( (char *)v9 == (char *)CImageLegacyMilBrush::IsOfType )
  {
    v10 = CImageLegacyMilBrush::IsOfType((__int64)a2, 71);
  }
  else
  {
    v10 = v9(a2, 71LL);
  }
  if ( !v10 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2341u);
    return v8;
  }
  Realizer = CLegacyMilBrush::GetRealizer(a2, a3, &v13);
  v8 = Realizer;
  if ( Realizer < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Realizer, 0x2343u);
    return v8;
  }
  v4 = v13;
LABEL_9:
  *a4 = v4;
  return v8;
}
