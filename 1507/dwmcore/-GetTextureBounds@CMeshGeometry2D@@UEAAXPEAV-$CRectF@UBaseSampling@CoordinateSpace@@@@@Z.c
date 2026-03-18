/*
 * XREFs of ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x18010B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVertexCount@CMeshGeometry2D@@UEAAIXZ @ 0x18010B790 (-GetVertexCount@CMeshGeometry2D@@UEAAIXZ.c)
 */

void __fastcall CMeshGeometry2D::GetTextureBounds(__int64 a1, _OWORD *a2)
{
  unsigned int VertexCount; // eax
  double *v5; // rcx
  double v6; // xmm2_8
  double v7; // xmm3_8
  double v8; // xmm1_8
  double v9; // xmm4_8
  double *v10; // rcx
  __int64 v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm0_4

  if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
  {
    VertexCount = CMeshGeometry2D::GetVertexCount((CMeshGeometry2D *)a1);
    if ( VertexCount )
    {
      v5 = *(double **)(a1 + 120);
      v6 = *v5;
      v7 = v5[1];
      v8 = *v5;
      v9 = v7;
      if ( VertexCount > 1 )
      {
        v10 = v5 + 3;
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
          v10 += 2;
          --v11;
        }
        while ( v11 );
      }
      v13 = v8;
      v14 = v9;
      *(float *)(a1 + 80) = v13;
      *(float *)(a1 + 84) = v14;
      v15 = v7;
      v16 = v6;
      *(float *)(a1 + 92) = v15;
      *(float *)(a1 + 88) = v16;
    }
    else
    {
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_DWORD *)(a1 + 56) &= ~2u;
  }
  *a2 = *(_OWORD *)(a1 + 80);
}
