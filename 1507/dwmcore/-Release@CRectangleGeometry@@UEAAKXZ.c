/*
 * XREFs of ?Release@CRectangleGeometry@@UEAAKXZ @ 0x180017420
 * Callers:
 *     ?Release@CRectangleGeometry@@W7EAAKXZ @ 0x18009A040 (-Release@CRectangleGeometry@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRectangleGeometry::Release(CRectangleGeometry *this)
{
  return CMILCOMBase::InternalRelease((CRectangleGeometry *)((char *)this + 8));
}
