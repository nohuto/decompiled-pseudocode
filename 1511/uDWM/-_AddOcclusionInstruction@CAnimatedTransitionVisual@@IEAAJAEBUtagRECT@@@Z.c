/*
 * XREFs of ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18000C880
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D3B8 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x18000E734 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x18000E754 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180023540 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_AddOcclusionInstruction(
        CAnimatedTransitionVisual *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v5; // rcx
  CVisual *v6; // rcx
  struct CDrawOcclusionRectangleInstruction *v7; // rdi
  int v8; // eax
  struct CDrawOcclusionRectangleInstruction *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 1021) && *((float *)this + 182) == 1.0 && !IsRectEmpty(a2) )
  {
    CDrawOcclusionRectangleInstruction::Create(v5, &v9);
    v6 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v7 = v9;
    v8 = CVisual::AddInstruction(v6, v9);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x58Fu);
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return v2;
}
