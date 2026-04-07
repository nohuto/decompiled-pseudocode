/*
 * XREFs of ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180037DB0
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037E34 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800898E8 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001E130 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x18003931C (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x1800393C4 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_AddOcclusionInstruction(
        CAnimatedTransitionVisual *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v4; // rcx
  CVisual *v5; // rcx
  struct CDrawOcclusionRectangleInstruction *v6; // rdi
  int v7; // eax
  struct CDrawOcclusionRectangleInstruction *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 1021) && *((float *)this + 182) == 1.0 && !IsRectEmpty(a2) )
  {
    CDrawOcclusionRectangleInstruction::Create(v4, &v9);
    v5 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v6 = v9;
    v7 = CVisual::AddInstruction(v5, v9);
    v2 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x591u);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return v2;
}
