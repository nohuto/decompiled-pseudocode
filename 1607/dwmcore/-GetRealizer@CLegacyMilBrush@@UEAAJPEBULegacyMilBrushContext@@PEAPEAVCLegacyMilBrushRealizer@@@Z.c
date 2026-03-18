/*
 * XREFs of ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18002EE90
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x180064DB4 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBULegacyMilBrushContext@@PEAPEAVCLegacy.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z @ 0x1800B4068 (-CreateResourceRealizer@CLegacyMilBrushRealizer@@SAJPEAVCLegacyMilBrush@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetRealizer(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CLegacyMilBrushRealizer **a3)
{
  unsigned int v3; // ebx
  struct CLegacyMilBrushRealizer **v4; // rdi
  int ResourceRealizer; // eax

  v3 = 0;
  v4 = (struct CLegacyMilBrushRealizer **)((char *)this + 112);
  if ( *((_QWORD *)this + 14)
    || (ResourceRealizer = CLegacyMilBrushRealizer::CreateResourceRealizer(this, v4),
        v3 = ResourceRealizer,
        ResourceRealizer >= 0) )
  {
    *a3 = *v4;
    (**(void (__fastcall ***)(struct CLegacyMilBrushRealizer *, const struct LegacyMilBrushContext *))*v4)(*v4, a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceRealizer, 0x34u);
  }
  return v3;
}
