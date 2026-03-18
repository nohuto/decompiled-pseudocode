/*
 * XREFs of ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18005D660
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180037CC0 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B12FC (-CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CLegacyMilBrush::GetRealizer(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CLegacyMilBrushRealizer **a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int ResourceRealizer; // eax

  v3 = 0;
  v4 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5)
    || (ResourceRealizer = CLegacyMilBrushRealizer::CreateResourceRealizer(
                             this,
                             (struct CLegacyMilBrushRealizer **)this + 5),
        v3 = ResourceRealizer,
        ResourceRealizer >= 0) )
  {
    *a3 = (struct CLegacyMilBrushRealizer *)*v4;
    (**(void (__fastcall ***)(_QWORD, const struct LegacyMilBrushContext *))*v4)(*v4, a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceRealizer, 0x34u);
  }
  return v3;
}
