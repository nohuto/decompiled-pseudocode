/*
 * XREFs of ?SetMiddleStops@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAI1@Z @ 0x180167D94
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180167554 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     ?IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z @ 0x180167718 (-IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::SetMiddleStops(__int64 *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r10
  unsigned int v6; // ebx
  float v7; // xmm4_4
  __int64 v8; // rcx
  unsigned int v9; // r11d
  __int64 v10; // xmm5_8
  float v11; // xmm3_4
  float v12; // xmm2_4
  __int64 i; // r9
  __int64 v14; // rcx
  __int64 v15; // xmm5_8
  float v16; // xmm2_4
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx

  v4 = *a2;
  v5 = *a1;
  v6 = *a3;
  if ( *a2 < *((_DWORD *)a1 + 6) )
  {
    v7 = FLOAT_1_0;
    do
    {
      if ( !CGradientTextureGenerator::IsPositionLessThan(*(float *)(v5 + 20LL * v4), v7) )
        break;
      v11 = *(float *)(v5 + 20LL * (v4 - 1));
      v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - *(float *)(v5 + 4 * v8))) & v10);
      if ( v12 <= 0.0000011920929 )
      {
        for ( i = v4 + 1; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
        {
          if ( !CGradientTextureGenerator::IsPositionLessThan(*(float *)(v5 + 20 * i), v7) )
            break;
          v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - *(float *)(v5 + 4 * v14))) & v15);
          if ( v16 > 0.0000011920929 )
            break;
        }
        v4 = i - 1;
        *(float *)(v5 + 20LL * v4) = v11;
      }
      v17 = v4++;
      v18 = 5 * v17;
      v19 = v6++;
      v20 = 5 * v19;
      *(_OWORD *)(v5 + 4 * v20) = *(_OWORD *)(v5 + 4 * v18);
      *(_DWORD *)(v5 + 4 * v20 + 16) = *(_DWORD *)(v5 + 4 * v18 + 16);
    }
    while ( v4 < v9 );
  }
  *a3 = v6;
  *a2 = v4;
}
