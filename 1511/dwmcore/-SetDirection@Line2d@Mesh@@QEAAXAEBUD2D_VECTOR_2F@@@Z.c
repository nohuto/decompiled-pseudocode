/*
 * XREFs of ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800ADE8C
 * Callers:
 *     ?ComputeNormalizedLine@MeshGraph@Mesh@@SA?AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z @ 0x180018568 (-ComputeNormalizedLine@MeshGraph@Mesh@@SA-AVLine2d@2@AEBUD2D_VECTOR_2F@@0@Z.c)
 *     ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x18001EF94 (-BuildGrid@Mesh@@AEAAJHHH@Z.c)
 * Callees:
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 */

void __fastcall Mesh::Line2d::SetDirection(Mesh::Line2d *this, const struct D2D_VECTOR_2F *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( IsCloseRealZero(a2->x, 0.0000011920929) )
  {
    *(_QWORD *)(v3 + 16) = 1LL;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 1065353216;
  }
  else if ( IsCloseRealZero(*(float *)(v2 + 4), 0.0000011920929) )
  {
    *(_DWORD *)(v5 + 16) = v6;
    *(_DWORD *)(v5 + 20) = 1;
    *(_QWORD *)(v5 + 8) = 1065353216LL;
  }
  else
  {
    *(_QWORD *)(v5 + 16) = v6;
    *(_QWORD *)(v5 + 8) = *v4;
  }
}
