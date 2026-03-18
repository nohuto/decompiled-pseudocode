/*
 * XREFs of ?GetPrimitiveBlend@CDrawingContext@@EEBAXPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180123F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetPrimitiveBlend(CDrawingContext *this, enum D2D1_PRIMITIVE_BLEND *a2)
{
  int v2; // r9d
  enum D2D1_PRIMITIVE_BLEND v3; // r8d
  int v4; // r9d

  v2 = *((_DWORD *)this + 88);
  v3 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      if ( v4 == 3 )
        v3 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v3 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  *a2 = v3;
}
