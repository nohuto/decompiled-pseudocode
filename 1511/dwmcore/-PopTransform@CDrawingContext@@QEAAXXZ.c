/*
 * XREFs of ?PopTransform@CDrawingContext@@QEAAXXZ @ 0x1800F3264
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000E870 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopTransform(CDrawingContext *this)
{
  CDrawingContext::PopTransformInternal(this, 1);
}
