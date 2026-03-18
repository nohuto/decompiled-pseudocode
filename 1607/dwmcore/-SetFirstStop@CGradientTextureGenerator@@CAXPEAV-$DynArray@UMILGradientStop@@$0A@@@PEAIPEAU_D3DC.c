/*
 * XREFs of ?SetFirstStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@PEAIPEAU_D3DCOLORVALUE@@@Z @ 0x18019A940
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x18019A408 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x18019A54C (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 *     ?IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z @ 0x18019A5CC (-IsPositionLessThan@CGradientTextureGenerator@@CAHMM@Z.c)
 *     ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z @ 0x18019A604 (-IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::SetFirstStop(float **a1, _DWORD *a2)
{
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  _OWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  _OWORD *v8; // r11
  __int64 v9; // r8
  float *v10; // rcx
  __int64 v11; // rcx
  float v12; // xmm0_4
  __int128 v13; // xmm0
  __int64 v14; // r8
  float *v15; // rax
  float v16; // xmm1_4
  __int128 v17; // xmm0
  int v18; // r8d
  _OWORD *v19; // r11
  __int64 v20; // rdx
  int v21; // eax
  __int128 v22; // xmm0
  struct _D3DCOLORVALUE v23; // [rsp+30h] [rbp-18h] BYREF

  if ( !CGradientTextureGenerator::IsPositionLessThanOrEqual(**a1, 0.0) )
  {
    *(_DWORD *)(v4 + 24) = v7 + 1;
    if ( (_DWORD)v7 )
    {
      v20 = v6 + 20 * v7;
      do
      {
        LODWORD(v7) = v7 - 1;
        v21 = *(_DWORD *)(v6 + 20LL * (unsigned int)v7 + 16);
        *(_OWORD *)v20 = *(_OWORD *)(v6 + 20LL * (unsigned int)v7);
        *(_DWORD *)(v20 + 16) = v21;
        v20 -= 20LL;
      }
      while ( (_DWORD)v7 );
    }
    v22 = *(_OWORD *)(v6 + 4);
    *a2 = 1;
    *v5 = v22;
    goto LABEL_19;
  }
  v9 = 0LL;
  if ( (_DWORD)v7 )
  {
    v10 = (float *)v6;
    do
    {
      if ( !CGradientTextureGenerator::IsPositionLessThan(*v10, 0.0) )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 = (float *)(v11 + 20);
    }
    while ( (unsigned int)v9 < (unsigned int)v7 );
  }
  if ( (_DWORD)v9 == (_DWORD)v7 )
  {
    *(_DWORD *)v6 = 0;
    *v3 = v7;
    *(_OWORD *)(v6 + 4) = *(_OWORD *)(v6 + 20LL * (unsigned int)(v7 - 1) + 4);
    *v8 = *(_OWORD *)(v6 + 20LL * (unsigned int)(v7 - 1) + 4);
    return;
  }
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v6 + 20 * v9) - 0.0)) & _xmm);
  if ( v12 > 0.0000011920929 )
  {
    CGradientTextureGenerator::InterpolateColors(
      (const struct _D3DCOLORVALUE *)(v6 + 4 * (5LL * (unsigned int)(v9 - 1) + 1)),
      (const struct _D3DCOLORVALUE *)(v6 + 4 * (5 * v9 + 1)),
      0.0,
      *(float *)(v6 + 20 * v9) - *(float *)(v6 + 20LL * (unsigned int)(v9 - 1)),
      *(float *)(v6 + 20LL * (unsigned int)(v9 - 1)),
      &v23);
    v17 = *(__int128 *)&v23.r;
    *a2 = v18;
    *(_OWORD *)(v6 + 4) = v17;
    *v19 = v17;
LABEL_19:
    *(_DWORD *)v6 = 0;
    return;
  }
  v13 = *(_OWORD *)(v6 + 20 * v9 + 4);
  v14 = (unsigned int)(v9 + 1);
  *v8 = v13;
  if ( (unsigned int)v14 < (unsigned int)v7 )
  {
    v15 = (float *)(v6 + 20 * v14);
    do
    {
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v15 - 0.0)) & _xmm);
      if ( v16 > 0.0000011920929 )
        break;
      LODWORD(v14) = v14 + 1;
      v15 += 5;
    }
    while ( (unsigned int)v14 < (unsigned int)v7 );
  }
  *(_DWORD *)v6 = 0;
  *a2 = v14;
  *(_OWORD *)(v6 + 4) = *(_OWORD *)(v6 + 20LL * (unsigned int)(v14 - 1) + 4);
}
