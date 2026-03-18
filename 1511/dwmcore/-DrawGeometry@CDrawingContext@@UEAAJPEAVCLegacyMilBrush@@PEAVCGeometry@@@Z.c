/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180042F10
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18009ECF0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x180064A74 (-GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_qq @ 0x180100238 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(
        CDrawingContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int64 v6; // rcx
  int GeometryCurrentValue; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  struct CShape *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v6, &EVTDESC_ETWGUID_DRAWEVENT_Start, 3LL, *(unsigned int *)(v6 + 5784));
  GeometryCurrentValue = GetGeometryCurrentValue(0LL, a3, &v12);
  v8 = GeometryCurrentValue;
  if ( GeometryCurrentValue < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GeometryCurrentValue, 0x4A5u);
  }
  else if ( v12 )
  {
    v9 = CDrawingContext::DrawShape(this, v12, a2);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4ADu);
  }
  if ( v8 == -2003304438 )
    v8 = 0;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v10, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 3LL, *((unsigned int *)this + 1446));
  return v8;
}
