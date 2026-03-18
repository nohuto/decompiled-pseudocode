/*
 * XREFs of ?GetGeometryBounds@CAtlasedRectsMesh@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18009CCA0
 * Callers:
 *     ?GetGeometryBounds@CAtlasedRectsGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18009D3A0 (-GetGeometryBounds@CAtlasedRectsGroup@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasedRectsMesh::GetGeometryBounds(__int64 a1, _OWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float *v9; // rdx
  __int64 v10; // r8

  if ( (*(_BYTE *)(a1 + 192) & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 216);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 240);
      LODWORD(v5) = HIDWORD(*(_OWORD *)v4);
      LODWORD(v6) = *(_QWORD *)(v4 + 8);
      LODWORD(v7) = HIDWORD(*(_QWORD *)v4);
      LODWORD(v8) = *(_OWORD *)v4;
      if ( v3 > 1 )
      {
        v9 = (float *)(v4 + 24);
        v10 = v3 - 1;
        do
        {
          if ( *(v9 - 2) <= v8 )
            v8 = *(v9 - 2);
          if ( *(v9 - 1) <= v7 )
            v7 = *(v9 - 1);
          if ( v6 <= *v9 )
            v6 = *v9;
          if ( v5 <= v9[1] )
            v5 = v9[1];
          v9 += 4;
          --v10;
        }
        while ( v10 );
      }
      *(float *)(a1 + 196) = v8;
      *(float *)(a1 + 200) = v7;
      *(float *)(a1 + 204) = v6;
      *(float *)(a1 + 208) = v5;
    }
    else
    {
      *(_QWORD *)(a1 + 204) = 0LL;
      *(_QWORD *)(a1 + 196) = 0LL;
    }
    *(_DWORD *)(a1 + 192) &= ~1u;
  }
  *a2 = *(_OWORD *)(a1 + 196);
}
