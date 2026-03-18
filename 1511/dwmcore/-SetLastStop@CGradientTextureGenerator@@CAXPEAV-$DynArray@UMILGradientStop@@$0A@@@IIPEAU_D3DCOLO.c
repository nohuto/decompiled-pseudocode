/*
 * XREFs of ?SetLastStop@CGradientTextureGenerator@@CAXPEAV?$DynArray@UMILGradientStop@@$0A@@@IIPEAU_D3DCOLORVALUE@@@Z @ 0x180167C50
 * Callers:
 *     ?CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@_NPEAU_D3DCOLORVALUE@@4@Z @ 0x180167554 (-CreateWellFormedGradientArray@CGradientTextureGenerator@@CAXPEBVCGradientSpanInfo@@PEAV-$DynArr.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x180167698 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::SetLastStop(__int64 *a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx
  float v9; // xmm0_4
  __int64 v10; // rdx
  __int64 v11; // rcx
  float *v12; // rax
  float v13; // xmm2_4
  __int128 v14; // xmm0
  float v15; // xmm0_4
  unsigned int v16; // r8d
  __int64 v17; // r10
  struct _D3DCOLORVALUE v18; // [rsp+30h] [rbp-18h] BYREF

  v4 = *((_DWORD *)a1 + 6);
  v5 = *a1;
  if ( a2 == v4 )
  {
    v6 = 5LL * a3;
    *(_DWORD *)(v5 + 4 * v6) = 1065353216;
    result = 5LL * (v4 - 1);
    *(_OWORD *)(v5 + 4 * v6 + 4) = *(_OWORD *)(v5 + 20LL * (v4 - 1) + 4);
    *a4 = *(_OWORD *)(v5 + 20LL * (v4 - 1) + 4);
  }
  else
  {
    v8 = 5LL * a2;
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v5 + 20LL * a2) - 1.0)) & _xmm);
    if ( v9 > 0.0000011920929 )
    {
      v15 = *(float *)(v5 + 20LL * (a2 - 1));
      CGradientTextureGenerator::InterpolateColors(
        (const struct _D3DCOLORVALUE *)(v5 + 4 * (5LL * (a2 - 1) + 1)),
        (const struct _D3DCOLORVALUE *)(v5 + 4 + 20LL * a2),
        1.0,
        *(float *)(v5 + 20LL * a2) - v15,
        v15,
        &v18);
      v14 = *(__int128 *)&v18.r;
      result = 5LL * v16;
      *(_DWORD *)(v17 + 4 * result) = 1065353216;
      *(_OWORD *)(v17 + 4 * result + 4) = v14;
    }
    else
    {
      v10 = a2 + 1;
      v11 = 5LL * a3;
      *(_DWORD *)(v5 + 4 * v11) = 1065353216;
      *(_OWORD *)(v5 + 4 * v11 + 4) = *(_OWORD *)(v5 + 4 * v8 + 4);
      if ( (unsigned int)v10 < v4 )
      {
        v12 = (float *)(v5 + 20 * v10);
        do
        {
          v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*v12 - 1.0)) & _xmm);
          if ( v13 > 0.0000011920929 )
            break;
          LODWORD(v10) = v10 + 1;
          v12 += 5;
        }
        while ( (unsigned int)v10 < v4 );
      }
      result = 5LL * (unsigned int)(v10 - 1);
      v14 = *(_OWORD *)(v5 + 20LL * (unsigned int)(v10 - 1) + 4);
    }
    *a4 = v14;
  }
  return result;
}
