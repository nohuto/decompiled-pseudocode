/*
 * XREFs of ?AddRef@CRectangleGeometry@@UEAAKXZ @ 0x180017690
 * Callers:
 *     ?AddRef@CConnection@@W7EAAKXZ @ 0x18009A440 (-AddRef@CConnection@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRectangleGeometry::AddRef(CRectangleGeometry *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CRectangleGeometry *)((char *)this + 8));
}
