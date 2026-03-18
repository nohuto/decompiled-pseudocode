/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x18006B6F0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004DC00 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(
        CDrawingContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  unsigned int v6; // ebx
  int ShapeDataNoRef; // eax
  int v8; // eax
  struct CShape *v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 3LL, *((unsigned int *)this + 1620));
  if ( a3 )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a3, 0LL, &v10);
    v6 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x4A9u);
    }
    else if ( v10 )
    {
      v8 = CDrawingContext::DrawShape(this, v10, a2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4B2u);
    }
    if ( v6 == -2003304438 )
      v6 = 0;
  }
  if ( !*((_BYTE *)this + 3048) && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 3LL, *((unsigned int *)this + 1620));
  return v6;
}
