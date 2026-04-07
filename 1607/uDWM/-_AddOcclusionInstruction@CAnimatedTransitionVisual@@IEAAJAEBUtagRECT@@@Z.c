/*
 * XREFs of ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180013C28
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180013CAC (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008C428 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800204C4 (-AddInstruction@CVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x180037B54 (-Create@CDrawOcclusionRectangleInstruction@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x180041A60 (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_AddOcclusionInstruction(
        CAnimatedTransitionVisual *this,
        const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v4; // rcx
  CVisual *v5; // rcx
  CBaseObject *v6; // rdi
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x595u);
    if ( v6 )
      CBaseObject::Release(v6);
  }
  return v2;
}
