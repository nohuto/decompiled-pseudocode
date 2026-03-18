/*
 * XREFs of ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x18005CA8C
 * Callers:
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180009FF4 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x180074ED8 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Line2d::SetDirection(Mesh::Line2d *this, const struct D2D_VECTOR_2F *a2)
{
  float v2; // xmm1_4
  float y; // xmm0_4
  float v4; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a2->x) & _xmm);
  if ( v2 < 0.0000011920929 )
  {
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 4) = 1;
    *((_DWORD *)this + 3) = 1065353216;
  }
  else
  {
    y = a2->y;
    *((_DWORD *)this + 4) = 0;
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(y) & _xmm);
    if ( v4 < 0.0000011920929 )
    {
      *((_DWORD *)this + 3) = 0;
      *((_DWORD *)this + 5) = 1;
      *((_DWORD *)this + 2) = 1065353216;
    }
    else
    {
      *((_DWORD *)this + 5) = 0;
      *((struct D2D_VECTOR_2F *)this + 1) = *a2;
    }
  }
}
