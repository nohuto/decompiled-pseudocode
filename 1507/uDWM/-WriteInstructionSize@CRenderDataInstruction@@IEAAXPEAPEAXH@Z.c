/*
 * XREFs of ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x180035174
 * Callers:
 *     ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180035200 (-WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180035370 (-WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180035490 (-WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180037460 (-WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180039C20 (-WriteInstruction@CRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18006D530 (-WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800351F0 (-GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CRenderDataInstruction::WriteInstructionSize(CRenderDataInstruction *this, void **a2, int a3)
{
  __int64 (__fastcall *v4)(CDrawVisualTreeInstruction *__hidden, int *); // rdi
  _DWORD *v5; // rcx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  if ( !a3 )
  {
    v4 = *(__int64 (__fastcall **)(CDrawVisualTreeInstruction *__hidden, int *))(*(_QWORD *)this + 8LL);
    if ( v4 == CDrawVisualTreeInstruction::GetInstructionSize )
      CDrawVisualTreeInstruction::GetInstructionSize(this, &v6);
    else
      v4(this, &v6);
    a3 = v6;
  }
  v5 = *a2;
  *v5 = a3 + 4;
  *a2 = v5 + 1;
}
