/*
 * XREFs of ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18014EADC
 * Callers:
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NXZ @ 0x18013FC40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NXZ.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

bool __fastcall CComponentTransform2D::IsIdentity(CComponentTransform2D *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((float *)this + 34) == 0.0
    && *((float *)this + 35) == 0.0
    && *((float *)this + 40) == 1.0
    && *((float *)this + 41) == 1.0
    && *((float *)this + 42) == 0.0
    && *((float *)this + 38) == 0.0
    && *((float *)this + 39) == 0.0 )
  {
    return D2D1::Matrix3x2F::IsIdentity((CComponentTransform2D *)((char *)this + 172));
  }
  return v1;
}
