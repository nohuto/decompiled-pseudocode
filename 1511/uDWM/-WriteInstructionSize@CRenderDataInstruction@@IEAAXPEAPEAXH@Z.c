/*
 * XREFs of ?WriteInstructionSize@CRenderDataInstruction@@IEAAXPEAPEAXH@Z @ 0x18001873C
 * Callers:
 *     ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18000E500 (-WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016270 (-WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x180016420 (-WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x1800181B0 (-WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x18003C410 (-WriteInstruction@CRectangleInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 *     ?WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAXPEBVCVisual@@@Z @ 0x1800755E0 (-WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAXPEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z @ 0x1800181A0 (-GetInstructionSize@CDrawVisualTreeInstruction@@UEAAJPEAH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CRenderDataInstruction::WriteInstructionSize(CRenderDataInstruction *this, void **a2, int a3)
{
  __int64 (__fastcall *v4)(CDrawVisualTreeInstruction *, int *); // rdi
  _DWORD *v5; // rcx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  if ( !a3 )
  {
    v4 = *(__int64 (__fastcall **)(CDrawVisualTreeInstruction *, int *))(*(_QWORD *)this + 8LL);
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
