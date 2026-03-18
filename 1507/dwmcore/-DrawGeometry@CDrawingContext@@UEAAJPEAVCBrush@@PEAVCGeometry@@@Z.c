/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x18002DB20
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18001779C (-GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(CDrawingContext *this, struct CBrush *a2, struct CGeometry *a3)
{
  __int64 v6; // rcx
  int GeometryCurrentValue; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct CShape *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v6, &EVTDESC_ETWGUID_DRAWEVENT_Start, 3LL, *(unsigned int *)(v6 + 5752));
  GeometryCurrentValue = GetGeometryCurrentValue(0LL, a3, &v12);
  v8 = GeometryCurrentValue;
  if ( GeometryCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCurrentValue, 0x49Eu);
  }
  else if ( v12 )
  {
    v9 = CDrawingContext::DrawShape(this, v12, a2);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4A6u);
  }
  if ( v8 == -2003304438 )
    v8 = 0;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 3LL, *((unsigned int *)this + 1438));
  return v8;
}
