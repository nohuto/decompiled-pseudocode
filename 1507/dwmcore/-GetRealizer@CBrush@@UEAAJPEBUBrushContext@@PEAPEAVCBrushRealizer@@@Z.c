/*
 * XREFs of ?GetRealizer@CBrush@@UEAAJPEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180083700
 * Callers:
 *     ?GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@@Z @ 0x180023BE8 (-GetBrushRealizer@CDrawingContext@@QEAAJPEAVCResource@@PEBUBrushContext@@PEAPEAVCBrushRealizer@@.c)
 * Callees:
 *     ?CreateResourceRealizer@CBrushRealizer@@SAJPEAVCBrush@@PEAPEAV1@@Z @ 0x18005F9A0 (-CreateResourceRealizer@CBrushRealizer@@SAJPEAVCBrush@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBrush::GetRealizer(CBrush *this, const struct BrushContext *a2, struct CBrushRealizer **a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int ResourceRealizer; // eax

  v3 = 0;
  v4 = (_QWORD *)((char *)this + 40);
  if ( *((_QWORD *)this + 5)
    || (ResourceRealizer = CBrushRealizer::CreateResourceRealizer(this, (struct CBrushRealizer **)this + 5),
        v3 = ResourceRealizer,
        ResourceRealizer >= 0) )
  {
    *a3 = (struct CBrushRealizer *)*v4;
    (**(void (__fastcall ***)(_QWORD, const struct BrushContext *))*v4)(*v4, a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceRealizer, 0x34u);
  }
  return v3;
}
