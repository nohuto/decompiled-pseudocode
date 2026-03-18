/*
 * XREFs of ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18010B550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x18010B790 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

void __fastcall CMeshGeometry2D::GetGeometryBounds(__int64 a1, _OWORD *a2)
{
  unsigned int VertexCount; // eax
  float *v5; // rcx
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  float *v10; // rcx
  __int64 v11; // rdx
  float v12; // xmm0_4

  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    VertexCount = CMeshGeometry2D::GetVertexCount((CMeshGeometry2D *)a1);
    if ( VertexCount )
    {
      v5 = *(float **)(a1 + 104);
      v6 = *v5;
      v7 = v5[1];
      v8 = *v5;
      v9 = v7;
      if ( VertexCount > 1 )
      {
        v10 = v5 + 4;
        v11 = VertexCount - 1;
        do
        {
          v12 = *(v10 - 1);
          if ( v12 <= v8 )
            v8 = *(v10 - 1);
          if ( v6 <= v12 )
            v6 = *(v10 - 1);
          if ( *v10 <= v9 )
            v9 = *v10;
          if ( v7 <= *v10 )
            v7 = *v10;
          v10 += 3;
          --v11;
        }
        while ( v11 );
      }
      *(float *)(a1 + 64) = v8;
      *(float *)(a1 + 72) = v6;
      *(float *)(a1 + 68) = v9;
      *(float *)(a1 + 76) = v7;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    *(_DWORD *)(a1 + 56) &= ~1u;
  }
  *a2 = *(_OWORD *)(a1 + 64);
}
